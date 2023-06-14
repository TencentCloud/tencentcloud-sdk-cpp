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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateStreamLinkOutputInfo请求参数结构体
                */
                class CreateStreamLinkOutputInfoRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkOutputInfoRequest();
                    ~CreateStreamLinkOutputInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取传输流Id。
                     * @return FlowId 传输流Id。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置传输流Id。
                     * @param _flowId 传输流Id。
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
                     * 获取传输流的Output配置。
                     * @return Output 传输流的Output配置。
                     * 
                     */
                    CreateOutputInfo GetOutput() const;

                    /**
                     * 设置传输流的Output配置。
                     * @param _output 传输流的Output配置。
                     * 
                     */
                    void SetOutput(const CreateOutputInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 传输流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 传输流的Output配置。
                     */
                    CreateOutputInfo m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_
