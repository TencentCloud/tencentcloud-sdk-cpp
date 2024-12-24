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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/Tag.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstances请求参数结构体
                */
                class DescribeDCDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDCDBInstancesRequest();
                    ~DescribeDCDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个实例 ID 查询。实例 ID 形如：dcdbt-2t4cf98d
                     * @return InstanceIds 按照一个或者多个实例 ID 查询。实例 ID 形如：dcdbt-2t4cf98d
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例 ID 查询。实例 ID 形如：dcdbt-2t4cf98d
                     * @param _instanceIds 按照一个或者多个实例 ID 查询。实例 ID 形如：dcdbt-2t4cf98d
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * @return SearchName 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * 
                     */
                    std::string GetSearchName() const;

                    /**
                     * 设置搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * @param _searchName 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * 
                     */
                    void SetSearchName(const std::string& _searchName);

                    /**
                     * 判断参数 SearchName 是否已赋值
                     * @return SearchName 是否已赋值
                     * 
                     */
                    bool SearchNameHasBeenSet() const;

                    /**
                     * 获取搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * @return SearchKey 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * @param _searchKey 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取按项目 ID 查询
                     * @return ProjectIds 按项目 ID 查询
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置按项目 ID 查询
                     * @param _projectIds 按项目 ID 查询
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取是否根据 VPC 网络来搜索
                     * @return IsFilterVpc 是否根据 VPC 网络来搜索
                     * 
                     */
                    bool GetIsFilterVpc() const;

                    /**
                     * 设置是否根据 VPC 网络来搜索
                     * @param _isFilterVpc 是否根据 VPC 网络来搜索
                     * 
                     */
                    void SetIsFilterVpc(const bool& _isFilterVpc);

                    /**
                     * 判断参数 IsFilterVpc 是否已赋值
                     * @return IsFilterVpc 是否已赋值
                     * 
                     */
                    bool IsFilterVpcHasBeenSet() const;

                    /**
                     * 获取私有网络 ID， IsFilterVpc 为 1 时有效
                     * @return VpcId 私有网络 ID， IsFilterVpc 为 1 时有效
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络 ID， IsFilterVpc 为 1 时有效
                     * @param _vpcId 私有网络 ID， IsFilterVpc 为 1 时有效
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * @return SubnetId 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * @param _subnetId 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取排序字段， projectId， createtime， instancename 三者之一
                     * @return OrderBy 排序字段， projectId， createtime， instancename 三者之一
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段， projectId， createtime， instancename 三者之一
                     * @param _orderBy 排序字段， projectId， createtime， instancename 三者之一
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型， desc 或者 asc
                     * @return OrderByType 排序类型， desc 或者 asc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型， desc 或者 asc
                     * @param _orderByType 排序类型， desc 或者 asc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
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
                     * 获取返回数量，默认为 10，最大值为 100。
                     * @return Limit 返回数量，默认为 10，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 10，最大值为 100。
                     * @param _limit 返回数量，默认为 10，最大值为 100。
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
                     * 获取1非独享集群，2独享集群， 0全部
                     * @return ExclusterType 1非独享集群，2独享集群， 0全部
                     * 
                     */
                    int64_t GetExclusterType() const;

                    /**
                     * 设置1非独享集群，2独享集群， 0全部
                     * @param _exclusterType 1非独享集群，2独享集群， 0全部
                     * 
                     */
                    void SetExclusterType(const int64_t& _exclusterType);

                    /**
                     * 判断参数 ExclusterType 是否已赋值
                     * @return ExclusterType 是否已赋值
                     * 
                     */
                    bool ExclusterTypeHasBeenSet() const;

                    /**
                     * 获取标识是否使用ExclusterType字段, false不使用，true使用
                     * @return IsFilterExcluster 标识是否使用ExclusterType字段, false不使用，true使用
                     * 
                     */
                    bool GetIsFilterExcluster() const;

                    /**
                     * 设置标识是否使用ExclusterType字段, false不使用，true使用
                     * @param _isFilterExcluster 标识是否使用ExclusterType字段, false不使用，true使用
                     * 
                     */
                    void SetIsFilterExcluster(const bool& _isFilterExcluster);

                    /**
                     * 判断参数 IsFilterExcluster 是否已赋值
                     * @return IsFilterExcluster 是否已赋值
                     * 
                     */
                    bool IsFilterExclusterHasBeenSet() const;

                    /**
                     * 获取独享集群ID
                     * @return ExclusterIds 独享集群ID
                     * 
                     */
                    std::vector<std::string> GetExclusterIds() const;

                    /**
                     * 设置独享集群ID
                     * @param _exclusterIds 独享集群ID
                     * 
                     */
                    void SetExclusterIds(const std::vector<std::string>& _exclusterIds);

                    /**
                     * 判断参数 ExclusterIds 是否已赋值
                     * @return ExclusterIds 是否已赋值
                     * 
                     */
                    bool ExclusterIdsHasBeenSet() const;

                    /**
                     * 获取按标签key查询
                     * @return TagKeys 按标签key查询
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置按标签key查询
                     * @param _tagKeys 按标签key查询
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例类型过滤，1-独享实例，2-主实例，3-灾备实例，多个按逗号分隔
                     * @return FilterInstanceType 实例类型过滤，1-独享实例，2-主实例，3-灾备实例，多个按逗号分隔
                     * 
                     */
                    std::string GetFilterInstanceType() const;

                    /**
                     * 设置实例类型过滤，1-独享实例，2-主实例，3-灾备实例，多个按逗号分隔
                     * @param _filterInstanceType 实例类型过滤，1-独享实例，2-主实例，3-灾备实例，多个按逗号分隔
                     * 
                     */
                    void SetFilterInstanceType(const std::string& _filterInstanceType);

                    /**
                     * 判断参数 FilterInstanceType 是否已赋值
                     * @return FilterInstanceType 是否已赋值
                     * 
                     */
                    bool FilterInstanceTypeHasBeenSet() const;

                    /**
                     * 获取按实例状态筛选。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * @return Status 按实例状态筛选。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置按实例状态筛选。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * @param _status 按实例状态筛选。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排除实例状态。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * @return ExcludeStatus 排除实例状态。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * 
                     */
                    std::vector<int64_t> GetExcludeStatus() const;

                    /**
                     * 设置排除实例状态。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * @param _excludeStatus 排除实例状态。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     * 
                     */
                    void SetExcludeStatus(const std::vector<int64_t>& _excludeStatus);

                    /**
                     * 判断参数 ExcludeStatus 是否已赋值
                     * @return ExcludeStatus 是否已赋值
                     * 
                     */
                    bool ExcludeStatusHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个实例 ID 查询。实例 ID 形如：dcdbt-2t4cf98d
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     */
                    std::string m_searchName;
                    bool m_searchNameHasBeenSet;

                    /**
                     * 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 按项目 ID 查询
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 是否根据 VPC 网络来搜索
                     */
                    bool m_isFilterVpc;
                    bool m_isFilterVpcHasBeenSet;

                    /**
                     * 私有网络 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 排序字段， projectId， createtime， instancename 三者之一
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型， desc 或者 asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 10，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 1非独享集群，2独享集群， 0全部
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * 标识是否使用ExclusterType字段, false不使用，true使用
                     */
                    bool m_isFilterExcluster;
                    bool m_isFilterExclusterHasBeenSet;

                    /**
                     * 独享集群ID
                     */
                    std::vector<std::string> m_exclusterIds;
                    bool m_exclusterIdsHasBeenSet;

                    /**
                     * 按标签key查询
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例类型过滤，1-独享实例，2-主实例，3-灾备实例，多个按逗号分隔
                     */
                    std::string m_filterInstanceType;
                    bool m_filterInstanceTypeHasBeenSet;

                    /**
                     * 按实例状态筛选。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排除实例状态。状态值 -2：已删除； -1：已隔离；0：创建中；1：流程处理中；2：运行中
                     */
                    std::vector<int64_t> m_excludeStatus;
                    bool m_excludeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCESREQUEST_H_
