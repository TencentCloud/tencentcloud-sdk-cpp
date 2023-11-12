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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_HOUSEEVENTSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_HOUSEEVENTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 集群事件日志
                */
                class HouseEventsInfo : public AbstractModel
                {
                public:
                    HouseEventsInfo();
                    ~HouseEventsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 事件时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTime() const;

                    /**
                     * 设置事件时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 事件时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const std::vector<std::string>& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventsAction 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEventsAction() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventsAction 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventsAction(const std::vector<std::string>& _eventsAction);

                    /**
                     * 判断参数 EventsAction 是否已赋值
                     * @return EventsAction 是否已赋值
                     * 
                     */
                    bool EventsActionHasBeenSet() const;

                    /**
                     * 获取集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterInfo 集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetClusterInfo() const;

                    /**
                     * 设置集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterInfo 集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterInfo(const std::vector<std::string>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                private:

                    /**
                     * 事件时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_eventsAction;
                    bool m_eventsActionHasBeenSet;

                    /**
                     * 集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_HOUSEEVENTSINFO_H_
