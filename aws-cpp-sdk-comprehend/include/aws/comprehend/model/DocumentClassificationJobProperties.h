﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about a document classification job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassificationJobProperties">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DocumentClassificationJobProperties
  {
  public:
    DocumentClassificationJobProperties();
    DocumentClassificationJobProperties(Aws::Utils::Json::JsonView jsonValue);
    DocumentClassificationJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned to the document classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline DocumentClassificationJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the document classification job. If the status is
     * <code>FAILED</code>, the <code>Message</code> field shows the reason for the
     * failure.</p>
     */
    inline DocumentClassificationJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the job.</p>
     */
    inline DocumentClassificationJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the job.</p>
     */
    inline DocumentClassificationJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the job.</p>
     */
    inline DocumentClassificationJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline DocumentClassificationJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The time that the document classification job was submitted for
     * processing.</p>
     */
    inline DocumentClassificationJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline DocumentClassificationJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the document classification job completed.</p>
     */
    inline DocumentClassificationJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const{ return m_documentClassifierArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline bool DocumentClassifierArnHasBeenSet() const { return m_documentClassifierArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline void SetDocumentClassifierArn(const Aws::String& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline void SetDocumentClassifierArn(Aws::String&& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline void SetDocumentClassifierArn(const char* value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline DocumentClassificationJobProperties& WithDocumentClassifierArn(const Aws::String& value) { SetDocumentClassifierArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline DocumentClassificationJobProperties& WithDocumentClassifierArn(Aws::String&& value) { SetDocumentClassifierArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier. </p>
     */
    inline DocumentClassificationJobProperties& WithDocumentClassifierArn(const char* value) { SetDocumentClassifierArn(value); return *this;}


    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The output data configuration that you supplied when you created the document
     * classification job.</p>
     */
    inline DocumentClassificationJobProperties& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassificationJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassificationJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassificationJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline DocumentClassificationJobProperties& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline DocumentClassificationJobProperties& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline DocumentClassificationJobProperties& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_documentClassifierArn;
    bool m_documentClassifierArnHasBeenSet;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
