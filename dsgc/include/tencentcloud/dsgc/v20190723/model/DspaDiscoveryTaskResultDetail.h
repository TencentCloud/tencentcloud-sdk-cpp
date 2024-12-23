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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKRESULTDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKRESULTDETAIL_H_

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
                * 扫描任务结果详情
                */
                class DspaDiscoveryTaskResultDetail : public AbstractModel
                {
                public:
                    DspaDiscoveryTaskResultDetail();
                    ~DspaDiscoveryTaskResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取扫描结果详情ID
                     * @return FieldResultId 扫描结果详情ID
                     * 
                     */
                    int64_t GetFieldResultId() const;

                    /**
                     * 设置扫描结果详情ID
                     * @param _fieldResultId 扫描结果详情ID
                     * 
                     */
                    void SetFieldResultId(const int64_t& _fieldResultId);

                    /**
                     * 判断参数 FieldResultId 是否已赋值
                     * @return FieldResultId 是否已赋值
                     * 
                     */
                    bool FieldResultIdHasBeenSet() const;

                    /**
                     * 获取所属数据表名
                     * @return TableName 所属数据表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置所属数据表名
                     * @param _tableName 所属数据表名
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
                     * 获取字段名
                     * @return FieldName 字段名
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名
                     * @param _fieldName 字段名
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
                     * 获取敏感数据分类ID
                     * @return CategoryId 敏感数据分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置敏感数据分类ID
                     * @param _categoryId 敏感数据分类ID
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
                     * 获取敏感数据分类名称
                     * @return CategoryName 敏感数据分类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置敏感数据分类名称
                     * @param _categoryName 敏感数据分类名称
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
                     * 获取敏感数据分级ID
                     * @return LevelId 敏感数据分级ID
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置敏感数据分级ID
                     * @param _levelId 敏感数据分级ID
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
                     * 获取敏感数据分级名称
                     * @return LevelName 敏感数据分级名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置敏感数据分级名称
                     * @param _levelName 敏感数据分级名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

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
                     * 获取敏感数据分级分数
                     * @return LevelRiskScore 敏感数据分级分数
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置敏感数据分级分数
                     * @param _levelRiskScore 敏感数据分级分数
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
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 扫描结果详情ID
                     */
                    int64_t m_fieldResultId;
                    bool m_fieldResultIdHasBeenSet;

                    /**
                     * 所属数据表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 字段名
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 敏感数据分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 敏感数据分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 敏感数据分级ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 敏感数据分级名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 敏感数据分级分数
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

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
                     * 模式名
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKRESULTDETAIL_H_
