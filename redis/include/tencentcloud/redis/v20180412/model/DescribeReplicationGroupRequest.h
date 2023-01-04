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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeReplicationGroup请求参数结构体
                */
                class DescribeReplicationGroupRequest : public AbstractModel
                {
                public:
                    DescribeReplicationGroupRequest();
                    ~DescribeReplicationGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页输出实例列表的大小，参数默认值20。
                     * @return Limit 每页输出实例列表的大小，参数默认值20。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页输出实例列表的大小，参数默认值20。
                     * @param Limit 每页输出实例列表的大小，参数默认值20。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取复制组ID。
                     * @return GroupId 复制组ID。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置复制组ID。
                     * @param GroupId 复制组ID。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取设置模糊查询的关键字，可以设置为实例ID或实例名称进行模糊查询。
                     * @return SearchKey 设置模糊查询的关键字，可以设置为实例ID或实例名称进行模糊查询。
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置设置模糊查询的关键字，可以设置为实例ID或实例名称进行模糊查询。
                     * @param SearchKey 设置模糊查询的关键字，可以设置为实例ID或实例名称进行模糊查询。
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 每页输出实例列表的大小，参数默认值20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 复制组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 设置模糊查询的关键字，可以设置为实例ID或实例名称进行模糊查询。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREPLICATIONGROUPREQUEST_H_
