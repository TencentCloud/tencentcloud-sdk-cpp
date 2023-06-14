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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckBashRuleParams请求参数结构体
                */
                class CheckBashRuleParamsRequest : public AbstractModel
                {
                public:
                    CheckBashRuleParamsRequest();
                    ~CheckBashRuleParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取校验内容 Name或Rule ，两个都要校验时逗号分割
                     * @return CheckField 校验内容 Name或Rule ，两个都要校验时逗号分割
                     * 
                     */
                    std::string GetCheckField() const;

                    /**
                     * 设置校验内容 Name或Rule ，两个都要校验时逗号分割
                     * @param _checkField 校验内容 Name或Rule ，两个都要校验时逗号分割
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
                     * 获取用户填入的正则表达式："正则表达式" 需与 "提交EventId对应的命令内容" 相匹配
                     * @return Rule 用户填入的正则表达式："正则表达式" 需与 "提交EventId对应的命令内容" 相匹配
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置用户填入的正则表达式："正则表达式" 需与 "提交EventId对应的命令内容" 相匹配
                     * @param _rule 用户填入的正则表达式："正则表达式" 需与 "提交EventId对应的命令内容" 相匹配
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

                private:

                    /**
                     * 校验内容 Name或Rule ，两个都要校验时逗号分割
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
                     * 用户填入的正则表达式："正则表达式" 需与 "提交EventId对应的命令内容" 相匹配
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 编辑时传的规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_
