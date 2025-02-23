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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/SlotNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 流量监控指标
                */
                class MonitorData : public AbstractModel
                {
                public:
                    MonitorData();
                    ~MonitorData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间点：s
                     * @return Time 时间点：s
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间点：s
                     * @param _time 时间点：s
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取业务指标（bps/ms/%）
                     * @return BusinessMetrics 业务指标（bps/ms/%）
                     * 
                     */
                    double GetBusinessMetrics() const;

                    /**
                     * 设置业务指标（bps/ms/%）
                     * @param _businessMetrics 业务指标（bps/ms/%）
                     * 
                     */
                    void SetBusinessMetrics(const double& _businessMetrics);

                    /**
                     * 判断参数 BusinessMetrics 是否已赋值
                     * @return BusinessMetrics 是否已赋值
                     * 
                     */
                    bool BusinessMetricsHasBeenSet() const;

                    /**
                     * 获取网卡状态信息
                     * @return SlotNetInfo 网卡状态信息
                     * 
                     */
                    std::vector<SlotNetInfo> GetSlotNetInfo() const;

                    /**
                     * 设置网卡状态信息
                     * @param _slotNetInfo 网卡状态信息
                     * 
                     */
                    void SetSlotNetInfo(const std::vector<SlotNetInfo>& _slotNetInfo);

                    /**
                     * 判断参数 SlotNetInfo 是否已赋值
                     * @return SlotNetInfo 是否已赋值
                     * 
                     */
                    bool SlotNetInfoHasBeenSet() const;

                private:

                    /**
                     * 时间点：s
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 业务指标（bps/ms/%）
                     */
                    double m_businessMetrics;
                    bool m_businessMetricsHasBeenSet;

                    /**
                     * 网卡状态信息
                     */
                    std::vector<SlotNetInfo> m_slotNetInfo;
                    bool m_slotNetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MONITORDATA_H_
