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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGETACTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGETACTION_H_

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
                * WidgetAction 组件交互动作信息
                */
                class ConversationWidgetAction : public AbstractModel
                {
                public:
                    ConversationWidgetAction();
                    ~ConversationWidgetAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>动作类型，非枚举类型，用户自定义</p>
                     * @return ActionType <p>动作类型，非枚举类型，用户自定义</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>动作类型，非枚举类型，用户自定义</p>
                     * @param _actionType <p>动作类型，非枚举类型，用户自定义</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>动作载荷</p>
                     * @return Payload <p>动作载荷</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>动作载荷</p>
                     * @param _payload <p>动作载荷</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>组件 ID</p>
                     * @return WidgetId <p>组件 ID</p>
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置<p>组件 ID</p>
                     * @param _widgetId <p>组件 ID</p>
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                    /**
                     * 获取<p>组件运行 ID</p>
                     * @return WidgetRunId <p>组件运行 ID</p>
                     * 
                     */
                    std::string GetWidgetRunId() const;

                    /**
                     * 设置<p>组件运行 ID</p>
                     * @param _widgetRunId <p>组件运行 ID</p>
                     * 
                     */
                    void SetWidgetRunId(const std::string& _widgetRunId);

                    /**
                     * 判断参数 WidgetRunId 是否已赋值
                     * @return WidgetRunId 是否已赋值
                     * 
                     */
                    bool WidgetRunIdHasBeenSet() const;

                private:

                    /**
                     * <p>动作类型，非枚举类型，用户自定义</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>动作载荷</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>组件 ID</p>
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * <p>组件运行 ID</p>
                     */
                    std::string m_widgetRunId;
                    bool m_widgetRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONWIDGETACTION_H_
