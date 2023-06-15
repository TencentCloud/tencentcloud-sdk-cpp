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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVESTREAMMONITORREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVESTREAMMONITORREQUEST_H_

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
                * StopLiveStreamMonitor请求参数结构体
                */
                class StopLiveStreamMonitorRequest : public AbstractModel
                {
                public:
                    StopLiveStreamMonitorRequest();
                    ~StopLiveStreamMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监播ID
                     * @return MonitorId 监播ID
                     * 
                     */
                    std::string GetMonitorId() const;

                    /**
                     * 设置监播ID
                     * @param _monitorId 监播ID
                     * 
                     */
                    void SetMonitorId(const std::string& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                private:

                    /**
                     * 监播ID
                     */
                    std::string m_monitorId;
                    bool m_monitorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STOPLIVESTREAMMONITORREQUEST_H_
