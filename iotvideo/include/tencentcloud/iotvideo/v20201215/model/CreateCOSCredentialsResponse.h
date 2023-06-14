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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATECOSCREDENTIALSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATECOSCREDENTIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * CreateCOSCredentials返回参数结构体
                */
                class CreateCOSCredentialsResponse : public AbstractModel
                {
                public:
                    CreateCOSCredentialsResponse();
                    ~CreateCOSCredentialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取COS存储桶名称
                     * @return StorageBucket COS存储桶名称
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
                     * 获取COS存储桶区域
                     * @return StorageRegion COS存储桶区域
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
                     * 获取COS存储桶路径
                     * @return StoragePath COS存储桶路径
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
                     * 获取COS上传用的SecretID
                     * @return SecretID COS上传用的SecretID
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                    /**
                     * 获取COS上传用的SecretKey
                     * @return SecretKey COS上传用的SecretKey
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
                     * 获取COS上传用的Token
                     * @return Token COS上传用的Token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取密钥信息过期时间
                     * @return ExpiredTime 密钥信息过期时间
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * COS存储桶名称
                     */
                    std::string m_storageBucket;
                    bool m_storageBucketHasBeenSet;

                    /**
                     * COS存储桶区域
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * COS存储桶路径
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * COS上传用的SecretID
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                    /**
                     * COS上传用的SecretKey
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * COS上传用的Token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 密钥信息过期时间
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATECOSCREDENTIALSRESPONSE_H_
