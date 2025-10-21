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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSTOPSTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSTOPSTREAMLINKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * BatchStopStreamLinkFlow请求参数结构体
                */
                class BatchStopStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    BatchStopStreamLinkFlowRequest();
                    ~BatchStopStreamLinkFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EventId。
                     * @return EventId EventId。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置EventId。
                     * @param _eventId EventId。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取流Id，如果不传默认停止Event下所有的媒体传输流。
                     * @return FlowIds 流Id，如果不传默认停止Event下所有的媒体传输流。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置流Id，如果不传默认停止Event下所有的媒体传输流。
                     * @param _flowIds 流Id，如果不传默认停止Event下所有的媒体传输流。
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                private:

                    /**
                     * EventId。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 流Id，如果不传默认停止Event下所有的媒体传输流。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSTOPSTREAMLINKFLOWREQUEST_H_
