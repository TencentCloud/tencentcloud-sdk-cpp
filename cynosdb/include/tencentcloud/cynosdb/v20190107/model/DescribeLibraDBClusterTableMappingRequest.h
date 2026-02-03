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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBClusterTableMapping请求参数结构体
                */
                class DescribeLibraDBClusterTableMappingRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterTableMappingRequest();
                    ~DescribeLibraDBClusterTableMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群ID
                     * @return ClusterId 分析集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群ID
                     * @param _clusterId 分析集群ID
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
                     * 获取分析引擎实例ID
                     * @return InstanceId 分析引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置分析引擎实例ID
                     * @param _instanceId 分析引擎实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取页面记录限制
                     * @return Limit 页面记录限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页面记录限制
                     * @param _limit 页面记录限制
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
                     * 获取源端schema列表
                     * @return SrcSchemas 源端schema列表
                     * 
                     */
                    std::vector<std::string> GetSrcSchemas() const;

                    /**
                     * 设置源端schema列表
                     * @param _srcSchemas 源端schema列表
                     * 
                     */
                    void SetSrcSchemas(const std::vector<std::string>& _srcSchemas);

                    /**
                     * 判断参数 SrcSchemas 是否已赋值
                     * @return SrcSchemas 是否已赋值
                     * 
                     */
                    bool SrcSchemasHasBeenSet() const;

                    /**
                     * 获取源端表列表
                     * @return SrcTableName 源端表列表
                     * 
                     */
                    std::vector<std::string> GetSrcTableName() const;

                    /**
                     * 设置源端表列表
                     * @param _srcTableName 源端表列表
                     * 
                     */
                    void SetSrcTableName(const std::vector<std::string>& _srcTableName);

                    /**
                     * 判断参数 SrcTableName 是否已赋值
                     * @return SrcTableName 是否已赋值
                     * 
                     */
                    bool SrcTableNameHasBeenSet() const;

                    /**
                     * 获取状态列表
                     * @return StatusList 状态列表
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置状态列表
                     * @param _statusList 状态列表
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取映射数据库名称
                     * @return MapSchemas 映射数据库名称
                     * 
                     */
                    std::vector<std::string> GetMapSchemas() const;

                    /**
                     * 设置映射数据库名称
                     * @param _mapSchemas 映射数据库名称
                     * 
                     */
                    void SetMapSchemas(const std::vector<std::string>& _mapSchemas);

                    /**
                     * 判断参数 MapSchemas 是否已赋值
                     * @return MapSchemas 是否已赋值
                     * 
                     */
                    bool MapSchemasHasBeenSet() const;

                    /**
                     * 获取映射表名
                     * @return MapTableName 映射表名
                     * 
                     */
                    std::vector<std::string> GetMapTableName() const;

                    /**
                     * 设置映射表名
                     * @param _mapTableName 映射表名
                     * 
                     */
                    void SetMapTableName(const std::vector<std::string>& _mapTableName);

                    /**
                     * 判断参数 MapTableName 是否已赋值
                     * @return MapTableName 是否已赋值
                     * 
                     */
                    bool MapTableNameHasBeenSet() const;

                    /**
                     * 获取是否查询映射数据库名称不为空的记录
                     * @return MapSchemaNotEmpty 是否查询映射数据库名称不为空的记录
                     * 
                     */
                    bool GetMapSchemaNotEmpty() const;

                    /**
                     * 设置是否查询映射数据库名称不为空的记录
                     * @param _mapSchemaNotEmpty 是否查询映射数据库名称不为空的记录
                     * 
                     */
                    void SetMapSchemaNotEmpty(const bool& _mapSchemaNotEmpty);

                    /**
                     * 判断参数 MapSchemaNotEmpty 是否已赋值
                     * @return MapSchemaNotEmpty 是否已赋值
                     * 
                     */
                    bool MapSchemaNotEmptyHasBeenSet() const;

                    /**
                     * 获取是否查询映射表名不为空的记录
                     * @return MapTableNameNotEmpty 是否查询映射表名不为空的记录
                     * 
                     */
                    bool GetMapTableNameNotEmpty() const;

                    /**
                     * 设置是否查询映射表名不为空的记录
                     * @param _mapTableNameNotEmpty 是否查询映射表名不为空的记录
                     * 
                     */
                    void SetMapTableNameNotEmpty(const bool& _mapTableNameNotEmpty);

                    /**
                     * 判断参数 MapTableNameNotEmpty 是否已赋值
                     * @return MapTableNameNotEmpty 是否已赋值
                     * 
                     */
                    bool MapTableNameNotEmptyHasBeenSet() const;

                private:

                    /**
                     * 分析集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 分析引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页面记录限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 源端schema列表
                     */
                    std::vector<std::string> m_srcSchemas;
                    bool m_srcSchemasHasBeenSet;

                    /**
                     * 源端表列表
                     */
                    std::vector<std::string> m_srcTableName;
                    bool m_srcTableNameHasBeenSet;

                    /**
                     * 状态列表
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 映射数据库名称
                     */
                    std::vector<std::string> m_mapSchemas;
                    bool m_mapSchemasHasBeenSet;

                    /**
                     * 映射表名
                     */
                    std::vector<std::string> m_mapTableName;
                    bool m_mapTableNameHasBeenSet;

                    /**
                     * 是否查询映射数据库名称不为空的记录
                     */
                    bool m_mapSchemaNotEmpty;
                    bool m_mapSchemaNotEmptyHasBeenSet;

                    /**
                     * 是否查询映射表名不为空的记录
                     */
                    bool m_mapTableNameNotEmpty;
                    bool m_mapTableNameNotEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_
