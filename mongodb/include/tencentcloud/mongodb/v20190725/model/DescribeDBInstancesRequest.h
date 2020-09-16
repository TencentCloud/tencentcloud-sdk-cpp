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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceIds 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param InstanceIds 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例类型，取值范围：0-所有实例,1-正式实例，2-临时实例, 3-只读实例，-1-正式实例+只读+灾备实例
                     * @return InstanceType 实例类型，取值范围：0-所有实例,1-正式实例，2-临时实例, 3-只读实例，-1-正式实例+只读+灾备实例
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型，取值范围：0-所有实例,1-正式实例，2-临时实例, 3-只读实例，-1-正式实例+只读+灾备实例
                     * @param InstanceType 实例类型，取值范围：0-所有实例,1-正式实例，2-临时实例, 3-只读实例，-1-正式实例+只读+灾备实例
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取集群类型，取值范围：0-副本集实例，1-分片实例，-1-所有实例
                     * @return ClusterType 集群类型，取值范围：0-副本集实例，1-分片实例，-1-所有实例
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型，取值范围：0-副本集实例，1-分片实例，-1-所有实例
                     * @param ClusterType 集群类型，取值范围：0-副本集实例，1-分片实例，-1-所有实例
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取实例状态，取值范围：0-待初始化，1-流程执行中，2-实例有效，-2-已隔离（包年包月实例），-3-已隔离（按量计费实例）
                     * @return Status 实例状态，取值范围：0-待初始化，1-流程执行中，2-实例有效，-2-已隔离（包年包月实例），-3-已隔离（按量计费实例）
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置实例状态，取值范围：0-待初始化，1-流程执行中，2-实例有效，-2-已隔离（包年包月实例），-3-已隔离（按量计费实例）
                     * @param Status 实例状态，取值范围：0-待初始化，1-流程执行中，2-实例有效，-2-已隔离（包年包月实例），-3-已隔离（按量计费实例）
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私有网络的ID，基础网络则不传该参数
                     * @return VpcId 私有网络的ID，基础网络则不传该参数
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的ID，基础网络则不传该参数
                     * @param VpcId 私有网络的ID，基础网络则不传该参数
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络的子网ID，基础网络则不传该参数。入参设置该参数的同时，必须设置相应的VpcId
                     * @return SubnetId 私有网络的子网ID，基础网络则不传该参数。入参设置该参数的同时，必须设置相应的VpcId
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的子网ID，基础网络则不传该参数。入参设置该参数的同时，必须设置相应的VpcId
                     * @param SubnetId 私有网络的子网ID，基础网络则不传该参数。入参设置该参数的同时，必须设置相应的VpcId
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取付费类型，取值范围：0-按量计费，1-包年包月，-1-按量计费+包年包月
                     * @return PayMode 付费类型，取值范围：0-按量计费，1-包年包月，-1-按量计费+包年包月
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型，取值范围：0-按量计费，1-包年包月，-1-按量计费+包年包月
                     * @param PayMode 付费类型，取值范围：0-按量计费，1-包年包月，-1-按量计费+包年包月
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取单次请求返回的数量，最小值为1，最大值为100，默认值为20
                     * @return Limit 单次请求返回的数量，最小值为1，最大值为100，默认值为20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，最小值为1，最大值为100，默认值为20
                     * @param Limit 单次请求返回的数量，最小值为1，最大值为100，默认值为20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0
                     * @return Offset 偏移量，默认值为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0
                     * @param Offset 偏移量，默认值为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回结果集排序的字段，目前支持："ProjectId", "InstanceName", "CreateTime"，默认为升序排序
                     * @return OrderBy 返回结果集排序的字段，目前支持："ProjectId", "InstanceName", "CreateTime"，默认为升序排序
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置返回结果集排序的字段，目前支持："ProjectId", "InstanceName", "CreateTime"，默认为升序排序
                     * @param OrderBy 返回结果集排序的字段，目前支持："ProjectId", "InstanceName", "CreateTime"，默认为升序排序
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取返回结果集排序方式，目前支持："ASC"或者"DESC"
                     * @return OrderByType 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置返回结果集排序方式，目前支持："ASC"或者"DESC"
                     * @param OrderByType 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectIds 项目 ID
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置项目 ID
                     * @param ProjectIds 项目 ID
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取搜索关键词，支持实例ID、实例名称、完整IP
                     * @return SearchKey 搜索关键词，支持实例ID、实例名称、完整IP
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键词，支持实例ID、实例名称、完整IP
                     * @param SearchKey 搜索关键词，支持实例ID、实例名称、完整IP
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Tag信息
                     * @return Tags Tag信息
                     */
                    TagInfo GetTags() const;

                    /**
                     * 设置Tag信息
                     * @param Tags Tag信息
                     */
                    void SetTags(const TagInfo& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例类型，取值范围：0-所有实例,1-正式实例，2-临时实例, 3-只读实例，-1-正式实例+只读+灾备实例
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 集群类型，取值范围：0-副本集实例，1-分片实例，-1-所有实例
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 实例状态，取值范围：0-待初始化，1-流程执行中，2-实例有效，-2-已隔离（包年包月实例），-3-已隔离（按量计费实例）
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有网络的ID，基础网络则不传该参数
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络的子网ID，基础网络则不传该参数。入参设置该参数的同时，必须设置相应的VpcId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 付费类型，取值范围：0-按量计费，1-包年包月，-1-按量计费+包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 单次请求返回的数量，最小值为1，最大值为100，默认值为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回结果集排序的字段，目前支持："ProjectId", "InstanceName", "CreateTime"，默认为升序排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 返回结果集排序方式，目前支持："ASC"或者"DESC"
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 搜索关键词，支持实例ID、实例名称、完整IP
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Tag信息
                     */
                    TagInfo m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
