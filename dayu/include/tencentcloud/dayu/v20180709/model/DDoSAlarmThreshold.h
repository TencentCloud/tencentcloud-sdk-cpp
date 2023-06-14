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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSALARMTHRESHOLD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSALARMTHRESHOLD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS告警阈值
                */
                class DDoSAlarmThreshold : public AbstractModel
                {
                public:
                    DDoSAlarmThreshold();
                    ~DDoSAlarmThreshold() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警阈值类型，1-入流量，2-清洗流量
                     * @return AlarmType 告警阈值类型，1-入流量，2-清洗流量
                     * 
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置告警阈值类型，1-入流量，2-清洗流量
                     * @param _alarmType 告警阈值类型，1-入流量，2-清洗流量
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
                     * 获取告警阈值，大于0（目前排定的值）
                     * @return AlarmThreshold 告警阈值，大于0（目前排定的值）
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置告警阈值，大于0（目前排定的值）
                     * @param _alarmThreshold 告警阈值，大于0（目前排定的值）
                     * 
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                private:

                    /**
                     * 告警阈值类型，1-入流量，2-清洗流量
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 告警阈值，大于0（目前排定的值）
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSALARMTHRESHOLD_H_
