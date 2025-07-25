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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModifyInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamLinkInput请求参数结构体
                */
                class ModifyStreamLinkInputRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkInputRequest();
                    ~ModifyStreamLinkInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流Id。
                     * @return FlowId 流Id。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流Id。
                     * @param _flowId 流Id。
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
                     * 获取需要修改的Input信息。
                     * @return Input 需要修改的Input信息。
                     * 
                     */
                    ModifyInput GetInput() const;

                    /**
                     * 设置需要修改的Input信息。
                     * @param _input 需要修改的Input信息。
                     * 
                     */
                    void SetInput(const ModifyInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 需要修改的Input信息。
                     */
                    ModifyInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_
