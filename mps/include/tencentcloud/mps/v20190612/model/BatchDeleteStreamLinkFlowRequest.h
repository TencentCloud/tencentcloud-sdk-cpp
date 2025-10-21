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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHDELETESTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHDELETESTREAMLINKFLOWREQUEST_H_

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
                * BatchDeleteStreamLinkFlow请求参数结构体
                */
                class BatchDeleteStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    BatchDeleteStreamLinkFlowRequest();
                    ~BatchDeleteStreamLinkFlowRequest() = default;
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
                     * 获取Event关联的流Id数组，如果不传默认删除Event下面的所有媒体传输流。
                     * @return FlowIds Event关联的流Id数组，如果不传默认删除Event下面的所有媒体传输流。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置Event关联的流Id数组，如果不传默认删除Event下面的所有媒体传输流。
                     * @param _flowIds Event关联的流Id数组，如果不传默认删除Event下面的所有媒体传输流。
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
                     * Event关联的流Id数组，如果不传默认删除Event下面的所有媒体传输流。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHDELETESTREAMLINKFLOWREQUEST_H_
