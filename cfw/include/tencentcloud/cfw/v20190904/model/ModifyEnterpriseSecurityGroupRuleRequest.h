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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyEnterpriseSecurityGroupRule请求参数结构体
                */
                class ModifyEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    ModifyEnterpriseSecurityGroupRuleRequest();
                    ~ModifyEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改类型，仅接受 0、1、2。0：用 Data 完整替换 RuleUuid 指定规则的可写内容；1：修改 RuleUuid 指定规则的启停状态；2：修改当前账号全部可操作规则的启停状态。
                     * @return ModifyType 修改类型，仅接受 0、1、2。0：用 Data 完整替换 RuleUuid 指定规则的可写内容；1：修改 RuleUuid 指定规则的启停状态；2：修改当前账号全部可操作规则的启停状态。
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置修改类型，仅接受 0、1、2。0：用 Data 完整替换 RuleUuid 指定规则的可写内容；1：修改 RuleUuid 指定规则的启停状态；2：修改当前账号全部可操作规则的启停状态。
                     * @param _modifyType 修改类型，仅接受 0、1、2。0：用 Data 完整替换 RuleUuid 指定规则的可写内容；1：修改 RuleUuid 指定规则的启停状态；2：修改当前账号全部可操作规则的启停状态。
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取规则数值 ID。ModifyType=0 或 1 时，调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false，并使用返回的 rules[].uuid；ModifyType=2 时传 0。
                     * @return RuleUuid 规则数值 ID。ModifyType=0 或 1 时，调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false，并使用返回的 rules[].uuid；ModifyType=2 时传 0。
                     * 
                     */
                    uint64_t GetRuleUuid() const;

                    /**
                     * 设置规则数值 ID。ModifyType=0 或 1 时，调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false，并使用返回的 rules[].uuid；ModifyType=2 时传 0。
                     * @param _ruleUuid 规则数值 ID。ModifyType=0 或 1 时，调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false，并使用返回的 rules[].uuid；ModifyType=2 时传 0。
                     * 
                     */
                    void SetRuleUuid(const uint64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取ModifyType=0 时必填的完整规则内容对象，不是局部更新。调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false 获取原规则：src_content、dst_content 分别写入 SourceContent、DestContent；src_type 和 dst_type 的 0、1/2/3/4/5/6/16/24/25、7、8、9/10、100 分别对应 net、instance、template、tag、region、resourcegroup，DestType 的 20 对应 dnsparse；未列出的数值类型不能转换。再调用 DescribeEnterpriseSecurityGroupRule，使用同一 RuleUuid 获取 OrderIndex、Protocol、Port、RuleAction、Description、Scope 和 ServiceTemplateId。缺失字段按空值处理，仅 Scope 省略时保留原值。ModifyType=1 或 2 时不传 Data。
                     * @return Data ModifyType=0 时必填的完整规则内容对象，不是局部更新。调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false 获取原规则：src_content、dst_content 分别写入 SourceContent、DestContent；src_type 和 dst_type 的 0、1/2/3/4/5/6/16/24/25、7、8、9/10、100 分别对应 net、instance、template、tag、region、resourcegroup，DestType 的 20 对应 dnsparse；未列出的数值类型不能转换。再调用 DescribeEnterpriseSecurityGroupRule，使用同一 RuleUuid 获取 OrderIndex、Protocol、Port、RuleAction、Description、Scope 和 ServiceTemplateId。缺失字段按空值处理，仅 Scope 省略时保留原值。ModifyType=1 或 2 时不传 Data。
                     * 
                     */
                    SecurityGroupRule GetData() const;

                    /**
                     * 设置ModifyType=0 时必填的完整规则内容对象，不是局部更新。调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false 获取原规则：src_content、dst_content 分别写入 SourceContent、DestContent；src_type 和 dst_type 的 0、1/2/3/4/5/6/16/24/25、7、8、9/10、100 分别对应 net、instance、template、tag、region、resourcegroup，DestType 的 20 对应 dnsparse；未列出的数值类型不能转换。再调用 DescribeEnterpriseSecurityGroupRule，使用同一 RuleUuid 获取 OrderIndex、Protocol、Port、RuleAction、Description、Scope 和 ServiceTemplateId。缺失字段按空值处理，仅 Scope 省略时保留原值。ModifyType=1 或 2 时不传 Data。
                     * @param _data ModifyType=0 时必填的完整规则内容对象，不是局部更新。调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false 获取原规则：src_content、dst_content 分别写入 SourceContent、DestContent；src_type 和 dst_type 的 0、1/2/3/4/5/6/16/24/25、7、8、9/10、100 分别对应 net、instance、template、tag、region、resourcegroup，DestType 的 20 对应 dnsparse；未列出的数值类型不能转换。再调用 DescribeEnterpriseSecurityGroupRule，使用同一 RuleUuid 获取 OrderIndex、Protocol、Port、RuleAction、Description、Scope 和 ServiceTemplateId。缺失字段按空值处理，仅 Scope 省略时保留原值。ModifyType=1 或 2 时不传 Data。
                     * 
                     */
                    void SetData(const SecurityGroupRule& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取规则状态，JSON 整数：0 表示关闭，1 表示开启。ModifyType=1 时修改 RuleUuid 指定规则，ModifyType=2 时修改当前账号的全部可操作规则；这两种模式下应显式填写。ModifyType=0 时忽略该字段。
                     * @return Enable 规则状态，JSON 整数：0 表示关闭，1 表示开启。ModifyType=1 时修改 RuleUuid 指定规则，ModifyType=2 时修改当前账号的全部可操作规则；这两种模式下应显式填写。ModifyType=0 时忽略该字段。
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置规则状态，JSON 整数：0 表示关闭，1 表示开启。ModifyType=1 时修改 RuleUuid 指定规则，ModifyType=2 时修改当前账号的全部可操作规则；这两种模式下应显式填写。ModifyType=0 时忽略该字段。
                     * @param _enable 规则状态，JSON 整数：0 表示关闭，1 表示开启。ModifyType=1 时修改 RuleUuid 指定规则，ModifyType=2 时修改当前账号的全部可操作规则；这两种模式下应显式填写。ModifyType=0 时忽略该字段。
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 修改类型，仅接受 0、1、2。0：用 Data 完整替换 RuleUuid 指定规则的可写内容；1：修改 RuleUuid 指定规则的启停状态；2：修改当前账号全部可操作规则的启停状态。
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 规则数值 ID。ModifyType=0 或 1 时，调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false，并使用返回的 rules[].uuid；ModifyType=2 时传 0。
                     */
                    uint64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * ModifyType=0 时必填的完整规则内容对象，不是局部更新。调用 DescribeCfwRules，传 RuleType=enterprise_sg、RuleId=<数值 RuleUuid>、ExpandNames=false 获取原规则：src_content、dst_content 分别写入 SourceContent、DestContent；src_type 和 dst_type 的 0、1/2/3/4/5/6/16/24/25、7、8、9/10、100 分别对应 net、instance、template、tag、region、resourcegroup，DestType 的 20 对应 dnsparse；未列出的数值类型不能转换。再调用 DescribeEnterpriseSecurityGroupRule，使用同一 RuleUuid 获取 OrderIndex、Protocol、Port、RuleAction、Description、Scope 和 ServiceTemplateId。缺失字段按空值处理，仅 Scope 省略时保留原值。ModifyType=1 或 2 时不传 Data。
                     */
                    SecurityGroupRule m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 规则状态，JSON 整数：0 表示关闭，1 表示开启。ModifyType=1 时修改 RuleUuid 指定规则，ModifyType=2 时修改当前账号的全部可操作规则；这两种模式下应显式填写。ModifyType=0 时忽略该字段。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_
