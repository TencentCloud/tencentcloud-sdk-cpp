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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_

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
                * 源站配置。
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origins 主源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置主源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Origins 主源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取备源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupOrigins 备源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置备源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BackupOrigins 备源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取回源协议配置，取值有：
<li>http：强制 http 回源；</li>
<li>follow：协议跟随回源；</li>
<li>https：强制 https 回源，https 回源时仅支持源站 443 端口。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullProtocol 回源协议配置，取值有：
<li>http：强制 http 回源；</li>
<li>follow：协议跟随回源；</li>
<li>https：强制 https 回源，https 回源时仅支持源站 443 端口。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置回源协议配置，取值有：
<li>http：强制 http 回源；</li>
<li>follow：协议跟随回源；</li>
<li>https：强制 https 回源，https 回源时仅支持源站 443 端口。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginPullProtocol 回源协议配置，取值有：
<li>http：强制 http 回源；</li>
<li>follow：协议跟随回源；</li>
<li>https：强制 https 回源，https 回源时仅支持源站 443 端口。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPrivateAccess OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CosPrivateAccess OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCosPrivateAccess(const std::string& _cosPrivateAccess);

                    /**
                     * 判断参数 CosPrivateAccess 是否已赋值
                     * @return CosPrivateAccess 是否已赋值
                     */
                    bool CosPrivateAccessHasBeenSet() const;

                private:

                    /**
                     * 主源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * 备源站列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * 回源协议配置，取值有：
<li>http：强制 http 回源；</li>
<li>follow：协议跟随回源；</li>
<li>https：强制 https 回源，https 回源时仅支持源站 443 端口。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
