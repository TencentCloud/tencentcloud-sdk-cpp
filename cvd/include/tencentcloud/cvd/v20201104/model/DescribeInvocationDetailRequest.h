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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONDETAILREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInvocationDetail请求参数结构体
                */
                class DescribeInvocationDetailRequest : public AbstractModel
                {
                public:
                    DescribeInvocationDetailRequest();
                    ~DescribeInvocationDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云桌面实例ID。</p>
                     * @return InstanceId <p>云桌面实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云桌面实例ID。</p>
                     * @param _instanceId <p>云桌面实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>任务ID。</p>
                     * @return InvokeId <p>任务ID。</p>
                     * 
                     */
                    std::string GetInvokeId() const;

                    /**
                     * 设置<p>任务ID。</p>
                     * @param _invokeId <p>任务ID。</p>
                     * 
                     */
                    void SetInvokeId(const std::string& _invokeId);

                    /**
                     * 判断参数 InvokeId 是否已赋值
                     * @return InvokeId 是否已赋值
                     * 
                     */
                    bool InvokeIdHasBeenSet() const;

                    /**
                     * 获取<p>需要返回的任务输出行号起始索引。</p>
                     * @return OutputLinesOffset <p>需要返回的任务输出行号起始索引。</p>
                     * 
                     */
                    uint64_t GetOutputLinesOffset() const;

                    /**
                     * 设置<p>需要返回的任务输出行号起始索引。</p>
                     * @param _outputLinesOffset <p>需要返回的任务输出行号起始索引。</p>
                     * 
                     */
                    void SetOutputLinesOffset(const uint64_t& _outputLinesOffset);

                    /**
                     * 判断参数 OutputLinesOffset 是否已赋值
                     * @return OutputLinesOffset 是否已赋值
                     * 
                     */
                    bool OutputLinesOffsetHasBeenSet() const;

                    /**
                     * 获取<p>需要返回的任务输出行数。</p>
                     * @return OutputLinesLimit <p>需要返回的任务输出行数。</p>
                     * 
                     */
                    uint64_t GetOutputLinesLimit() const;

                    /**
                     * 设置<p>需要返回的任务输出行数。</p>
                     * @param _outputLinesLimit <p>需要返回的任务输出行数。</p>
                     * 
                     */
                    void SetOutputLinesLimit(const uint64_t& _outputLinesLimit);

                    /**
                     * 判断参数 OutputLinesLimit 是否已赋值
                     * @return OutputLinesLimit 是否已赋值
                     * 
                     */
                    bool OutputLinesLimitHasBeenSet() const;

                    /**
                     * 获取<p>任务的输出内容是否合并成一个字符串。默认为true。</p>
                     * @return MergeOutputLines <p>任务的输出内容是否合并成一个字符串。默认为true。</p>
                     * 
                     */
                    bool GetMergeOutputLines() const;

                    /**
                     * 设置<p>任务的输出内容是否合并成一个字符串。默认为true。</p>
                     * @param _mergeOutputLines <p>任务的输出内容是否合并成一个字符串。默认为true。</p>
                     * 
                     */
                    void SetMergeOutputLines(const bool& _mergeOutputLines);

                    /**
                     * 判断参数 MergeOutputLines 是否已赋值
                     * @return MergeOutputLines 是否已赋值
                     * 
                     */
                    bool MergeOutputLinesHasBeenSet() const;

                private:

                    /**
                     * <p>云桌面实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>任务ID。</p>
                     */
                    std::string m_invokeId;
                    bool m_invokeIdHasBeenSet;

                    /**
                     * <p>需要返回的任务输出行号起始索引。</p>
                     */
                    uint64_t m_outputLinesOffset;
                    bool m_outputLinesOffsetHasBeenSet;

                    /**
                     * <p>需要返回的任务输出行数。</p>
                     */
                    uint64_t m_outputLinesLimit;
                    bool m_outputLinesLimitHasBeenSet;

                    /**
                     * <p>任务的输出内容是否合并成一个字符串。默认为true。</p>
                     */
                    bool m_mergeOutputLines;
                    bool m_mergeOutputLinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONDETAILREQUEST_H_
