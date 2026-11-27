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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_

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
                * SmsPackagesStatistics请求参数结构体
                */
                class SmsPackagesStatisticsRequest : public AbstractModel
                {
                public:
                    SmsPackagesStatisticsRequest();
                    ~SmsPackagesStatisticsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>最大上限(需要拉取的套餐包个数)。<br>注：Limit默认最大值为500，可结合Offset实现分页查询。</p>
                     * @return Limit <p>最大上限(需要拉取的套餐包个数)。<br>注：Limit默认最大值为500，可结合Offset实现分页查询。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>最大上限(需要拉取的套餐包个数)。<br>注：Limit默认最大值为500，可结合Offset实现分页查询。</p>
                     * @param _limit <p>最大上限(需要拉取的套餐包个数)。<br>注：Limit默认最大值为500，可结合Offset实现分页查询。</p>
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
                     * 获取<p>偏移量。</p>
                     * @return Offset <p>偏移量。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。</p>
                     * @param _offset <p>偏移量。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。<br>注：接口会返回 BeginTime 到 EndTime 之间创建的套餐包的统计信息。</p>
                     * @return BeginTime <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。<br>注：接口会返回 BeginTime 到 EndTime 之间创建的套餐包的统计信息。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。<br>注：接口会返回 BeginTime 到 EndTime 之间创建的套餐包的统计信息。</p>
                     * @param _beginTime <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。<br>注：接口会返回 BeginTime 到 EndTime 之间创建的套餐包的统计信息。</p>
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
                     * 获取<p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。<br>注：EndTime 必须大于 BeginTime 且小于当前时间。</p>
                     * @return EndTime <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。<br>注：EndTime 必须大于 BeginTime 且小于当前时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。<br>注：EndTime 必须大于 BeginTime 且小于当前时间。</p>
                     * @param _endTime <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。<br>注：EndTime 必须大于 BeginTime 且小于当前时间。</p>
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
                     * <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId，示例如1400006666。</p>
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * <p>最大上限(需要拉取的套餐包个数)。<br>注：Limit默认最大值为500，可结合Offset实现分页查询。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>起始时间，格式为yyyymmddhh，精确到小时，例如2024050113，表示2024年5月1号13时。<br>注：接口会返回 BeginTime 到 EndTime 之间创建的套餐包的统计信息。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间，格式为yyyymmddhh，精确到小时，例如2024050118，表示2024年5月1号18时。<br>注：EndTime 必须大于 BeginTime 且小于当前时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
