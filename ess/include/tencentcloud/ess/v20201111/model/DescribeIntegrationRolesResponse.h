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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/IntegrateRole.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeIntegrationRoles返回参数结构体
                */
                class DescribeIntegrationRolesResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationRolesResponse();
                    ~DescribeIntegrationRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0, 最大为2000
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20
                     * @return Offset OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0, 最大为2000
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取指定分页每页返回的数据条数，单页最大支持 200。
                     * @return Limit 指定分页每页返回的数据条数，单页最大支持 200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取符合查询条件的总角色数。
                     * @return TotalCount 符合查询条件的总角色数。
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
                     * 获取企业角色信息列表。
                     * @return IntegrateRoles 企业角色信息列表。
                     * 
                     */
                    std::vector<IntegrateRole> GetIntegrateRoles() const;

                    /**
                     * 判断参数 IntegrateRoles 是否已赋值
                     * @return IntegrateRoles 是否已赋值
                     * 
                     */
                    bool IntegrateRolesHasBeenSet() const;

                private:

                    /**
                     * OFFSET 用于指定查询结果的偏移量，如果不传默认偏移为0, 最大为2000
分页参数, 需要limit, offset 配合使用
例如:
您希望得到第三页的数据, 且每页限制最多10条
您可以使用 LIMIT 10 OFFSET 20
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，单页最大支持 200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 符合查询条件的总角色数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 企业角色信息列表。
                     */
                    std::vector<IntegrateRole> m_integrateRoles;
                    bool m_integrateRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONROLESRESPONSE_H_
