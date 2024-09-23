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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * CallbackStatusStatistics请求参数结构体
                */
                class CallbackStatusStatisticsRequest : public AbstractModel
                {
                public:
                    CallbackStatusStatisticsRequest();
                    ~CallbackStatusStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，yyyymmddhh 需要拉取的起始时间，精确到小时。
                     * @return StartDateTime 开始时间，yyyymmddhh 需要拉取的起始时间，精确到小时。
                     * 
                     */
                    uint64_t GetStartDateTime() const;

                    /**
                     * 设置开始时间，yyyymmddhh 需要拉取的起始时间，精确到小时。
                     * @param _startDateTime 开始时间，yyyymmddhh 需要拉取的起始时间，精确到小时。
                     * 
                     */
                    void SetStartDateTime(const uint64_t& _startDateTime);

                    /**
                     * 判断参数 StartDateTime 是否已赋值
                     * @return StartDateTime 是否已赋值
                     * 
                     */
                    bool StartDateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，yyyymmddhh 需要拉取的截止时间，精确到小时。
注：EndDataTime 必须大于等于 StartDateTime。
                     * @return EndDataTime 结束时间，yyyymmddhh 需要拉取的截止时间，精确到小时。
注：EndDataTime 必须大于等于 StartDateTime。
                     * 
                     */
                    uint64_t GetEndDataTime() const;

                    /**
                     * 设置结束时间，yyyymmddhh 需要拉取的截止时间，精确到小时。
注：EndDataTime 必须大于等于 StartDateTime。
                     * @param _endDataTime 结束时间，yyyymmddhh 需要拉取的截止时间，精确到小时。
注：EndDataTime 必须大于等于 StartDateTime。
                     * 
                     */
                    void SetEndDataTime(const uint64_t& _endDataTime);

                    /**
                     * 判断参数 EndDataTime 是否已赋值
                     * @return EndDataTime 是否已赋值
                     * 
                     */
                    bool EndDataTimeHasBeenSet() const;

                    /**
                     * 获取短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @return SmsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @param _smsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     * 
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                    /**
                     * 获取最大上限。
注：目前固定设置为0。
                     * @return Limit 最大上限。
注：目前固定设置为0。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大上限。
注：目前固定设置为0。
                     * @param _limit 最大上限。
注：目前固定设置为0。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。
注：目前固定设置为0。
                     * @return Offset 偏移量。
注：目前固定设置为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
注：目前固定设置为0。
                     * @param _offset 偏移量。
注：目前固定设置为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 开始时间，yyyymmddhh 需要拉取的起始时间，精确到小时。
                     */
                    uint64_t m_startDateTime;
                    bool m_startDateTimeHasBeenSet;

                    /**
                     * 结束时间，yyyymmddhh 需要拉取的截止时间，精确到小时。
注：EndDataTime 必须大于等于 StartDateTime。
                     */
                    uint64_t m_endDataTime;
                    bool m_endDataTimeHasBeenSet;

                    /**
                     * 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，示例如1400006666。
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * 最大上限。
注：目前固定设置为0。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
注：目前固定设置为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICSREQUEST_H_
