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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 发信域名验证列表结构体
                */
                class EmailIdentity : public AbstractModel
                {
                public:
                    EmailIdentity();
                    ~EmailIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发信域名
                     * @return IdentityName 发信域名
                     * 
                     */
                    std::string GetIdentityName() const;

                    /**
                     * 设置发信域名
                     * @param _identityName 发信域名
                     * 
                     */
                    void SetIdentityName(const std::string& _identityName);

                    /**
                     * 判断参数 IdentityName 是否已赋值
                     * @return IdentityName 是否已赋值
                     * 
                     */
                    bool IdentityNameHasBeenSet() const;

                    /**
                     * 获取验证类型，固定为DOMAIN
                     * @return IdentityType 验证类型，固定为DOMAIN
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置验证类型，固定为DOMAIN
                     * @param _identityType 验证类型，固定为DOMAIN
                     * 
                     */
                    void SetIdentityType(const std::string& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取是否已通过验证
                     * @return SendingEnabled 是否已通过验证
                     * 
                     */
                    bool GetSendingEnabled() const;

                    /**
                     * 设置是否已通过验证
                     * @param _sendingEnabled 是否已通过验证
                     * 
                     */
                    void SetSendingEnabled(const bool& _sendingEnabled);

                    /**
                     * 判断参数 SendingEnabled 是否已赋值
                     * @return SendingEnabled 是否已赋值
                     * 
                     */
                    bool SendingEnabledHasBeenSet() const;

                    /**
                     * 获取当前信誉等级
                     * @return CurrentReputationLevel 当前信誉等级
                     * 
                     */
                    uint64_t GetCurrentReputationLevel() const;

                    /**
                     * 设置当前信誉等级
                     * @param _currentReputationLevel 当前信誉等级
                     * 
                     */
                    void SetCurrentReputationLevel(const uint64_t& _currentReputationLevel);

                    /**
                     * 判断参数 CurrentReputationLevel 是否已赋值
                     * @return CurrentReputationLevel 是否已赋值
                     * 
                     */
                    bool CurrentReputationLevelHasBeenSet() const;

                    /**
                     * 获取当日最高发信量
                     * @return DailyQuota 当日最高发信量
                     * 
                     */
                    uint64_t GetDailyQuota() const;

                    /**
                     * 设置当日最高发信量
                     * @param _dailyQuota 当日最高发信量
                     * 
                     */
                    void SetDailyQuota(const uint64_t& _dailyQuota);

                    /**
                     * 判断参数 DailyQuota 是否已赋值
                     * @return DailyQuota 是否已赋值
                     * 
                     */
                    bool DailyQuotaHasBeenSet() const;

                    /**
                     * 获取域名配置的独立ip
                     * @return SendIp 域名配置的独立ip
                     * 
                     */
                    std::vector<std::string> GetSendIp() const;

                    /**
                     * 设置域名配置的独立ip
                     * @param _sendIp 域名配置的独立ip
                     * 
                     */
                    void SetSendIp(const std::vector<std::string>& _sendIp);

                    /**
                     * 判断参数 SendIp 是否已赋值
                     * @return SendIp 是否已赋值
                     * 
                     */
                    bool SendIpHasBeenSet() const;

                private:

                    /**
                     * 发信域名
                     */
                    std::string m_identityName;
                    bool m_identityNameHasBeenSet;

                    /**
                     * 验证类型，固定为DOMAIN
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * 是否已通过验证
                     */
                    bool m_sendingEnabled;
                    bool m_sendingEnabledHasBeenSet;

                    /**
                     * 当前信誉等级
                     */
                    uint64_t m_currentReputationLevel;
                    bool m_currentReputationLevelHasBeenSet;

                    /**
                     * 当日最高发信量
                     */
                    uint64_t m_dailyQuota;
                    bool m_dailyQuotaHasBeenSet;

                    /**
                     * 域名配置的独立ip
                     */
                    std::vector<std::string> m_sendIp;
                    bool m_sendIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
