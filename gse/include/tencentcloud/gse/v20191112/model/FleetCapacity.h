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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETCAPACITY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InstanceCounts.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 服务部署组容量配置
                */
                class FleetCapacity : public AbstractModel
                {
                public:
                    FleetCapacity();
                    ~FleetCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 服务部署 Id
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
                     * 获取服务器类型，如S3.LARGE8,S2.LARGE8,S5.LARGE8等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 服务器类型，如S3.LARGE8,S2.LARGE8,S5.LARGE8等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置服务器类型，如S3.LARGE8,S2.LARGE8,S5.LARGE8等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 服务器类型，如S3.LARGE8,S2.LARGE8,S5.LARGE8等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取服务器实例统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCounts 服务器实例统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceCounts GetInstanceCounts() const;

                    /**
                     * 设置服务器实例统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCounts 服务器实例统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCounts(const InstanceCounts& _instanceCounts);

                    /**
                     * 判断参数 InstanceCounts 是否已赋值
                     * @return InstanceCounts 是否已赋值
                     * 
                     */
                    bool InstanceCountsHasBeenSet() const;

                    /**
                     * 获取服务器伸缩容间隔，单位分钟，最小值3，最大值30，默认值10
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingInterval 服务器伸缩容间隔，单位分钟，最小值3，最大值30，默认值10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScalingInterval() const;

                    /**
                     * 设置服务器伸缩容间隔，单位分钟，最小值3，最大值30，默认值10
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingInterval 服务器伸缩容间隔，单位分钟，最小值3，最大值30，默认值10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingInterval(const uint64_t& _scalingInterval);

                    /**
                     * 判断参数 ScalingInterval 是否已赋值
                     * @return ScalingInterval 是否已赋值
                     * 
                     */
                    bool ScalingIntervalHasBeenSet() const;

                private:

                    /**
                     * 服务部署 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 服务器类型，如S3.LARGE8,S2.LARGE8,S5.LARGE8等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 服务器实例统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceCounts m_instanceCounts;
                    bool m_instanceCountsHasBeenSet;

                    /**
                     * 服务器伸缩容间隔，单位分钟，最小值3，最大值30，默认值10
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scalingInterval;
                    bool m_scalingIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETCAPACITY_H_
