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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORRESPONSE_H_

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
                * DescribeLiveStreamMonitor返回参数结构体
                */
                class DescribeLiveStreamMonitorResponse : public AbstractModel
                {
                public:
                    DescribeLiveStreamMonitorResponse();
                    ~DescribeLiveStreamMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取直播监播任务相关信息。
                     * @return LiveStreamMonitor 直播监播任务相关信息。
                     * 
                     */
                    LiveStreamMonitorInfo GetLiveStreamMonitor() const;

                    /**
                     * 判断参数 LiveStreamMonitor 是否已赋值
                     * @return LiveStreamMonitor 是否已赋值
                     * 
                     */
                    bool LiveStreamMonitorHasBeenSet() const;

                private:

                    /**
                     * 直播监播任务相关信息。
                     */
                    LiveStreamMonitorInfo m_liveStreamMonitor;
                    bool m_liveStreamMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORRESPONSE_H_
