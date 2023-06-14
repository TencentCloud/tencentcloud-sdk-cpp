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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_

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
                * DescribeStreamLinkFlowRealtimeStatus请求参数结构体
                */
                class DescribeStreamLinkFlowRealtimeStatusRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowRealtimeStatusRequest();
                    ~DescribeStreamLinkFlowRealtimeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流ID。
                     * @return FlowId 流ID。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流ID。
                     * @param _flowId 流ID。
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
                     * 获取输入id数组，如果输入输出数组都为空，则代表全量查询。
                     * @return InputIds 输入id数组，如果输入输出数组都为空，则代表全量查询。
                     * 
                     */
                    std::vector<std::string> GetInputIds() const;

                    /**
                     * 设置输入id数组，如果输入输出数组都为空，则代表全量查询。
                     * @param _inputIds 输入id数组，如果输入输出数组都为空，则代表全量查询。
                     * 
                     */
                    void SetInputIds(const std::vector<std::string>& _inputIds);

                    /**
                     * 判断参数 InputIds 是否已赋值
                     * @return InputIds 是否已赋值
                     * 
                     */
                    bool InputIdsHasBeenSet() const;

                    /**
                     * 获取输出id数组，如果输入输出数组都为空，则代表全量查询。
                     * @return OutputIds 输出id数组，如果输入输出数组都为空，则代表全量查询。
                     * 
                     */
                    std::vector<std::string> GetOutputIds() const;

                    /**
                     * 设置输出id数组，如果输入输出数组都为空，则代表全量查询。
                     * @param _outputIds 输出id数组，如果输入输出数组都为空，则代表全量查询。
                     * 
                     */
                    void SetOutputIds(const std::vector<std::string>& _outputIds);

                    /**
                     * 判断参数 OutputIds 是否已赋值
                     * @return OutputIds 是否已赋值
                     * 
                     */
                    bool OutputIdsHasBeenSet() const;

                private:

                    /**
                     * 流ID。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 输入id数组，如果输入输出数组都为空，则代表全量查询。
                     */
                    std::vector<std::string> m_inputIds;
                    bool m_inputIdsHasBeenSet;

                    /**
                     * 输出id数组，如果输入输出数组都为空，则代表全量查询。
                     */
                    std::vector<std::string> m_outputIds;
                    bool m_outputIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_
