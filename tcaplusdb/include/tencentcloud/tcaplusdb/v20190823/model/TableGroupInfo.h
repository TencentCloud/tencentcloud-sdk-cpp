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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_

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
                * 表格组详细信息
                */
                class TableGroupInfo : public AbstractModel
                {
                public:
                    TableGroupInfo();
                    ~TableGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格组ID
                     * @return TableGroupId 表格组ID
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组ID
                     * @param TableGroupId 表格组ID
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格组名称
                     * @return TableGroupName 表格组名称
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置表格组名称
                     * @param TableGroupName 表格组名称
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取表格组创建时间
                     * @return CreatedTime 表格组创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置表格组创建时间
                     * @param CreatedTime 表格组创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取表格组包含的表格数量
                     * @return TableCount 表格组包含的表格数量
                     */
                    uint64_t GetTableCount() const;

                    /**
                     * 设置表格组包含的表格数量
                     * @param TableCount 表格组包含的表格数量
                     */
                    void SetTableCount(const uint64_t& _tableCount);

                    /**
                     * 判断参数 TableCount 是否已赋值
                     * @return TableCount 是否已赋值
                     */
                    bool TableCountHasBeenSet() const;

                    /**
                     * 获取表格组包含的表格存储总量（MB）
                     * @return TotalSize 表格组包含的表格存储总量（MB）
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 设置表格组包含的表格存储总量（MB）
                     * @param TotalSize 表格组包含的表格存储总量（MB）
                     */
                    void SetTotalSize(const uint64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * 表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格组名称
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * 表格组创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 表格组包含的表格数量
                     */
                    uint64_t m_tableCount;
                    bool m_tableCountHasBeenSet;

                    /**
                     * 表格组包含的表格存储总量（MB）
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEGROUPINFO_H_
