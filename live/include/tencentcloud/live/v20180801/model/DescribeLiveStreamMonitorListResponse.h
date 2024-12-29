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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveStreamMonitorList返回参数结构体
                */
                class DescribeLiveStreamMonitorListResponse : public AbstractModel
                {
                public:
                    DescribeLiveStreamMonitorListResponse();
                    ~DescribeLiveStreamMonitorListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号下的直播流监播任务个数。
                     * @return TotalNum 账号下的直播流监播任务个数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取直播流监播任务列表
                     * @return LiveStreamMonitors 直播流监播任务列表
                     * 
                     */
                    std::vector<LiveStreamMonitorInfo> GetLiveStreamMonitors() const;

                    /**
                     * 判断参数 LiveStreamMonitors 是否已赋值
                     * @return LiveStreamMonitors 是否已赋值
                     * 
                     */
                    bool LiveStreamMonitorsHasBeenSet() const;

                private:

                    /**
                     * 账号下的直播流监播任务个数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 直播流监播任务列表
                     */
                    std::vector<LiveStreamMonitorInfo> m_liveStreamMonitors;
                    bool m_liveStreamMonitorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTRESPONSE_H_
