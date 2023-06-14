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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModifyOutputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamLinkOutputInfo请求参数结构体
                */
                class ModifyStreamLinkOutputInfoRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkOutputInfoRequest();
                    ~ModifyStreamLinkOutputInfoRequest() = default;
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
                     * 获取需要修改的Output配置。
                     * @return Output 需要修改的Output配置。
                     * 
                     */
                    ModifyOutputInfo GetOutput() const;

                    /**
                     * 设置需要修改的Output配置。
                     * @param _output 需要修改的Output配置。
                     * 
                     */
                    void SetOutput(const ModifyOutputInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 需要修改的Output配置。
                     */
                    ModifyOutputInfo m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_
