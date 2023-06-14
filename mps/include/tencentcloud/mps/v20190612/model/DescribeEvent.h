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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEEVENT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeFlowId.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询Event的配置信息。
                */
                class DescribeEvent : public AbstractModel
                {
                public:
                    DescribeEvent();
                    ~DescribeEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event的名称。
                     * @return EventName Event的名称。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event的名称。
                     * @param _eventName Event的名称。
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
                     * 获取Event的Id，唯一标识一个event。
                     * @return EventId Event的Id，唯一标识一个event。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Event的Id，唯一标识一个event。
                     * @param _eventId Event的Id，唯一标识一个event。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Event创建时间，格式为yyyy-MM-ddTHH:mm:ssZ。
                     * @return CreateTime Event创建时间，格式为yyyy-MM-ddTHH:mm:ssZ。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Event创建时间，格式为yyyy-MM-ddTHH:mm:ssZ。
                     * @param _createTime Event创建时间，格式为yyyy-MM-ddTHH:mm:ssZ。
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
                     * 获取Event的描述。
                     * @return Description Event的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event的描述。
                     * @param _description Event的描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Event的状态信息
0：未运行
1：运行中
                     * @return Status Event的状态信息
0：未运行
1：运行中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Event的状态信息
0：未运行
1：运行中
                     * @param _status Event的状态信息
0：未运行
1：运行中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Event关联的Flow列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachedFlowGroup Event关联的Flow列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeFlowId> GetAttachedFlowGroup() const;

                    /**
                     * 设置Event关联的Flow列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachedFlowGroup Event关联的Flow列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachedFlowGroup(const std::vector<DescribeFlowId>& _attachedFlowGroup);

                    /**
                     * 判断参数 AttachedFlowGroup 是否已赋值
                     * @return AttachedFlowGroup 是否已赋值
                     * 
                     */
                    bool AttachedFlowGroupHasBeenSet() const;

                private:

                    /**
                     * Event的名称。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event的Id，唯一标识一个event。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Event创建时间，格式为yyyy-MM-ddTHH:mm:ssZ。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Event的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event的状态信息
0：未运行
1：运行中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event关联的Flow列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeFlowId> m_attachedFlowGroup;
                    bool m_attachedFlowGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEEVENT_H_
