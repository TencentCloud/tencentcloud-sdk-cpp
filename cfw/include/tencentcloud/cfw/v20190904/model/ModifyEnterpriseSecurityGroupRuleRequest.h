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
                     * 获取<p>规则的uuid，可通过查询规则列表获取</p>
                     * @return RuleUuid <p>规则的uuid，可通过查询规则列表获取</p>
                     * 
                     */
                    uint64_t GetRuleUuid() const;

                    /**
                     * 设置<p>规则的uuid，可通过查询规则列表获取</p>
                     * @param _ruleUuid <p>规则的uuid，可通过查询规则列表获取</p>
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
                     * 获取<p>修改类型，0：修改规则内容；1：修改单条规则开关状态；2：修改所有规则开关状态</p>
                     * @return ModifyType <p>修改类型，0：修改规则内容；1：修改单条规则开关状态；2：修改所有规则开关状态</p>
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置<p>修改类型，0：修改规则内容；1：修改单条规则开关状态；2：修改所有规则开关状态</p>
                     * @param _modifyType <p>修改类型，0：修改规则内容；1：修改单条规则开关状态；2：修改所有规则开关状态</p>
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
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
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
                     * 获取<p>编辑后的企业安全组规则数据；修改规则状态不用填该字段</p>
                     * @return Data <p>编辑后的企业安全组规则数据；修改规则状态不用填该字段</p>
                     * 
                     */
                    SecurityGroupRule GetData() const;

                    /**
                     * 设置<p>编辑后的企业安全组规则数据；修改规则状态不用填该字段</p>
                     * @param _data <p>编辑后的企业安全组规则数据；修改规则状态不用填该字段</p>
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
                     * 获取<p>0是关闭,1是开启</p>
                     * @return Enable <p>0是关闭,1是开启</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>0是关闭,1是开启</p>
                     * @param _enable <p>0是关闭,1是开启</p>
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
                     * <p>规则的uuid，可通过查询规则列表获取</p>
                     */
                    uint64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>修改类型，0：修改规则内容；1：修改单条规则开关状态；2：修改所有规则开关状态</p>
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>编辑后的企业安全组规则数据；修改规则状态不用填该字段</p>
                     */
                    SecurityGroupRule m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>0是关闭,1是开启</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_
