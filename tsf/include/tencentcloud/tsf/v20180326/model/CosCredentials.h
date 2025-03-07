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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_COSCREDENTIALS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_COSCREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * cos临时账号信息
                */
                class CosCredentials : public AbstractModel
                {
                public:
                    CosCredentials();
                    ~CosCredentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话Token
                     * @return SessionToken 会话Token
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置会话Token
                     * @param _sessionToken 会话Token
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取临时应用ID
                     * @return TmpAppId 临时应用ID
                     * 
                     */
                    std::string GetTmpAppId() const;

                    /**
                     * 设置临时应用ID
                     * @param _tmpAppId 临时应用ID
                     * 
                     */
                    void SetTmpAppId(const std::string& _tmpAppId);

                    /**
                     * 判断参数 TmpAppId 是否已赋值
                     * @return TmpAppId 是否已赋值
                     * 
                     */
                    bool TmpAppIdHasBeenSet() const;

                    /**
                     * 获取临时调用者身份ID
                     * @return TmpSecretId 临时调用者身份ID
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时调用者身份ID
                     * @param _tmpSecretId 临时调用者身份ID
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时密钥
                     * @return TmpSecretKey 临时密钥
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥
                     * @param _tmpSecretKey 临时密钥
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpiredTime 过期时间
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间
                     * @param _expiredTime 过期时间
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取所在域
                     * @return Domain 所在域
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置所在域
                     * @param _domain 所在域
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 会话Token
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 临时应用ID
                     */
                    std::string m_tmpAppId;
                    bool m_tmpAppIdHasBeenSet;

                    /**
                     * 临时调用者身份ID
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 所在域
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_COSCREDENTIALS_H_
