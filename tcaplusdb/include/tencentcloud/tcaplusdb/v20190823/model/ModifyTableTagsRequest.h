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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLETAGSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ModifyTableTags请求参数结构体
                */
                class ModifyTableTagsRequest : public AbstractModel
                {
                public:
                    ModifyTableTagsRequest();
                    ~ModifyTableTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改标签表格所属集群ID
                     * @return ClusterId 待修改标签表格所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待修改标签表格所属集群ID
                     * @param _clusterId 待修改标签表格所属集群ID
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
                     * 获取待修改标签表格列表
                     * @return SelectedTables 待修改标签表格列表
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置待修改标签表格列表
                     * @param _selectedTables 待修改标签表格列表
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
                     * 获取待增加或修改的标签列表
                     * @return ReplaceTags 待增加或修改的标签列表
                     * 
                     */
                    std::vector<TagInfoUnit> GetReplaceTags() const;

                    /**
                     * 设置待增加或修改的标签列表
                     * @param _replaceTags 待增加或修改的标签列表
                     * 
                     */
                    void SetReplaceTags(const std::vector<TagInfoUnit>& _replaceTags);

                    /**
                     * 判断参数 ReplaceTags 是否已赋值
                     * @return ReplaceTags 是否已赋值
                     * 
                     */
                    bool ReplaceTagsHasBeenSet() const;

                    /**
                     * 获取待删除的标签列表
                     * @return DeleteTags 待删除的标签列表
                     * 
                     */
                    std::vector<TagInfoUnit> GetDeleteTags() const;

                    /**
                     * 设置待删除的标签列表
                     * @param _deleteTags 待删除的标签列表
                     * 
                     */
                    void SetDeleteTags(const std::vector<TagInfoUnit>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                private:

                    /**
                     * 待修改标签表格所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待修改标签表格列表
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * 待增加或修改的标签列表
                     */
                    std::vector<TagInfoUnit> m_replaceTags;
                    bool m_replaceTagsHasBeenSet;

                    /**
                     * 待删除的标签列表
                     */
                    std::vector<TagInfoUnit> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLETAGSREQUEST_H_
