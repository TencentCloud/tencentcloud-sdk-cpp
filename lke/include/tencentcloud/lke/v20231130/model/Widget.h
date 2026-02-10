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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_

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
                * 对话端Widget结构
                */
                class Widget : public AbstractModel
                {
                public:
                    Widget();
                    ~Widget() = default;
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
                     * @return WidgetRunId Widget实例ID
                     * 
                     */
                    std::string GetWidgetRunId() const;

                    /**
                     * 设置Widget实例ID
                     * @param _widgetRunId Widget实例ID
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
                     * 获取Widget显示数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return View Widget显示数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置Widget显示数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _view Widget显示数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取Widget状态数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State Widget状态数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Widget状态数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state Widget状态数据
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Widget位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position Widget位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Widget位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position Widget位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Base64编码的Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodedWidget Base64编码的Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncodedWidget() const;

                    /**
                     * 设置Base64编码的Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encodedWidget Base64编码的Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncodedWidget(const std::string& _encodedWidget);

                    /**
                     * 判断参数 EncodedWidget 是否已赋值
                     * @return EncodedWidget 是否已赋值
                     * 
                     */
                    bool EncodedWidgetHasBeenSet() const;

                    /**
                     * 获取用户最近一次提交的payload
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Payload 用户最近一次提交的payload
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置用户最近一次提交的payload
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payload 用户最近一次提交的payload
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
                     */
                    std::string m_widgetRunId;
                    bool m_widgetRunIdHasBeenSet;

                    /**
                     * Widget显示数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * Widget状态数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Widget位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Base64编码的Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encodedWidget;
                    bool m_encodedWidgetHasBeenSet;

                    /**
                     * 用户最近一次提交的payload
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WIDGET_H_
