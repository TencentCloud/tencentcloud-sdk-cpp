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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableWithField.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * SetTableDataFlow请求参数结构体
                */
                class SetTableDataFlowRequest : public AbstractModel
                {
                public:
                    SetTableDataFlowRequest();
                    ~SetTableDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表所属集群实例ID
                     * @return ClusterId 表所属集群实例ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表所属集群实例ID
                     * @param _clusterId 表所属集群实例ID
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
                     * 获取待创建分布式索引表格列表
                     * @return SelectedTables 待创建分布式索引表格列表
                     * 
                     */
                    std::vector<SelectedTableWithField> GetSelectedTables() const;

                    /**
                     * 设置待创建分布式索引表格列表
                     * @param _selectedTables 待创建分布式索引表格列表
                     * 
                     */
                    void SetSelectedTables(const std::vector<SelectedTableWithField>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * 表所属集群实例ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待创建分布式索引表格列表
                     */
                    std::vector<SelectedTableWithField> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SETTABLEDATAFLOWREQUEST_H_
