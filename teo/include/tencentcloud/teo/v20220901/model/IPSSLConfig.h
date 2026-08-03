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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP SSL相关信息
                */
                class IPSSLConfig : public AbstractModel
                {
                public:
                    IPSSLConfig();
                    ~IPSSLConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IP SSL 关联域名所属站点ID。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>IP SSL 关联域名所属站点ID。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>IP SSL 关联域名所属站点ID。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>IP SSL 关联域名所属站点ID。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>IP SSL关联的域名。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedDomain <p>IP SSL关联的域名。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssociatedDomain() const;

                    /**
                     * 设置<p>IP SSL关联的域名。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedDomain <p>IP SSL关联的域名。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociatedDomain(const std::string& _associatedDomain);

                    /**
                     * 判断参数 AssociatedDomain 是否已赋值
                     * @return AssociatedDomain 是否已赋值
                     * 
                     */
                    bool AssociatedDomainHasBeenSet() const;

                    /**
                     * 获取<p>关联状态， 取值如下：</p><li>bound：IP SSL配置已绑定</li><li>binding：IP SSL配置绑定中</li><li>unbinding：IP SSL配置解绑中</li><li>unbound：IP SSL配置未绑定</li>
                     * @return Status <p>关联状态， 取值如下：</p><li>bound：IP SSL配置已绑定</li><li>binding：IP SSL配置绑定中</li><li>unbinding：IP SSL配置解绑中</li><li>unbound：IP SSL配置未绑定</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>关联状态， 取值如下：</p><li>bound：IP SSL配置已绑定</li><li>binding：IP SSL配置绑定中</li><li>unbinding：IP SSL配置解绑中</li><li>unbound：IP SSL配置未绑定</li>
                     * @param _status <p>关联状态， 取值如下：</p><li>bound：IP SSL配置已绑定</li><li>binding：IP SSL配置绑定中</li><li>unbinding：IP SSL配置解绑中</li><li>unbound：IP SSL配置未绑定</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>IP SSL 关联域名所属站点ID。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>IP SSL关联的域名。如果Status值为 unbound 时，该字段为空值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_associatedDomain;
                    bool m_associatedDomainHasBeenSet;

                    /**
                     * <p>关联状态， 取值如下：</p><li>bound：IP SSL配置已绑定</li><li>binding：IP SSL配置绑定中</li><li>unbinding：IP SSL配置解绑中</li><li>unbound：IP SSL配置未绑定</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_
