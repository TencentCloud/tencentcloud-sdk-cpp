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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORRESOURCEINFORESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORRESOURCEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeMonitorResourceInfo返回参数结构体
                */
                class DescribeMonitorResourceInfoResponse : public AbstractModel
                {
                public:
                    DescribeMonitorResourceInfoResponse();
                    ~DescribeMonitorResourceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取电话告警数量
                     * @return PhoneAlarmNumber 电话告警数量
                     * 
                     */
                    int64_t GetPhoneAlarmNumber() const;

                    /**
                     * 判断参数 PhoneAlarmNumber 是否已赋值
                     * @return PhoneAlarmNumber 是否已赋值
                     * 
                     */
                    bool PhoneAlarmNumberHasBeenSet() const;

                    /**
                     * 获取高级指标数量
                     * @return AdvancedMetricNumber 高级指标数量
                     * 
                     */
                    int64_t GetAdvancedMetricNumber() const;

                    /**
                     * 判断参数 AdvancedMetricNumber 是否已赋值
                     * @return AdvancedMetricNumber 是否已赋值
                     * 
                     */
                    bool AdvancedMetricNumberHasBeenSet() const;

                    /**
                     * 获取API调用量
                     * @return APIUsageNumber API调用量
                     * 
                     */
                    int64_t GetAPIUsageNumber() const;

                    /**
                     * 判断参数 APIUsageNumber 是否已赋值
                     * @return APIUsageNumber 是否已赋值
                     * 
                     */
                    bool APIUsageNumberHasBeenSet() const;

                    /**
                     * 获取告警短信数量
                     * @return AlarmSMSNumber 告警短信数量
                     * 
                     */
                    int64_t GetAlarmSMSNumber() const;

                    /**
                     * 判断参数 AlarmSMSNumber 是否已赋值
                     * @return AlarmSMSNumber 是否已赋值
                     * 
                     */
                    bool AlarmSMSNumberHasBeenSet() const;

                private:

                    /**
                     * 电话告警数量
                     */
                    int64_t m_phoneAlarmNumber;
                    bool m_phoneAlarmNumberHasBeenSet;

                    /**
                     * 高级指标数量
                     */
                    int64_t m_advancedMetricNumber;
                    bool m_advancedMetricNumberHasBeenSet;

                    /**
                     * API调用量
                     */
                    int64_t m_aPIUsageNumber;
                    bool m_aPIUsageNumberHasBeenSet;

                    /**
                     * 告警短信数量
                     */
                    int64_t m_alarmSMSNumber;
                    bool m_alarmSMSNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORRESOURCEINFORESPONSE_H_
