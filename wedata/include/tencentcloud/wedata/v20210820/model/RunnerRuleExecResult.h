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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNNERRULEEXECRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNNERRULEEXECRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则执行结果
                */
                class RunnerRuleExecResult : public AbstractModel
                {
                public:
                    RunnerRuleExecResult();
                    ~RunnerRuleExecResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取rule id
                     * @return RuleId rule id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置rule id
                     * @param _ruleId rule id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取rule exec id
                     * @return RuleExecId rule exec id
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置rule exec id
                     * @param _ruleExecId rule exec id
                     * 
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     * 
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取exec state
                     * @return State exec state
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置exec state
                     * @param _state exec state
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Data 结果
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 设置结果
                     * @param _data 结果
                     * 
                     */
                    void SetData(const std::vector<std::string>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * rule id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * rule exec id
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * exec state
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 结果
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNNERRULEEXECRESULT_H_
