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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DATACOMPLIANCE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DATACOMPLIANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 合规检查项详情对象
                */
                class DataCompliance : public AbstractModel
                {
                public:
                    DataCompliance();
                    ~DataCompliance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等保唯一标识符
                     * @return Id 等保唯一标识符
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置等保唯一标识符
                     * @param _id 等保唯一标识符
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取检查项唯一标识符
                     * @return CheckItemId 检查项唯一标识符
                     * 
                     */
                    std::string GetCheckItemId() const;

                    /**
                     * 设置检查项唯一标识符
                     * @param _checkItemId 检查项唯一标识符
                     * 
                     */
                    void SetCheckItemId(const std::string& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     * 
                     */
                    bool CheckItemIdHasBeenSet() const;

                    /**
                     * 获取检查项名称
                     * @return Name 检查项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检查项名称
                     * @param _name 检查项名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取检查项资产类型
                     * @return AssetType 检查项资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置检查项资产类型
                     * @param _assetType 检查项资产类型
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
                     * 获取检查项类型
                     * @return Type 检查项类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置检查项类型
                     * @param _type 检查项类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检查项类别
                     * @return Category 检查项类别
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置检查项类别
                     * @param _category 检查项类别
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取检查项标准项
                     * @return StandardItem 检查项标准项
                     * 
                     */
                    std::string GetStandardItem() const;

                    /**
                     * 设置检查项标准项
                     * @param _standardItem 检查项标准项
                     * 
                     */
                    void SetStandardItem(const std::string& _standardItem);

                    /**
                     * 判断参数 StandardItem 是否已赋值
                     * @return StandardItem 是否已赋值
                     * 
                     */
                    bool StandardItemHasBeenSet() const;

                    /**
                     * 获取检查项章节号
                     * @return Chapter 检查项章节号
                     * 
                     */
                    std::string GetChapter() const;

                    /**
                     * 设置检查项章节号
                     * @param _chapter 检查项章节号
                     * 
                     */
                    void SetChapter(const std::string& _chapter);

                    /**
                     * 判断参数 Chapter 是否已赋值
                     * @return Chapter 是否已赋值
                     * 
                     */
                    bool ChapterHasBeenSet() const;

                    /**
                     * 获取最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastCheckTime 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastCheckTime 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCount 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCount 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsChecked 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsChecked() const;

                    /**
                     * 设置0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isChecked 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsChecked(const uint64_t& _isChecked);

                    /**
                     * 判断参数 IsChecked 是否已赋值
                     * @return IsChecked 是否已赋值
                     * 
                     */
                    bool IsCheckedHasBeenSet() const;

                    /**
                     * 获取检查项风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskItem 检查项风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskItem() const;

                    /**
                     * 设置检查项风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskItem 检查项风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskItem(const std::string& _riskItem);

                    /**
                     * 判断参数 RiskItem 是否已赋值
                     * @return RiskItem 是否已赋值
                     * 
                     */
                    bool RiskItemHasBeenSet() const;

                    /**
                     * 获取0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIgnored 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsIgnored() const;

                    /**
                     * 设置0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIgnored 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIgnored(const uint64_t& _isIgnored);

                    /**
                     * 判断参数 IsIgnored 是否已赋值
                     * @return IsIgnored 是否已赋值
                     * 
                     */
                    bool IsIgnoredHasBeenSet() const;

                    /**
                     * 获取等保检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 等保检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置等保检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 等保检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTotal 资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetTotal() const;

                    /**
                     * 设置资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetTotal 资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetTotal(const int64_t& _assetTotal);

                    /**
                     * 判断参数 AssetTotal 是否已赋值
                     * @return AssetTotal 是否已赋值
                     * 
                     */
                    bool AssetTotalHasBeenSet() const;

                    /**
                     * 获取忽略内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remarks 忽略内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置忽略内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remarks 忽略内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                private:

                    /**
                     * 等保唯一标识符
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 检查项唯一标识符
                     */
                    std::string m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * 检查项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检查项资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 检查项类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检查项类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 检查项标准项
                     */
                    std::string m_standardItem;
                    bool m_standardItemHasBeenSet;

                    /**
                     * 检查项章节号
                     */
                    std::string m_chapter;
                    bool m_chapterHasBeenSet;

                    /**
                     * 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isChecked;
                    bool m_isCheckedHasBeenSet;

                    /**
                     * 检查项风险项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskItem;
                    bool m_riskItemHasBeenSet;

                    /**
                     * 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isIgnored;
                    bool m_isIgnoredHasBeenSet;

                    /**
                     * 等保检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 资产总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetTotal;
                    bool m_assetTotalHasBeenSet;

                    /**
                     * 忽略内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DATACOMPLIANCE_H_
