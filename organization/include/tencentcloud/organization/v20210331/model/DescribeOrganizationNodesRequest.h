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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONNODESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationNodes请求参数结构体
                */
                class DescribeOrganizationNodesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationNodesRequest();
                    ~DescribeOrganizationNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取限制数目。最大50
                     * @return Limit 限制数目。最大50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数目。最大50
                     * @param _limit 限制数目。最大50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量。取值是limit的整数倍。默认值 : 0。
                     * @return Offset 偏移量。取值是limit的整数倍。默认值 : 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍。默认值 : 0。
                     * @param _offset 偏移量。取值是limit的整数倍。默认值 : 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取部门标签搜索列表，最大10个
                     * @return Tags 部门标签搜索列表，最大10个
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置部门标签搜索列表，最大10个
                     * @param _tags 部门标签搜索列表，最大10个
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 限制数目。最大50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。取值是limit的整数倍。默认值 : 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 部门标签搜索列表，最大10个
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONNODESREQUEST_H_
