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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InvokeAISearchService请求参数结构体
                */
                class InvokeAISearchServiceRequest : public AbstractModel
                {
                public:
                    InvokeAISearchServiceRequest();
                    ~InvokeAISearchServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取自然语言查询
                     * @return Query 自然语言查询
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置自然语言查询
                     * @param _query 自然语言查询
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * @return SummaryLang 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * 
                     */
                    std::string GetSummaryLang() const;

                    /**
                     * 设置搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * @param _summaryLang 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     * 
                     */
                    void SetSummaryLang(const std::string& _summaryLang);

                    /**
                     * 判断参数 SummaryLang 是否已赋值
                     * @return SummaryLang 是否已赋值
                     * 
                     */
                    bool SummaryLangHasBeenSet() const;

                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取是否需要返回总结，默认为False；  开启后会加大接口响应时长
                     * @return EnableSummary 是否需要返回总结，默认为False；  开启后会加大接口响应时长
                     * 
                     */
                    bool GetEnableSummary() const;

                    /**
                     * 设置是否需要返回总结，默认为False；  开启后会加大接口响应时长
                     * @param _enableSummary 是否需要返回总结，默认为False；  开启后会加大接口响应时长
                     * 
                     */
                    void SetEnableSummary(const bool& _enableSummary);

                    /**
                     * 判断参数 EnableSummary 是否已赋值
                     * @return EnableSummary 是否已赋值
                     * 
                     */
                    bool EnableSummaryHasBeenSet() const;

                    /**
                     * 获取开始时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * @return StartTimeMs 开始时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置开始时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * @param _startTimeMs 开始时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取结束时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * @return EndTimeMs 结束时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置结束时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * @param _endTimeMs 结束时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取时区。默认值：Asia/Shanghai

注：
符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok

                     * @return TimeZone 时区。默认值：Asia/Shanghai

注：
符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok

                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区。默认值：Asia/Shanghai

注：
符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok

                     * @param _timeZone 时区。默认值：Asia/Shanghai

注：
符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok

                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 自然语言查询
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH
                     */
                    std::string m_summaryLang;
                    bool m_summaryLangHasBeenSet;

                    /**
                     * 通道ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 是否需要返回总结，默认为False；  开启后会加大接口响应时长
                     */
                    bool m_enableSummary;
                    bool m_enableSummaryHasBeenSet;

                    /**
                     * 开始时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * 结束时间。

注：
1. 单位为毫秒（ms）
2. 如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后7天内的数据， 反之EndTimeMs也一样）
3. 只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为"过去三天关于猫咪的视频"， 则会将"过去三天忽略"）
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * 时区。默认值：Asia/Shanghai

注：
符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok

                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_
