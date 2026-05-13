/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm资产表信息
                */
                class DspmAssetTableInfo : public AbstractModel
                {
                public:
                    DspmAssetTableInfo();
                    ~DspmAssetTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产实例id
                     * @return AssetId 资产实例id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产实例id
                     * @param _assetId 资产实例id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return SchemaName schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
                     * @param _schemaName schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
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
                     * 获取字段数
                     * @return FieldCount 字段数
                     * 
                     */
                    uint64_t GetFieldCount() const;

                    /**
                     * 设置字段数
                     * @param _fieldCount 字段数
                     * 
                     */
                    void SetFieldCount(const uint64_t& _fieldCount);

                    /**
                     * 判断参数 FieldCount 是否已赋值
                     * @return FieldCount 是否已赋值
                     * 
                     */
                    bool FieldCountHasBeenSet() const;

                    /**
                     * 获取敏感字段数
                     * @return SensitiveFieldCount 敏感字段数
                     * 
                     */
                    uint64_t GetSensitiveFieldCount() const;

                    /**
                     * 设置敏感字段数
                     * @param _sensitiveFieldCount 敏感字段数
                     * 
                     */
                    void SetSensitiveFieldCount(const uint64_t& _sensitiveFieldCount);

                    /**
                     * 判断参数 SensitiveFieldCount 是否已赋值
                     * @return SensitiveFieldCount 是否已赋值
                     * 
                     */
                    bool SensitiveFieldCountHasBeenSet() const;

                    /**
                     * 获取数据项id集合
                     * @return RuleIds 数据项id集合
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置数据项id集合
                     * @param _ruleIds 数据项id集合
                     * 
                     */
                    void SetRuleIds(const std::vector<uint64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取数据项名称集合
                     * @return RuleNames 数据项名称集合
                     * 
                     */
                    std::vector<std::string> GetRuleNames() const;

                    /**
                     * 设置数据项名称集合
                     * @param _ruleNames 数据项名称集合
                     * 
                     */
                    void SetRuleNames(const std::vector<std::string>& _ruleNames);

                    /**
                     * 判断参数 RuleNames 是否已赋值
                     * @return RuleNames 是否已赋值
                     * 
                     */
                    bool RuleNamesHasBeenSet() const;

                    /**
                     * 获取分类id集合
                     * @return CategoryIds 分类id集合
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置分类id集合
                     * @param _categoryIds 分类id集合
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取分类名称集合
                     * @return CategoryNames 分类名称集合
                     * 
                     */
                    std::vector<std::string> GetCategoryNames() const;

                    /**
                     * 设置分类名称集合
                     * @param _categoryNames 分类名称集合
                     * 
                     */
                    void SetCategoryNames(const std::vector<std::string>& _categoryNames);

                    /**
                     * 判断参数 CategoryNames 是否已赋值
                     * @return CategoryNames 是否已赋值
                     * 
                     */
                    bool CategoryNamesHasBeenSet() const;

                private:

                    /**
                     * 资产实例id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 字段数
                     */
                    uint64_t m_fieldCount;
                    bool m_fieldCountHasBeenSet;

                    /**
                     * 敏感字段数
                     */
                    uint64_t m_sensitiveFieldCount;
                    bool m_sensitiveFieldCountHasBeenSet;

                    /**
                     * 数据项id集合
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * 数据项名称集合
                     */
                    std::vector<std::string> m_ruleNames;
                    bool m_ruleNamesHasBeenSet;

                    /**
                     * 分类id集合
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 分类名称集合
                     */
                    std::vector<std::string> m_categoryNames;
                    bool m_categoryNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTABLEINFO_H_
