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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQRoles请求参数结构体
                */
                class DescribeRocketMQRolesRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQRolesRequest();
                    ~DescribeRocketMQRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始下标，不填默认为0。
                     * @return Offset 起始下标，不填默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始下标，不填默认为0。
                     * @param _offset 起始下标，不填默认为0。
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
                     * 获取返回数量，不填则默认为10，最大值为20。
                     * @return Limit 返回数量，不填则默认为10，最大值为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认为10，最大值为20。
                     * @param _limit 返回数量，不填则默认为10，最大值为20。
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
                     * 获取必填字段，集群Id
                     * @return ClusterId 必填字段，集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置必填字段，集群Id
                     * @param _clusterId 必填字段，集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取角色名称，模糊查询
                     * @return RoleName 角色名称，模糊查询
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称，模糊查询
                     * @param _roleName 角色名称，模糊查询
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取RoleName按照角色名进行过滤，精确查询。类型：String必选：否
                     * @return Filters RoleName按照角色名进行过滤，精确查询。类型：String必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置RoleName按照角色名进行过滤，精确查询。类型：String必选：否
                     * @param _filters RoleName按照角色名进行过滤，精确查询。类型：String必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 起始下标，不填默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认为10，最大值为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 必填字段，集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 角色名称，模糊查询
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * RoleName按照角色名进行过滤，精确查询。类型：String必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_
