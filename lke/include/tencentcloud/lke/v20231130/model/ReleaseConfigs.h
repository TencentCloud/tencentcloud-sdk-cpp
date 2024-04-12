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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_

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
                * 发布配置项
                */
                class ReleaseConfigs : public AbstractModel
                {
                public:
                    ReleaseConfigs();
                    ~ReleaseConfigs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigItem 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigItem() const;

                    /**
                     * 设置配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configItem 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigItem(const std::string& _configItem);

                    /**
                     * 判断参数 ConfigItem 是否已赋值
                     * @return ConfigItem 是否已赋值
                     * 
                     */
                    bool ConfigItemHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取变更后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 变更后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置变更后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 变更后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取变更前的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastValue 变更前的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastValue() const;

                    /**
                     * 设置变更前的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastValue 变更前的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastValue(const std::string& _lastValue);

                    /**
                     * 判断参数 LastValue 是否已赋值
                     * @return LastValue 是否已赋值
                     * 
                     */
                    bool LastValueHasBeenSet() const;

                    /**
                     * 获取变更内容(优先级展示content内容,content为空取value内容)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 变更内容(优先级展示content内容,content为空取value内容)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置变更内容(优先级展示content内容,content为空取value内容)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 变更内容(优先级展示content内容,content为空取value内容)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 配置项描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configItem;
                    bool m_configItemHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 变更后的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 变更前的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastValue;
                    bool m_lastValueHasBeenSet;

                    /**
                     * 变更内容(优先级展示content内容,content为空取value内容)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RELEASECONFIGS_H_
