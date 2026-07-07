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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelTestResult.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * TestServiceProviderConnection返回参数结构体
                */
                class TestServiceProviderConnectionResponse : public AbstractModel
                {
                public:
                    TestServiceProviderConnectionResponse();
                    ~TestServiceProviderConnectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>探测结果</p>
                     * @return Results <p>探测结果</p>
                     * 
                     */
                    std::vector<ModelTestResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * <p>探测结果</p>
                     */
                    std::vector<ModelTestResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TESTSERVICEPROVIDERCONNECTIONRESPONSE_H_
