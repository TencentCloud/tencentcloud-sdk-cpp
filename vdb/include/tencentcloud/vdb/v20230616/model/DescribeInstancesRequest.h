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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vdb/v20230616/model/Tag.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
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
                     * 获取实例ID数组。
                     * @return InstanceIds 实例ID数组。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID数组。
                     * @param _instanceIds 实例ID数组。
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
                     * 获取实例名称，支持模糊搜索。
                     * @return InstanceNames 实例名称，支持模糊搜索。
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例名称，支持模糊搜索。
                     * @param _instanceNames 实例名称，支持模糊搜索。
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取实例模糊搜索字段。
                     * @return InstanceKeys 实例模糊搜索字段。
                     * 
                     */
                    std::vector<std::string> GetInstanceKeys() const;

                    /**
                     * 设置实例模糊搜索字段。
                     * @param _instanceKeys 实例模糊搜索字段。
                     * 
                     */
                    void SetInstanceKeys(const std::vector<std::string>& _instanceKeys);

                    /**
                     * 判断参数 InstanceKeys 是否已赋值
                     * @return InstanceKeys 是否已赋值
                     * 
                     */
                    bool InstanceKeysHasBeenSet() const;

                    /**
                     * 获取根据状态获取实例， 为空则获取全部非隔离和非下线的实例。
                     * @return Status 根据状态获取实例， 为空则获取全部非隔离和非下线的实例。
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置根据状态获取实例， 为空则获取全部非隔离和非下线的实例。
                     * @param _status 根据状态获取实例， 为空则获取全部非隔离和非下线的实例。
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取按照引擎筛选实例。
                     * @return EngineNames 按照引擎筛选实例。
                     * @deprecated
                     */
                    std::vector<std::string> GetEngineNames() const;

                    /**
                     * 设置按照引擎筛选实例。
                     * @param _engineNames 按照引擎筛选实例。
                     * @deprecated
                     */
                    void SetEngineNames(const std::vector<std::string>& _engineNames);

                    /**
                     * 判断参数 EngineNames 是否已赋值
                     * @return EngineNames 是否已赋值
                     * @deprecated
                     */
                    bool EngineNamesHasBeenSet() const;

                    /**
                     * 获取按照版本筛选实例。
                     * @return EngineVersions 按照版本筛选实例。
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置按照版本筛选实例。
                     * @param _engineVersions 按照版本筛选实例。
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取按照api版本筛选实例
                     * @return ApiVersions 按照api版本筛选实例
                     * 
                     */
                    std::vector<std::string> GetApiVersions() const;

                    /**
                     * 设置按照api版本筛选实例
                     * @param _apiVersions 按照api版本筛选实例
                     * 
                     */
                    void SetApiVersions(const std::vector<std::string>& _apiVersions);

                    /**
                     * 判断参数 ApiVersions 是否已赋值
                     * @return ApiVersions 是否已赋值
                     * 
                     */
                    bool ApiVersionsHasBeenSet() const;

                    /**
                     * 获取按照创建时间筛选实例。
                     * @return CreateAt 按照创建时间筛选实例。
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置按照创建时间筛选实例。
                     * @param _createAt 按照创建时间筛选实例。
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取按照可用区筛选实例。
                     * @return Zones 按照可用区筛选实例。
                     * @deprecated
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置按照可用区筛选实例。
                     * @param _zones 按照可用区筛选实例。
                     * @deprecated
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * @deprecated
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取排序字段。
                     * @return OrderBy 排序字段。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段。
                     * @param _orderBy 排序字段。
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
                     * 获取排序方式。
                     * @return OrderDirection 排序方式。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方式。
                     * @param _orderDirection 排序方式。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取查询开始位置。
                     * @return Offset 查询开始位置。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询开始位置。
                     * @param _offset 查询开始位置。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取列表查询数量。
                     * @return Limit 列表查询数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置列表查询数量。
                     * @param _limit 列表查询数量。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按照标签筛选实例
                     * @return ResourceTags 按照标签筛选实例
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置按照标签筛选实例
                     * @param _resourceTags 按照标签筛选实例
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取任务状态：1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * @return TaskStatus 任务状态：1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置任务状态：1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * @param _taskStatus 任务状态：1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 实例ID数组。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例名称，支持模糊搜索。
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例模糊搜索字段。
                     */
                    std::vector<std::string> m_instanceKeys;
                    bool m_instanceKeysHasBeenSet;

                    /**
                     * 根据状态获取实例， 为空则获取全部非隔离和非下线的实例。
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 按照引擎筛选实例。
                     */
                    std::vector<std::string> m_engineNames;
                    bool m_engineNamesHasBeenSet;

                    /**
                     * 按照版本筛选实例。
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * 按照api版本筛选实例
                     */
                    std::vector<std::string> m_apiVersions;
                    bool m_apiVersionsHasBeenSet;

                    /**
                     * 按照创建时间筛选实例。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 按照可用区筛选实例。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 排序字段。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 查询开始位置。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 列表查询数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按照标签筛选实例
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 任务状态：1-待执行任务；2-密钥更新中；3-网络变更中；4-参数变更中；5-embedding变更中；6-ai套件变更中；7-滚动升级中；8-纵向扩容中；9-纵向缩容中；10-横向扩容中；11-横向缩容中
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCESREQUEST_H_
