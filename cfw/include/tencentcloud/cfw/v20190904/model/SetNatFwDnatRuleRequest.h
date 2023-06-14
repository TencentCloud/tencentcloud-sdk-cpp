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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * SetNatFwDnatRule请求参数结构体
                */
                class SetNatFwDnatRuleRequest : public AbstractModel
                {
                public:
                    SetNatFwDnatRuleRequest();
                    ~SetNatFwDnatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0：cfw新增模式，1：cfw接入模式。
                     * @return Mode 0：cfw新增模式，1：cfw接入模式。
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置0：cfw新增模式，1：cfw接入模式。
                     * @param _mode 0：cfw新增模式，1：cfw接入模式。
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取操作类型，可选值：add，del，modify。
                     * @return OperationType 操作类型，可选值：add，del，modify。
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型，可选值：add，del，modify。
                     * @param _operationType 操作类型，可选值：add，del，modify。
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取防火墙实例id，该字段必须传递。
                     * @return CfwInstance 防火墙实例id，该字段必须传递。
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置防火墙实例id，该字段必须传递。
                     * @param _cfwInstance 防火墙实例id，该字段必须传递。
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取添加或删除操作的Dnat规则列表。
                     * @return AddOrDelDnatRules 添加或删除操作的Dnat规则列表。
                     * 
                     */
                    std::vector<CfwNatDnatRule> GetAddOrDelDnatRules() const;

                    /**
                     * 设置添加或删除操作的Dnat规则列表。
                     * @param _addOrDelDnatRules 添加或删除操作的Dnat规则列表。
                     * 
                     */
                    void SetAddOrDelDnatRules(const std::vector<CfwNatDnatRule>& _addOrDelDnatRules);

                    /**
                     * 判断参数 AddOrDelDnatRules 是否已赋值
                     * @return AddOrDelDnatRules 是否已赋值
                     * 
                     */
                    bool AddOrDelDnatRulesHasBeenSet() const;

                    /**
                     * 获取修改操作的原始Dnat规则
                     * @return OriginDnat 修改操作的原始Dnat规则
                     * 
                     */
                    CfwNatDnatRule GetOriginDnat() const;

                    /**
                     * 设置修改操作的原始Dnat规则
                     * @param _originDnat 修改操作的原始Dnat规则
                     * 
                     */
                    void SetOriginDnat(const CfwNatDnatRule& _originDnat);

                    /**
                     * 判断参数 OriginDnat 是否已赋值
                     * @return OriginDnat 是否已赋值
                     * 
                     */
                    bool OriginDnatHasBeenSet() const;

                    /**
                     * 获取修改操作的新的Dnat规则
                     * @return NewDnat 修改操作的新的Dnat规则
                     * 
                     */
                    CfwNatDnatRule GetNewDnat() const;

                    /**
                     * 设置修改操作的新的Dnat规则
                     * @param _newDnat 修改操作的新的Dnat规则
                     * 
                     */
                    void SetNewDnat(const CfwNatDnatRule& _newDnat);

                    /**
                     * 判断参数 NewDnat 是否已赋值
                     * @return NewDnat 是否已赋值
                     * 
                     */
                    bool NewDnatHasBeenSet() const;

                private:

                    /**
                     * 0：cfw新增模式，1：cfw接入模式。
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 操作类型，可选值：add，del，modify。
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 防火墙实例id，该字段必须传递。
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * 添加或删除操作的Dnat规则列表。
                     */
                    std::vector<CfwNatDnatRule> m_addOrDelDnatRules;
                    bool m_addOrDelDnatRulesHasBeenSet;

                    /**
                     * 修改操作的原始Dnat规则
                     */
                    CfwNatDnatRule m_originDnat;
                    bool m_originDnatHasBeenSet;

                    /**
                     * 修改操作的新的Dnat规则
                     */
                    CfwNatDnatRule m_newDnat;
                    bool m_newDnatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_
