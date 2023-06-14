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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateTables请求参数结构体
                */
                class CreateTablesRequest : public AbstractModel
                {
                public:
                    CreateTablesRequest();
                    ~CreateTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待创建表格所属集群ID
                     * @return ClusterId 待创建表格所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待创建表格所属集群ID
                     * @param _clusterId 待创建表格所属集群ID
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
                     * 获取用户选定的建表格IDL文件列表
                     * @return IdlFiles 用户选定的建表格IDL文件列表
                     * 
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置用户选定的建表格IDL文件列表
                     * @param _idlFiles 用户选定的建表格IDL文件列表
                     * 
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     * 
                     */
                    bool IdlFilesHasBeenSet() const;

                    /**
                     * 获取待创建表格信息列表
                     * @return SelectedTables 待创建表格信息列表
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置待创建表格信息列表
                     * @param _selectedTables 待创建表格信息列表
                     * 
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfoNew>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取表格标签列表
                     * @return ResourceTags 表格标签列表
                     * 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置表格标签列表
                     * @param _resourceTags 表格标签列表
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * 待创建表格所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 用户选定的建表格IDL文件列表
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                    /**
                     * 待创建表格信息列表
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * 表格标签列表
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLESREQUEST_H_
