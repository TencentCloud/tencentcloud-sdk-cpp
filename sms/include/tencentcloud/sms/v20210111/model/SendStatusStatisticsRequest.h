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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * SendStatusStatistics请求参数结构体
                */
                class SendStatusStatisticsRequest : public AbstractModel
                {
                public:
                    SendStatusStatisticsRequest();
                    ~SendStatusStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。
                     * @return BeginTime 起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。
                     * @param _beginTime 起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。
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
                     * 获取结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。
注：EndTime 必须大于等于 BeginTime。
                     * @return EndTime 结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。
注：EndTime 必须大于等于 BeginTime。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。
注：EndTime 必须大于等于 BeginTime。
                     * @param _endTime 结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。
注：EndTime 必须大于等于 BeginTime。
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
                     * 获取短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * @return SmsSdkAppId 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * @param _smsSdkAppId 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

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
                     * 起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。
注：EndTime 必须大于等于 BeginTime。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

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

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSREQUEST_H_
