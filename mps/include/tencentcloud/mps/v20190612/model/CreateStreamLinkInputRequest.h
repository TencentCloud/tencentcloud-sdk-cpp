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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKINPUTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKINPUTREQUEST_H_

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
                * CreateStreamLinkInput请求参数结构体
                */
                class CreateStreamLinkInputRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkInputRequest();
                    ~CreateStreamLinkInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体传输流ID。
                     * @return FlowId 媒体传输流ID。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置媒体传输流ID。
                     * @param _flowId 媒体传输流ID。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

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

                private:

                    /**
                     * 媒体传输流ID。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流的输入组。
                     */
                    std::vector<CreateInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKINPUTREQUEST_H_
