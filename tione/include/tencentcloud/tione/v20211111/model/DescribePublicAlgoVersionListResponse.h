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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPUBLICALGOVERSIONLISTRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPUBLICALGOVERSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/PublicAlgoVersion.h>
#include <tencentcloud/tione/v20211111/model/AggregatePublicAlgoVersion.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribePublicAlgoVersionList返回参数结构体
                */
                class DescribePublicAlgoVersionListResponse : public AbstractModel
                {
                public:
                    DescribePublicAlgoVersionListResponse();
                    ~DescribePublicAlgoVersionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取算法版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 算法版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAlgoVersions 公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicAlgoVersion> GetPublicAlgoVersions() const;

                    /**
                     * 判断参数 PublicAlgoVersions 是否已赋值
                     * @return PublicAlgoVersions 是否已赋值
                     * 
                     */
                    bool PublicAlgoVersionsHasBeenSet() const;

                    /**
                     * 获取聚合后的公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AggregatePublicAlgoVersions 聚合后的公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AggregatePublicAlgoVersion> GetAggregatePublicAlgoVersions() const;

                    /**
                     * 判断参数 AggregatePublicAlgoVersions 是否已赋值
                     * @return AggregatePublicAlgoVersions 是否已赋值
                     * 
                     */
                    bool AggregatePublicAlgoVersionsHasBeenSet() const;

                private:

                    /**
                     * 算法版本数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicAlgoVersion> m_publicAlgoVersions;
                    bool m_publicAlgoVersionsHasBeenSet;

                    /**
                     * 聚合后的公共算法版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AggregatePublicAlgoVersion> m_aggregatePublicAlgoVersions;
                    bool m_aggregatePublicAlgoVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPUBLICALGOVERSIONLISTRESPONSE_H_
