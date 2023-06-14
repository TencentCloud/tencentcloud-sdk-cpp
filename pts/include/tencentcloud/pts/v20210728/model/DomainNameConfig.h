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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/HostAlias.h>
#include <tencentcloud/pts/v20210728/model/DNSConfig.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 施压机的域名解析相关配置
                */
                class DomainNameConfig : public AbstractModel
                {
                public:
                    DomainNameConfig();
                    ~DomainNameConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名绑定配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostAliases 域名绑定配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HostAlias> GetHostAliases() const;

                    /**
                     * 设置域名绑定配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostAliases 域名绑定配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostAliases(const std::vector<HostAlias>& _hostAliases);

                    /**
                     * 判断参数 HostAliases 是否已赋值
                     * @return HostAliases 是否已赋值
                     * 
                     */
                    bool HostAliasesHasBeenSet() const;

                    /**
                     * 获取DNS 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DNSConfig DNS 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DNSConfig GetDNSConfig() const;

                    /**
                     * 设置DNS 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dNSConfig DNS 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDNSConfig(const DNSConfig& _dNSConfig);

                    /**
                     * 判断参数 DNSConfig 是否已赋值
                     * @return DNSConfig 是否已赋值
                     * 
                     */
                    bool DNSConfigHasBeenSet() const;

                private:

                    /**
                     * 域名绑定配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HostAlias> m_hostAliases;
                    bool m_hostAliasesHasBeenSet;

                    /**
                     * DNS 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DNSConfig m_dNSConfig;
                    bool m_dNSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DOMAINNAMECONFIG_H_
