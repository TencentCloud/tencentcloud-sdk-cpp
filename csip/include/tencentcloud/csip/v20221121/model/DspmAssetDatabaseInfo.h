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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATABASEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATABASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm资产数据库信息
                */
                class DspmAssetDatabaseInfo : public AbstractModel
                {
                public:
                    DspmAssetDatabaseInfo();
                    ~DspmAssetDatabaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产实例id</p>
                     * @return AssetId <p>资产实例id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产实例id</p>
                     * @param _assetId <p>资产实例id</p>
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
                     * 获取<p>数据库名称</p>
                     * @return DbName <p>数据库名称</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _dbName <p>数据库名称</p>
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
                     * 获取<p>总表数</p>
                     * @return TableCount <p>总表数</p>
                     * 
                     */
                    uint64_t GetTableCount() const;

                    /**
                     * 设置<p>总表数</p>
                     * @param _tableCount <p>总表数</p>
                     * 
                     */
                    void SetTableCount(const uint64_t& _tableCount);

                    /**
                     * 判断参数 TableCount 是否已赋值
                     * @return TableCount 是否已赋值
                     * 
                     */
                    bool TableCountHasBeenSet() const;

                    /**
                     * 获取<p>敏感表数</p>
                     * @return SensitiveTableCount <p>敏感表数</p>
                     * 
                     */
                    uint64_t GetSensitiveTableCount() const;

                    /**
                     * 设置<p>敏感表数</p>
                     * @param _sensitiveTableCount <p>敏感表数</p>
                     * 
                     */
                    void SetSensitiveTableCount(const uint64_t& _sensitiveTableCount);

                    /**
                     * 判断参数 SensitiveTableCount 是否已赋值
                     * @return SensitiveTableCount 是否已赋值
                     * 
                     */
                    bool SensitiveTableCountHasBeenSet() const;

                    /**
                     * 获取<p>数据项id集合</p>
                     * @return RuleIds <p>数据项id集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetRuleIds() const;

                    /**
                     * 设置<p>数据项id集合</p>
                     * @param _ruleIds <p>数据项id集合</p>
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
                     * 获取<p>数据项名称集合</p>
                     * @return RuleNames <p>数据项名称集合</p>
                     * 
                     */
                    std::vector<std::string> GetRuleNames() const;

                    /**
                     * 设置<p>数据项名称集合</p>
                     * @param _ruleNames <p>数据项名称集合</p>
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
                     * 获取<p>分类id集合</p>
                     * @return CategoryIds <p>分类id集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置<p>分类id集合</p>
                     * @param _categoryIds <p>分类id集合</p>
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
                     * 获取<p>分类名称集合</p>
                     * @return CategoryNames <p>分类名称集合</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryNames() const;

                    /**
                     * 设置<p>分类名称集合</p>
                     * @param _categoryNames <p>分类名称集合</p>
                     * 
                     */
                    void SetCategoryNames(const std::vector<std::string>& _categoryNames);

                    /**
                     * 判断参数 CategoryNames 是否已赋值
                     * @return CategoryNames 是否已赋值
                     * 
                     */
                    bool CategoryNamesHasBeenSet() const;

                    /**
                     * 获取<p>分类详情</p>
                     * @return CategoryDetails <p>分类详情</p>
                     * 
                     */
                    std::vector<DspmIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置<p>分类详情</p>
                     * @param _categoryDetails <p>分类详情</p>
                     * 
                     */
                    void SetCategoryDetails(const std::vector<DspmIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>资产实例id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>总表数</p>
                     */
                    uint64_t m_tableCount;
                    bool m_tableCountHasBeenSet;

                    /**
                     * <p>敏感表数</p>
                     */
                    uint64_t m_sensitiveTableCount;
                    bool m_sensitiveTableCountHasBeenSet;

                    /**
                     * <p>数据项id集合</p>
                     */
                    std::vector<uint64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * <p>数据项名称集合</p>
                     */
                    std::vector<std::string> m_ruleNames;
                    bool m_ruleNamesHasBeenSet;

                    /**
                     * <p>分类id集合</p>
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * <p>分类名称集合</p>
                     */
                    std::vector<std::string> m_categoryNames;
                    bool m_categoryNamesHasBeenSet;

                    /**
                     * <p>分类详情</p>
                     */
                    std::vector<DspmIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETDATABASEINFO_H_
