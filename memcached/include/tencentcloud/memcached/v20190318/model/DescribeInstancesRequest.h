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

#ifndef TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Memcached
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID组成的数组，数组下标从0开始
                     * @return InstanceIds 实例ID组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID组成的数组，数组下标从0开始
                     * @param InstanceIds 实例ID组成的数组，数组下标从0开始
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例名称组成的数组，数组下标从0开始
                     * @return InstanceNames 实例名称组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例名称组成的数组，数组下标从0开始
                     * @param InstanceNames 实例名称组成的数组，数组下标从0开始
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取实例列表的大小，参数默认值100
                     * @return Limit 实例列表的大小，参数默认值100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置实例列表的大小，参数默认值100
                     * @param Limit 实例列表的大小，参数默认值100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，取Limit整数倍
                     * @return Offset 偏移量，取Limit整数倍
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取Limit整数倍
                     * @param Offset 偏移量，取Limit整数倍
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取枚举范围： AddTimeStamp, InstanceName, ProjectId
                     * @return OrderBy 枚举范围： AddTimeStamp, InstanceName, ProjectId
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置枚举范围： AddTimeStamp, InstanceName, ProjectId
                     * @param OrderBy 枚举范围： AddTimeStamp, InstanceName, ProjectId
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取0倒序，1正序，默认倒序
                     * @return OrderType 0倒序，1正序，默认倒序
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置0倒序，1正序，默认倒序
                     * @param OrderType 0倒序，1正序，默认倒序
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取项目ID组成的数组，数组下标从0开始
                     * @return ProjectIds 项目ID组成的数组，数组下标从0开始
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID组成的数组，数组下标从0开始
                     * @param ProjectIds 项目ID组成的数组，数组下标从0开始
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取搜索关键词：支持实例ID、实例名称、完整IP
                     * @return SearchKeys 搜索关键词：支持实例ID、实例名称、完整IP
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置搜索关键词：支持实例ID、实例名称、完整IP
                     * @param SearchKeys 搜索关键词：支持实例ID、实例名称、完整IP
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @return UniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     * @param UniqSubnetIds 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @return UniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     * @param UniqVpcIds 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取实例服务IP组成的数组，数组下标从0开始
                     * @return Vips 实例服务IP组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例服务IP组成的数组，数组下标从0开始
                     * @param Vips 实例服务IP组成的数组，数组下标从0开始
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     */
                    bool VipsHasBeenSet() const;

                private:

                    /**
                     * 实例ID组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例名称组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例列表的大小，参数默认值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，取Limit整数倍
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 枚举范围： AddTimeStamp, InstanceName, ProjectId
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 0倒序，1正序，默认倒序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 项目ID组成的数组，数组下标从0开始
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 搜索关键词：支持实例ID、实例名称、完整IP
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * 子网ID数组，数组下标从0开始，如：subnet-fdj24n34j2
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * 私有网络ID数组，数组下标从0开始，如果不传则默认选择基础网络，如：vpc-sad23jfdfk
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * 实例服务IP组成的数组，数组下标从0开始
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESREQUEST_H_
