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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaSafeGuard.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 关系型数据库资产详情
                */
                class DspaRDBDataAssetDetail : public AbstractModel
                {
                public:
                    DspaRDBDataAssetDetail();
                    ~DspaRDBDataAssetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param _dbType 数据库类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

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
                     * 获取数据库表名称
                     * @return TableName 数据库表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据库表名称
                     * @param _tableName 数据库表名称
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
                     * 获取数据库表字段名称
                     * @return FieldName 数据库表字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置数据库表字段名称
                     * @param _fieldName 数据库表字段名称
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取数据分类
                     * @return CategoryName 数据分类
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置数据分类
                     * @param _categoryName 数据分类
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取敏感等级
                     * @return LevelRiskName 敏感等级
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置敏感等级
                     * @param _levelRiskName 敏感等级
                     * 
                     */
                    void SetLevelRiskName(const std::string& _levelRiskName);

                    /**
                     * 判断参数 LevelRiskName 是否已赋值
                     * @return LevelRiskName 是否已赋值
                     * 
                     */
                    bool LevelRiskNameHasBeenSet() const;

                    /**
                     * 获取分级风险分数，1-10，最小值为1，最大值为10
                     * @return LevelRiskScore 分级风险分数，1-10，最小值为1，最大值为10
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置分级风险分数，1-10，最小值为1，最大值为10
                     * @param _levelRiskScore 分级风险分数，1-10，最小值为1，最大值为10
                     * 
                     */
                    void SetLevelRiskScore(const int64_t& _levelRiskScore);

                    /**
                     * 判断参数 LevelRiskScore 是否已赋值
                     * @return LevelRiskScore 是否已赋值
                     * 
                     */
                    bool LevelRiskScoreHasBeenSet() const;

                    /**
                     * 获取可信分
                     * @return TrustedScore 可信分
                     * 
                     */
                    std::string GetTrustedScore() const;

                    /**
                     * 设置可信分
                     * @param _trustedScore 可信分
                     * 
                     */
                    void SetTrustedScore(const std::string& _trustedScore);

                    /**
                     * 判断参数 TrustedScore 是否已赋值
                     * @return TrustedScore 是否已赋值
                     * 
                     */
                    bool TrustedScoreHasBeenSet() const;

                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取字段扫描结果ID
                     * @return FieldResultId 字段扫描结果ID
                     * 
                     */
                    std::string GetFieldResultId() const;

                    /**
                     * 设置字段扫描结果ID
                     * @param _fieldResultId 字段扫描结果ID
                     * 
                     */
                    void SetFieldResultId(const std::string& _fieldResultId);

                    /**
                     * 判断参数 FieldResultId 是否已赋值
                     * @return FieldResultId 是否已赋值
                     * 
                     */
                    bool FieldResultIdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取分级ID
                     * @return LevelId 分级ID
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置分级ID
                     * @param _levelId 分级ID
                     * 
                     */
                    void SetLevelId(const int64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CategoryId 分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置分类ID
                     * @param _categoryId 分类ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取保护措施
                     * @return SafeGuard 保护措施
                     * 
                     */
                    DspaSafeGuard GetSafeGuard() const;

                    /**
                     * 设置保护措施
                     * @param _safeGuard 保护措施
                     * 
                     */
                    void SetSafeGuard(const DspaSafeGuard& _safeGuard);

                    /**
                     * 判断参数 SafeGuard 是否已赋值
                     * @return SafeGuard 是否已赋值
                     * 
                     */
                    bool SafeGuardHasBeenSet() const;

                    /**
                     * 获取分类路径
                     * @return CategoryFullPath 分类路径
                     * 
                     */
                    std::string GetCategoryFullPath() const;

                    /**
                     * 设置分类路径
                     * @param _categoryFullPath 分类路径
                     * 
                     */
                    void SetCategoryFullPath(const std::string& _categoryFullPath);

                    /**
                     * 判断参数 CategoryFullPath 是否已赋值
                     * @return CategoryFullPath 是否已赋值
                     * 
                     */
                    bool CategoryFullPathHasBeenSet() const;

                    /**
                     * 获取0.系统识别，1人工打标
                     * @return IdentifyType 0.系统识别，1人工打标
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置0.系统识别，1人工打标
                     * @param _identifyType 0.系统识别，1人工打标
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取0未核查 1已核查
                     * @return CheckStatus 0未核查 1已核查
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0未核查 1已核查
                     * @param _checkStatus 0未核查 1已核查
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取0非敏感，1敏感
                     * @return IsSensitiveData 0非敏感，1敏感
                     * 
                     */
                    int64_t GetIsSensitiveData() const;

                    /**
                     * 设置0非敏感，1敏感
                     * @param _isSensitiveData 0非敏感，1敏感
                     * 
                     */
                    void SetIsSensitiveData(const int64_t& _isSensitiveData);

                    /**
                     * 判断参数 IsSensitiveData 是否已赋值
                     * @return IsSensitiveData 是否已赋值
                     * 
                     */
                    bool IsSensitiveDataHasBeenSet() const;

                    /**
                     * 获取模式名
                     * @return SchemaName 模式名
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名
                     * @param _schemaName 模式名
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据库表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据库表字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 数据分类
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 敏感等级
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * 分级风险分数，1-10，最小值为1，最大值为10
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                    /**
                     * 可信分
                     */
                    std::string m_trustedScore;
                    bool m_trustedScoreHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 字段扫描结果ID
                     */
                    std::string m_fieldResultId;
                    bool m_fieldResultIdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 分级ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 保护措施
                     */
                    DspaSafeGuard m_safeGuard;
                    bool m_safeGuardHasBeenSet;

                    /**
                     * 分类路径
                     */
                    std::string m_categoryFullPath;
                    bool m_categoryFullPathHasBeenSet;

                    /**
                     * 0.系统识别，1人工打标
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 0未核查 1已核查
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 0非敏感，1敏感
                     */
                    int64_t m_isSensitiveData;
                    bool m_isSensitiveDataHasBeenSet;

                    /**
                     * 模式名
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETDETAIL_H_
