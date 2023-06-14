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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPSRESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/RsgAsGroup.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeRsgAsGroups返回参数结构体
                */
                class DescribeRsgAsGroupsResponse : public AbstractModel
                {
                public:
                    DescribeRsgAsGroupsResponse();
                    ~DescribeRsgAsGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取所查询的伸缩组数组
                     * @return RsgAsGroupSet 所查询的伸缩组数组
                     * 
                     */
                    std::vector<RsgAsGroup> GetRsgAsGroupSet() const;

                    /**
                     * 判断参数 RsgAsGroupSet 是否已赋值
                     * @return RsgAsGroupSet 是否已赋值
                     * 
                     */
                    bool RsgAsGroupSetHasBeenSet() const;

                    /**
                     * 获取伸缩组数组总数目
                     * @return TotalCount 伸缩组数组总数目
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 所查询的伸缩组数组
                     */
                    std::vector<RsgAsGroup> m_rsgAsGroupSet;
                    bool m_rsgAsGroupSetHasBeenSet;

                    /**
                     * 伸缩组数组总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERSGASGROUPSRESPONSE_H_
