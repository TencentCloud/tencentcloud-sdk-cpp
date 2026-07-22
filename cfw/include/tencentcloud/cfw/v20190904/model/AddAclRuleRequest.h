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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CreateRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddAclRule请求参数结构体
                */
                class AddAclRuleRequest : public AbstractModel
                {
                public:
                    AddAclRuleRequest();
                    ~AddAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待添加的互联网边界规则列表，不能为空。每条规则都解析并校验方向、源目的、动作、范围、协议端口和模板；整个请求还会校验规则配额及可下发规则数量。批量覆盖的删除方向例外地只取首条规则。
                     * @return Rules 待添加的互联网边界规则列表，不能为空。每条规则都解析并校验方向、源目的、动作、范围、协议端口和模板；整个请求还会校验规则配额及可下发规则数量。批量覆盖的删除方向例外地只取首条规则。
                     * 
                     */
                    std::vector<CreateRuleItem> GetRules() const;

                    /**
                     * 设置待添加的互联网边界规则列表，不能为空。每条规则都解析并校验方向、源目的、动作、范围、协议端口和模板；整个请求还会校验规则配额及可下发规则数量。批量覆盖的删除方向例外地只取首条规则。
                     * @param _rules 待添加的互联网边界规则列表，不能为空。每条规则都解析并校验方向、源目的、动作、范围、协议端口和模板；整个请求还会校验规则配额及可下发规则数量。批量覆盖的删除方向例外地只取首条规则。
                     * 
                     */
                    void SetRules(const std::vector<CreateRuleItem>& _rules);

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
                     * 获取添加方式。省略或空字符串执行普通新增；insert_rule 标记为指定位置新增；batch_import 标记为批量导入；batch_import_cover 执行覆盖导入，在独立事务中先删除首条规则 Direction 对应的当前账号可操作分区旧规则，再插入 Rules；删除提交后，插入失败不会恢复旧规则。覆盖导入不会校验 Rules 的 Direction 全部相同，删除范围仍只由首条规则决定。其它字符串未由入口统一拒绝，但不属于本接口定义的支持合同，调用方不得依赖其行为。
                     * @return From 添加方式。省略或空字符串执行普通新增；insert_rule 标记为指定位置新增；batch_import 标记为批量导入；batch_import_cover 执行覆盖导入，在独立事务中先删除首条规则 Direction 对应的当前账号可操作分区旧规则，再插入 Rules；删除提交后，插入失败不会恢复旧规则。覆盖导入不会校验 Rules 的 Direction 全部相同，删除范围仍只由首条规则决定。其它字符串未由入口统一拒绝，但不属于本接口定义的支持合同，调用方不得依赖其行为。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置添加方式。省略或空字符串执行普通新增；insert_rule 标记为指定位置新增；batch_import 标记为批量导入；batch_import_cover 执行覆盖导入，在独立事务中先删除首条规则 Direction 对应的当前账号可操作分区旧规则，再插入 Rules；删除提交后，插入失败不会恢复旧规则。覆盖导入不会校验 Rules 的 Direction 全部相同，删除范围仍只由首条规则决定。其它字符串未由入口统一拒绝，但不属于本接口定义的支持合同，调用方不得依赖其行为。
                     * @param _from 添加方式。省略或空字符串执行普通新增；insert_rule 标记为指定位置新增；batch_import 标记为批量导入；batch_import_cover 执行覆盖导入，在独立事务中先删除首条规则 Direction 对应的当前账号可操作分区旧规则，再插入 Rules；删除提交后，插入失败不会恢复旧规则。覆盖导入不会校验 Rules 的 Direction 全部相同，删除范围仍只由首条规则决定。其它字符串未由入口统一拒绝，但不属于本接口定义的支持合同，调用方不得依赖其行为。
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
                     * 待添加的互联网边界规则列表，不能为空。每条规则都解析并校验方向、源目的、动作、范围、协议端口和模板；整个请求还会校验规则配额及可下发规则数量。批量覆盖的删除方向例外地只取首条规则。
                     */
                    std::vector<CreateRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * 添加方式。省略或空字符串执行普通新增；insert_rule 标记为指定位置新增；batch_import 标记为批量导入；batch_import_cover 执行覆盖导入，在独立事务中先删除首条规则 Direction 对应的当前账号可操作分区旧规则，再插入 Rules；删除提交后，插入失败不会恢复旧规则。覆盖导入不会校验 Rules 的 Direction 全部相同，删除范围仍只由首条规则决定。其它字符串未由入口统一拒绝，但不属于本接口定义的支持合同，调用方不得依赖其行为。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
