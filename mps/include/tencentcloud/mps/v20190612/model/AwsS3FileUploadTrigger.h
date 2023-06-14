/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AwsSQS.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AWS S3 文件是上传触发器。
                */
                class AwsS3FileUploadTrigger : public AbstractModel
                {
                public:
                    AwsS3FileUploadTrigger();
                    ~AwsS3FileUploadTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定的 AWS S3 存储桶。
                     * @return S3Bucket 绑定的 AWS S3 存储桶。
                     * 
                     */
                    std::string GetS3Bucket() const;

                    /**
                     * 设置绑定的 AWS S3 存储桶。
                     * @param _s3Bucket 绑定的 AWS S3 存储桶。
                     * 
                     */
                    void SetS3Bucket(const std::string& _s3Bucket);

                    /**
                     * 判断参数 S3Bucket 是否已赋值
                     * @return S3Bucket 是否已赋值
                     * 
                     */
                    bool S3BucketHasBeenSet() const;

                    /**
                     * 获取绑定的桶所在 AWS 区域，目前支持：  
us-east-1  
eu-west-3
                     * @return S3Region 绑定的桶所在 AWS 区域，目前支持：  
us-east-1  
eu-west-3
                     * 
                     */
                    std::string GetS3Region() const;

                    /**
                     * 设置绑定的桶所在 AWS 区域，目前支持：  
us-east-1  
eu-west-3
                     * @param _s3Region 绑定的桶所在 AWS 区域，目前支持：  
us-east-1  
eu-west-3
                     * 
                     */
                    void SetS3Region(const std::string& _s3Region);

                    /**
                     * 判断参数 S3Region 是否已赋值
                     * @return S3Region 是否已赋值
                     * 
                     */
                    bool S3RegionHasBeenSet() const;

                    /**
                     * 获取绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。	
                     * @return Dir 绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。	
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。	
                     * @param _dir 绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。	
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。	
                     * @return Formats 允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。	
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。	
                     * @param _formats 允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。	
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                    /**
                     * 获取绑定的 AWS S3 存储桶的秘钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretId 绑定的 AWS S3 存储桶的秘钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置绑定的 AWS S3 存储桶的秘钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretId 绑定的 AWS S3 存储桶的秘钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretId(const std::string& _s3SecretId);

                    /**
                     * 判断参数 S3SecretId 是否已赋值
                     * @return S3SecretId 是否已赋值
                     * 
                     */
                    bool S3SecretIdHasBeenSet() const;

                    /**
                     * 获取绑定的 AWS S3 存储桶的秘钥Key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretKey 绑定的 AWS S3 存储桶的秘钥Key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置绑定的 AWS S3 存储桶的秘钥Key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretKey 绑定的 AWS S3 存储桶的秘钥Key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                    /**
                     * 获取绑定的 AWS S3 存储桶对应的 SQS事件队列。
注意：队列和桶需要在同一区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsSQS 绑定的 AWS S3 存储桶对应的 SQS事件队列。
注意：队列和桶需要在同一区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置绑定的 AWS S3 存储桶对应的 SQS事件队列。
注意：队列和桶需要在同一区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _awsSQS 绑定的 AWS S3 存储桶对应的 SQS事件队列。
注意：队列和桶需要在同一区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAwsSQS(const AwsSQS& _awsSQS);

                    /**
                     * 判断参数 AwsSQS 是否已赋值
                     * @return AwsSQS 是否已赋值
                     * 
                     */
                    bool AwsSQSHasBeenSet() const;

                private:

                    /**
                     * 绑定的 AWS S3 存储桶。
                     */
                    std::string m_s3Bucket;
                    bool m_s3BucketHasBeenSet;

                    /**
                     * 绑定的桶所在 AWS 区域，目前支持：  
us-east-1  
eu-west-3
                     */
                    std::string m_s3Region;
                    bool m_s3RegionHasBeenSet;

                    /**
                     * 绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。	
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * 允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。	
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                    /**
                     * 绑定的 AWS S3 存储桶的秘钥ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * 绑定的 AWS S3 存储桶的秘钥Key。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                    /**
                     * 绑定的 AWS S3 存储桶对应的 SQS事件队列。
注意：队列和桶需要在同一区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_
