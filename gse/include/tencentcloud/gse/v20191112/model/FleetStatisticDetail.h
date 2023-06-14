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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICDETAIL_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 舰队统计详情
                */
                class FleetStatisticDetail : public AbstractModel
                {
                public:
                    FleetStatisticDetail();
                    ~FleetStatisticDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIP 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceIP() const;

                    /**
                     * 设置实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceIP 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceIP(const std::string& _instanceIP);

                    /**
                     * 判断参数 InstanceIP 是否已赋值
                     * @return InstanceIP 是否已赋值
                     * 
                     */
                    bool InstanceIPHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalUsedTimeSeconds 总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalUsedTimeSeconds() const;

                    /**
                     * 设置总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalUsedTimeSeconds 总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalUsedTimeSeconds(const std::string& _totalUsedTimeSeconds);

                    /**
                     * 判断参数 TotalUsedTimeSeconds 是否已赋值
                     * @return TotalUsedTimeSeconds 是否已赋值
                     * 
                     */
                    bool TotalUsedTimeSecondsHasBeenSet() const;

                    /**
                     * 获取总流量，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalUsedFlowMegaBytes 总流量，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalUsedFlowMegaBytes() const;

                    /**
                     * 设置总流量，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalUsedFlowMegaBytes 总流量，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalUsedFlowMegaBytes(const double& _totalUsedFlowMegaBytes);

                    /**
                     * 判断参数 TotalUsedFlowMegaBytes 是否已赋值
                     * @return TotalUsedFlowMegaBytes 是否已赋值
                     * 
                     */
                    bool TotalUsedFlowMegaBytesHasBeenSet() const;

                private:

                    /**
                     * 舰队ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceIP;
                    bool m_instanceIPHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalUsedTimeSeconds;
                    bool m_totalUsedTimeSecondsHasBeenSet;

                    /**
                     * 总流量，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalUsedFlowMegaBytes;
                    bool m_totalUsedFlowMegaBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICDETAIL_H_
