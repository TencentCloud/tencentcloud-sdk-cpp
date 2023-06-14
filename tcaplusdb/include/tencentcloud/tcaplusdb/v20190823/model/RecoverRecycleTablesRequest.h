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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * RecoverRecycleTables请求参数结构体
                */
                class RecoverRecycleTablesRequest : public AbstractModel
                {
                public:
                    RecoverRecycleTablesRequest();
                    ~RecoverRecycleTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表所在集群ID
                     * @return ClusterId 表所在集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表所在集群ID
                     * @param _clusterId 表所在集群ID
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
                     * 获取待恢复表信息
                     * @return SelectedTables 待恢复表信息
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置待恢复表信息
                     * @param _selectedTables 待恢复表信息
                     * 
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * 表所在集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待恢复表信息
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_
