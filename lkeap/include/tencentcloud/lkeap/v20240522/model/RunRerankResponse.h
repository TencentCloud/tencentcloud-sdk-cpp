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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Usage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * RunRerank返回参数结构体
                */
                class RunRerankResponse : public AbstractModel
                {
                public:
                    RunRerankResponse();
                    ~RunRerankResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取相关性, 数值越大越相关
                     * @return ScoreList 相关性, 数值越大越相关
                     * 
                     */
                    std::vector<double> GetScoreList() const;

                    /**
                     * 判断参数 ScoreList 是否已赋值
                     * @return ScoreList 是否已赋值
                     * 
                     */
                    bool ScoreListHasBeenSet() const;

                    /**
                     * 获取消耗量，仅返回TotalToken
                     * @return Usage 消耗量，仅返回TotalToken
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 相关性, 数值越大越相关
                     */
                    std::vector<double> m_scoreList;
                    bool m_scoreListHasBeenSet;

                    /**
                     * 消耗量，仅返回TotalToken
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RUNRERANKRESPONSE_H_
