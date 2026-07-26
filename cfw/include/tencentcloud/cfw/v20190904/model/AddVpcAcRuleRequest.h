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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDVPCACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDVPCACRULEREQUEST_H_

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
                * AddVpcAcRule请求参数结构体
                */
                class AddVpcAcRuleRequest : public AbstractModel
                {
                public:
                    AddVpcAcRuleRequest();
                    ~AddVpcAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待添加的 VPC边界规则列表，至少包含一条，可包含不同 IpVersion。EdgeId 调用 DescribeVpcAclEdgeRange，传 FromList=switchs，并使用 EdgeRanges[].EdgeId；FromList=rules 只返回已有规则使用过的范围，不用于发现可新增范围。FwGroupId 调用 DescribeFwGroupIdNames，IpVersion 使用与目标规则相同的 JSON 整数 0 或 1，并使用 Data[].FwGroupId，不要使用 FwGroupName。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON，不要写入 GroupId。batch_import_cover 的覆盖范围仅由首条规则的 IpVersion 决定。
                     * @return Rules 待添加的 VPC边界规则列表，至少包含一条，可包含不同 IpVersion。EdgeId 调用 DescribeVpcAclEdgeRange，传 FromList=switchs，并使用 EdgeRanges[].EdgeId；FromList=rules 只返回已有规则使用过的范围，不用于发现可新增范围。FwGroupId 调用 DescribeFwGroupIdNames，IpVersion 使用与目标规则相同的 JSON 整数 0 或 1，并使用 Data[].FwGroupId，不要使用 FwGroupName。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON，不要写入 GroupId。batch_import_cover 的覆盖范围仅由首条规则的 IpVersion 决定。
                     * 
                     */
                    std::vector<VpcRuleItem> GetRules() const;

                    /**
                     * 设置待添加的 VPC边界规则列表，至少包含一条，可包含不同 IpVersion。EdgeId 调用 DescribeVpcAclEdgeRange，传 FromList=switchs，并使用 EdgeRanges[].EdgeId；FromList=rules 只返回已有规则使用过的范围，不用于发现可新增范围。FwGroupId 调用 DescribeFwGroupIdNames，IpVersion 使用与目标规则相同的 JSON 整数 0 或 1，并使用 Data[].FwGroupId，不要使用 FwGroupName。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON，不要写入 GroupId。batch_import_cover 的覆盖范围仅由首条规则的 IpVersion 决定。
                     * @param _rules 待添加的 VPC边界规则列表，至少包含一条，可包含不同 IpVersion。EdgeId 调用 DescribeVpcAclEdgeRange，传 FromList=switchs，并使用 EdgeRanges[].EdgeId；FromList=rules 只返回已有规则使用过的范围，不用于发现可新增范围。FwGroupId 调用 DescribeFwGroupIdNames，IpVersion 使用与目标规则相同的 JSON 整数 0 或 1，并使用 Data[].FwGroupId，不要使用 FwGroupName。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON，不要写入 GroupId。batch_import_cover 的覆盖范围仅由首条规则的 IpVersion 决定。
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

                    /**
                     * 获取添加方式。省略或为空表示普通新增；insert_rule 表示按 OrderIndex 插入；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除首条规则 IpVersion 对应的现有可操作规则后再按 Rules 顺序添加，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。
                     * @return From 添加方式。省略或为空表示普通新增；insert_rule 表示按 OrderIndex 插入；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除首条规则 IpVersion 对应的现有可操作规则后再按 Rules 顺序添加，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置添加方式。省略或为空表示普通新增；insert_rule 表示按 OrderIndex 插入；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除首条规则 IpVersion 对应的现有可操作规则后再按 Rules 顺序添加，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。
                     * @param _from 添加方式。省略或为空表示普通新增；insert_rule 表示按 OrderIndex 插入；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除首条规则 IpVersion 对应的现有可操作规则后再按 Rules 顺序添加，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * 待添加的 VPC边界规则列表，至少包含一条，可包含不同 IpVersion。EdgeId 调用 DescribeVpcAclEdgeRange，传 FromList=switchs，并使用 EdgeRanges[].EdgeId；FromList=rules 只返回已有规则使用过的范围，不用于发现可新增范围。FwGroupId 调用 DescribeFwGroupIdNames，IpVersion 使用与目标规则相同的 JSON 整数 0 或 1，并使用 Data[].FwGroupId，不要使用 FwGroupName。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON，不要写入 GroupId。batch_import_cover 的覆盖范围仅由首条规则的 IpVersion 决定。
                     */
                    std::vector<VpcRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * 添加方式。省略或为空表示普通新增；insert_rule 表示按 OrderIndex 插入；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除首条规则 IpVersion 对应的现有可操作规则后再按 Rules 顺序添加，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDVPCACRULEREQUEST_H_
