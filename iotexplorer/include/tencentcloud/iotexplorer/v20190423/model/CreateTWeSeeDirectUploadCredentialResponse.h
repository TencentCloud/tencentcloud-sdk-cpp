/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTWeSeeDirectUploadCredential返回参数结构体
                */
                class CreateTWeSeeDirectUploadCredentialResponse : public AbstractModel
                {
                public:
                    CreateTWeSeeDirectUploadCredentialResponse();
                    ~CreateTWeSeeDirectUploadCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>访问 COS 的临时密钥过期时间（秒级 UNIX 时间戳）</p>
                     * @return ExpiredTime <p>访问 COS 的临时密钥过期时间（秒级 UNIX 时间戳）</p>
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
                     * 获取<p>访问 COS 的临时密钥 SecretId</p>
                     * @return SecretId <p>访问 COS 的临时密钥 SecretId</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>访问 COS 的临时密钥 SecretKey</p>
                     * @return SecretKey <p>访问 COS 的临时密钥 SecretKey</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>COS 存储桶名称</p>
                     * @return StorageBucket <p>COS 存储桶名称</p>
                     * 
                     */
                    std::string GetStorageBucket() const;

                    /**
                     * 判断参数 StorageBucket 是否已赋值
                     * @return StorageBucket 是否已赋值
                     * 
                     */
                    bool StorageBucketHasBeenSet() const;

                    /**
                     * 获取<p>COS 对象 Key 前缀。返回的临时凭据仅允许上传到此前缀下，格式为 Direct/{Uin}/{SessionId}/。</p>
                     * @return StoragePath <p>COS 对象 Key 前缀。返回的临时凭据仅允许上传到此前缀下，格式为 Direct/{Uin}/{SessionId}/。</p>
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取<p>COS 存储桶所在地域</p>
                     * @return StorageRegion <p>COS 存储桶所在地域</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>访问 COS 的临时密钥 Token</p>
                     * @return Token <p>访问 COS 的临时密钥 Token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * <p>访问 COS 的临时密钥过期时间（秒级 UNIX 时间戳）</p>
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>访问 COS 的临时密钥 SecretId</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>访问 COS 的临时密钥 SecretKey</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>COS 存储桶名称</p>
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * <p>COS 对象 Key 前缀。返回的临时凭据仅允许上传到此前缀下，格式为 Direct/{Uin}/{SessionId}/。</p>
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * <p>COS 存储桶所在地域</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>访问 COS 的临时密钥 Token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALRESPONSE_H_
