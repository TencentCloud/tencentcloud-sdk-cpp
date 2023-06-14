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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICDETAILSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeStatisticDetails请求参数结构体
                */
                class DescribeStatisticDetailsRequest : public AbstractModel
                {
                public:
                    DescribeStatisticDetailsRequest();
                    ~DescribeStatisticDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始日期，格式【YYYY-MM-DD】
                     * @return StartDate 开始日期，格式【YYYY-MM-DD】
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期，格式【YYYY-MM-DD】
                     * @param _startDate 开始日期，格式【YYYY-MM-DD】
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期，格式【YYYY-MM-DD】
                     * @return EndDate 结束日期，格式【YYYY-MM-DD】
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期，格式【YYYY-MM-DD】
                     * @param _endDate 结束日期，格式【YYYY-MM-DD】
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取统计项。取值范围：
1.录制设备数：RecordingDevice
2.非录制设备数：NonRecordingDevice
3.观看流量总数：WatchFlux
4.已用存储容量总数：StorageUsage
5. X-P2P分享流量: P2PFluxTotal
6. X-P2P峰值带宽: P2PPeakValue
7. RTMP推流路数(直播推流): LivePushTotal
                     * @return StatisticField 统计项。取值范围：
1.录制设备数：RecordingDevice
2.非录制设备数：NonRecordingDevice
3.观看流量总数：WatchFlux
4.已用存储容量总数：StorageUsage
5. X-P2P分享流量: P2PFluxTotal
6. X-P2P峰值带宽: P2PPeakValue
7. RTMP推流路数(直播推流): LivePushTotal
                     * 
                     */
                    std::string GetStatisticField() const;

                    /**
                     * 设置统计项。取值范围：
1.录制设备数：RecordingDevice
2.非录制设备数：NonRecordingDevice
3.观看流量总数：WatchFlux
4.已用存储容量总数：StorageUsage
5. X-P2P分享流量: P2PFluxTotal
6. X-P2P峰值带宽: P2PPeakValue
7. RTMP推流路数(直播推流): LivePushTotal
                     * @param _statisticField 统计项。取值范围：
1.录制设备数：RecordingDevice
2.非录制设备数：NonRecordingDevice
3.观看流量总数：WatchFlux
4.已用存储容量总数：StorageUsage
5. X-P2P分享流量: P2PFluxTotal
6. X-P2P峰值带宽: P2PPeakValue
7. RTMP推流路数(直播推流): LivePushTotal
                     * 
                     */
                    void SetStatisticField(const std::string& _statisticField);

                    /**
                     * 判断参数 StatisticField 是否已赋值
                     * @return StatisticField 是否已赋值
                     * 
                     */
                    bool StatisticFieldHasBeenSet() const;

                private:

                    /**
                     * 开始日期，格式【YYYY-MM-DD】
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期，格式【YYYY-MM-DD】
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 统计项。取值范围：
1.录制设备数：RecordingDevice
2.非录制设备数：NonRecordingDevice
3.观看流量总数：WatchFlux
4.已用存储容量总数：StorageUsage
5. X-P2P分享流量: P2PFluxTotal
6. X-P2P峰值带宽: P2PPeakValue
7. RTMP推流路数(直播推流): LivePushTotal
                     */
                    std::string m_statisticField;
                    bool m_statisticFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICDETAILSREQUEST_H_
