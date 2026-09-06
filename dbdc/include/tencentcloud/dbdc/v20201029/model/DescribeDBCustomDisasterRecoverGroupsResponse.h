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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/DisasterRecoverGroup.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomDisasterRecoverGroups返回参数结构体
                */
                class DescribeDBCustomDisasterRecoverGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomDisasterRecoverGroupsResponse();
                    ~DescribeDBCustomDisasterRecoverGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>置放群组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisasterRecoverGroupSet <p>置放群组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DisasterRecoverGroup> GetDisasterRecoverGroupSet() const;

                    /**
                     * 判断参数 DisasterRecoverGroupSet 是否已赋值
                     * @return DisasterRecoverGroupSet 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupSetHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>置放群组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DisasterRecoverGroup> m_disasterRecoverGroupSet;
                    bool m_disasterRecoverGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSRESPONSE_H_
