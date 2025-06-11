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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGELISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SecurityInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 套餐列表元素
                */
                class PackageListItem : public AbstractModel
                {
                public:
                    PackageListItem();
                    ~PackageListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainId 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainId 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名的原始格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名的原始格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名的原始格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名的原始格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取套餐等级代码
                     * @return Grade 套餐等级代码
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置套餐等级代码
                     * @param _grade 套餐等级代码
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取套餐名称
                     * @return GradeTitle 套餐名称
                     * 
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置套餐名称
                     * @param _gradeTitle 套餐名称
                     * 
                     */
                    void SetGradeTitle(const std::string& _gradeTitle);

                    /**
                     * 判断参数 GradeTitle 是否已赋值
                     * @return GradeTitle 是否已赋值
                     * 
                     */
                    bool GradeTitleHasBeenSet() const;

                    /**
                     * 获取付费套餐开通时间
                     * @return VipStartAt 付费套餐开通时间
                     * 
                     */
                    std::string GetVipStartAt() const;

                    /**
                     * 设置付费套餐开通时间
                     * @param _vipStartAt 付费套餐开通时间
                     * 
                     */
                    void SetVipStartAt(const std::string& _vipStartAt);

                    /**
                     * 判断参数 VipStartAt 是否已赋值
                     * @return VipStartAt 是否已赋值
                     * 
                     */
                    bool VipStartAtHasBeenSet() const;

                    /**
                     * 获取付费套餐到期时间
                     * @return VipEndAt 付费套餐到期时间
                     * 
                     */
                    std::string GetVipEndAt() const;

                    /**
                     * 设置付费套餐到期时间
                     * @param _vipEndAt 付费套餐到期时间
                     * 
                     */
                    void SetVipEndAt(const std::string& _vipEndAt);

                    /**
                     * 判断参数 VipEndAt 是否已赋值
                     * @return VipEndAt 是否已赋值
                     * 
                     */
                    bool VipEndAtHasBeenSet() const;

                    /**
                     * 获取域名是否开通VIP自动续费，是：YES，否：NO，默认：DEFAULT
                     * @return VipAutoRenew 域名是否开通VIP自动续费，是：YES，否：NO，默认：DEFAULT
                     * 
                     */
                    std::string GetVipAutoRenew() const;

                    /**
                     * 设置域名是否开通VIP自动续费，是：YES，否：NO，默认：DEFAULT
                     * @param _vipAutoRenew 域名是否开通VIP自动续费，是：YES，否：NO，默认：DEFAULT
                     * 
                     */
                    void SetVipAutoRenew(const std::string& _vipAutoRenew);

                    /**
                     * 判断参数 VipAutoRenew 是否已赋值
                     * @return VipAutoRenew 是否已赋值
                     * 
                     */
                    bool VipAutoRenewHasBeenSet() const;

                    /**
                     * 获取套餐剩余换绑/绑定域名次数
                     * @return RemainTimes 套餐剩余换绑/绑定域名次数
                     * 
                     */
                    uint64_t GetRemainTimes() const;

                    /**
                     * 设置套餐剩余换绑/绑定域名次数
                     * @param _remainTimes 套餐剩余换绑/绑定域名次数
                     * 
                     */
                    void SetRemainTimes(const uint64_t& _remainTimes);

                    /**
                     * 判断参数 RemainTimes 是否已赋值
                     * @return RemainTimes 是否已赋值
                     * 
                     */
                    bool RemainTimesHasBeenSet() const;

                    /**
                     * 获取套餐资源ID
                     * @return ResourceId 套餐资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置套餐资源ID
                     * @param _resourceId 套餐资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取域名等级代号
                     * @return GradeLevel 域名等级代号
                     * 
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置域名等级代号
                     * @param _gradeLevel 域名等级代号
                     * 
                     */
                    void SetGradeLevel(const uint64_t& _gradeLevel);

                    /**
                     * 判断参数 GradeLevel 是否已赋值
                     * @return GradeLevel 是否已赋值
                     * 
                     */
                    bool GradeLevelHasBeenSet() const;

                    /**
                     * 获取套餐绑定的域名的状态
                     * @return Status 套餐绑定的域名的状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置套餐绑定的域名的状态
                     * @param _status 套餐绑定的域名的状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取套餐是否处于宽限期
                     * @return IsGracePeriod 套餐是否处于宽限期
                     * 
                     */
                    std::string GetIsGracePeriod() const;

                    /**
                     * 设置套餐是否处于宽限期
                     * @param _isGracePeriod 套餐是否处于宽限期
                     * 
                     */
                    void SetIsGracePeriod(const std::string& _isGracePeriod);

                    /**
                     * 判断参数 IsGracePeriod 是否已赋值
                     * @return IsGracePeriod 是否已赋值
                     * 
                     */
                    bool IsGracePeriodHasBeenSet() const;

                    /**
                     * 获取是否降级
                     * @return Downgrade 是否降级
                     * 
                     */
                    bool GetDowngrade() const;

                    /**
                     * 设置是否降级
                     * @param _downgrade 是否降级
                     * 
                     */
                    void SetDowngrade(const bool& _downgrade);

                    /**
                     * 判断参数 Downgrade 是否已赋值
                     * @return Downgrade 是否已赋值
                     * 
                     */
                    bool DowngradeHasBeenSet() const;

                    /**
                     * 获取关联安全防护信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityInfo 关联安全防护信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SecurityInfo GetSecurityInfo() const;

                    /**
                     * 设置关联安全防护信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityInfo 关联安全防护信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityInfo(const SecurityInfo& _securityInfo);

                    /**
                     * 判断参数 SecurityInfo 是否已赋值
                     * @return SecurityInfo 是否已赋值
                     * 
                     */
                    bool SecurityInfoHasBeenSet() const;

                    /**
                     * 获取套餐绑定的域名是否为子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSubDomain 套餐绑定的域名是否为子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSubDomain() const;

                    /**
                     * 设置套餐绑定的域名是否为子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSubDomain 套餐绑定的域名是否为子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSubDomain(const bool& _isSubDomain);

                    /**
                     * 判断参数 IsSubDomain 是否已赋值
                     * @return IsSubDomain 是否已赋值
                     * 
                     */
                    bool IsSubDomainHasBeenSet() const;

                private:

                    /**
                     * 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名的原始格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 套餐等级代码
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 套餐名称
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * 付费套餐开通时间
                     */
                    std::string m_vipStartAt;
                    bool m_vipStartAtHasBeenSet;

                    /**
                     * 付费套餐到期时间
                     */
                    std::string m_vipEndAt;
                    bool m_vipEndAtHasBeenSet;

                    /**
                     * 域名是否开通VIP自动续费，是：YES，否：NO，默认：DEFAULT
                     */
                    std::string m_vipAutoRenew;
                    bool m_vipAutoRenewHasBeenSet;

                    /**
                     * 套餐剩余换绑/绑定域名次数
                     */
                    uint64_t m_remainTimes;
                    bool m_remainTimesHasBeenSet;

                    /**
                     * 套餐资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 域名等级代号
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * 套餐绑定的域名的状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 套餐是否处于宽限期
                     */
                    std::string m_isGracePeriod;
                    bool m_isGracePeriodHasBeenSet;

                    /**
                     * 是否降级
                     */
                    bool m_downgrade;
                    bool m_downgradeHasBeenSet;

                    /**
                     * 关联安全防护信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SecurityInfo m_securityInfo;
                    bool m_securityInfoHasBeenSet;

                    /**
                     * 套餐绑定的域名是否为子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSubDomain;
                    bool m_isSubDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_PACKAGELISTITEM_H_
