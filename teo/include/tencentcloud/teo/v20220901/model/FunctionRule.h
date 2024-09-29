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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数触发规则。
                */
                class FunctionRule : public AbstractModel
                {
                public:
                    FunctionRule();
                    ~FunctionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则条件列表，列表项之间为或关系。
                     * @return FunctionRuleConditions 规则条件列表，列表项之间为或关系。
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置规则条件列表，列表项之间为或关系。
                     * @param _functionRuleConditions 规则条件列表，列表项之间为或关系。
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取函数 ID，命中触发规则条件后执行的函数。
                     * @return FunctionId 函数 ID，命中触发规则条件后执行的函数。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID，命中触发规则条件后执行的函数。
                     * @param _functionId 函数 ID，命中触发规则条件后执行的函数。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取规则描述。
                     * @return Remark 规则描述。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置规则描述。
                     * @param _remark 规则描述。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取函数名称。
                     * @return FunctionName 函数名称。
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称。
                     * @param _functionName 函数名称。
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数触发规则优先级，数值越大，优先级越高。
                     * @return Priority 函数触发规则优先级，数值越大，优先级越高。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置函数触发规则优先级，数值越大，优先级越高。
                     * @param _priority 函数触发规则优先级，数值越大，优先级越高。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return CreateTime 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _createTime 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return UpdateTime 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _updateTime 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则条件列表，列表项之间为或关系。
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * 函数 ID，命中触发规则条件后执行的函数。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 函数名称。
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数触发规则优先级，数值越大，优先级越高。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONRULE_H_
