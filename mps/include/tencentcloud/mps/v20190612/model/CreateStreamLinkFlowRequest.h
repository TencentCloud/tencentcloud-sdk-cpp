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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateStreamLinkFlow请求参数结构体
                */
                class CreateStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkFlowRequest();
                    ~CreateStreamLinkFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流名称。
                     * @return FlowName 流名称。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流名称。
                     * @param _flowName 流名称。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取最大带宽，单位bps，可选[10000000, 20000000, 50000000]。
                     * @return MaxBandwidth 最大带宽，单位bps，可选[10000000, 20000000, 50000000]。
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置最大带宽，单位bps，可选[10000000, 20000000, 50000000]。
                     * @param _maxBandwidth 最大带宽，单位bps，可选[10000000, 20000000, 50000000]。
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取流的输入组。
                     * @return InputGroup 流的输入组。
                     * 
                     */
                    std::vector<CreateInput> GetInputGroup() const;

                    /**
                     * 设置流的输入组。
                     * @param _inputGroup 流的输入组。
                     * 
                     */
                    void SetInputGroup(const std::vector<CreateInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     * 
                     */
                    bool InputGroupHasBeenSet() const;

                    /**
                     * 获取该Flow关联的媒体传输事件ID，每个flow只能关联一个Event。
                     * @return EventId 该Flow关联的媒体传输事件ID，每个flow只能关联一个Event。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置该Flow关联的媒体传输事件ID，每个flow只能关联一个Event。
                     * @param _eventId 该Flow关联的媒体传输事件ID，每个flow只能关联一个Event。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 最大带宽，单位bps，可选[10000000, 20000000, 50000000]。
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 流的输入组。
                     */
                    std::vector<CreateInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                    /**
                     * 该Flow关联的媒体传输事件ID，每个flow只能关联一个Event。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
