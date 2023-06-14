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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TAGSINFOOFTABLE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TAGSINFOOFTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表格标签信息
                */
                class TagsInfoOfTable : public AbstractModel
                {
                public:
                    TagsInfoOfTable();
                    ~TagsInfoOfTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupId 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupId 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfoUnit> GetTags() const;

                    /**
                     * 设置标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagInfoUnit>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfoUnit> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TAGSINFOOFTABLE_H_
