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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight访问控制规则
                */
                class AccessControlRule : public AbstractModel
                {
                public:
                    AccessControlRule();
                    ~AccessControlRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网段或IP，支持IPv4或IPv6。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrBlocks <p>网段或IP，支持IPv4或IPv6。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCidrBlocks() const;

                    /**
                     * 设置<p>网段或IP，支持IPv4或IPv6。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cidrBlocks <p>网段或IP，支持IPv4或IPv6。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCidrBlocks(const std::vector<std::string>& _cidrBlocks);

                    /**
                     * 判断参数 CidrBlocks 是否已赋值
                     * @return CidrBlocks 是否已赋值
                     * 
                     */
                    bool CidrBlocksHasBeenSet() const;

                    /**
                     * 获取<p>ACCEPT 或 DROP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action <p>ACCEPT 或 DROP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>ACCEPT 或 DROP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action <p>ACCEPT 或 DROP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>访问方式：public - 公网，internal - 内网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessMode <p>访问方式：public - 公网，internal - 内网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>访问方式：public - 公网，internal - 内网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessMode <p>访问方式：public - 公网，internal - 内网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                private:

                    /**
                     * <p>网段或IP，支持IPv4或IPv6。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cidrBlocks;
                    bool m_cidrBlocksHasBeenSet;

                    /**
                     * <p>ACCEPT 或 DROP。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>访问方式：public - 公网，internal - 内网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_
