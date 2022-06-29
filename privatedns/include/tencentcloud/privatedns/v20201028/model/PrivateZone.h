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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfoOutput.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 私有域信息
                */
                class PrivateZone : public AbstractModel
                {
                public:
                    PrivateZone();
                    ~PrivateZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有域id: zone-xxxxxxxx
                     * @return ZoneId 私有域id: zone-xxxxxxxx
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域id: zone-xxxxxxxx
                     * @param ZoneId 私有域id: zone-xxxxxxxx
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取域名所有者uin
                     * @return OwnerUin 域名所有者uin
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置域名所有者uin
                     * @param OwnerUin 域名所有者uin
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取私有域名
                     * @return Domain 私有域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置私有域名
                     * @param Domain 私有域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param CreatedOn 创建时间
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdatedOn 修改时间
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置修改时间
                     * @param UpdatedOn 修改时间
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取记录数
                     * @return RecordCount 记录数
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置记录数
                     * @param RecordCount 记录数
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取绑定的Vpc列表
                     * @return VpcSet 绑定的Vpc列表
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置绑定的Vpc列表
                     * @param VpcSet 绑定的Vpc列表
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取私有域状态：正常解析：ENABLED, 暂停解析：SUSPEND, 锁定：FROZEN
                     * @return Status 私有域状态：正常解析：ENABLED, 暂停解析：SUSPEND, 锁定：FROZEN
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置私有域状态：正常解析：ENABLED, 暂停解析：SUSPEND, 锁定：FROZEN
                     * @param Status 私有域状态：正常解析：ENABLED, 暂停解析：SUSPEND, 锁定：FROZEN
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取域名递归解析状态：开通：ENABLED, 关闭，DISABLED
                     * @return DnsForwardStatus 域名递归解析状态：开通：ENABLED, 关闭，DISABLED
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置域名递归解析状态：开通：ENABLED, 关闭，DISABLED
                     * @param DnsForwardStatus 域名递归解析状态：开通：ENABLED, 关闭，DISABLED
                     */
                    void SetDnsForwardStatus(const std::string& _dnsForwardStatus);

                    /**
                     * 判断参数 DnsForwardStatus 是否已赋值
                     * @return DnsForwardStatus 是否已赋值
                     */
                    bool DnsForwardStatusHasBeenSet() const;

                    /**
                     * 获取标签键值对集合
                     * @return Tags 标签键值对集合
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签键值对集合
                     * @param Tags 标签键值对集合
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取绑定的关联账号的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountVpcSet 绑定的关联账号的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccountVpcInfoOutput> GetAccountVpcSet() const;

                    /**
                     * 设置绑定的关联账号的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccountVpcSet 绑定的关联账号的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfoOutput>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取是否自定义TLD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCustomTld 是否自定义TLD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsCustomTld() const;

                    /**
                     * 设置是否自定义TLD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsCustomTld 是否自定义TLD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsCustomTld(const bool& _isCustomTld);

                    /**
                     * 判断参数 IsCustomTld 是否已赋值
                     * @return IsCustomTld 是否已赋值
                     */
                    bool IsCustomTldHasBeenSet() const;

                private:

                    /**
                     * 私有域id: zone-xxxxxxxx
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 域名所有者uin
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 私有域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 记录数
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 绑定的Vpc列表
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * 私有域状态：正常解析：ENABLED, 暂停解析：SUSPEND, 锁定：FROZEN
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名递归解析状态：开通：ENABLED, 关闭，DISABLED
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * 标签键值对集合
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 绑定的关联账号的vpc列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccountVpcInfoOutput> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * 是否自定义TLD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCustomTld;
                    bool m_isCustomTldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_
