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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_

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
                * ModifyStreamLinkFlow请求参数结构体
                */
                class ModifyStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkFlowRequest();
                    ~ModifyStreamLinkFlowRequest() = default;
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
                     * 获取需要修改的流名称。
                     * @return FlowName 需要修改的流名称。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置需要修改的流名称。
                     * @param _flowName 需要修改的流名称。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                private:

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 需要修改的流名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_
