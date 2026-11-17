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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/Environment.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeEnvironments返回参数结构体
                */
                class DescribeEnvironmentsResponse : public AbstractModel
                {
                public:
                    DescribeEnvironmentsResponse();
                    ~DescribeEnvironmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>环境列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environments <p>环境列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Environment> GetEnvironments() const;

                    /**
                     * 判断参数 Environments 是否已赋值
                     * @return Environments 是否已赋值
                     * 
                     */
                    bool EnvironmentsHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>环境列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Environment> m_environments;
                    bool m_environmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_
