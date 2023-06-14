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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/DisasterRecoverGroup.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverGroups返回参数结构体
                */
                class DescribeDisasterRecoverGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverGroupsResponse();
                    ~DescribeDisasterRecoverGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分散置放群组信息列表。
                     * @return DisasterRecoverGroupSet 分散置放群组信息列表。
                     * 
                     */
                    std::vector<DisasterRecoverGroup> GetDisasterRecoverGroupSet() const;

                    /**
                     * 判断参数 DisasterRecoverGroupSet 是否已赋值
                     * @return DisasterRecoverGroupSet 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupSetHasBeenSet() const;

                    /**
                     * 获取用户置放群组总量。
                     * @return TotalCount 用户置放群组总量。
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
                     * 分散置放群组信息列表。
                     */
                    std::vector<DisasterRecoverGroup> m_disasterRecoverGroupSet;
                    bool m_disasterRecoverGroupSetHasBeenSet;

                    /**
                     * 用户置放群组总量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSRESPONSE_H_
