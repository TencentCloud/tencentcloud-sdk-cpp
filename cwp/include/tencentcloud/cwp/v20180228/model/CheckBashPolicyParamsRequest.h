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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/PolicyRules.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckBashPolicyParams请求参数结构体
                */
                class CheckBashPolicyParamsRequest : public AbstractModel
                {
                public:
                    CheckBashPolicyParamsRequest();
                    ~CheckBashPolicyParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取校验内容字段,如果需要检测多个字段时,用逗号分割
<li>Name 策略名称</li>
<li>Process 进程</li>
<li>Name PProcess 父进程</li>
<li>Name AProcess 祖先进程</li>

                     * @return CheckField 校验内容字段,如果需要检测多个字段时,用逗号分割
<li>Name 策略名称</li>
<li>Process 进程</li>
<li>Name PProcess 父进程</li>
<li>Name AProcess 祖先进程</li>

                     * 
                     */
                    std::string GetCheckField() const;

                    /**
                     * 设置校验内容字段,如果需要检测多个字段时,用逗号分割
<li>Name 策略名称</li>
<li>Process 进程</li>
<li>Name PProcess 父进程</li>
<li>Name AProcess 祖先进程</li>

                     * @param _checkField 校验内容字段,如果需要检测多个字段时,用逗号分割
<li>Name 策略名称</li>
<li>Process 进程</li>
<li>Name PProcess 父进程</li>
<li>Name AProcess 祖先进程</li>

                     * 
                     */
                    void SetCheckField(const std::string& _checkField);

                    /**
                     * 判断参数 CheckField 是否已赋值
                     * @return CheckField 是否已赋值
                     * 
                     */
                    bool CheckFieldHasBeenSet() const;

                    /**
                     * 获取在事件列表中新增白名时需要提交事件ID
                     * @return EventId 在事件列表中新增白名时需要提交事件ID
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置在事件列表中新增白名时需要提交事件ID
                     * @param _eventId 在事件列表中新增白名时需要提交事件ID
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取填入的规则名称
                     * @return Name 填入的规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置填入的规则名称
                     * @param _name 填入的规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取该字段不在维护,如果填入该参数,自动替换到Rules.Process

                     * @return Rule 该字段不在维护,如果填入该参数,自动替换到Rules.Process

                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置该字段不在维护,如果填入该参数,自动替换到Rules.Process

                     * @param _rule 该字段不在维护,如果填入该参数,自动替换到Rules.Process

                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取编辑时传的规则id
                     * @return Id 编辑时传的规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置编辑时传的规则id
                     * @param _id 编辑时传的规则id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则表达式
                     * @return Rules 规则表达式
                     * 
                     */
                    PolicyRules GetRules() const;

                    /**
                     * 设置规则表达式
                     * @param _rules 规则表达式
                     * 
                     */
                    void SetRules(const PolicyRules& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 校验内容字段,如果需要检测多个字段时,用逗号分割
<li>Name 策略名称</li>
<li>Process 进程</li>
<li>Name PProcess 父进程</li>
<li>Name AProcess 祖先进程</li>

                     */
                    std::string m_checkField;
                    bool m_checkFieldHasBeenSet;

                    /**
                     * 在事件列表中新增白名时需要提交事件ID
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 填入的规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 该字段不在维护,如果填入该参数,自动替换到Rules.Process

                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 编辑时传的规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则表达式
                     */
                    PolicyRules m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_
