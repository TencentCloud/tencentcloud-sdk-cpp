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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 临时凭证
                */
                class TempCertificate : public AbstractModel
                {
                public:
                    TempCertificate();
                    ~TempCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取临时安全证书 Id。
                     * @return SecretId 临时安全证书 Id。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置临时安全证书 Id。
                     * @param _secretId 临时安全证书 Id。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取临时安全证书 Key。
                     * @return SecretKey 临时安全证书 Key。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置临时安全证书 Key。
                     * @param _secretKey 临时安全证书 Key。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Token 值。
                     * @return Token Token 值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token 值。
                     * @param _token Token 值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取证书无效的时间，返回 Unix 时间戳，精确到秒。
                     * @return ExpiredTime 证书无效的时间，返回 Unix 时间戳，精确到秒。
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置证书无效的时间，返回 Unix 时间戳，精确到秒。
                     * @param _expiredTime 证书无效的时间，返回 Unix 时间戳，精确到秒。
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 临时安全证书 Id。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 临时安全证书 Key。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Token 值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 证书无效的时间，返回 Unix 时间戳，精确到秒。
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEMPCERTIFICATE_H_
