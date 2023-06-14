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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/CopyJobResult.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CopyJobs返回参数结构体
                */
                class CopyJobsResponse : public AbstractModel
                {
                public:
                    CopyJobsResponse();
                    ~CopyJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCount 失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CopyJobsResults 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CopyJobResult> GetCopyJobsResults() const;

                    /**
                     * 判断参数 CopyJobsResults 是否已赋值
                     * @return CopyJobsResults 是否已赋值
                     * 
                     */
                    bool CopyJobsResultsHasBeenSet() const;

                private:

                    /**
                     * 成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CopyJobResult> m_copyJobsResults;
                    bool m_copyJobsResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSRESPONSE_H_
