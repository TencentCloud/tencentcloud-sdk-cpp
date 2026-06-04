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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 系统参数
                */
                class AgentSystemVariable : public AbstractModel
                {
                public:
                    AgentSystemVariable();
                    ~AgentSystemVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>系统参数名</p>
                     * @return Name <p>系统参数名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>系统参数名</p>
                     * @param _name <p>系统参数名</p>
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
                     * 获取<p>对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；</p>
                     * @return DialogHistoryLimit <p>对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；</p>
                     * 
                     */
                    int64_t GetDialogHistoryLimit() const;

                    /**
                     * 设置<p>对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；</p>
                     * @param _dialogHistoryLimit <p>对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；</p>
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
                     * <p>系统参数名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>对话历史轮数的配置；如果Input是系统变量中的“对话历史”时才使用；</p>
                     */
                    int64_t m_dialogHistoryLimit;
                    bool m_dialogHistoryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_
