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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfoDs.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件监听者信息
                */
                class EventListenerDTO : public AbstractModel
                {
                public:
                    EventListenerDTO();
                    ~EventListenerDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键字，一般为任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 关键字，一般为任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置关键字，一般为任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 关键字，一般为任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取REST_API、KAFKA
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type REST_API、KAFKA
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置REST_API、KAFKA
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type REST_API、KAFKA
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTs 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTs 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertiesList 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfoDs> GetPropertiesList() const;

                    /**
                     * 设置配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertiesList 配置信息
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
                     * 获取事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 事件名称
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
                     * 获取监听者任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 监听者任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EventListenerTaskInfo GetTaskInfo() const;

                    /**
                     * 设置监听者任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInfo 监听者任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInfo(const EventListenerTaskInfo& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取事件所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventProjectId 事件所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventProjectId() const;

                    /**
                     * 设置事件所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventProjectId 事件所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventProjectId(const std::string& _eventProjectId);

                    /**
                     * 判断参数 EventProjectId 是否已赋值
                     * @return EventProjectId 是否已赋值
                     * 
                     */
                    bool EventProjectIdHasBeenSet() const;

                private:

                    /**
                     * 关键字，一般为任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * REST_API、KAFKA
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * 配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfoDs> m_propertiesList;
                    bool m_propertiesListHasBeenSet;

                    /**
                     * 事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 监听者任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EventListenerTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * 事件所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventProjectId;
                    bool m_eventProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_
