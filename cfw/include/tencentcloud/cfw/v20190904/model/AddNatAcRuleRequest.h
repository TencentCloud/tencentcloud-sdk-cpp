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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddNatAcRule请求参数结构体
                */
                class AddNatAcRuleRequest : public AbstractModel
                {
                public:
                    AddNatAcRuleRequest();
                    ~AddNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要添加的 NAT 访问控制规则列表，至少一项。Direction、地址类型与内容、Protocol、RuleAction 和 Scope 会逐项校验；Description、Enable、OrderIndex 和 Scope 的缺省或归一化行为见对应字段说明。Scope 调用无业务参数的 DescribeNatRuleScopes，使用 ScopeItems[].Scope，不要使用 ScopeDesc。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON 字符串 {"Key":"标签键","Value":"标签值"}，不要写入 GroupId；地域调用 DescribeAclRegInfo，传 FwType=["NAT"] 并使用 Data[].RegionCode。不得使用展示名称或自行拼接。</p>
                     * @return Rules <p>要添加的 NAT 访问控制规则列表，至少一项。Direction、地址类型与内容、Protocol、RuleAction 和 Scope 会逐项校验；Description、Enable、OrderIndex 和 Scope 的缺省或归一化行为见对应字段说明。Scope 调用无业务参数的 DescribeNatRuleScopes，使用 ScopeItems[].Scope，不要使用 ScopeDesc。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON 字符串 {"Key":"标签键","Value":"标签值"}，不要写入 GroupId；地域调用 DescribeAclRegInfo，传 FwType=["NAT"] 并使用 Data[].RegionCode。不得使用展示名称或自行拼接。</p>
                     * 
                     */
                    std::vector<CreateNatRuleItem> GetRules() const;

                    /**
                     * 设置<p>要添加的 NAT 访问控制规则列表，至少一项。Direction、地址类型与内容、Protocol、RuleAction 和 Scope 会逐项校验；Description、Enable、OrderIndex 和 Scope 的缺省或归一化行为见对应字段说明。Scope 调用无业务参数的 DescribeNatRuleScopes，使用 ScopeItems[].Scope，不要使用 ScopeDesc。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON 字符串 {"Key":"标签键","Value":"标签值"}，不要写入 GroupId；地域调用 DescribeAclRegInfo，传 FwType=["NAT"] 并使用 Data[].RegionCode。不得使用展示名称或自行拼接。</p>
                     * @param _rules <p>要添加的 NAT 访问控制规则列表，至少一项。Direction、地址类型与内容、Protocol、RuleAction 和 Scope 会逐项校验；Description、Enable、OrderIndex 和 Scope 的缺省或归一化行为见对应字段说明。Scope 调用无业务参数的 DescribeNatRuleScopes，使用 ScopeItems[].Scope，不要使用 ScopeDesc。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON 字符串 {"Key":"标签键","Value":"标签值"}，不要写入 GroupId；地域调用 DescribeAclRegInfo，传 FwType=["NAT"] 并使用 Data[].RegionCode。不得使用展示名称或自行拼接。</p>
                     * 
                     */
                    void SetRules(const std::vector<CreateNatRuleItem>& _rules);

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
                     * 获取<p>添加方式。省略或为空表示普通新增；insert_rule 表示指定位置新增；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号中与首条规则同方向的全部可操作 NAT边界规则后再添加 Rules，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。</p>
                     * @return From <p>添加方式。省略或为空表示普通新增；insert_rule 表示指定位置新增；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号中与首条规则同方向的全部可操作 NAT边界规则后再添加 Rules，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。</p>
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置<p>添加方式。省略或为空表示普通新增；insert_rule 表示指定位置新增；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号中与首条规则同方向的全部可操作 NAT边界规则后再添加 Rules，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。</p>
                     * @param _from <p>添加方式。省略或为空表示普通新增；insert_rule 表示指定位置新增；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号中与首条规则同方向的全部可操作 NAT边界规则后再添加 Rules，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。</p>
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
                     * <p>要添加的 NAT 访问控制规则列表，至少一项。Direction、地址类型与内容、Protocol、RuleAction 和 Scope 会逐项校验；Description、Enable、OrderIndex 和 Scope 的缺省或归一化行为见对应字段说明。Scope 调用无业务参数的 DescribeNatRuleScopes，使用 ScopeItems[].Scope，不要使用 ScopeDesc。地址模板调用 DescribeAddressTemplateList，请求用 TemplateType=1 或 5 过滤，并确认返回项 Data[].Type 为 1 或 5；将 Data[].Uuid（mb_ 前缀）写入对应 Content，不要使用 Data[].TemplateId（ip-/dm- 前缀）。协议端口模板请求用 TemplateType=6 过滤，并将 Data[].TemplateId（pp- 前缀）写入 ParamTemplateId。资产实例调用 DescribeCfwAssets，解析返回结果后使用 assets[].instance_id；资产分组调用 DescribeResourceGroupNew，传 QueryType=resource、GroupId="0"、ShowType=all，解析返回结果后使用 GroupId；资源标签传 QueryType=tag，跳过“全部资产”根节点，以一级节点 GroupName 为 Key、所选二级子节点 GroupName 为 Value 构造 JSON 字符串 {"Key":"标签键","Value":"标签值"}，不要写入 GroupId；地域调用 DescribeAclRegInfo，传 FwType=["NAT"] 并使用 Data[].RegionCode。不得使用展示名称或自行拼接。</p>
                     */
                    std::vector<CreateNatRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>添加方式。省略或为空表示普通新增；insert_rule 表示指定位置新增；batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号中与首条规则同方向的全部可操作 NAT边界规则后再添加 Rules，添加失败时已删除的规则不会恢复，风险极高。仅支持上述取值。</p>
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_
