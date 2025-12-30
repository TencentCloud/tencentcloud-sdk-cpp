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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveTranscodeTotalInfo请求参数结构体
                */
                class DescribeLiveTranscodeTotalInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeTotalInfoRequest();
                    ~DescribeLiveTranscodeTotalInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * @return StartTime <p>开始时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * @param _startTime <p>开始时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
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
                     * 获取<p>结束时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * @return EndTime <p>结束时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     * @param _endTime <p>结束时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
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
                     * 获取<p>推流域名列表，若不填，表示查询所有域名总体数据。指定域名时返回1小时粒度数据。</p>
                     * @return PushDomains <p>推流域名列表，若不填，表示查询所有域名总体数据。指定域名时返回1小时粒度数据。</p>
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置<p>推流域名列表，若不填，表示查询所有域名总体数据。指定域名时返回1小时粒度数据。</p>
                     * @param _pushDomains <p>推流域名列表，若不填，表示查询所有域名总体数据。指定域名时返回1小时粒度数据。</p>
                     * 
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     * 
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取<p>可选值：Mainland：查询中国大陆（境内）数据，Oversea：则查询国际/港澳台（境外）数据，默认：查询全球地区（境内+境外）的数据。</p>
                     * @return MainlandOrOversea <p>可选值：Mainland：查询中国大陆（境内）数据，Oversea：则查询国际/港澳台（境外）数据，默认：查询全球地区（境内+境外）的数据。</p>
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置<p>可选值：Mainland：查询中国大陆（境内）数据，Oversea：则查询国际/港澳台（境外）数据，默认：查询全球地区（境内+境外）的数据。</p>
                     * @param _mainlandOrOversea <p>可选值：Mainland：查询中国大陆（境内）数据，Oversea：则查询国际/港澳台（境外）数据，默认：查询全球地区（境内+境外）的数据。</p>
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，支持最近三个月的数据查询，起始时间和结束时间跨度不能超过三个月。接口查询支持两种时间格式：1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见 <a href="https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F">ISO 日期格式说明</a>2）YYYY-MM-DD hh:mm:ss：使用此格式时，默认代表北京时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>推流域名列表，若不填，表示查询所有域名总体数据。指定域名时返回1小时粒度数据。</p>
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * <p>可选值：Mainland：查询中国大陆（境内）数据，Oversea：则查询国际/港澳台（境外）数据，默认：查询全球地区（境内+境外）的数据。</p>
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
