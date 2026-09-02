/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。注：统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * @return BeginTime <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。注：统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。注：统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * @param _beginTime <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。注：统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
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
                     * 获取<p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。注：EndTime 必须大于等于 BeginTime，统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * @return EndTime <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。注：EndTime 必须大于等于 BeginTime，统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。注：EndTime 必须大于等于 BeginTime，统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     * @param _endTime <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。注：EndTime 必须大于等于 BeginTime，统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
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
                     * 获取<p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
                     * @return SmsSdkAppId <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置<p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
                     * @param _smsSdkAppId <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
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
                     * 获取<p>最大上限。<br>注：目前固定设置为0。</p>
                     * @return Limit <p>最大上限。<br>注：目前固定设置为0。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>最大上限。<br>注：目前固定设置为0。</p>
                     * @param _limit <p>最大上限。<br>注：目前固定设置为0。</p>
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
                     * 获取<p>偏移量。<br>注：目前固定设置为0。</p>
                     * @return Offset <p>偏移量。<br>注：目前固定设置为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。<br>注：目前固定设置为0。</p>
                     * @param _offset <p>偏移量。<br>注：目前固定设置为0。</p>
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
                     * <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。注：统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。注：EndTime 必须大于等于 BeginTime，统计范围包含当前小时。</p><p>参数格式：yyyymmddhh</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * <p>最大上限。<br>注：目前固定设置为0。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量。<br>注：目前固定设置为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSREQUEST_H_
