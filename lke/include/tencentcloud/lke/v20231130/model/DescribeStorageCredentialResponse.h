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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Credentials.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeStorageCredential返回参数结构体
                */
                class DescribeStorageCredentialResponse : public AbstractModel
                {
                public:
                    DescribeStorageCredentialResponse();
                    ~DescribeStorageCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥信息
                     * @return Credentials 密钥信息
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取失效时间
                     * @return ExpiredTime 失效时间
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取对象存储桶
                     * @return Bucket 对象存储桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取对象存储可用区
                     * @return Region 对象存储可用区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取文件存储目录
                     * @return FilePath 文件存储目录
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取存储类型
                     * @return Type 存储类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主号
                     * @return CorpUin 主号
                     * 
                     */
                    std::string GetCorpUin() const;

                    /**
                     * 判断参数 CorpUin 是否已赋值
                     * @return CorpUin 是否已赋值
                     * 
                     */
                    bool CorpUinHasBeenSet() const;

                    /**
                     * 获取图片存储目录
                     * @return ImagePath 图片存储目录
                     * 
                     */
                    std::string GetImagePath() const;

                    /**
                     * 判断参数 ImagePath 是否已赋值
                     * @return ImagePath 是否已赋值
                     * 
                     */
                    bool ImagePathHasBeenSet() const;

                    /**
                     * 获取上传存储路径，到具体文件
                     * @return UploadPath 上传存储路径，到具体文件
                     * 
                     */
                    std::string GetUploadPath() const;

                    /**
                     * 判断参数 UploadPath 是否已赋值
                     * @return UploadPath 是否已赋值
                     * 
                     */
                    bool UploadPathHasBeenSet() const;

                private:

                    /**
                     * 密钥信息
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * 失效时间
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 对象存储桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 对象存储可用区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 文件存储目录
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 存储类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主号
                     */
                    std::string m_corpUin;
                    bool m_corpUinHasBeenSet;

                    /**
                     * 图片存储目录
                     */
                    std::string m_imagePath;
                    bool m_imagePathHasBeenSet;

                    /**
                     * 上传存储路径，到具体文件
                     */
                    std::string m_uploadPath;
                    bool m_uploadPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
