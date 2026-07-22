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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * RuleType=6 使用的自定义放通规则详情。SrcIP、DstIP 至少一项必须是具体 IP；另一项可省略或使用与具体 IP 同版本的通配网段 0.0.0.0/0、::/0。两项均为具体 IP 时，当前处理器拒绝源 IPv6、目的 IPv4 的组合；源 IPv4、目的 IPv6 的反向组合当前不受该版本检查限制。资产判定中，私网 IPv4 和任意 IPv6 直接通过，公网 IPv4 必须存在于当前账号 cfw_public_ip。两项均为具体 IP 时至少一项须通过资产判定；仅一项为具体 IP 且另一项省略或为同版本通配网段时，若实际 FwType 包含互联网边界位 1，该具体 IP 也必须通过资产判定。处理器据此计算规则方向和适用引擎。
                */
                class CustomWhiteRule : public AbstractModel
                {
                public:
                    CustomWhiteRule();
                    ~CustomWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义规则的目的地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 SrcIP 为具体 IP 时可省略或使用与 SrcIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * @return DstIP 自定义规则的目的地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 SrcIP 为具体 IP 时可省略或使用与 SrcIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置自定义规则的目的地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 SrcIP 为具体 IP 时可省略或使用与 SrcIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * @param _dstIP 自定义规则的目的地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 SrcIP 为具体 IP 时可省略或使用与 SrcIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取自定义规则关联的入侵防御规则 ID；必须是可转换为整数且在入侵防御规则模板中存在的 ID。
                     * @return IdsRuleId 自定义规则关联的入侵防御规则 ID；必须是可转换为整数且在入侵防御规则模板中存在的 ID。
                     * 
                     */
                    std::string GetIdsRuleId() const;

                    /**
                     * 设置自定义规则关联的入侵防御规则 ID；必须是可转换为整数且在入侵防御规则模板中存在的 ID。
                     * @param _idsRuleId 自定义规则关联的入侵防御规则 ID；必须是可转换为整数且在入侵防御规则模板中存在的 ID。
                     * 
                     */
                    void SetIdsRuleId(const std::string& _idsRuleId);

                    /**
                     * 判断参数 IdsRuleId 是否已赋值
                     * @return IdsRuleId 是否已赋值
                     * 
                     */
                    bool IdsRuleIdHasBeenSet() const;

                    /**
                     * 获取自定义规则名称；处理器不对内容做额外校验。
                     * @return IdsRuleName 自定义规则名称；处理器不对内容做额外校验。
                     * 
                     */
                    std::string GetIdsRuleName() const;

                    /**
                     * 设置自定义规则名称；处理器不对内容做额外校验。
                     * @param _idsRuleName 自定义规则名称；处理器不对内容做额外校验。
                     * 
                     */
                    void SetIdsRuleName(const std::string& _idsRuleName);

                    /**
                     * 判断参数 IdsRuleName 是否已赋值
                     * @return IdsRuleName 是否已赋值
                     * 
                     */
                    bool IdsRuleNameHasBeenSet() const;

                    /**
                     * 获取自定义规则的源地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 DstIP 为具体 IP 时可省略或使用与 DstIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * @return SrcIP 自定义规则的源地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 DstIP 为具体 IP 时可省略或使用与 DstIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置自定义规则的源地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 DstIP 为具体 IP 时可省略或使用与 DstIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * @param _srcIP 自定义规则的源地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 DstIP 为具体 IP 时可省略或使用与 DstIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                private:

                    /**
                     * 自定义规则的目的地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 SrcIP 为具体 IP 时可省略或使用与 SrcIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * 自定义规则关联的入侵防御规则 ID；必须是可转换为整数且在入侵防御规则模板中存在的 ID。
                     */
                    std::string m_idsRuleId;
                    bool m_idsRuleIdHasBeenSet;

                    /**
                     * 自定义规则名称；处理器不对内容做额外校验。
                     */
                    std::string m_idsRuleName;
                    bool m_idsRuleNameHasBeenSet;

                    /**
                     * 自定义规则的源地址。SrcIP、DstIP 至少一项必须是具体 IP；本字段仅在 DstIP 为具体 IP 时可省略或使用与 DstIP 同版本的通配网段。两项均为具体 IP 时，源 IPv6、目的 IPv4 会被拒绝，源 IPv4、目的 IPv6 当前不受该版本检查限制。私网 IPv4 和任意 IPv6 直接通过资产判定，公网 IPv4 必须存在于当前账号 cfw_public_ip；是否要求通过资产判定由两侧地址与实际 FwType 联动决定。
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CUSTOMWHITERULE_H_
