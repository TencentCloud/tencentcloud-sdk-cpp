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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ScoreInfo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeScores返回参数结构体
                */
                class DescribeScoresResponse : public AbstractModel
                {
                public:
                    DescribeScoresResponse();
                    ~DescribeScoresResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数组
                     * @return ScoreSet 数组
                     * 
                     */
                    std::vector<ScoreInfo> GetScoreSet() const;

                    /**
                     * 判断参数 ScoreSet 是否已赋值
                     * @return ScoreSet 是否已赋值
                     * 
                     */
                    bool ScoreSetHasBeenSet() const;

                private:

                    /**
                     * 数组
                     */
                    std::vector<ScoreInfo> m_scoreSet;
                    bool m_scoreSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBESCORESRESPONSE_H_
