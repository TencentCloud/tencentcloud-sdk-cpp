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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateForwardRule请求参数结构体
                */
                class CreateForwardRuleRequest : public AbstractModel
                {
                public:
                    CreateForwardRuleRequest();
                    ~CreateForwardRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转发规则名称
                     * @return RuleName 转发规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置转发规则名称
                     * @param _ruleName 转发规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取转发规则类型：云上到云下DOWN，云下到云上UP
                     * @return RuleType 转发规则类型：云上到云下DOWN，云下到云上UP
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置转发规则类型：云上到云下DOWN，云下到云上UP
                     * @param _ruleType 转发规则类型：云上到云下DOWN，云下到云上UP
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取私有域ID，可在私有域列表页面查看
                     * @return ZoneId 私有域ID，可在私有域列表页面查看
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域ID，可在私有域列表页面查看
                     * @param _zoneId 私有域ID，可在私有域列表页面查看
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取终端节点ID
                     * @return EndPointId 终端节点ID
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置终端节点ID
                     * @param _endPointId 终端节点ID
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                private:

                    /**
                     * 转发规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 转发规则类型：云上到云下DOWN，云下到云上UP
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 私有域ID，可在私有域列表页面查看
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 终端节点ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEFORWARDRULEREQUEST_H_
