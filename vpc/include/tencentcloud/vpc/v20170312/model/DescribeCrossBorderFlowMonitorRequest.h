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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERFLOWMONITORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERFLOWMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCrossBorderFlowMonitor请求参数结构体
                */
                class DescribeCrossBorderFlowMonitorRequest : public AbstractModel
                {
                public:
                    DescribeCrossBorderFlowMonitorRequest();
                    ~DescribeCrossBorderFlowMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源地域。
                     * @return SourceRegion 源地域。
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置源地域。
                     * @param _sourceRegion 源地域。
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取目的地域。
                     * @return DestinationRegion 目的地域。
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置目的地域。
                     * @param _destinationRegion 目的地域。
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                    /**
                     * 获取云联网ID。
                     * @return CcnId 云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。
                     * @param _ccnId 云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网所属账号。
                     * @return CcnUin 云联网所属账号。
                     * 
                     */
                    std::string GetCcnUin() const;

                    /**
                     * 设置云联网所属账号。
                     * @param _ccnUin 云联网所属账号。
                     * 
                     */
                    void SetCcnUin(const std::string& _ccnUin);

                    /**
                     * 判断参数 CcnUin 是否已赋值
                     * @return CcnUin 是否已赋值
                     * 
                     */
                    bool CcnUinHasBeenSet() const;

                    /**
                     * 获取时间粒度。单位为:秒，如60为60s的时间粒度
                     * @return Period 时间粒度。单位为:秒，如60为60s的时间粒度
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置时间粒度。单位为:秒，如60为60s的时间粒度
                     * @param _period 时间粒度。单位为:秒，如60为60s的时间粒度
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
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
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 源地域。
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 目的地域。
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * 云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网所属账号。
                     */
                    std::string m_ccnUin;
                    bool m_ccnUinHasBeenSet;

                    /**
                     * 时间粒度。单位为:秒，如60为60s的时间粒度
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECROSSBORDERFLOWMONITORREQUEST_H_
