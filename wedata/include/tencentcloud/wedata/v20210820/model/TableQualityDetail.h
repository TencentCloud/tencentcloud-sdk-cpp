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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表质量详情
                */
                class TableQualityDetail : public AbstractModel
                {
                public:
                    TableQualityDetail();
                    ~TableQualityDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserId 表责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOwnerUserId() const;

                    /**
                     * 设置表责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerUserId 表责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerUserId(const int64_t& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取表责任人名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserName 表责任人名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置表责任人名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerUserName 表责任人名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取库得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseScore 库得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetDatabaseScore() const;

                    /**
                     * 设置库得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseScore 库得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseScore(const double& _databaseScore);

                    /**
                     * 判断参数 DatabaseScore 是否已赋值
                     * @return DatabaseScore 是否已赋值
                     */
                    bool DatabaseScoreHasBeenSet() const;

                    /**
                     * 获取表得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableScore 表得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetTableScore() const;

                    /**
                     * 设置表得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableScore 表得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableScore(const double& _tableScore);

                    /**
                     * 判断参数 TableScore 是否已赋值
                     * @return TableScore 是否已赋值
                     */
                    bool TableScoreHasBeenSet() const;

                    /**
                     * 获取表环比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastPeriodRatio 表环比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetLastPeriodRatio() const;

                    /**
                     * 设置表环比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastPeriodRatio 表环比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastPeriodRatio(const double& _lastPeriodRatio);

                    /**
                     * 判断参数 LastPeriodRatio 是否已赋值
                     * @return LastPeriodRatio 是否已赋值
                     */
                    bool LastPeriodRatioHasBeenSet() const;

                private:

                    /**
                     * 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 表责任人名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * 库得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_databaseScore;
                    bool m_databaseScoreHasBeenSet;

                    /**
                     * 表得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tableScore;
                    bool m_tableScoreHasBeenSet;

                    /**
                     * 表环比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lastPeriodRatio;
                    bool m_lastPeriodRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEQUALITYDETAIL_H_
