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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/Environment.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
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
                     * 获取符合条件的数量。
                     * @return TotalCount 符合条件的数量。
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
                     * 获取环境详情列表。
                     * @return Environments 环境详情列表。
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
                     * 符合条件的数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 环境详情列表。
                     */
                    std::vector<Environment> m_environments;
                    bool m_environmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEENVIRONMENTSRESPONSE_H_
