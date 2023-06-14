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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_

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
                * DescribeAllStreamPlayInfoList请求参数结构体
                */
                class DescribeAllStreamPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeAllStreamPlayInfoListRequest();
                    ~DescribeAllStreamPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询时间点，精确到分钟粒度，支持最近1个月的数据查询，数据延迟为5分钟左右，如果要查询实时的数据，建议传递5分钟前的时间点，格式为yyyy-mm-dd HH:MM:00。（只精确至分钟，秒数填00）。
                     * @return QueryTime 查询时间点，精确到分钟粒度，支持最近1个月的数据查询，数据延迟为5分钟左右，如果要查询实时的数据，建议传递5分钟前的时间点，格式为yyyy-mm-dd HH:MM:00。（只精确至分钟，秒数填00）。
                     * 
                     */
                    std::string GetQueryTime() const;

                    /**
                     * 设置查询时间点，精确到分钟粒度，支持最近1个月的数据查询，数据延迟为5分钟左右，如果要查询实时的数据，建议传递5分钟前的时间点，格式为yyyy-mm-dd HH:MM:00。（只精确至分钟，秒数填00）。
                     * @param _queryTime 查询时间点，精确到分钟粒度，支持最近1个月的数据查询，数据延迟为5分钟左右，如果要查询实时的数据，建议传递5分钟前的时间点，格式为yyyy-mm-dd HH:MM:00。（只精确至分钟，秒数填00）。
                     * 
                     */
                    void SetQueryTime(const std::string& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取播放域名列表，若不填，表示总体数据。
                     * @return PlayDomains 播放域名列表，若不填，表示总体数据。
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置播放域名列表，若不填，表示总体数据。
                     * @param _playDomains 播放域名列表，若不填，表示总体数据。
                     * 
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     * 
                     */
                    bool PlayDomainsHasBeenSet() const;

                private:

                    /**
                     * 查询时间点，精确到分钟粒度，支持最近1个月的数据查询，数据延迟为5分钟左右，如果要查询实时的数据，建议传递5分钟前的时间点，格式为yyyy-mm-dd HH:MM:00。（只精确至分钟，秒数填00）。
                     */
                    std::string m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 播放域名列表，若不填，表示总体数据。
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTREQUEST_H_
