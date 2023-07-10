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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_

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
                * 域名列表元素
                */
                class DomainListItem : public AbstractModel
                {
                public:
                    DomainListItem();
                    ~DomainListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统分配给域名的唯一标识
                     * @return DomainId 系统分配给域名的唯一标识
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置系统分配给域名的唯一标识
                     * @param _domainId 系统分配给域名的唯一标识
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
                     * @return Name 域名的原始格式
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置域名的原始格式
                     * @param _name 域名的原始格式
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取域名的状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM
                     * @return Status 域名的状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名的状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM
                     * @param _status 域名的状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM
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
                     * 获取域名默认的解析记录默认TTL值
                     * @return TTL 域名默认的解析记录默认TTL值
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置域名默认的解析记录默认TTL值
                     * @param _tTL 域名默认的解析记录默认TTL值
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
                     * 获取是否开启CNAME加速，开启：ENABLE，未开启：DISABLE
                     * @return CNAMESpeedup 是否开启CNAME加速，开启：ENABLE，未开启：DISABLE
                     * 
                     */
                    std::string GetCNAMESpeedup() const;

                    /**
                     * 设置是否开启CNAME加速，开启：ENABLE，未开启：DISABLE
                     * @param _cNAMESpeedup 是否开启CNAME加速，开启：ENABLE，未开启：DISABLE
                     * 
                     */
                    void SetCNAMESpeedup(const std::string& _cNAMESpeedup);

                    /**
                     * 判断参数 CNAMESpeedup 是否已赋值
                     * @return CNAMESpeedup 是否已赋值
                     * 
                     */
                    bool CNAMESpeedupHasBeenSet() const;

                    /**
                     * 获取DNS 设置状态，错误：DNSERROR，正常：空字符串
                     * @return DNSStatus DNS 设置状态，错误：DNSERROR，正常：空字符串
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置DNS 设置状态，错误：DNSERROR，正常：空字符串
                     * @param _dNSStatus DNS 设置状态，错误：DNSERROR，正常：空字符串
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
                     * 获取域名的套餐等级代码
                     * @return Grade 域名的套餐等级代码
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置域名的套餐等级代码
                     * @param _grade 域名的套餐等级代码
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
                     * 获取域名所属的分组Id
                     * @return GroupId 域名所属的分组Id
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置域名所属的分组Id
                     * @param _groupId 域名所属的分组Id
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
                     * 获取是否开启搜索引擎推送优化，是：YES，否：NO
                     * @return SearchEnginePush 是否开启搜索引擎推送优化，是：YES，否：NO
                     * 
                     */
                    std::string GetSearchEnginePush() const;

                    /**
                     * 设置是否开启搜索引擎推送优化，是：YES，否：NO
                     * @param _searchEnginePush 是否开启搜索引擎推送优化，是：YES，否：NO
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
                     * 获取域名备注说明
                     * @return Remark 域名备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置域名备注说明
                     * @param _remark 域名备注说明
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
                     * 获取经过punycode编码后的域名格式
                     * @return Punycode 经过punycode编码后的域名格式
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置经过punycode编码后的域名格式
                     * @param _punycode 经过punycode编码后的域名格式
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
                     * 获取系统为域名分配的有效DNS
                     * @return EffectiveDNS 系统为域名分配的有效DNS
                     * 
                     */
                    std::vector<std::string> GetEffectiveDNS() const;

                    /**
                     * 设置系统为域名分配的有效DNS
                     * @param _effectiveDNS 系统为域名分配的有效DNS
                     * 
                     */
                    void SetEffectiveDNS(const std::vector<std::string>& _effectiveDNS);

                    /**
                     * 判断参数 EffectiveDNS 是否已赋值
                     * @return EffectiveDNS 是否已赋值
                     * 
                     */
                    bool EffectiveDNSHasBeenSet() const;

                    /**
                     * 获取域名套餐等级对应的序号
                     * @return GradeLevel 域名套餐等级对应的序号
                     * 
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置域名套餐等级对应的序号
                     * @param _gradeLevel 域名套餐等级对应的序号
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
                     * 获取是否是付费套餐
                     * @return IsVip 是否是付费套餐
                     * 
                     */
                    std::string GetIsVip() const;

                    /**
                     * 设置是否是付费套餐
                     * @param _isVip 是否是付费套餐
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
                     * 获取域名下的记录数量
                     * @return RecordCount 域名下的记录数量
                     * 
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 设置域名下的记录数量
                     * @param _recordCount 域名下的记录数量
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
                     * 获取域名添加时间
                     * @return CreatedOn 域名添加时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置域名添加时间
                     * @param _createdOn 域名添加时间
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
                     * 获取域名更新时间
                     * @return UpdatedOn 域名更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置域名更新时间
                     * @param _updatedOn 域名更新时间
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
                     * 获取域名所属账号
                     * @return Owner 域名所属账号
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置域名所属账号
                     * @param _owner 域名所属账号
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
                     * 获取域名关联的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 域名关联的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagItem> GetTagList() const;

                    /**
                     * 设置域名关联的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 域名关联的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<TagItem>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 系统分配给域名的唯一标识
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名的原始格式
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 域名的状态，正常：ENABLE，暂停：PAUSE，封禁：SPAM
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名默认的解析记录默认TTL值
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 是否开启CNAME加速，开启：ENABLE，未开启：DISABLE
                     */
                    std::string m_cNAMESpeedup;
                    bool m_cNAMESpeedupHasBeenSet;

                    /**
                     * DNS 设置状态，错误：DNSERROR，正常：空字符串
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * 域名的套餐等级代码
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 域名所属的分组Id
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否开启搜索引擎推送优化，是：YES，否：NO
                     */
                    std::string m_searchEnginePush;
                    bool m_searchEnginePushHasBeenSet;

                    /**
                     * 域名备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 经过punycode编码后的域名格式
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * 系统为域名分配的有效DNS
                     */
                    std::vector<std::string> m_effectiveDNS;
                    bool m_effectiveDNSHasBeenSet;

                    /**
                     * 域名套餐等级对应的序号
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * 套餐名称
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * 是否是付费套餐
                     */
                    std::string m_isVip;
                    bool m_isVipHasBeenSet;

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
                     * 域名下的记录数量
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 域名添加时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 域名更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 域名所属账号
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 域名关联的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_
