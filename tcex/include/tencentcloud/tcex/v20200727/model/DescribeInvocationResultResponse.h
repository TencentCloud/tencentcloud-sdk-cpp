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

#ifndef TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcex/v20200727/model/AlgorithmResult.h>


namespace TencentCloud
{
    namespace Tcex
    {
        namespace V20200727
        {
            namespace Model
            {
                /**
                * DescribeInvocationResult返回参数结构体
                */
                class DescribeInvocationResultResponse : public AbstractModel
                {
                public:
                    DescribeInvocationResultResponse();
                    ~DescribeInvocationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务的调用结果
                     * @return Results 服务的调用结果
                     * 
                     */
                    std::vector<AlgorithmResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取0:获取结果失败
1：结果还没有生成，继续轮询
2：获取结果成功
                     * @return Status 0:获取结果失败
1：结果还没有生成，继续轮询
2：获取结果成功
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 服务的调用结果
                     */
                    std::vector<AlgorithmResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 0:获取结果失败
1：结果还没有生成，继续轮询
2：获取结果成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTRESPONSE_H_
