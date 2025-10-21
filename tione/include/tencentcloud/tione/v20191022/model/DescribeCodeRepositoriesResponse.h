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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORIESRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/CodeRepoSummary.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeCodeRepositories返回参数结构体
                */
                class DescribeCodeRepositoriesResponse : public AbstractModel
                {
                public:
                    DescribeCodeRepositoriesResponse();
                    ~DescribeCodeRepositoriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存储库总数目
                     * @return TotalCount 存储库总数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取存储库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeRepoSet 存储库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodeRepoSummary> GetCodeRepoSet() const;

                    /**
                     * 判断参数 CodeRepoSet 是否已赋值
                     * @return CodeRepoSet 是否已赋值
                     * 
                     */
                    bool CodeRepoSetHasBeenSet() const;

                private:

                    /**
                     * 存储库总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 存储库列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodeRepoSummary> m_codeRepoSet;
                    bool m_codeRepoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORIESRESPONSE_H_
