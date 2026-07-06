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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 账号基本信息，主要有 Uin 和 AppId
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户appid
                     * @return AppId 租户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户appid
                     * @param _appId 租户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取租户uin
                     * @return Uin 租户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户uin
                     * @param _uin 租户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取剩余可用额度
                     * @return RemainQuota 剩余可用额度
                     * 
                     */
                    int64_t GetRemainQuota() const;

                    /**
                     * 设置剩余可用额度
                     * @param _remainQuota 剩余可用额度
                     * 
                     */
                    void SetRemainQuota(const int64_t& _remainQuota);

                    /**
                     * 判断参数 RemainQuota 是否已赋值
                     * @return RemainQuota 是否已赋值
                     * 
                     */
                    bool RemainQuotaHasBeenSet() const;

                    /**
                     * 获取租户名称
                     * @return Nickname 租户名称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置租户名称
                     * @param _nickname 租户名称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取下发规则数
                     * @return DispatchRuleNum 下发规则数
                     * 
                     */
                    int64_t GetDispatchRuleNum() const;

                    /**
                     * 设置下发规则数
                     * @param _dispatchRuleNum 下发规则数
                     * 
                     */
                    void SetDispatchRuleNum(const int64_t& _dispatchRuleNum);

                    /**
                     * 判断参数 DispatchRuleNum 是否已赋值
                     * @return DispatchRuleNum 是否已赋值
                     * 
                     */
                    bool DispatchRuleNumHasBeenSet() const;

                    /**
                     * 获取产品已有规则数
                     * @return OriginRuleNum 产品已有规则数
                     * 
                     */
                    int64_t GetOriginRuleNum() const;

                    /**
                     * 设置产品已有规则数
                     * @param _originRuleNum 产品已有规则数
                     * 
                     */
                    void SetOriginRuleNum(const int64_t& _originRuleNum);

                    /**
                     * 判断参数 OriginRuleNum 是否已赋值
                     * @return OriginRuleNum 是否已赋值
                     * 
                     */
                    bool OriginRuleNumHasBeenSet() const;

                    /**
                     * 获取总额度
                     * @return TotalQuota 总额度
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置总额度
                     * @param _totalQuota 总额度
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取成员Id
                     * @return MemberId 成员Id
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置成员Id
                     * @param _memberId 成员Id
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 租户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 租户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 剩余可用额度
                     */
                    int64_t m_remainQuota;
                    bool m_remainQuotaHasBeenSet;

                    /**
                     * 租户名称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 下发规则数
                     */
                    int64_t m_dispatchRuleNum;
                    bool m_dispatchRuleNumHasBeenSet;

                    /**
                     * 产品已有规则数
                     */
                    int64_t m_originRuleNum;
                    bool m_originRuleNumHasBeenSet;

                    /**
                     * 总额度
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 成员Id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNT_H_
