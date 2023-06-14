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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 新的快照过期时间
                */
                class SnapshotInfoNew : public AbstractModel
                {
                public:
                    SnapshotInfoNew();
                    ~SnapshotInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属表格组ID
                     * @return TableGroupId 所属表格组ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置所属表格组ID
                     * @param _tableGroupId 所属表格组ID
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取快照名称
                     * @return SnapshotName 快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称
                     * @param _snapshotName 快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照过期时间点
                     * @return SnapshotDeadTime 快照过期时间点
                     * 
                     */
                    std::string GetSnapshotDeadTime() const;

                    /**
                     * 设置快照过期时间点
                     * @param _snapshotDeadTime 快照过期时间点
                     * 
                     */
                    void SetSnapshotDeadTime(const std::string& _snapshotDeadTime);

                    /**
                     * 判断参数 SnapshotDeadTime 是否已赋值
                     * @return SnapshotDeadTime 是否已赋值
                     * 
                     */
                    bool SnapshotDeadTimeHasBeenSet() const;

                private:

                    /**
                     * 所属表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照过期时间点
                     */
                    std::string m_snapshotDeadTime;
                    bool m_snapshotDeadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_
