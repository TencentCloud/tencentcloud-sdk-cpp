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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSEVENTLISTENERDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSEVENTLISTENERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfoDs.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 监听事件
                */
                class AiOpsEventListenerDTO : public AbstractModel
                {
                public:
                    AiOpsEventListenerDTO();
                    ~AiOpsEventListenerDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取项目展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 项目展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置项目展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 项目展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取事件周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 事件周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventSubType 事件周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取事件项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 事件项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置事件项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 事件项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertiesList 扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfoDs> GetPropertiesList() const;

                    /**
                     * 设置扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertiesList 扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropertiesList(const std::vector<ParamInfoDs>& _propertiesList);

                    /**
                     * 判断参数 PropertiesList 是否已赋值
                     * @return PropertiesList 是否已赋值
                     * 
                     */
                    bool PropertiesListHasBeenSet() const;

                    /**
                     * 获取事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBroadcastType 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBroadcastType 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                private:

                    /**
                     * 事件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目展示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 事件周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 事件项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfoDs> m_propertiesList;
                    bool m_propertiesListHasBeenSet;

                    /**
                     * 事件广播类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSEVENTLISTENERDTO_H_
