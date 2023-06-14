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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/KeyFile.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ImportSnapshots请求参数结构体
                */
                class ImportSnapshotsRequest : public AbstractModel
                {
                public:
                    ImportSnapshotsRequest();
                    ~ImportSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表格所属的集群id
                     * @return ClusterId 表格所属的集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格所属的集群id
                     * @param _clusterId 表格所属的集群id
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
                     * 获取用于导入的快照信息
                     * @return Snapshots 用于导入的快照信息
                     * 
                     */
                    SnapshotInfo GetSnapshots() const;

                    /**
                     * 设置用于导入的快照信息
                     * @param _snapshots 用于导入的快照信息
                     * 
                     */
                    void SetSnapshots(const SnapshotInfo& _snapshots);

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                    /**
                     * 获取是否导入部分记录，TRUE表示导入部分记录，FALSE表示全表导入
                     * @return ImportSpecialKey 是否导入部分记录，TRUE表示导入部分记录，FALSE表示全表导入
                     * 
                     */
                    std::string GetImportSpecialKey() const;

                    /**
                     * 设置是否导入部分记录，TRUE表示导入部分记录，FALSE表示全表导入
                     * @param _importSpecialKey 是否导入部分记录，TRUE表示导入部分记录，FALSE表示全表导入
                     * 
                     */
                    void SetImportSpecialKey(const std::string& _importSpecialKey);

                    /**
                     * 判断参数 ImportSpecialKey 是否已赋值
                     * @return ImportSpecialKey 是否已赋值
                     * 
                     */
                    bool ImportSpecialKeyHasBeenSet() const;

                    /**
                     * 获取是否导入到当前表，TRUE表示导入到当前表，FALSE表示导入到新表
                     * @return ImportOriginTable 是否导入到当前表，TRUE表示导入到当前表，FALSE表示导入到新表
                     * 
                     */
                    std::string GetImportOriginTable() const;

                    /**
                     * 设置是否导入到当前表，TRUE表示导入到当前表，FALSE表示导入到新表
                     * @param _importOriginTable 是否导入到当前表，TRUE表示导入到当前表，FALSE表示导入到新表
                     * 
                     */
                    void SetImportOriginTable(const std::string& _importOriginTable);

                    /**
                     * 判断参数 ImportOriginTable 是否已赋值
                     * @return ImportOriginTable 是否已赋值
                     * 
                     */
                    bool ImportOriginTableHasBeenSet() const;

                    /**
                     * 获取部分记录的key文件
                     * @return KeyFile 部分记录的key文件
                     * 
                     */
                    KeyFile GetKeyFile() const;

                    /**
                     * 设置部分记录的key文件
                     * @param _keyFile 部分记录的key文件
                     * 
                     */
                    void SetKeyFile(const KeyFile& _keyFile);

                    /**
                     * 判断参数 KeyFile 是否已赋值
                     * @return KeyFile 是否已赋值
                     * 
                     */
                    bool KeyFileHasBeenSet() const;

                    /**
                     * 获取如果导入到新表，此为新表所属的表格组id
                     * @return NewTableGroupId 如果导入到新表，此为新表所属的表格组id
                     * 
                     */
                    std::string GetNewTableGroupId() const;

                    /**
                     * 设置如果导入到新表，此为新表所属的表格组id
                     * @param _newTableGroupId 如果导入到新表，此为新表所属的表格组id
                     * 
                     */
                    void SetNewTableGroupId(const std::string& _newTableGroupId);

                    /**
                     * 判断参数 NewTableGroupId 是否已赋值
                     * @return NewTableGroupId 是否已赋值
                     * 
                     */
                    bool NewTableGroupIdHasBeenSet() const;

                    /**
                     * 获取如果导入到新表，此为新表的表名，系统会以该名称自动创建一张结构相同的空表
                     * @return NewTableName 如果导入到新表，此为新表的表名，系统会以该名称自动创建一张结构相同的空表
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置如果导入到新表，此为新表的表名，系统会以该名称自动创建一张结构相同的空表
                     * @param _newTableName 如果导入到新表，此为新表的表名，系统会以该名称自动创建一张结构相同的空表
                     * 
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     * 
                     */
                    bool NewTableNameHasBeenSet() const;

                private:

                    /**
                     * 表格所属的集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 用于导入的快照信息
                     */
                    SnapshotInfo m_snapshots;
                    bool m_snapshotsHasBeenSet;

                    /**
                     * 是否导入部分记录，TRUE表示导入部分记录，FALSE表示全表导入
                     */
                    std::string m_importSpecialKey;
                    bool m_importSpecialKeyHasBeenSet;

                    /**
                     * 是否导入到当前表，TRUE表示导入到当前表，FALSE表示导入到新表
                     */
                    std::string m_importOriginTable;
                    bool m_importOriginTableHasBeenSet;

                    /**
                     * 部分记录的key文件
                     */
                    KeyFile m_keyFile;
                    bool m_keyFileHasBeenSet;

                    /**
                     * 如果导入到新表，此为新表所属的表格组id
                     */
                    std::string m_newTableGroupId;
                    bool m_newTableGroupIdHasBeenSet;

                    /**
                     * 如果导入到新表，此为新表的表名，系统会以该名称自动创建一张结构相同的空表
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IMPORTSNAPSHOTSREQUEST_H_
