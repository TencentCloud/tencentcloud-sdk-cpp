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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/WhoisContact.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Whois信息
                */
                class WhoisInfo : public AbstractModel
                {
                public:
                    WhoisInfo();
                    ~WhoisInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联系信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contacts 联系信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WhoisContact GetContacts() const;

                    /**
                     * 设置联系信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contacts 联系信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContacts(const WhoisContact& _contacts);

                    /**
                     * 判断参数 Contacts 是否已赋值
                     * @return Contacts 是否已赋值
                     * 
                     */
                    bool ContactsHasBeenSet() const;

                    /**
                     * 获取域名注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationDate 域名注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationDate() const;

                    /**
                     * 设置域名注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationDate 域名注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationDate(const std::string& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                    /**
                     * 获取域名到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationDate 域名到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置域名到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expirationDate 域名到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取是否是在腾讯云注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsQcloud 是否是在腾讯云注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsQcloud() const;

                    /**
                     * 设置是否是在腾讯云注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isQcloud 是否是在腾讯云注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsQcloud(const bool& _isQcloud);

                    /**
                     * 判断参数 IsQcloud 是否已赋值
                     * @return IsQcloud 是否已赋值
                     * 
                     */
                    bool IsQcloudHasBeenSet() const;

                    /**
                     * 获取是否当前操作账号注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsQcloudOwner 是否当前操作账号注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsQcloudOwner() const;

                    /**
                     * 设置是否当前操作账号注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isQcloudOwner 是否当前操作账号注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsQcloudOwner(const bool& _isQcloudOwner);

                    /**
                     * 判断参数 IsQcloudOwner 是否已赋值
                     * @return IsQcloudOwner 是否已赋值
                     * 
                     */
                    bool IsQcloudOwnerHasBeenSet() const;

                    /**
                     * 获取域名配置的NS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameServers 域名配置的NS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置域名配置的NS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameServers 域名配置的NS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取Whois原始信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Raw Whois原始信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRaw() const;

                    /**
                     * 设置Whois原始信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _raw Whois原始信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRaw(const std::vector<std::string>& _raw);

                    /**
                     * 判断参数 Raw 是否已赋值
                     * @return Raw 是否已赋值
                     * 
                     */
                    bool RawHasBeenSet() const;

                    /**
                     * 获取域名注册商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Registrar 域名注册商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegistrar() const;

                    /**
                     * 设置域名注册商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registrar 域名注册商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistrar(const std::vector<std::string>& _registrar);

                    /**
                     * 判断参数 Registrar 是否已赋值
                     * @return Registrar 是否已赋值
                     * 
                     */
                    bool RegistrarHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedDate 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedDate() const;

                    /**
                     * 设置更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedDate 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedDate(const std::string& _updatedDate);

                    /**
                     * 判断参数 UpdatedDate 是否已赋值
                     * @return UpdatedDate 是否已赋值
                     * 
                     */
                    bool UpdatedDateHasBeenSet() const;

                    /**
                     * 获取dnssec
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dnssec dnssec
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDnssec() const;

                    /**
                     * 设置dnssec
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnssec dnssec
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnssec(const std::string& _dnssec);

                    /**
                     * 判断参数 Dnssec 是否已赋值
                     * @return Dnssec 是否已赋值
                     * 
                     */
                    bool DnssecHasBeenSet() const;

                private:

                    /**
                     * 联系信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WhoisContact m_contacts;
                    bool m_contactsHasBeenSet;

                    /**
                     * 域名注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationDate;
                    bool m_creationDateHasBeenSet;

                    /**
                     * 域名到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 是否是在腾讯云注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isQcloud;
                    bool m_isQcloudHasBeenSet;

                    /**
                     * 是否当前操作账号注册的域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isQcloudOwner;
                    bool m_isQcloudOwnerHasBeenSet;

                    /**
                     * 域名配置的NS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * Whois原始信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_raw;
                    bool m_rawHasBeenSet;

                    /**
                     * 域名注册商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_registrar;
                    bool m_registrarHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedDate;
                    bool m_updatedDateHasBeenSet;

                    /**
                     * dnssec
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dnssec;
                    bool m_dnssecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_WHOISINFO_H_
