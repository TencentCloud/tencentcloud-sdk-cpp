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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngines请求参数结构体
                */
                class DescribeDataEnginesRequest : public AbstractModel
                {
                public:
                    DescribeDataEnginesRequest();
                    ~DescribeDataEnginesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤类型，支持如下的过滤类型，传参Name应为以下其中一个, data-engine-name - String（数据引擎名称）：engine-type - String（引擎类型：spark：spark 引擎，presto：presto引擎），state - String (数据引擎状态 -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中) ， mode - String（计费模式 0共享模式 1按量计费 2包年包月） ， create-time - String（创建时间，10位时间戳） message - String （描述信息），cluster-type - String (集群资源类型 spark_private/presto_private/presto_cu/spark_cu/kyuubi_cu)，engine-id - String（数据引擎ID），key-word - String（数据引擎名称或集群资源类型或描述信息模糊搜索），engine-exec-type - String（引擎执行任务类型，SQL/BATCH），engine-network-id - String（引擎网络Id）
                     * @return Filters 过滤类型，支持如下的过滤类型，传参Name应为以下其中一个, data-engine-name - String（数据引擎名称）：engine-type - String（引擎类型：spark：spark 引擎，presto：presto引擎），state - String (数据引擎状态 -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中) ， mode - String（计费模式 0共享模式 1按量计费 2包年包月） ， create-time - String（创建时间，10位时间戳） message - String （描述信息），cluster-type - String (集群资源类型 spark_private/presto_private/presto_cu/spark_cu/kyuubi_cu)，engine-id - String（数据引擎ID），key-word - String（数据引擎名称或集群资源类型或描述信息模糊搜索），engine-exec-type - String（引擎执行任务类型，SQL/BATCH），engine-network-id - String（引擎网络Id）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤类型，支持如下的过滤类型，传参Name应为以下其中一个, data-engine-name - String（数据引擎名称）：engine-type - String（引擎类型：spark：spark 引擎，presto：presto引擎），state - String (数据引擎状态 -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中) ， mode - String（计费模式 0共享模式 1按量计费 2包年包月） ， create-time - String（创建时间，10位时间戳） message - String （描述信息），cluster-type - String (集群资源类型 spark_private/presto_private/presto_cu/spark_cu/kyuubi_cu)，engine-id - String（数据引擎ID），key-word - String（数据引擎名称或集群资源类型或描述信息模糊搜索），engine-exec-type - String（引擎执行任务类型，SQL/BATCH），engine-network-id - String（引擎网络Id）
                     * @param _filters 过滤类型，支持如下的过滤类型，传参Name应为以下其中一个, data-engine-name - String（数据引擎名称）：engine-type - String（引擎类型：spark：spark 引擎，presto：presto引擎），state - String (数据引擎状态 -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中) ， mode - String（计费模式 0共享模式 1按量计费 2包年包月） ， create-time - String（创建时间，10位时间戳） message - String （描述信息），cluster-type - String (集群资源类型 spark_private/presto_private/presto_cu/spark_cu/kyuubi_cu)，engine-id - String（数据引擎ID），key-word - String（数据引擎名称或集群资源类型或描述信息模糊搜索），engine-exec-type - String（引擎执行任务类型，SQL/BATCH），engine-network-id - String（引擎网络Id）
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段，支持如下字段类型，create-time
                     * @return SortBy 排序字段，支持如下字段类型，create-time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，支持如下字段类型，create-time
                     * @param _sortBy 排序字段，支持如下字段类型，create-time
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * @return Sorting 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * @param _sorting 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
                     * 获取已废弃，请使用DatasourceConnectionNameSet
                     * @return DatasourceConnectionName 已废弃，请使用DatasourceConnectionNameSet
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置已废弃，请使用DatasourceConnectionNameSet
                     * @param _datasourceConnectionName 已废弃，请使用DatasourceConnectionNameSet
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取是否不返回共享引擎，true不返回共享引擎，false可以返回共享引擎
                     * @return ExcludePublicEngine 是否不返回共享引擎，true不返回共享引擎，false可以返回共享引擎
                     * 
                     */
                    bool GetExcludePublicEngine() const;

                    /**
                     * 设置是否不返回共享引擎，true不返回共享引擎，false可以返回共享引擎
                     * @param _excludePublicEngine 是否不返回共享引擎，true不返回共享引擎，false可以返回共享引擎
                     * 
                     */
                    void SetExcludePublicEngine(const bool& _excludePublicEngine);

                    /**
                     * 判断参数 ExcludePublicEngine 是否已赋值
                     * @return ExcludePublicEngine 是否已赋值
                     * 
                     */
                    bool ExcludePublicEngineHasBeenSet() const;

                    /**
                     * 获取参数应该为引擎权限类型，有效类型："USE", "MODIFY", "OPERATE", "MONITOR", "DELETE"
                     * @return AccessTypes 参数应该为引擎权限类型，有效类型："USE", "MODIFY", "OPERATE", "MONITOR", "DELETE"
                     * 
                     */
                    std::vector<std::string> GetAccessTypes() const;

                    /**
                     * 设置参数应该为引擎权限类型，有效类型："USE", "MODIFY", "OPERATE", "MONITOR", "DELETE"
                     * @param _accessTypes 参数应该为引擎权限类型，有效类型："USE", "MODIFY", "OPERATE", "MONITOR", "DELETE"
                     * 
                     */
                    void SetAccessTypes(const std::vector<std::string>& _accessTypes);

                    /**
                     * 判断参数 AccessTypes 是否已赋值
                     * @return AccessTypes 是否已赋值
                     * 
                     */
                    bool AccessTypesHasBeenSet() const;

                    /**
                     * 获取引擎执行任务类型，有效值：SQL/BATCH，默认为SQL
                     * @return EngineExecType 引擎执行任务类型，有效值：SQL/BATCH，默认为SQL
                     * 
                     */
                    std::string GetEngineExecType() const;

                    /**
                     * 设置引擎执行任务类型，有效值：SQL/BATCH，默认为SQL
                     * @param _engineExecType 引擎执行任务类型，有效值：SQL/BATCH，默认为SQL
                     * 
                     */
                    void SetEngineExecType(const std::string& _engineExecType);

                    /**
                     * 判断参数 EngineExecType 是否已赋值
                     * @return EngineExecType 是否已赋值
                     * 
                     */
                    bool EngineExecTypeHasBeenSet() const;

                    /**
                     * 获取引擎类型，有效值：spark/presto/kyuubi，为空时默认获取非kyuubi引擎（网关引擎）
                     * @return EngineType 引擎类型，有效值：spark/presto/kyuubi，为空时默认获取非kyuubi引擎（网关引擎）
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型，有效值：spark/presto/kyuubi，为空时默认获取非kyuubi引擎（网关引擎）
                     * @param _engineType 引擎类型，有效值：spark/presto/kyuubi，为空时默认获取非kyuubi引擎（网关引擎）
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取网络配置列表，若传入该参数，则返回网络配置关联的计算引擎
                     * @return DatasourceConnectionNameSet 网络配置列表，若传入该参数，则返回网络配置关联的计算引擎
                     * 
                     */
                    std::vector<std::string> GetDatasourceConnectionNameSet() const;

                    /**
                     * 设置网络配置列表，若传入该参数，则返回网络配置关联的计算引擎
                     * @param _datasourceConnectionNameSet 网络配置列表，若传入该参数，则返回网络配置关联的计算引擎
                     * 
                     */
                    void SetDatasourceConnectionNameSet(const std::vector<std::string>& _datasourceConnectionNameSet);

                    /**
                     * 判断参数 DatasourceConnectionNameSet 是否已赋值
                     * @return DatasourceConnectionNameSet 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameSetHasBeenSet() const;

                    /**
                     * 获取引擎版本，有效值：Native/SuperSQL，为空时默认获取SuperSQL引擎
                     * @return EngineGeneration 引擎版本，有效值：Native/SuperSQL，为空时默认获取SuperSQL引擎
                     * 
                     */
                    std::string GetEngineGeneration() const;

                    /**
                     * 设置引擎版本，有效值：Native/SuperSQL，为空时默认获取SuperSQL引擎
                     * @param _engineGeneration 引擎版本，有效值：Native/SuperSQL，为空时默认获取SuperSQL引擎
                     * 
                     */
                    void SetEngineGeneration(const std::string& _engineGeneration);

                    /**
                     * 判断参数 EngineGeneration 是否已赋值
                     * @return EngineGeneration 是否已赋值
                     * 
                     */
                    bool EngineGenerationHasBeenSet() const;

                    /**
                     * 获取引擎类型，支持：SparkSQL、SparkBatch、PrestoSQL、Kyuubi
                     * @return EngineTypeDetail 引擎类型，支持：SparkSQL、SparkBatch、PrestoSQL、Kyuubi
                     * 
                     */
                    std::string GetEngineTypeDetail() const;

                    /**
                     * 设置引擎类型，支持：SparkSQL、SparkBatch、PrestoSQL、Kyuubi
                     * @param _engineTypeDetail 引擎类型，支持：SparkSQL、SparkBatch、PrestoSQL、Kyuubi
                     * 
                     */
                    void SetEngineTypeDetail(const std::string& _engineTypeDetail);

                    /**
                     * 判断参数 EngineTypeDetail 是否已赋值
                     * @return EngineTypeDetail 是否已赋值
                     * 
                     */
                    bool EngineTypeDetailHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤类型，支持如下的过滤类型，传参Name应为以下其中一个, data-engine-name - String（数据引擎名称）：engine-type - String（引擎类型：spark：spark 引擎，presto：presto引擎），state - String (数据引擎状态 -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中) ， mode - String（计费模式 0共享模式 1按量计费 2包年包月） ， create-time - String（创建时间，10位时间戳） message - String （描述信息），cluster-type - String (集群资源类型 spark_private/presto_private/presto_cu/spark_cu/kyuubi_cu)，engine-id - String（数据引擎ID），key-word - String（数据引擎名称或集群资源类型或描述信息模糊搜索），engine-exec-type - String（引擎执行任务类型，SQL/BATCH），engine-network-id - String（引擎网络Id）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，支持如下字段类型，create-time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，desc表示正序，asc表示反序， 默认为asc。
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 已废弃，请使用DatasourceConnectionNameSet
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 是否不返回共享引擎，true不返回共享引擎，false可以返回共享引擎
                     */
                    bool m_excludePublicEngine;
                    bool m_excludePublicEngineHasBeenSet;

                    /**
                     * 参数应该为引擎权限类型，有效类型："USE", "MODIFY", "OPERATE", "MONITOR", "DELETE"
                     */
                    std::vector<std::string> m_accessTypes;
                    bool m_accessTypesHasBeenSet;

                    /**
                     * 引擎执行任务类型，有效值：SQL/BATCH，默认为SQL
                     */
                    std::string m_engineExecType;
                    bool m_engineExecTypeHasBeenSet;

                    /**
                     * 引擎类型，有效值：spark/presto/kyuubi，为空时默认获取非kyuubi引擎（网关引擎）
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 网络配置列表，若传入该参数，则返回网络配置关联的计算引擎
                     */
                    std::vector<std::string> m_datasourceConnectionNameSet;
                    bool m_datasourceConnectionNameSetHasBeenSet;

                    /**
                     * 引擎版本，有效值：Native/SuperSQL，为空时默认获取SuperSQL引擎
                     */
                    std::string m_engineGeneration;
                    bool m_engineGenerationHasBeenSet;

                    /**
                     * 引擎类型，支持：SparkSQL、SparkBatch、PrestoSQL、Kyuubi
                     */
                    std::string m_engineTypeDetail;
                    bool m_engineTypeDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESREQUEST_H_
