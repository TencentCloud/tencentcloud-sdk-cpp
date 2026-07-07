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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupOutput.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeTargetGroups返回参数结构体
                */
                class DescribeTargetGroupsResponse : public AbstractModel
                {
                public:
                    DescribeTargetGroupsResponse();
                    ~DescribeTargetGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下一次查询的Token值，如果当前是最后一页，返回为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 下一次查询的Token值，如果当前是最后一页，返回为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取目标组信息。
                     * @return TargetGroups 目标组信息。
                     * 
                     */
                    std::vector<TargetGroupOutput> GetTargetGroups() const;

                    /**
                     * 判断参数 TargetGroups 是否已赋值
                     * @return TargetGroups 是否已赋值
                     * 
                     */
                    bool TargetGroupsHasBeenSet() const;

                    /**
                     * 获取目标组总数。
                     * @return TotalCount 目标组总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 下一次查询的Token值，如果当前是最后一页，返回为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 目标组信息。
                     */
                    std::vector<TargetGroupOutput> m_targetGroups;
                    bool m_targetGroupsHasBeenSet;

                    /**
                     * 目标组总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSRESPONSE_H_
