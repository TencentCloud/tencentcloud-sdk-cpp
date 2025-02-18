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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 流量包详情
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包ID。
                     * @return TrafficPackageId 流量包ID。
                     * 
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置流量包ID。
                     * @param _trafficPackageId 流量包ID。
                     * 
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取流量包生效周期内已使用流量，单位字节。
                     * @return TrafficUsed 流量包生效周期内已使用流量，单位字节。
                     * 
                     */
                    int64_t GetTrafficUsed() const;

                    /**
                     * 设置流量包生效周期内已使用流量，单位字节。
                     * @param _trafficUsed 流量包生效周期内已使用流量，单位字节。
                     * 
                     */
                    void SetTrafficUsed(const int64_t& _trafficUsed);

                    /**
                     * 判断参数 TrafficUsed 是否已赋值
                     * @return TrafficUsed 是否已赋值
                     * 
                     */
                    bool TrafficUsedHasBeenSet() const;

                    /**
                     * 获取流量包生效周期内的总流量，单位字节。
                     * @return TrafficPackageTotal 流量包生效周期内的总流量，单位字节。
                     * 
                     */
                    int64_t GetTrafficPackageTotal() const;

                    /**
                     * 设置流量包生效周期内的总流量，单位字节。
                     * @param _trafficPackageTotal 流量包生效周期内的总流量，单位字节。
                     * 
                     */
                    void SetTrafficPackageTotal(const int64_t& _trafficPackageTotal);

                    /**
                     * 判断参数 TrafficPackageTotal 是否已赋值
                     * @return TrafficPackageTotal 是否已赋值
                     * 
                     */
                    bool TrafficPackageTotalHasBeenSet() const;

                    /**
                     * 获取流量包生效周期内的剩余流量，单位字节。
                     * @return TrafficPackageRemaining 流量包生效周期内的剩余流量，单位字节。
                     * 
                     */
                    int64_t GetTrafficPackageRemaining() const;

                    /**
                     * 设置流量包生效周期内的剩余流量，单位字节。
                     * @param _trafficPackageRemaining 流量包生效周期内的剩余流量，单位字节。
                     * 
                     */
                    void SetTrafficPackageRemaining(const int64_t& _trafficPackageRemaining);

                    /**
                     * 判断参数 TrafficPackageRemaining 是否已赋值
                     * @return TrafficPackageRemaining 是否已赋值
                     * 
                     */
                    bool TrafficPackageRemainingHasBeenSet() const;

                    /**
                     * 获取流量包生效周期内超出流量包额度的流量，单位字节。
                     * @return TrafficOverflow 流量包生效周期内超出流量包额度的流量，单位字节。
                     * 
                     */
                    int64_t GetTrafficOverflow() const;

                    /**
                     * 设置流量包生效周期内超出流量包额度的流量，单位字节。
                     * @param _trafficOverflow 流量包生效周期内超出流量包额度的流量，单位字节。
                     * 
                     */
                    void SetTrafficOverflow(const int64_t& _trafficOverflow);

                    /**
                     * 判断参数 TrafficOverflow 是否已赋值
                     * @return TrafficOverflow 是否已赋值
                     * 
                     */
                    bool TrafficOverflowHasBeenSet() const;

                    /**
                     * 获取流量包生效周期开始时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return StartTime 流量包生效周期开始时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置流量包生效周期开始时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _startTime 流量包生效周期开始时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取流量包生效周期结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return EndTime 流量包生效周期结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置流量包生效周期结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _endTime 流量包生效周期结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
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
                     * 获取流量包到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return Deadline 流量包到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置流量包到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _deadline 流量包到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取流量包状态：
<li>NETWORK_NORMAL：正常</li>
<li>OVERDUE_NETWORK_DISABLED：欠费断网</li>
                     * @return Status 流量包状态：
<li>NETWORK_NORMAL：正常</li>
<li>OVERDUE_NETWORK_DISABLED：欠费断网</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置流量包状态：
<li>NETWORK_NORMAL：正常</li>
<li>OVERDUE_NETWORK_DISABLED：欠费断网</li>
                     * @param _status 流量包状态：
<li>NETWORK_NORMAL：正常</li>
<li>OVERDUE_NETWORK_DISABLED：欠费断网</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 流量包ID。
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * 流量包生效周期内已使用流量，单位字节。
                     */
                    int64_t m_trafficUsed;
                    bool m_trafficUsedHasBeenSet;

                    /**
                     * 流量包生效周期内的总流量，单位字节。
                     */
                    int64_t m_trafficPackageTotal;
                    bool m_trafficPackageTotalHasBeenSet;

                    /**
                     * 流量包生效周期内的剩余流量，单位字节。
                     */
                    int64_t m_trafficPackageRemaining;
                    bool m_trafficPackageRemainingHasBeenSet;

                    /**
                     * 流量包生效周期内超出流量包额度的流量，单位字节。
                     */
                    int64_t m_trafficOverflow;
                    bool m_trafficOverflowHasBeenSet;

                    /**
                     * 流量包生效周期开始时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 流量包生效周期结束时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流量包到期时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 流量包状态：
<li>NETWORK_NORMAL：正常</li>
<li>OVERDUE_NETWORK_DISABLED：欠费断网</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_
