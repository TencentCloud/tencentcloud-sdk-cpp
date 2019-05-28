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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DescribeModerationOverview请求参数结构体
                */
                class DescribeModerationOverviewRequest : public AbstractModel
                {
                public:
                    DescribeModerationOverviewRequest();
                    ~DescribeModerationOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日期，如2019-01-01， 查询该日期的概览数据
                     * @return Date 日期，如2019-01-01， 查询该日期的概览数据
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期，如2019-01-01， 查询该日期的概览数据
                     * @param Date 日期，如2019-01-01， 查询该日期的概览数据
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取服务类型数组，可以动态配置，Text:文本，Image:图片，Audio:音频，Video:视频, 使用"ALL"表示所有类型, 不区分大小写，如 ["Text", "Image"]查询文本和图片服务的数据，["all"]查询所有服务的数据。
                     * @return ServiceTypes 服务类型数组，可以动态配置，Text:文本，Image:图片，Audio:音频，Video:视频, 使用"ALL"表示所有类型, 不区分大小写，如 ["Text", "Image"]查询文本和图片服务的数据，["all"]查询所有服务的数据。
                     */
                    std::vector<std::string> GetServiceTypes() const;

                    /**
                     * 设置服务类型数组，可以动态配置，Text:文本，Image:图片，Audio:音频，Video:视频, 使用"ALL"表示所有类型, 不区分大小写，如 ["Text", "Image"]查询文本和图片服务的数据，["all"]查询所有服务的数据。
                     * @param ServiceTypes 服务类型数组，可以动态配置，Text:文本，Image:图片，Audio:音频，Video:视频, 使用"ALL"表示所有类型, 不区分大小写，如 ["Text", "Image"]查询文本和图片服务的数据，["all"]查询所有服务的数据。
                     */
                    void SetServiceTypes(const std::vector<std::string>& _serviceTypes);

                    /**
                     * 判断参数 ServiceTypes 是否已赋值
                     * @return ServiceTypes 是否已赋值
                     */
                    bool ServiceTypesHasBeenSet() const;

                    /**
                     * 获取渠道号数组，1:直播 2:点播 3:IM 4:GME，统计指定渠道组合的汇总数据，如[1,2]表示获取直播和点播两个渠道的汇总数据，不填[]为所有渠道汇总数据
                     * @return Channels 渠道号数组，1:直播 2:点播 3:IM 4:GME，统计指定渠道组合的汇总数据，如[1,2]表示获取直播和点播两个渠道的汇总数据，不填[]为所有渠道汇总数据
                     */
                    std::vector<uint64_t> GetChannels() const;

                    /**
                     * 设置渠道号数组，1:直播 2:点播 3:IM 4:GME，统计指定渠道组合的汇总数据，如[1,2]表示获取直播和点播两个渠道的汇总数据，不填[]为所有渠道汇总数据
                     * @param Channels 渠道号数组，1:直播 2:点播 3:IM 4:GME，统计指定渠道组合的汇总数据，如[1,2]表示获取直播和点播两个渠道的汇总数据，不填[]为所有渠道汇总数据
                     */
                    void SetChannels(const std::vector<uint64_t>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * 日期，如2019-01-01， 查询该日期的概览数据
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 服务类型数组，可以动态配置，Text:文本，Image:图片，Audio:音频，Video:视频, 使用"ALL"表示所有类型, 不区分大小写，如 ["Text", "Image"]查询文本和图片服务的数据，["all"]查询所有服务的数据。
                     */
                    std::vector<std::string> m_serviceTypes;
                    bool m_serviceTypesHasBeenSet;

                    /**
                     * 渠道号数组，1:直播 2:点播 3:IM 4:GME，统计指定渠道组合的汇总数据，如[1,2]表示获取直播和点播两个渠道的汇总数据，不填[]为所有渠道汇总数据
                     */
                    std::vector<uint64_t> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWREQUEST_H_
