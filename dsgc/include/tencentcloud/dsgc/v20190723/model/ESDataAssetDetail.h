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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ES的概览页资产详情
                */
                class ESDataAssetDetail : public AbstractModel
                {
                public:
                    ESDataAssetDetail();
                    ~ESDataAssetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return FieldResultId id
                     * 
                     */
                    int64_t GetFieldResultId() const;

                    /**
                     * 设置id
                     * @param _fieldResultId id
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
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
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
                     * 获取类型
                     * @return DataSourceType 类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置类型
                     * @param _dataSourceType 类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取地域信息
                     * @return ResourceRegion 地域信息
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置地域信息
                     * @param _resourceRegion 地域信息
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
                     * 获取索引名称
                     * @return IndexName 索引名称
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名称
                     * @param _indexName 索引名称
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取字段名称
                     * @return FieldName 字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名称
                     * @param _fieldName 字段名称
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
                     * 获取分类id
                     * @return CategoryId 分类id
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置分类id
                     * @param _categoryId 分类id
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
                     * 获取分类名称
                     * @return CategoryName 分类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置分类名称
                     * @param _categoryName 分类名称
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
                     * 获取分类路径数组
                     * @return CategoryArr 分类路径数组
                     * 
                     */
                    std::vector<std::string> GetCategoryArr() const;

                    /**
                     * 设置分类路径数组
                     * @param _categoryArr 分类路径数组
                     * 
                     */
                    void SetCategoryArr(const std::vector<std::string>& _categoryArr);

                    /**
                     * 判断参数 CategoryArr 是否已赋值
                     * @return CategoryArr 是否已赋值
                     * 
                     */
                    bool CategoryArrHasBeenSet() const;

                    /**
                     * 获取等级id
                     * @return LevelId 等级id
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置等级id
                     * @param _levelId 等级id
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
                     * 获取分级名称
                     * @return LevelRiskName 分级名称
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置分级名称
                     * @param _levelRiskName 分级名称
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
                     * 获取分级分数
                     * @return LevelRiskScore 分级分数
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置分级分数
                     * @param _levelRiskScore 分级分数
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
                    double GetTrustedScore() const;

                    /**
                     * 设置可信分
                     * @param _trustedScore 可信分
                     * 
                     */
                    void SetTrustedScore(const double& _trustedScore);

                    /**
                     * 判断参数 TrustedScore 是否已赋值
                     * @return TrustedScore 是否已赋值
                     * 
                     */
                    bool TrustedScoreHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
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
                     * 获取0系统识别，1人工打标
                     * @return IdentifyType 0系统识别，1人工打标
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置0系统识别，1人工打标
                     * @param _identifyType 0系统识别，1人工打标
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
                     * 获取0未核查，1已核查
                     * @return CheckStatus 0未核查，1已核查
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0未核查，1已核查
                     * @param _checkStatus 0未核查，1已核查
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_fieldResultId;
                    bool m_fieldResultIdHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 索引名称
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 分类id
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 分类路径数组
                     */
                    std::vector<std::string> m_categoryArr;
                    bool m_categoryArrHasBeenSet;

                    /**
                     * 等级id
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 分级名称
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * 分级分数
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                    /**
                     * 可信分
                     */
                    double m_trustedScore;
                    bool m_trustedScoreHasBeenSet;

                    /**
                     * 规则id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 0系统识别，1人工打标
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 0未核查，1已核查
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETDETAIL_H_
