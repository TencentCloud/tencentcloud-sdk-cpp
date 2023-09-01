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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlow返回参数结构体
                */
                class CreateFlowResponse : public AbstractModel
                {
                public:
                    CreateFlowResponse();
                    ~CreateFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签署流程编号，

返回的流程编号，需要在CreateDocument，StartFlow中使用，

注意：这三个接口（CreateFlow，CreateDocument，StartFlow）要一并调用，才算发起成功
                     * @return FlowId 签署流程编号，

返回的流程编号，需要在CreateDocument，StartFlow中使用，

注意：这三个接口（CreateFlow，CreateDocument，StartFlow）要一并调用，才算发起成功
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 签署流程编号，

返回的流程编号，需要在CreateDocument，StartFlow中使用，

注意：这三个接口（CreateFlow，CreateDocument，StartFlow）要一并调用，才算发起成功
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWRESPONSE_H_
