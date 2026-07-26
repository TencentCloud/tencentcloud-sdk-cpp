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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyVpcAcRule请求参数结构体
                */
                class ModifyVpcAcRuleRequest : public AbstractModel
                {
                public:
                    ModifyVpcAcRuleRequest();
                    ~ModifyVpcAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的规则数组，必须恰好包含一条完整规则，不是局部更新。调用 DescribeCfwRules，传 RuleType=vpc、目标 RuleUuid、ExpandNames=false 获取原规则。字段转换：uuid→Uuid，sequence→OrderIndex，src_ip→SourceContent，src_type→SourceType，dst_content→DestContent，dst_type→DestType，dst_port→Port，detail→Description，edge_id→EdgeId，fwgroupid→FwGroupId，ip_version→IpVersion；action 的 0、1、2 分别转换为 log、drop、accept，enabled 的布尔值转换为字符串 true、false；protocol、param_template_id、dest_value_type 分别写入 Protocol、ParamTemplateId、DestValueType。src_type 和 dst_type 的 1、2、3、4/5、6、8、9、10、100 分别对应 net、url、domain、template、instance、tag、dnsparse、domainiptwoverify、group；仅当转换结果属于对应 SourceType 或 DestType 的有效取值时才能提交。省略的可写字段不会继承旧值，IpVersion=0 也必须传入。不修改生效范围时，将原规则的 edge_id 和 fwgroupid 原样写入 EdgeId 和 FwGroupId；主动更换时，EdgeId 通过 DescribeVpcAclEdgeRange 查询，FwGroupId 通过 DescribeFwGroupIdNames 查询。
                     * @return Rules 待修改的规则数组，必须恰好包含一条完整规则，不是局部更新。调用 DescribeCfwRules，传 RuleType=vpc、目标 RuleUuid、ExpandNames=false 获取原规则。字段转换：uuid→Uuid，sequence→OrderIndex，src_ip→SourceContent，src_type→SourceType，dst_content→DestContent，dst_type→DestType，dst_port→Port，detail→Description，edge_id→EdgeId，fwgroupid→FwGroupId，ip_version→IpVersion；action 的 0、1、2 分别转换为 log、drop、accept，enabled 的布尔值转换为字符串 true、false；protocol、param_template_id、dest_value_type 分别写入 Protocol、ParamTemplateId、DestValueType。src_type 和 dst_type 的 1、2、3、4/5、6、8、9、10、100 分别对应 net、url、domain、template、instance、tag、dnsparse、domainiptwoverify、group；仅当转换结果属于对应 SourceType 或 DestType 的有效取值时才能提交。省略的可写字段不会继承旧值，IpVersion=0 也必须传入。不修改生效范围时，将原规则的 edge_id 和 fwgroupid 原样写入 EdgeId 和 FwGroupId；主动更换时，EdgeId 通过 DescribeVpcAclEdgeRange 查询，FwGroupId 通过 DescribeFwGroupIdNames 查询。
                     * 
                     */
                    std::vector<VpcRuleItem> GetRules() const;

                    /**
                     * 设置待修改的规则数组，必须恰好包含一条完整规则，不是局部更新。调用 DescribeCfwRules，传 RuleType=vpc、目标 RuleUuid、ExpandNames=false 获取原规则。字段转换：uuid→Uuid，sequence→OrderIndex，src_ip→SourceContent，src_type→SourceType，dst_content→DestContent，dst_type→DestType，dst_port→Port，detail→Description，edge_id→EdgeId，fwgroupid→FwGroupId，ip_version→IpVersion；action 的 0、1、2 分别转换为 log、drop、accept，enabled 的布尔值转换为字符串 true、false；protocol、param_template_id、dest_value_type 分别写入 Protocol、ParamTemplateId、DestValueType。src_type 和 dst_type 的 1、2、3、4/5、6、8、9、10、100 分别对应 net、url、domain、template、instance、tag、dnsparse、domainiptwoverify、group；仅当转换结果属于对应 SourceType 或 DestType 的有效取值时才能提交。省略的可写字段不会继承旧值，IpVersion=0 也必须传入。不修改生效范围时，将原规则的 edge_id 和 fwgroupid 原样写入 EdgeId 和 FwGroupId；主动更换时，EdgeId 通过 DescribeVpcAclEdgeRange 查询，FwGroupId 通过 DescribeFwGroupIdNames 查询。
                     * @param _rules 待修改的规则数组，必须恰好包含一条完整规则，不是局部更新。调用 DescribeCfwRules，传 RuleType=vpc、目标 RuleUuid、ExpandNames=false 获取原规则。字段转换：uuid→Uuid，sequence→OrderIndex，src_ip→SourceContent，src_type→SourceType，dst_content→DestContent，dst_type→DestType，dst_port→Port，detail→Description，edge_id→EdgeId，fwgroupid→FwGroupId，ip_version→IpVersion；action 的 0、1、2 分别转换为 log、drop、accept，enabled 的布尔值转换为字符串 true、false；protocol、param_template_id、dest_value_type 分别写入 Protocol、ParamTemplateId、DestValueType。src_type 和 dst_type 的 1、2、3、4/5、6、8、9、10、100 分别对应 net、url、domain、template、instance、tag、dnsparse、domainiptwoverify、group；仅当转换结果属于对应 SourceType 或 DestType 的有效取值时才能提交。省略的可写字段不会继承旧值，IpVersion=0 也必须传入。不修改生效范围时，将原规则的 edge_id 和 fwgroupid 原样写入 EdgeId 和 FwGroupId；主动更换时，EdgeId 通过 DescribeVpcAclEdgeRange 查询，FwGroupId 通过 DescribeFwGroupIdNames 查询。
                     * 
                     */
                    void SetRules(const std::vector<VpcRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

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

                private:

                    /**
                     * 待修改的规则数组，必须恰好包含一条完整规则，不是局部更新。调用 DescribeCfwRules，传 RuleType=vpc、目标 RuleUuid、ExpandNames=false 获取原规则。字段转换：uuid→Uuid，sequence→OrderIndex，src_ip→SourceContent，src_type→SourceType，dst_content→DestContent，dst_type→DestType，dst_port→Port，detail→Description，edge_id→EdgeId，fwgroupid→FwGroupId，ip_version→IpVersion；action 的 0、1、2 分别转换为 log、drop、accept，enabled 的布尔值转换为字符串 true、false；protocol、param_template_id、dest_value_type 分别写入 Protocol、ParamTemplateId、DestValueType。src_type 和 dst_type 的 1、2、3、4/5、6、8、9、10、100 分别对应 net、url、domain、template、instance、tag、dnsparse、domainiptwoverify、group；仅当转换结果属于对应 SourceType 或 DestType 的有效取值时才能提交。省略的可写字段不会继承旧值，IpVersion=0 也必须传入。不修改生效范围时，将原规则的 edge_id 和 fwgroupid 原样写入 EdgeId 和 FwGroupId；主动更换时，EdgeId 通过 DescribeVpcAclEdgeRange 查询，FwGroupId 通过 DescribeFwGroupIdNames 查询。
                     */
                    std::vector<VpcRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_
