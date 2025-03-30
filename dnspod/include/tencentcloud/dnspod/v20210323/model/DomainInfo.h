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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/TagItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名详情
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
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
                     * 获取域名状态
                     * @return Status 域名状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态
                     * @param _status 域名状态
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
                     * 获取域名套餐等级
                     * @return Grade 域名套餐等级
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置域名套餐等级
                     * @param _grade 域名套餐等级
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
                     * 获取域名分组ID
                     * @return GroupId 域名分组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置域名分组ID
                     * @param _groupId 域名分组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否星标域名
                     * @return IsMark 是否星标域名
                     * 
                     */
                    std::string GetIsMark() const;

                    /**
                     * 设置是否星标域名
                     * @param _isMark 是否星标域名
                     * 
                     */
                    void SetIsMark(const std::string& _isMark);

                    /**
                     * 判断参数 IsMark 是否已赋值
                     * @return IsMark 是否已赋值
                     * 
                     */
                    bool IsMarkHasBeenSet() const;

                    /**
                     * 获取TTL(DNS记录缓存时间)
                     * @return TTL TTL(DNS记录缓存时间)
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL(DNS记录缓存时间)
                     * @param _tTL TTL(DNS记录缓存时间)
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取cname加速启用状态
                     * @return CnameSpeedup cname加速启用状态
                     * 
                     */
                    std::string GetCnameSpeedup() const;

                    /**
                     * 设置cname加速启用状态
                     * @param _cnameSpeedup cname加速启用状态
                     * 
                     */
                    void SetCnameSpeedup(const std::string& _cnameSpeedup);

                    /**
                     * 判断参数 CnameSpeedup 是否已赋值
                     * @return CnameSpeedup 是否已赋值
                     * 
                     */
                    bool CnameSpeedupHasBeenSet() const;

                    /**
                     * 获取域名备注
                     * @return Remark 域名备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置域名备注
                     * @param _remark 域名备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取域名Punycode
                     * @return Punycode 域名Punycode
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置域名Punycode
                     * @param _punycode 域名Punycode
                     * 
                     */
                    void SetPunycode(const std::string& _punycode);

                    /**
                     * 判断参数 Punycode 是否已赋值
                     * @return Punycode 是否已赋值
                     * 
                     */
                    bool PunycodeHasBeenSet() const;

                    /**
                     * 获取域名DNS状态
                     * @return DnsStatus 域名DNS状态
                     * 
                     */
                    std::string GetDnsStatus() const;

                    /**
                     * 设置域名DNS状态
                     * @param _dnsStatus 域名DNS状态
                     * 
                     */
                    void SetDnsStatus(const std::string& _dnsStatus);

                    /**
                     * 判断参数 DnsStatus 是否已赋值
                     * @return DnsStatus 是否已赋值
                     * 
                     */
                    bool DnsStatusHasBeenSet() const;

                    /**
                     * 获取域名的NS列表
                     * @return DnspodNsList 域名的NS列表
                     * 
                     */
                    std::vector<std::string> GetDnspodNsList() const;

                    /**
                     * 设置域名的NS列表
                     * @param _dnspodNsList 域名的NS列表
                     * 
                     */
                    void SetDnspodNsList(const std::vector<std::string>& _dnspodNsList);

                    /**
                     * 判断参数 DnspodNsList 是否已赋值
                     * @return DnspodNsList 是否已赋值
                     * 
                     */
                    bool DnspodNsListHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取域名所属的用户ID
                     * @return UserId 域名所属的用户ID
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置域名所属的用户ID
                     * @param _userId 域名所属的用户ID
                     * 
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取是否为付费域名
                     * @return IsVip 是否为付费域名
                     * 
                     */
                    std::string GetIsVip() const;

                    /**
                     * 设置是否为付费域名
                     * @param _isVip 是否为付费域名
                     * 
                     */
                    void SetIsVip(const std::string& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取域名所有者的账号
                     * @return Owner 域名所有者的账号
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置域名所有者的账号
                     * @param _owner 域名所有者的账号
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取域名等级的描述
                     * @return GradeTitle 域名等级的描述
                     * 
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置域名等级的描述
                     * @param _gradeTitle 域名等级的描述
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
                     * 获取域名创建时间
                     * @return CreatedOn 域名创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置域名创建时间
                     * @param _createdOn 域名创建时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取最后操作时间
                     * @return UpdatedOn 最后操作时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置最后操作时间
                     * @param _updatedOn 最后操作时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取腾讯云账户Uin
                     * @return Uin 腾讯云账户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云账户Uin
                     * @param _uin 腾讯云账户Uin
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
                     * 获取域名实际使用的NS列表
                     * @return ActualNsList 域名实际使用的NS列表
                     * 
                     */
                    std::vector<std::string> GetActualNsList() const;

                    /**
                     * 设置域名实际使用的NS列表
                     * @param _actualNsList 域名实际使用的NS列表
                     * 
                     */
                    void SetActualNsList(const std::vector<std::string>& _actualNsList);

                    /**
                     * 判断参数 ActualNsList 是否已赋值
                     * @return ActualNsList 是否已赋值
                     * 
                     */
                    bool ActualNsListHasBeenSet() const;

                    /**
                     * 获取域名的记录数量
                     * @return RecordCount 域名的记录数量
                     * 
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 设置域名的记录数量
                     * @param _recordCount 域名的记录数量
                     * 
                     */
                    void SetRecordCount(const uint64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取域名所有者的账户昵称
                     * @return OwnerNick 域名所有者的账户昵称
                     * 
                     */
                    std::string GetOwnerNick() const;

                    /**
                     * 设置域名所有者的账户昵称
                     * @param _ownerNick 域名所有者的账户昵称
                     * 
                     */
                    void SetOwnerNick(const std::string& _ownerNick);

                    /**
                     * 判断参数 OwnerNick 是否已赋值
                     * @return OwnerNick 是否已赋值
                     * 
                     */
                    bool OwnerNickHasBeenSet() const;

                    /**
                     * 获取是否在付费套餐宽限期
                     * @return IsGracePeriod 是否在付费套餐宽限期
                     * 
                     */
                    std::string GetIsGracePeriod() const;

                    /**
                     * 设置是否在付费套餐宽限期
                     * @param _isGracePeriod 是否在付费套餐宽限期
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
                     * 获取是否在付费套餐缓冲期
                     * @return VipBuffered 是否在付费套餐缓冲期
                     * 
                     */
                    std::string GetVipBuffered() const;

                    /**
                     * 设置是否在付费套餐缓冲期
                     * @param _vipBuffered 是否在付费套餐缓冲期
                     * 
                     */
                    void SetVipBuffered(const std::string& _vipBuffered);

                    /**
                     * 判断参数 VipBuffered 是否已赋值
                     * @return VipBuffered 是否已赋值
                     * 
                     */
                    bool VipBufferedHasBeenSet() const;

                    /**
                     * 获取VIP套餐有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipStartAt VIP套餐有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipStartAt() const;

                    /**
                     * 设置VIP套餐有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipStartAt VIP套餐有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VIP套餐有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipEndAt VIP套餐有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipEndAt() const;

                    /**
                     * 设置VIP套餐有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipEndAt VIP套餐有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipAutoRenew VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipAutoRenew() const;

                    /**
                     * 设置VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipAutoRenew VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VIP套餐资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipResourceId VIP套餐资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipResourceId() const;

                    /**
                     * 设置VIP套餐资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipResourceId VIP套餐资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVipResourceId(const std::string& _vipResourceId);

                    /**
                     * 判断参数 VipResourceId 是否已赋值
                     * @return VipResourceId 是否已赋值
                     * 
                     */
                    bool VipResourceIdHasBeenSet() const;

                    /**
                     * 获取是否是子域名。
                     * @return IsSubDomain 是否是子域名。
                     * 
                     */
                    bool GetIsSubDomain() const;

                    /**
                     * 设置是否是子域名。
                     * @param _isSubDomain 是否是子域名。
                     * 
                     */
                    void SetIsSubDomain(const bool& _isSubDomain);

                    /**
                     * 判断参数 IsSubDomain 是否已赋值
                     * @return IsSubDomain 是否已赋值
                     * 
                     */
                    bool IsSubDomainHasBeenSet() const;

                    /**
                     * 获取域名关联的标签列表
                     * @return TagList 域名关联的标签列表
                     * 
                     */
                    std::vector<TagItem> GetTagList() const;

                    /**
                     * 设置域名关联的标签列表
                     * @param _tagList 域名关联的标签列表
                     * 
                     */
                    void SetTagList(const std::vector<TagItem>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取是否启用搜索引擎推送
                     * @return SearchEnginePush 是否启用搜索引擎推送
                     * 
                     */
                    std::string GetSearchEnginePush() const;

                    /**
                     * 设置是否启用搜索引擎推送
                     * @param _searchEnginePush 是否启用搜索引擎推送
                     * 
                     */
                    void SetSearchEnginePush(const std::string& _searchEnginePush);

                    /**
                     * 判断参数 SearchEnginePush 是否已赋值
                     * @return SearchEnginePush 是否已赋值
                     * 
                     */
                    bool SearchEnginePushHasBeenSet() const;

                    /**
                     * 获取是否开启辅助 DNS
                     * @return SlaveDNS 是否开启辅助 DNS
                     * 
                     */
                    std::string GetSlaveDNS() const;

                    /**
                     * 设置是否开启辅助 DNS
                     * @param _slaveDNS 是否开启辅助 DNS
                     * 
                     */
                    void SetSlaveDNS(const std::string& _slaveDNS);

                    /**
                     * 判断参数 SlaveDNS 是否已赋值
                     * @return SlaveDNS 是否已赋值
                     * 
                     */
                    bool SlaveDNSHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名套餐等级
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 域名分组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否星标域名
                     */
                    std::string m_isMark;
                    bool m_isMarkHasBeenSet;

                    /**
                     * TTL(DNS记录缓存时间)
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * cname加速启用状态
                     */
                    std::string m_cnameSpeedup;
                    bool m_cnameSpeedupHasBeenSet;

                    /**
                     * 域名备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 域名Punycode
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * 域名DNS状态
                     */
                    std::string m_dnsStatus;
                    bool m_dnsStatusHasBeenSet;

                    /**
                     * 域名的NS列表
                     */
                    std::vector<std::string> m_dnspodNsList;
                    bool m_dnspodNsListHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名等级代号
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * 域名所属的用户ID
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 是否为付费域名
                     */
                    std::string m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 域名所有者的账号
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 域名等级的描述
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * 域名创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 最后操作时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 腾讯云账户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 域名实际使用的NS列表
                     */
                    std::vector<std::string> m_actualNsList;
                    bool m_actualNsListHasBeenSet;

                    /**
                     * 域名的记录数量
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 域名所有者的账户昵称
                     */
                    std::string m_ownerNick;
                    bool m_ownerNickHasBeenSet;

                    /**
                     * 是否在付费套餐宽限期
                     */
                    std::string m_isGracePeriod;
                    bool m_isGracePeriodHasBeenSet;

                    /**
                     * 是否在付费套餐缓冲期
                     */
                    std::string m_vipBuffered;
                    bool m_vipBufferedHasBeenSet;

                    /**
                     * VIP套餐有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipStartAt;
                    bool m_vipStartAtHasBeenSet;

                    /**
                     * VIP套餐有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipEndAt;
                    bool m_vipEndAtHasBeenSet;

                    /**
                     * VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipAutoRenew;
                    bool m_vipAutoRenewHasBeenSet;

                    /**
                     * VIP套餐资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipResourceId;
                    bool m_vipResourceIdHasBeenSet;

                    /**
                     * 是否是子域名。
                     */
                    bool m_isSubDomain;
                    bool m_isSubDomainHasBeenSet;

                    /**
                     * 域名关联的标签列表
                     */
                    std::vector<TagItem> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 是否启用搜索引擎推送
                     */
                    std::string m_searchEnginePush;
                    bool m_searchEnginePushHasBeenSet;

                    /**
                     * 是否开启辅助 DNS
                     */
                    std::string m_slaveDNS;
                    bool m_slaveDNSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_
