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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 单IP告警阈值配置
                */
                class IPAlarmThresholdRelation : public AbstractModel
                {
                public:
                    IPAlarmThresholdRelation();
                    ~IPAlarmThresholdRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警阈值类型，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * @return AlarmType 告警阈值类型，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * 
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置告警阈值类型，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * @param _alarmType 告警阈值类型，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     * 
                     */
                    void SetAlarmType(const uint64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取告警阈值，单位Mbps，取值>=0；当作为输入参数时，设置0会删除告警阈值配置；
                     * @return AlarmThreshold 告警阈值，单位Mbps，取值>=0；当作为输入参数时，设置0会删除告警阈值配置；
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置告警阈值，单位Mbps，取值>=0；当作为输入参数时，设置0会删除告警阈值配置；
                     * @param _alarmThreshold 告警阈值，单位Mbps，取值>=0；当作为输入参数时，设置0会删除告警阈值配置；
                     * 
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                    /**
                     * 获取告警阈值所属的资源实例
                     * @return InstanceDetailList 告警阈值所属的资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置告警阈值所属的资源实例
                     * @param _instanceDetailList 告警阈值所属的资源实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * 告警阈值类型，取值[
1(入流量告警阈值)
2(攻击清洗流量告警阈值)
]
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 告警阈值，单位Mbps，取值>=0；当作为输入参数时，设置0会删除告警阈值配置；
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                    /**
                     * 告警阈值所属的资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPALARMTHRESHOLDRELATION_H_
