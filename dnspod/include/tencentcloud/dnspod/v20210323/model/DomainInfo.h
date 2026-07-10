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
                     * 获取<p>域名ID</p>
                     * @return DomainId <p>域名ID</p>
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置<p>域名ID</p>
                     * @param _domainId <p>域名ID</p>
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
                     * 获取<p>域名状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM</p>
                     * @return Status <p>域名状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>域名状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM</p>
                     * @param _status <p>域名状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM</p>
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
                     * 获取<p>域名套餐等级</p>
                     * @return Grade <p>域名套餐等级</p>
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置<p>域名套餐等级</p>
                     * @param _grade <p>域名套餐等级</p>
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
                     * 获取<p>域名分组ID</p>
                     * @return GroupId <p>域名分组ID</p>
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置<p>域名分组ID</p>
                     * @param _groupId <p>域名分组ID</p>
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
                     * 获取<p>是否星标域名</p>
                     * @return IsMark <p>是否星标域名</p>
                     * 
                     */
                    std::string GetIsMark() const;

                    /**
                     * 设置<p>是否星标域名</p>
                     * @param _isMark <p>是否星标域名</p>
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
                     * 获取<p>TTL(DNS记录缓存时间)，单位：秒</p>
                     * @return TTL <p>TTL(DNS记录缓存时间)，单位：秒</p>
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置<p>TTL(DNS记录缓存时间)，单位：秒</p>
                     * @param _tTL <p>TTL(DNS记录缓存时间)，单位：秒</p>
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
                     * 获取<p>CNAME加速启用状态</p>
                     * @return CnameSpeedup <p>CNAME加速启用状态</p>
                     * @deprecated
                     */
                    std::string GetCnameSpeedup() const;

                    /**
                     * 设置<p>CNAME加速启用状态</p>
                     * @param _cnameSpeedup <p>CNAME加速启用状态</p>
                     * @deprecated
                     */
                    void SetCnameSpeedup(const std::string& _cnameSpeedup);

                    /**
                     * 判断参数 CnameSpeedup 是否已赋值
                     * @return CnameSpeedup 是否已赋值
                     * @deprecated
                     */
                    bool CnameSpeedupHasBeenSet() const;

                    /**
                     * 获取<p>域名备注</p>
                     * @return Remark <p>域名备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>域名备注</p>
                     * @param _remark <p>域名备注</p>
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
                     * 获取<p>域名Punycode</p>
                     * @return Punycode <p>域名Punycode</p>
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置<p>域名Punycode</p>
                     * @param _punycode <p>域名Punycode</p>
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
                     * 获取<p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @return DnsStatus <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @deprecated
                     */
                    std::string GetDnsStatus() const;

                    /**
                     * 设置<p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @param _dnsStatus <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @deprecated
                     */
                    void SetDnsStatus(const std::string& _dnsStatus);

                    /**
                     * 判断参数 DnsStatus 是否已赋值
                     * @return DnsStatus 是否已赋值
                     * @deprecated
                     */
                    bool DnsStatusHasBeenSet() const;

                    /**
                     * 获取<p>域名的NS列表</p>
                     * @return DnspodNsList <p>域名的NS列表</p>
                     * 
                     */
                    std::vector<std::string> GetDnspodNsList() const;

                    /**
                     * 设置<p>域名的NS列表</p>
                     * @param _dnspodNsList <p>域名的NS列表</p>
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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>域名等级代号</p>
                     * @return GradeLevel <p>域名等级代号</p>
                     * 
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置<p>域名等级代号</p>
                     * @param _gradeLevel <p>域名等级代号</p>
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
                     * 获取<p>域名所属的用户ID</p>
                     * @return UserId <p>域名所属的用户ID</p>
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置<p>域名所属的用户ID</p>
                     * @param _userId <p>域名所属的用户ID</p>
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
                     * 获取<p>是否为付费域名</p>
                     * @return IsVip <p>是否为付费域名</p>
                     * 
                     */
                    std::string GetIsVip() const;

                    /**
                     * 设置<p>是否为付费域名</p>
                     * @param _isVip <p>是否为付费域名</p>
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
                     * 获取<p>域名所有者的账号</p>
                     * @return Owner <p>域名所有者的账号</p>
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>域名所有者的账号</p>
                     * @param _owner <p>域名所有者的账号</p>
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
                     * 获取<p>域名等级的描述</p>
                     * @return GradeTitle <p>域名等级的描述</p>
                     * 
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置<p>域名等级的描述</p>
                     * @param _gradeTitle <p>域名等级的描述</p>
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
                     * 获取<p>域名创建时间</p>
                     * @return CreatedOn <p>域名创建时间</p>
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>域名创建时间</p>
                     * @param _createdOn <p>域名创建时间</p>
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
                     * 获取<p>最后操作时间</p>
                     * @return UpdatedOn <p>最后操作时间</p>
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置<p>最后操作时间</p>
                     * @param _updatedOn <p>最后操作时间</p>
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
                     * 获取<p>腾讯云账户Uin</p>
                     * @return Uin <p>腾讯云账户Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>腾讯云账户Uin</p>
                     * @param _uin <p>腾讯云账户Uin</p>
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
                     * 获取<p>域名实际使用的NS列表</p>
                     * @return ActualNsList <p>域名实际使用的NS列表</p>
                     * 
                     */
                    std::vector<std::string> GetActualNsList() const;

                    /**
                     * 设置<p>域名实际使用的NS列表</p>
                     * @param _actualNsList <p>域名实际使用的NS列表</p>
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
                     * 获取<p>域名的记录数量</p>
                     * @return RecordCount <p>域名的记录数量</p>
                     * 
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 设置<p>域名的记录数量</p>
                     * @param _recordCount <p>域名的记录数量</p>
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
                     * 获取<p>域名所有者的账户昵称</p>
                     * @return OwnerNick <p>域名所有者的账户昵称</p>
                     * 
                     */
                    std::string GetOwnerNick() const;

                    /**
                     * 设置<p>域名所有者的账户昵称</p>
                     * @param _ownerNick <p>域名所有者的账户昵称</p>
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
                     * 获取<p>是否在付费套餐宽限期</p>
                     * @return IsGracePeriod <p>是否在付费套餐宽限期</p>
                     * 
                     */
                    std::string GetIsGracePeriod() const;

                    /**
                     * 设置<p>是否在付费套餐宽限期</p>
                     * @param _isGracePeriod <p>是否在付费套餐宽限期</p>
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
                     * 获取<p>是否在付费套餐缓冲期</p>
                     * @return VipBuffered <p>是否在付费套餐缓冲期</p>
                     * 
                     */
                    std::string GetVipBuffered() const;

                    /**
                     * 设置<p>是否在付费套餐缓冲期</p>
                     * @param _vipBuffered <p>是否在付费套餐缓冲期</p>
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
                     * 获取<p>VIP套餐有效期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipStartAt <p>VIP套餐有效期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipStartAt() const;

                    /**
                     * 设置<p>VIP套餐有效期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipStartAt <p>VIP套餐有效期开始时间</p>
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
                     * 获取<p>VIP套餐有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipEndAt <p>VIP套餐有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipEndAt() const;

                    /**
                     * 设置<p>VIP套餐有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipEndAt <p>VIP套餐有效期结束时间</p>
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
                     * 获取<p>VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipAutoRenew <p>VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipAutoRenew() const;

                    /**
                     * 设置<p>VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipAutoRenew <p>VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费</p>
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
                     * 获取<p>VIP套餐资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipResourceId <p>VIP套餐资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipResourceId() const;

                    /**
                     * 设置<p>VIP套餐资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipResourceId <p>VIP套餐资源ID</p>
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
                     * 获取<p>是否是子域名。</p>
                     * @return IsSubDomain <p>是否是子域名。</p>
                     * 
                     */
                    bool GetIsSubDomain() const;

                    /**
                     * 设置<p>是否是子域名。</p>
                     * @param _isSubDomain <p>是否是子域名。</p>
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
                     * 获取<p>域名关联的标签列表</p>
                     * @return TagList <p>域名关联的标签列表</p>
                     * 
                     */
                    std::vector<TagItem> GetTagList() const;

                    /**
                     * 设置<p>域名关联的标签列表</p>
                     * @param _tagList <p>域名关联的标签列表</p>
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
                     * 获取<p>是否启用搜索引擎推送</p>
                     * @return SearchEnginePush <p>是否启用搜索引擎推送</p>
                     * 
                     */
                    std::string GetSearchEnginePush() const;

                    /**
                     * 设置<p>是否启用搜索引擎推送</p>
                     * @param _searchEnginePush <p>是否启用搜索引擎推送</p>
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
                     * 获取<p>是否开启辅助 DNS</p>
                     * @return SlaveDNS <p>是否开启辅助 DNS</p>
                     * 
                     */
                    std::string GetSlaveDNS() const;

                    /**
                     * 设置<p>是否开启辅助 DNS</p>
                     * @param _slaveDNS <p>是否开启辅助 DNS</p>
                     * 
                     */
                    void SetSlaveDNS(const std::string& _slaveDNS);

                    /**
                     * 判断参数 SlaveDNS 是否已赋值
                     * @return SlaveDNS 是否已赋值
                     * 
                     */
                    bool SlaveDNSHasBeenSet() const;

                    /**
                     * 获取<p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @return DNSStatus <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置<p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * @param _dNSStatus <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     * 
                     */
                    void SetDNSStatus(const std::string& _dNSStatus);

                    /**
                     * 判断参数 DNSStatus 是否已赋值
                     * @return DNSStatus 是否已赋值
                     * 
                     */
                    bool DNSStatusHasBeenSet() const;

                    /**
                     * 获取<p>CNAME加速启用状态</p>
                     * @return CNAMESpeedup <p>CNAME加速启用状态</p>
                     * 
                     */
                    std::string GetCNAMESpeedup() const;

                    /**
                     * 设置<p>CNAME加速启用状态</p>
                     * @param _cNAMESpeedup <p>CNAME加速启用状态</p>
                     * 
                     */
                    void SetCNAMESpeedup(const std::string& _cNAMESpeedup);

                    /**
                     * 判断参数 CNAMESpeedup 是否已赋值
                     * @return CNAMESpeedup 是否已赋值
                     * 
                     */
                    bool CNAMESpeedupHasBeenSet() const;

                private:

                    /**
                     * <p>域名ID</p>
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>域名状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>域名套餐等级</p>
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * <p>域名分组ID</p>
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>是否星标域名</p>
                     */
                    std::string m_isMark;
                    bool m_isMarkHasBeenSet;

                    /**
                     * <p>TTL(DNS记录缓存时间)，单位：秒</p>
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * <p>CNAME加速启用状态</p>
                     */
                    std::string m_cnameSpeedup;
                    bool m_cnameSpeedupHasBeenSet;

                    /**
                     * <p>域名备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>域名Punycode</p>
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     */
                    std::string m_dnsStatus;
                    bool m_dnsStatusHasBeenSet;

                    /**
                     * <p>域名的NS列表</p>
                     */
                    std::vector<std::string> m_dnspodNsList;
                    bool m_dnspodNsListHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名等级代号</p>
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * <p>域名所属的用户ID</p>
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>是否为付费域名</p>
                     */
                    std::string m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * <p>域名所有者的账号</p>
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>域名等级的描述</p>
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * <p>域名创建时间</p>
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>最后操作时间</p>
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * <p>腾讯云账户Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>域名实际使用的NS列表</p>
                     */
                    std::vector<std::string> m_actualNsList;
                    bool m_actualNsListHasBeenSet;

                    /**
                     * <p>域名的记录数量</p>
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * <p>域名所有者的账户昵称</p>
                     */
                    std::string m_ownerNick;
                    bool m_ownerNickHasBeenSet;

                    /**
                     * <p>是否在付费套餐宽限期</p>
                     */
                    std::string m_isGracePeriod;
                    bool m_isGracePeriodHasBeenSet;

                    /**
                     * <p>是否在付费套餐缓冲期</p>
                     */
                    std::string m_vipBuffered;
                    bool m_vipBufferedHasBeenSet;

                    /**
                     * <p>VIP套餐有效期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipStartAt;
                    bool m_vipStartAtHasBeenSet;

                    /**
                     * <p>VIP套餐有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipEndAt;
                    bool m_vipEndAtHasBeenSet;

                    /**
                     * <p>VIP套餐自动续费标识。可能的值为：default-默认；no-不自动续费；yes-自动续费</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipAutoRenew;
                    bool m_vipAutoRenewHasBeenSet;

                    /**
                     * <p>VIP套餐资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipResourceId;
                    bool m_vipResourceIdHasBeenSet;

                    /**
                     * <p>是否是子域名。</p>
                     */
                    bool m_isSubDomain;
                    bool m_isSubDomainHasBeenSet;

                    /**
                     * <p>域名关联的标签列表</p>
                     */
                    std::vector<TagItem> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>是否启用搜索引擎推送</p>
                     */
                    std::string m_searchEnginePush;
                    bool m_searchEnginePushHasBeenSet;

                    /**
                     * <p>是否开启辅助 DNS</p>
                     */
                    std::string m_slaveDNS;
                    bool m_slaveDNSHasBeenSet;

                    /**
                     * <p>域名DNS状态，错误：dnserror，正常：空字符串</p>
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * <p>CNAME加速启用状态</p>
                     */
                    std::string m_cNAMESpeedup;
                    bool m_cNAMESpeedupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_
