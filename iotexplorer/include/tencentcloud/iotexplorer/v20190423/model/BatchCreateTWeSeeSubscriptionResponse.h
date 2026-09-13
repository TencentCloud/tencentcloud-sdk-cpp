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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCreateSubscriptionResult.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BatchCreateTWeSeeSubscription返回参数结构体
                */
                class BatchCreateTWeSeeSubscriptionResponse : public AbstractModel
                {
                public:
                    BatchCreateTWeSeeSubscriptionResponse();
                    ~BatchCreateTWeSeeSubscriptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅开通结果列表
                     * @return Results 订阅开通结果列表
                     * 
                     */
                    std::vector<SeeCreateSubscriptionResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 订阅开通结果列表
                     */
                    std::vector<SeeCreateSubscriptionResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONRESPONSE_H_
