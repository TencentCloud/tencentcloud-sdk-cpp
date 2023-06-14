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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CompareIdlFiles请求参数结构体
                */
                class CompareIdlFilesRequest : public AbstractModel
                {
                public:
                    CompareIdlFilesRequest();
                    ~CompareIdlFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改表格所在集群ID
                     * @return ClusterId 待修改表格所在集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置待修改表格所在集群ID
                     * @param _clusterId 待修改表格所在集群ID
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
                     * 获取待修改表格列表
                     * @return SelectedTables 待修改表格列表
                     * 
                     */
                    std::vector<SelectedTableInfoNew> GetSelectedTables() const;

                    /**
                     * 设置待修改表格列表
                     * @param _selectedTables 待修改表格列表
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
                     * 获取选中的已上传IDL文件列表，与NewIdlFiles必选其一
                     * @return ExistingIdlFiles 选中的已上传IDL文件列表，与NewIdlFiles必选其一
                     * 
                     */
                    std::vector<IdlFileInfo> GetExistingIdlFiles() const;

                    /**
                     * 设置选中的已上传IDL文件列表，与NewIdlFiles必选其一
                     * @param _existingIdlFiles 选中的已上传IDL文件列表，与NewIdlFiles必选其一
                     * 
                     */
                    void SetExistingIdlFiles(const std::vector<IdlFileInfo>& _existingIdlFiles);

                    /**
                     * 判断参数 ExistingIdlFiles 是否已赋值
                     * @return ExistingIdlFiles 是否已赋值
                     * 
                     */
                    bool ExistingIdlFilesHasBeenSet() const;

                    /**
                     * 获取本次上传IDL文件列表，与ExistingIdlFiles必选其一
                     * @return NewIdlFiles 本次上传IDL文件列表，与ExistingIdlFiles必选其一
                     * 
                     */
                    std::vector<IdlFileInfo> GetNewIdlFiles() const;

                    /**
                     * 设置本次上传IDL文件列表，与ExistingIdlFiles必选其一
                     * @param _newIdlFiles 本次上传IDL文件列表，与ExistingIdlFiles必选其一
                     * 
                     */
                    void SetNewIdlFiles(const std::vector<IdlFileInfo>& _newIdlFiles);

                    /**
                     * 判断参数 NewIdlFiles 是否已赋值
                     * @return NewIdlFiles 是否已赋值
                     * 
                     */
                    bool NewIdlFilesHasBeenSet() const;

                private:

                    /**
                     * 待修改表格所在集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待修改表格列表
                     */
                    std::vector<SelectedTableInfoNew> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * 选中的已上传IDL文件列表，与NewIdlFiles必选其一
                     */
                    std::vector<IdlFileInfo> m_existingIdlFiles;
                    bool m_existingIdlFilesHasBeenSet;

                    /**
                     * 本次上传IDL文件列表，与ExistingIdlFiles必选其一
                     */
                    std::vector<IdlFileInfo> m_newIdlFiles;
                    bool m_newIdlFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPAREIDLFILESREQUEST_H_
