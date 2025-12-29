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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETACTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETACTION_H_

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
                * 对话端Widget动作提交结构
                */
                class WidgetAction : public AbstractModel
                {
                public:
                    WidgetAction();
                    ~WidgetAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Widget配置ID
                     * @return WidgetId Widget配置ID
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置Widget配置ID
                     * @param _widgetId Widget配置ID
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
                     * 获取Widget实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetRunId Widget实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWidgetRunId() const;

                    /**
                     * 设置Widget实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetRunId Widget实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgetRunId(const std::string& _widgetRunId);

                    /**
                     * 判断参数 WidgetRunId 是否已赋值
                     * @return WidgetRunId 是否已赋值
                     * 
                     */
                    bool WidgetRunIdHasBeenSet() const;

                    /**
                     * 获取Widget动作
                     * @return ActionType Widget动作
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Widget动作
                     * @param _actionType Widget动作
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
                     * 获取Widget动作提交的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Payload Widget动作提交的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Widget动作提交的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payload Widget动作提交的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * Widget配置ID
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                    /**
                     * Widget实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_widgetRunId;
                    bool m_widgetRunIdHasBeenSet;

                    /**
                     * Widget动作
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Widget动作提交的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETACTION_H_
