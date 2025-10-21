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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUTSYSTEMVARIABLE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUTSYSTEMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 系统参数
                */
                class AgentInputSystemVariable : public AbstractModel
                {
                public:
                    AgentInputSystemVariable();
                    ~AgentInputSystemVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统参数名
                     * @return Name 系统参数名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置系统参数名
                     * @param _name 系统参数名
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
                     * 获取对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；
                     * @return DialogHistoryLimit 对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；
                     * 
                     */
                    int64_t GetDialogHistoryLimit() const;

                    /**
                     * 设置对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；
                     * @param _dialogHistoryLimit 对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；
                     * 
                     */
                    void SetDialogHistoryLimit(const int64_t& _dialogHistoryLimit);

                    /**
                     * 判断参数 DialogHistoryLimit 是否已赋值
                     * @return DialogHistoryLimit 是否已赋值
                     * 
                     */
                    bool DialogHistoryLimitHasBeenSet() const;

                private:

                    /**
                     * 系统参数名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；
                     */
                    int64_t m_dialogHistoryLimit;
                    bool m_dialogHistoryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTINPUTSYSTEMVARIABLE_H_
