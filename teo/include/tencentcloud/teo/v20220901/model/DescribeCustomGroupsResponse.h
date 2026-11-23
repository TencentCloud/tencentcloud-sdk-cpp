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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeCustomGroups返回参数结构体
                */
                class DescribeCustomGroupsResponse : public AbstractModel
                {
                public:
                    DescribeCustomGroupsResponse();
                    ~DescribeCustomGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>满足类型列表条件的自定义组总数量。</p>
                     * @return GroupTotalCount <p>满足类型列表条件的自定义组总数量。</p>
                     * 
                     */
                    int64_t GetGroupTotalCount() const;

                    /**
                     * 判断参数 GroupTotalCount 是否已赋值
                     * @return GroupTotalCount 是否已赋值
                     * 
                     */
                    bool GroupTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>满足类型列表条件的自定义组列表。</p>
                     * @return CustomGroups <p>满足类型列表条件的自定义组列表。</p>
                     * 
                     */
                    std::vector<CustomGroup> GetCustomGroups() const;

                    /**
                     * 判断参数 CustomGroups 是否已赋值
                     * @return CustomGroups 是否已赋值
                     * 
                     */
                    bool CustomGroupsHasBeenSet() const;

                private:

                    /**
                     * <p>满足类型列表条件的自定义组总数量。</p>
                     */
                    int64_t m_groupTotalCount;
                    bool m_groupTotalCountHasBeenSet;

                    /**
                     * <p>满足类型列表条件的自定义组列表。</p>
                     */
                    std::vector<CustomGroup> m_customGroups;
                    bool m_customGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPSRESPONSE_H_
