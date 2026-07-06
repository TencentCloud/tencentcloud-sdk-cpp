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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTGROUPQUOTADETAIL_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTGROUPQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/Account.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 账号组配额详情
                */
                class AccountGroupQuotaDetail : public AbstractModel
                {
                public:
                    AccountGroupQuotaDetail();
                    ~AccountGroupQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号组Id
                     * @return GroupId 账号组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置账号组Id
                     * @param _groupId 账号组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取账号组名称
                     * @return GroupName 账号组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置账号组名称
                     * @param _groupName 账号组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取账号组成员数
                     * @return MemberCount 账号组成员数
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置账号组成员数
                     * @param _memberCount 账号组成员数
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取取组内 RemainQuota 最小成员的值
                     * @return RemainQuota 取组内 RemainQuota 最小成员的值
                     * 
                     */
                    int64_t GetRemainQuota() const;

                    /**
                     * 设置取组内 RemainQuota 最小成员的值
                     * @param _remainQuota 取组内 RemainQuota 最小成员的值
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
                     * 获取同上成员的 TotalQuota
                     * @return TotalQuota 同上成员的 TotalQuota
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置同上成员的 TotalQuota
                     * @param _totalQuota 同上成员的 TotalQuota
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
                     * 获取同上成员的 DispatchRuleNum
                     * @return DispatchRuleNum 同上成员的 DispatchRuleNum
                     * 
                     */
                    int64_t GetDispatchRuleNum() const;

                    /**
                     * 设置同上成员的 DispatchRuleNum
                     * @param _dispatchRuleNum 同上成员的 DispatchRuleNum
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
                     * 获取同上成员的 OriginRuleNum
                     * @return OriginRuleNum 同上成员的 OriginRuleNum
                     * 
                     */
                    int64_t GetOriginRuleNum() const;

                    /**
                     * 设置同上成员的 OriginRuleNum
                     * @param _originRuleNum 同上成员的 OriginRuleNum
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
                     * 获取配额最少的成员 Uin
                     * @return BottleneckUin 配额最少的成员 Uin
                     * 
                     */
                    std::string GetBottleneckUin() const;

                    /**
                     * 设置配额最少的成员 Uin
                     * @param _bottleneckUin 配额最少的成员 Uin
                     * 
                     */
                    void SetBottleneckUin(const std::string& _bottleneckUin);

                    /**
                     * 判断参数 BottleneckUin 是否已赋值
                     * @return BottleneckUin 是否已赋值
                     * 
                     */
                    bool BottleneckUinHasBeenSet() const;

                    /**
                     * 获取成员列表
                     * @return Members 成员列表
                     * 
                     */
                    std::vector<Account> GetMembers() const;

                    /**
                     * 设置成员列表
                     * @param _members 成员列表
                     * 
                     */
                    void SetMembers(const std::vector<Account>& _members);

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                private:

                    /**
                     * 账号组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 账号组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 账号组成员数
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 取组内 RemainQuota 最小成员的值
                     */
                    int64_t m_remainQuota;
                    bool m_remainQuotaHasBeenSet;

                    /**
                     * 同上成员的 TotalQuota
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 同上成员的 DispatchRuleNum
                     */
                    int64_t m_dispatchRuleNum;
                    bool m_dispatchRuleNumHasBeenSet;

                    /**
                     * 同上成员的 OriginRuleNum
                     */
                    int64_t m_originRuleNum;
                    bool m_originRuleNumHasBeenSet;

                    /**
                     * 配额最少的成员 Uin
                     */
                    std::string m_bottleneckUin;
                    bool m_bottleneckUinHasBeenSet;

                    /**
                     * 成员列表
                     */
                    std::vector<Account> m_members;
                    bool m_membersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTGROUPQUOTADETAIL_H_
