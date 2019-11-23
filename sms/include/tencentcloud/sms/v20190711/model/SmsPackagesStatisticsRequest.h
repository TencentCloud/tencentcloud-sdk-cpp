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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_

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
                * SmsPackagesStatistics请求参数结构体
                */
                class SmsPackagesStatisticsRequest : public AbstractModel
                {
                public:
                    SmsPackagesStatisticsRequest();
                    ~SmsPackagesStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取最大上限
注：目前固定设置为0
                     * @return Limit 最大上限
注：目前固定设置为0
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大上限
注：目前固定设置为0
                     * @param Limit 最大上限
注：目前固定设置为0
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
注：目前固定设置为0
                     * @return Offset 偏移量
注：目前固定设置为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
注：目前固定设置为0
                     * @param Offset 偏移量
注：目前固定设置为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取需要拉取的套餐包个数
                     * @return NumberOfPullPackages 需要拉取的套餐包个数
                     */
                    uint64_t GetNumberOfPullPackages() const;

                    /**
                     * 设置需要拉取的套餐包个数
                     * @param NumberOfPullPackages 需要拉取的套餐包个数
                     */
                    void SetNumberOfPullPackages(const uint64_t& _numberOfPullPackages);

                    /**
                     * 判断参数 NumberOfPullPackages 是否已赋值
                     * @return NumberOfPullPackages 是否已赋值
                     */
                    bool NumberOfPullPackagesHasBeenSet() const;

                    /**
                     * 获取短信SdkAppid在[短信控制台](https://console.cloud.tencent.com/sms/smslist) 添加应用后生成的实际SdkAppid,示例如1400006666。
                     * @return SmsSdkAppid 短信SdkAppid在[短信控制台](https://console.cloud.tencent.com/sms/smslist) 添加应用后生成的实际SdkAppid,示例如1400006666。
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置短信SdkAppid在[短信控制台](https://console.cloud.tencent.com/sms/smslist) 添加应用后生成的实际SdkAppid,示例如1400006666。
                     * @param SmsSdkAppid 短信SdkAppid在[短信控制台](https://console.cloud.tencent.com/sms/smslist) 添加应用后生成的实际SdkAppid,示例如1400006666。
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                private:

                    /**
                     * 最大上限
注：目前固定设置为0
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
注：目前固定设置为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要拉取的套餐包个数
                     */
                    uint64_t m_numberOfPullPackages;
                    bool m_numberOfPullPackagesHasBeenSet;

                    /**
                     * 短信SdkAppid在[短信控制台](https://console.cloud.tencent.com/sms/smslist) 添加应用后生成的实际SdkAppid,示例如1400006666。
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICSREQUEST_H_
