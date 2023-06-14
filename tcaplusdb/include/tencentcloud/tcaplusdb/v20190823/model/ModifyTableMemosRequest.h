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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_

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
                * ModifyTableMemos请求参数结构体
                */
                class ModifyTableMemosRequest : public AbstractModel
                {
                public:
                    ModifyTableMemosRequest();
                    ~ModifyTableMemosRequest() = default;
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
                     * 获取选定表详情列表
                     * @return TableMemos 选定表详情列表
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetTableMemos() const;

                    /**
                     * 设置选定表详情列表
                     * @param _tableMemos 选定表详情列表
                     * 
                     */
                    void SetTableMemos(const std::vector<SelectedTableInfoNew>& _tableMemos);

                    /**
                     * 判断参数 TableMemos 是否已赋值
                     * @return TableMemos 是否已赋值
                     * 
                     */
                    bool TableMemosHasBeenSet() const;

                private:

                    /**
                     * 表所属集群实例ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 选定表详情列表
                     */
                    std::vector<SelectedTableInfoNew> m_tableMemos;
                    bool m_tableMemosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEMEMOSREQUEST_H_
