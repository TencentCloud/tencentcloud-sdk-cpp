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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_

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
                * AddEnterpriseSecurityGroupRules请求参数结构体
                */
                class AddEnterpriseSecurityGroupRulesRequest : public AbstractModel
                {
                public:
                    AddEnterpriseSecurityGroupRulesRequest();
                    ~AddEnterpriseSecurityGroupRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待创建的规则数组，不能为空。每条规则必须提供访问源、访问目的、动作、非空描述和字符串 OrderIndex。未使用 ServiceTemplateId 时必须提供 Protocol 和 Port；使用 ServiceTemplateId 时二者可同时省略或留空，如填写非空值则必须为 Protocol=ANY、Port=-1/-1。Scope 可省略，默认使用 SG。
                     * @return Data 待创建的规则数组，不能为空。每条规则必须提供访问源、访问目的、动作、非空描述和字符串 OrderIndex。未使用 ServiceTemplateId 时必须提供 Protocol 和 Port；使用 ServiceTemplateId 时二者可同时省略或留空，如填写非空值则必须为 Protocol=ANY、Port=-1/-1。Scope 可省略，默认使用 SG。
                     * 
                     */
                    std::vector<SecurityGroupRule> GetData() const;

                    /**
                     * 设置待创建的规则数组，不能为空。每条规则必须提供访问源、访问目的、动作、非空描述和字符串 OrderIndex。未使用 ServiceTemplateId 时必须提供 Protocol 和 Port；使用 ServiceTemplateId 时二者可同时省略或留空，如填写非空值则必须为 Protocol=ANY、Port=-1/-1。Scope 可省略，默认使用 SG。
                     * @param _data 待创建的规则数组，不能为空。每条规则必须提供访问源、访问目的、动作、非空描述和字符串 OrderIndex。未使用 ServiceTemplateId 时必须提供 Protocol 和 Port；使用 ServiceTemplateId 时二者可同时省略或留空，如填写非空值则必须为 Protocol=ANY、Port=-1/-1。Scope 可省略，默认使用 SG。
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupRule>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

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
                     * 获取保留字段，不提供幂等保证；重复请求仍可能重复创建规则，建议省略。
                     * @return ClientToken 保留字段，不提供幂等保证；重复请求仍可能重复创建规则，建议省略。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置保留字段，不提供幂等保证；重复请求仍可能重复创建规则，建议省略。
                     * @param _clientToken 保留字段，不提供幂等保证；重复请求仍可能重复创建规则，建议省略。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取添加方式。batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号的全部可操作企业安全组规则后再添加 Data，添加失败时已删除的规则不会恢复，风险极高。两种批量导入都会使用 Data.Enable。其它值按普通新增处理。
                     * @return From 添加方式。batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号的全部可操作企业安全组规则后再添加 Data，添加失败时已删除的规则不会恢复，风险极高。两种批量导入都会使用 Data.Enable。其它值按普通新增处理。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置添加方式。batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号的全部可操作企业安全组规则后再添加 Data，添加失败时已删除的规则不会恢复，风险极高。两种批量导入都会使用 Data.Enable。其它值按普通新增处理。
                     * @param _from 添加方式。batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号的全部可操作企业安全组规则后再添加 Data，添加失败时已删除的规则不会恢复，风险极高。两种批量导入都会使用 Data.Enable。其它值按普通新增处理。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取延迟生效标记。1 表示将规则保留为待生效状态，0 表示按账号当前发布设置处理；省略等同于 0。账号停止自动发布时，规则仍保持待生效。
                     * @return IsDelay 延迟生效标记。1 表示将规则保留为待生效状态，0 表示按账号当前发布设置处理；省略等同于 0。账号停止自动发布时，规则仍保持待生效。
                     * 
                     */
                    uint64_t GetIsDelay() const;

                    /**
                     * 设置延迟生效标记。1 表示将规则保留为待生效状态，0 表示按账号当前发布设置处理；省略等同于 0。账号停止自动发布时，规则仍保持待生效。
                     * @param _isDelay 延迟生效标记。1 表示将规则保留为待生效状态，0 表示按账号当前发布设置处理；省略等同于 0。账号停止自动发布时，规则仍保持待生效。
                     * 
                     */
                    void SetIsDelay(const uint64_t& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

                    /**
                     * 获取规则 ID 复用标记。1 表示使用每条规则的 Data.Id，此时 Data.Id 传十进制数字字符串；其它值由系统分配 ID。重复 ID 会导致创建失败。
                     * @return IsUseId 规则 ID 复用标记。1 表示使用每条规则的 Data.Id，此时 Data.Id 传十进制数字字符串；其它值由系统分配 ID。重复 ID 会导致创建失败。
                     * 
                     */
                    int64_t GetIsUseId() const;

                    /**
                     * 设置规则 ID 复用标记。1 表示使用每条规则的 Data.Id，此时 Data.Id 传十进制数字字符串；其它值由系统分配 ID。重复 ID 会导致创建失败。
                     * @param _isUseId 规则 ID 复用标记。1 表示使用每条规则的 Data.Id，此时 Data.Id 传十进制数字字符串；其它值由系统分配 ID。重复 ID 会导致创建失败。
                     * 
                     */
                    void SetIsUseId(const int64_t& _isUseId);

                    /**
                     * 判断参数 IsUseId 是否已赋值
                     * @return IsUseId 是否已赋值
                     * 
                     */
                    bool IsUseIdHasBeenSet() const;

                    /**
                     * 获取添加位置类型，可省略，默认为 0：0 添加到末尾，1 添加到最前，2 从指定顺序插入。Type=0 或 1 按 Data 数组顺序确定最终顺序；Type=2 使用首条 Data.OrderIndex 作为插入位置，超过当前最大顺序时添加到末尾。
                     * @return Type 添加位置类型，可省略，默认为 0：0 添加到末尾，1 添加到最前，2 从指定顺序插入。Type=0 或 1 按 Data 数组顺序确定最终顺序；Type=2 使用首条 Data.OrderIndex 作为插入位置，超过当前最大顺序时添加到末尾。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置添加位置类型，可省略，默认为 0：0 添加到末尾，1 添加到最前，2 从指定顺序插入。Type=0 或 1 按 Data 数组顺序确定最终顺序；Type=2 使用首条 Data.OrderIndex 作为插入位置，超过当前最大顺序时添加到末尾。
                     * @param _type 添加位置类型，可省略，默认为 0：0 添加到末尾，1 添加到最前，2 从指定顺序插入。Type=0 或 1 按 Data 数组顺序确定最终顺序；Type=2 使用首条 Data.OrderIndex 作为插入位置，超过当前最大顺序时添加到末尾。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 待创建的规则数组，不能为空。每条规则必须提供访问源、访问目的、动作、非空描述和字符串 OrderIndex。未使用 ServiceTemplateId 时必须提供 Protocol 和 Port；使用 ServiceTemplateId 时二者可同时省略或留空，如填写非空值则必须为 Protocol=ANY、Port=-1/-1。Scope 可省略，默认使用 SG。
                     */
                    std::vector<SecurityGroupRule> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * 保留字段，不提供幂等保证；重复请求仍可能重复创建规则，建议省略。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 添加方式。batch_import 表示非覆盖批量导入；batch_import_cover 表示覆盖导入，会删除当前账号的全部可操作企业安全组规则后再添加 Data，添加失败时已删除的规则不会恢复，风险极高。两种批量导入都会使用 Data.Enable。其它值按普通新增处理。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 延迟生效标记。1 表示将规则保留为待生效状态，0 表示按账号当前发布设置处理；省略等同于 0。账号停止自动发布时，规则仍保持待生效。
                     */
                    uint64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * 规则 ID 复用标记。1 表示使用每条规则的 Data.Id，此时 Data.Id 传十进制数字字符串；其它值由系统分配 ID。重复 ID 会导致创建失败。
                     */
                    int64_t m_isUseId;
                    bool m_isUseIdHasBeenSet;

                    /**
                     * 添加位置类型，可省略，默认为 0：0 添加到末尾，1 添加到最前，2 从指定顺序插入。Type=0 或 1 按 Data 数组顺序确定最终顺序；Type=2 使用首条 Data.OrderIndex 作为插入位置，超过当前最大顺序时添加到末尾。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESREQUEST_H_
