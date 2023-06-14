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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_COMPLIANCECHECKDETAIL_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_COMPLIANCECHECKDETAIL_H_

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
                * 等保资产组记录
                */
                class ComplianceCheckDetail : public AbstractModel
                {
                public:
                    ComplianceCheckDetail();
                    ~ComplianceCheckDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项ID
                     * @return Id 检查项ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项ID
                     * @param _id 检查项ID
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
                     * 获取不通过总数
                     * @return ErrorCount 不通过总数
                     * 
                     */
                    int64_t GetErrorCount() const;

                    /**
                     * 设置不通过总数
                     * @param _errorCount 不通过总数
                     * 
                     */
                    void SetErrorCount(const int64_t& _errorCount);

                    /**
                     * 判断参数 ErrorCount 是否已赋值
                     * @return ErrorCount 是否已赋值
                     * 
                     */
                    bool ErrorCountHasBeenSet() const;

                    /**
                     * 获取检查项英文名
                     * @return NameEn 检查项英文名
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置检查项英文名
                     * @param _nameEn 检查项英文名
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取检查项名称
                     * @return CheckName 检查项名称
                     * 
                     */
                    std::string GetCheckName() const;

                    /**
                     * 设置检查项名称
                     * @param _checkName 检查项名称
                     * 
                     */
                    void SetCheckName(const std::string& _checkName);

                    /**
                     * 判断参数 CheckName 是否已赋值
                     * @return CheckName 是否已赋值
                     * 
                     */
                    bool CheckNameHasBeenSet() const;

                    /**
                     * 获取检查项处置方式
                     * @return Method 检查项处置方式
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置检查项处置方式
                     * @param _method 检查项处置方式
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取帮助文档
                     * @return Doc 帮助文档
                     * 
                     */
                    std::string GetDoc() const;

                    /**
                     * 设置帮助文档
                     * @param _doc 帮助文档
                     * 
                     */
                    void SetDoc(const std::string& _doc);

                    /**
                     * 判断参数 Doc 是否已赋值
                     * @return Doc 是否已赋值
                     * 
                     */
                    bool DocHasBeenSet() const;

                    /**
                     * 获取通过总数
                     * @return SafeCount 通过总数
                     * 
                     */
                    int64_t GetSafeCount() const;

                    /**
                     * 设置通过总数
                     * @param _safeCount 通过总数
                     * 
                     */
                    void SetSafeCount(const int64_t& _safeCount);

                    /**
                     * 判断参数 SafeCount 是否已赋值
                     * @return SafeCount 是否已赋值
                     * 
                     */
                    bool SafeCountHasBeenSet() const;

                    /**
                     * 获取检查项检查内容
                     * @return Content 检查项检查内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置检查项检查内容
                     * @param _content 检查项检查内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取是否通过检测
                     * @return IsPass 是否通过检测
                     * 
                     */
                    int64_t GetIsPass() const;

                    /**
                     * 设置是否通过检测
                     * @param _isPass 是否通过检测
                     * 
                     */
                    void SetIsPass(const int64_t& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     * 
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取忽略总数
                     * @return IgnoreCount 忽略总数
                     * 
                     */
                    int64_t GetIgnoreCount() const;

                    /**
                     * 设置忽略总数
                     * @param _ignoreCount 忽略总数
                     * 
                     */
                    void SetIgnoreCount(const int64_t& _ignoreCount);

                    /**
                     * 判断参数 IgnoreCount 是否已赋值
                     * @return IgnoreCount 是否已赋值
                     * 
                     */
                    bool IgnoreCountHasBeenSet() const;

                    /**
                     * 获取风险总数
                     * @return RiskCount 风险总数
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置风险总数
                     * @param _riskCount 风险总数
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取最近一次检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastCheckTime 最近一次检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近一次检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastCheckTime 最近一次检测时间
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
                     * 获取资产组类型
                     * @return AssetType 资产组类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产组类型
                     * @param _assetType 资产组类型
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
                     * 获取res_count
                     * @return ResCount res_count
                     * 
                     */
                    int64_t GetResCount() const;

                    /**
                     * 设置res_count
                     * @param _resCount res_count
                     * 
                     */
                    void SetResCount(const int64_t& _resCount);

                    /**
                     * 判断参数 ResCount 是否已赋值
                     * @return ResCount 是否已赋值
                     * 
                     */
                    bool ResCountHasBeenSet() const;

                    /**
                     * 获取检查项UUID
                     * @return UUID 检查项UUID
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置检查项UUID
                     * @param _uUID 检查项UUID
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取标准项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardItem 标准项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandardItem() const;

                    /**
                     * 设置标准项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardItem 标准项
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取章节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Chapter 章节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChapter() const;

                    /**
                     * 设置章节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chapter 章节
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTypeDesc 资产类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetTypeDesc() const;

                    /**
                     * 设置资产类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetTypeDesc 资产类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetTypeDesc(const std::string& _assetTypeDesc);

                    /**
                     * 判断参数 AssetTypeDesc 是否已赋值
                     * @return AssetTypeDesc 是否已赋值
                     * 
                     */
                    bool AssetTypeDescHasBeenSet() const;

                    /**
                     * 获取是否忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIgnore 是否忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsIgnore() const;

                    /**
                     * 设置是否忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIgnore 是否忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIgnore(const uint64_t& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskItem 风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskItem() const;

                    /**
                     * 设置风险项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskItem 风险项
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
                     * 获取合规检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 合规检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置合规检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 合规检查项完整名称
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

                private:

                    /**
                     * 检查项ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 检查项类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 检查项类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 不通过总数
                     */
                    int64_t m_errorCount;
                    bool m_errorCountHasBeenSet;

                    /**
                     * 检查项英文名
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * 检查项名称
                     */
                    std::string m_checkName;
                    bool m_checkNameHasBeenSet;

                    /**
                     * 检查项处置方式
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 帮助文档
                     */
                    std::string m_doc;
                    bool m_docHasBeenSet;

                    /**
                     * 通过总数
                     */
                    int64_t m_safeCount;
                    bool m_safeCountHasBeenSet;

                    /**
                     * 检查项检查内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否通过检测
                     */
                    int64_t m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * 忽略总数
                     */
                    int64_t m_ignoreCount;
                    bool m_ignoreCountHasBeenSet;

                    /**
                     * 风险总数
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 最近一次检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 资产组类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * res_count
                     */
                    int64_t m_resCount;
                    bool m_resCountHasBeenSet;

                    /**
                     * 检查项UUID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 标准项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standardItem;
                    bool m_standardItemHasBeenSet;

                    /**
                     * 章节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chapter;
                    bool m_chapterHasBeenSet;

                    /**
                     * 资产类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetTypeDesc;
                    bool m_assetTypeDescHasBeenSet;

                    /**
                     * 是否忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * 风险项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskItem;
                    bool m_riskItemHasBeenSet;

                    /**
                     * 合规检查项完整名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_COMPLIANCECHECKDETAIL_H_
