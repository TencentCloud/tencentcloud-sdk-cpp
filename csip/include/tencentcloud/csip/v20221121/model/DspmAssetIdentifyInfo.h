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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYINFO_H_

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
                * dspm资产数据识别统计信息
                */
                class DspmAssetIdentifyInfo : public AbstractModel
                {
                public:
                    DspmAssetIdentifyInfo();
                    ~DspmAssetIdentifyInfo() = default;
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
                     * 获取<p>资产名称</p>
                     * @return AssetName <p>资产名称</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产名称</p>
                     * @param _assetName <p>资产名称</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p><p>枚举值：</p><ul><li>cdb： MySQL</li><li>mariadb： MariaDB</li><li>mongodb： MongoDB</li></ul>
                     * @return AssetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： MySQL</li><li>mariadb： MariaDB</li><li>mongodb： MongoDB</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p><p>枚举值：</p><ul><li>cdb： MySQL</li><li>mariadb： MariaDB</li><li>mongodb： MongoDB</li></ul>
                     * @param _assetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： MySQL</li><li>mariadb： MariaDB</li><li>mongodb： MongoDB</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>已检出数据库数量</p>
                     * @return DetectedDbCount <p>已检出数据库数量</p>
                     * 
                     */
                    uint64_t GetDetectedDbCount() const;

                    /**
                     * 设置<p>已检出数据库数量</p>
                     * @param _detectedDbCount <p>已检出数据库数量</p>
                     * 
                     */
                    void SetDetectedDbCount(const uint64_t& _detectedDbCount);

                    /**
                     * 判断参数 DetectedDbCount 是否已赋值
                     * @return DetectedDbCount 是否已赋值
                     * 
                     */
                    bool DetectedDbCountHasBeenSet() const;

                    /**
                     * 获取<p>已检出表数量</p>
                     * @return DetectedTableCount <p>已检出表数量</p>
                     * 
                     */
                    uint64_t GetDetectedTableCount() const;

                    /**
                     * 设置<p>已检出表数量</p>
                     * @param _detectedTableCount <p>已检出表数量</p>
                     * 
                     */
                    void SetDetectedTableCount(const uint64_t& _detectedTableCount);

                    /**
                     * 判断参数 DetectedTableCount 是否已赋值
                     * @return DetectedTableCount 是否已赋值
                     * 
                     */
                    bool DetectedTableCountHasBeenSet() const;

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
                     * 获取<p>最高级别ID</p>
                     * @return LevelId <p>最高级别ID</p>
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置<p>最高级别ID</p>
                     * @param _levelId <p>最高级别ID</p>
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取<p>最高级别名称</p>
                     * @return LevelName <p>最高级别名称</p>
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置<p>最高级别名称</p>
                     * @param _levelName <p>最高级别名称</p>
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
                     * 获取<p>级别敏感程度</p>
                     * @return LevelScore <p>级别敏感程度</p>
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置<p>级别敏感程度</p>
                     * @param _levelScore <p>级别敏感程度</p>
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                    /**
                     * 获取<p>检出时间</p>
                     * @return DetectedTime <p>检出时间</p>
                     * 
                     */
                    std::string GetDetectedTime() const;

                    /**
                     * 设置<p>检出时间</p>
                     * @param _detectedTime <p>检出时间</p>
                     * 
                     */
                    void SetDetectedTime(const std::string& _detectedTime);

                    /**
                     * 判断参数 DetectedTime 是否已赋值
                     * @return DetectedTime 是否已赋值
                     * 
                     */
                    bool DetectedTimeHasBeenSet() const;

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

                    /**
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>账号名称</p>
                     * @return NickName <p>账号名称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>账号名称</p>
                     * @param _nickName <p>账号名称</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>账号ID</p>
                     * @return Uin <p>账号ID</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号ID</p>
                     * @param _uin <p>账号ID</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * <p>资产实例id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>资产名称</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>资产类型</p><p>枚举值：</p><ul><li>cdb： MySQL</li><li>mariadb： MariaDB</li><li>mongodb： MongoDB</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>已检出数据库数量</p>
                     */
                    uint64_t m_detectedDbCount;
                    bool m_detectedDbCountHasBeenSet;

                    /**
                     * <p>已检出表数量</p>
                     */
                    uint64_t m_detectedTableCount;
                    bool m_detectedTableCountHasBeenSet;

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
                     * <p>最高级别ID</p>
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * <p>最高级别名称</p>
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * <p>级别敏感程度</p>
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                    /**
                     * <p>检出时间</p>
                     */
                    std::string m_detectedTime;
                    bool m_detectedTimeHasBeenSet;

                    /**
                     * <p>分类详情</p>
                     */
                    std::vector<DspmIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号名称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>账号ID</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYINFO_H_
