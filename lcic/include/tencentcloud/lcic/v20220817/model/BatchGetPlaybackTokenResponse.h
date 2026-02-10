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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHGETPLAYBACKTOKENRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHGETPLAYBACKTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/TokenResult.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchGetPlaybackToken返回参数结构体
                */
                class BatchGetPlaybackTokenResponse : public AbstractModel
                {
                public:
                    BatchGetPlaybackTokenResponse();
                    ~BatchGetPlaybackTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>token值，用于回放鉴权。</p>
                     * @return Results <p>token值，用于回放鉴权。</p>
                     * 
                     */
                    std::vector<TokenResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取<p>房间ID。</p>
                     * @return Total <p>房间ID。</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>token值，用于回放鉴权。</p>
                     */
                    std::vector<TokenResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * <p>房间ID。</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHGETPLAYBACKTOKENRESPONSE_H_
