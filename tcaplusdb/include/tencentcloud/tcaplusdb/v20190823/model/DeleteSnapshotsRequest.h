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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteSnapshots请求参数结构体
                */
                class DeleteSnapshotsRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotsRequest();
                    ~DeleteSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表格所属集群id
                     * @return ClusterId 表格所属集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格所属集群id
                     * @param _clusterId 表格所属集群id
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
                     * 获取删除的快照列表
                     * @return SelectedTables 删除的快照列表
                     * 
                     */
                    std::vector<SnapshotInfoNew> GetSelectedTables() const;

                    /**
                     * 设置删除的快照列表
                     * @param _selectedTables 删除的快照列表
                     * 
                     */
                    void SetSelectedTables(const std::vector<SnapshotInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * 表格所属集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 删除的快照列表
                     */
                    std::vector<SnapshotInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETESNAPSHOTSREQUEST_H_
