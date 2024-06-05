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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SqlExpression.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则模版
                */
                class RuleTemplate : public AbstractModel
                {
                public:
                    RuleTemplate();
                    ~RuleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则模版ID
                     * @return RuleTemplateId 规则模版ID
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置规则模版ID
                     * @param _ruleTemplateId 规则模版ID
                     * 
                     */
                    void SetRuleTemplateId(const uint64_t& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模版名称
                     * @return Name 规则模版名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则模版名称
                     * @param _name 规则模版名称
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
                     * 获取规则模版描述
                     * @return Description 规则模版描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则模版描述
                     * @param _description 规则模版描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模版类型（1：系统模版，2：自定义）
                     * @return Type 模版类型（1：系统模版，2：自定义）
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置模版类型（1：系统模版，2：自定义）
                     * @param _type 模版类型（1：系统模版，2：自定义）
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
                     * @return SourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
                     * @param _sourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
                     * 
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     * 
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取规则适用的源数据对象类型（1：数值，2：字符串）
                     * @return SourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
                     * 
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：数值，2：字符串）
                     * @param _sourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
                     * 
                     */
                    void SetSourceObjectDataType(const uint64_t& _sourceObjectDataType);

                    /**
                     * 判断参数 SourceObjectDataType 是否已赋值
                     * @return SourceObjectDataType 是否已赋值
                     * 
                     */
                    bool SourceObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取规则模版源侧内容，区分引擎，JSON 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceContent 规则模版源侧内容，区分引擎，JSON 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置规则模版源侧内容，区分引擎，JSON 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceContent 规则模版源侧内容，区分引擎，JSON 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取源数据适用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceEngineTypes 源数据适用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置源数据适用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceEngineTypes 源数据适用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                    /**
                     * 获取规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityDim 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     * 
                     */
                    bool QualityDimHasBeenSet() const;

                    /**
                     * 获取规则支持的比较方式类型（1：固定值比较，大于、小于，大于等于等 2：波动值比较，绝对值、上升、下降）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareType 规则支持的比较方式类型（1：固定值比较，大于、小于，大于等于等 2：波动值比较，绝对值、上升、下降）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置规则支持的比较方式类型（1：固定值比较，大于、小于，大于等于等 2：波动值比较，绝对值、上升、下降）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareType 规则支持的比较方式类型（1：固定值比较，大于、小于，大于等于等 2：波动值比较，绝对值、上升、下降）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareType(const uint64_t& _compareType);

                    /**
                     * 判断参数 CompareType 是否已赋值
                     * @return CompareType 是否已赋值
                     * 
                     */
                    bool CompareTypeHasBeenSet() const;

                    /**
                     * 获取引用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CitationCount 引用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCitationCount() const;

                    /**
                     * 设置引用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _citationCount 引用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCitationCount(const uint64_t& _citationCount);

                    /**
                     * 判断参数 CitationCount 是否已赋值
                     * @return CitationCount 是否已赋值
                     * 
                     */
                    bool CitationCountHasBeenSet() const;

                    /**
                     * 获取创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取更新时间yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否添加where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhereFlag 是否添加where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置是否添加where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whereFlag 是否添加where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     * 
                     */
                    bool WhereFlagHasBeenSet() const;

                    /**
                     * 获取是否关联多个库表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiSourceFlag 是否关联多个库表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置是否关联多个库表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiSourceFlag 是否关联多个库表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiSourceFlag(const bool& _multiSourceFlag);

                    /**
                     * 判断参数 MultiSourceFlag 是否已赋值
                     * @return MultiSourceFlag 是否已赋值
                     * 
                     */
                    bool MultiSourceFlagHasBeenSet() const;

                    /**
                     * 获取自定义模板SQL表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlExpression 自定义模板SQL表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlExpression() const;

                    /**
                     * 设置自定义模板SQL表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlExpression 自定义模板SQL表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlExpression(const std::string& _sqlExpression);

                    /**
                     * 判断参数 SqlExpression 是否已赋值
                     * @return SqlExpression 是否已赋值
                     * 
                     */
                    bool SqlExpressionHasBeenSet() const;

                    /**
                     * 获取模版子维度，0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubQualityDim 模版子维度，0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置模版子维度，0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subQualityDim 模版子维度，0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubQualityDim(const uint64_t& _subQualityDim);

                    /**
                     * 判断参数 SubQualityDim 是否已赋值
                     * @return SubQualityDim 是否已赋值
                     * 
                     */
                    bool SubQualityDimHasBeenSet() const;

                    /**
                     * 获取sql表达式解析对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolvedSqlExpression sql表达式解析对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SqlExpression GetResolvedSqlExpression() const;

                    /**
                     * 设置sql表达式解析对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resolvedSqlExpression sql表达式解析对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResolvedSqlExpression(const SqlExpression& _resolvedSqlExpression);

                    /**
                     * 判断参数 ResolvedSqlExpression 是否已赋值
                     * @return ResolvedSqlExpression 是否已赋值
                     * 
                     */
                    bool ResolvedSqlExpressionHasBeenSet() const;

                    /**
                     * 获取支持的数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceTypes 支持的数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetDatasourceTypes() const;

                    /**
                     * 设置支持的数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceTypes 支持的数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceTypes(const std::vector<int64_t>& _datasourceTypes);

                    /**
                     * 判断参数 DatasourceTypes 是否已赋值
                     * @return DatasourceTypes 是否已赋值
                     * 
                     */
                    bool DatasourceTypesHasBeenSet() const;

                    /**
                     * 获取创建人IdStr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIdStr 创建人IdStr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置创建人IdStr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userIdStr 创建人IdStr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserIdStr(const std::string& _userIdStr);

                    /**
                     * 判断参数 UserIdStr 是否已赋值
                     * @return UserIdStr 是否已赋值
                     * 
                     */
                    bool UserIdStrHasBeenSet() const;

                private:

                    /**
                     * 规则模版ID
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则模版名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则模版描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模版类型（1：系统模版，2：自定义）
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * 规则适用的源数据对象类型（1：数值，2：字符串）
                     */
                    uint64_t m_sourceObjectDataType;
                    bool m_sourceObjectDataTypeHasBeenSet;

                    /**
                     * 规则模版源侧内容，区分引擎，JSON 结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 源数据适用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 规则支持的比较方式类型（1：固定值比较，大于、小于，大于等于等 2：波动值比较，绝对值、上升、下降）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * 引用次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_citationCount;
                    bool m_citationCountHasBeenSet;

                    /**
                     * 创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 更新时间yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否添加where参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                    /**
                     * 是否关联多个库表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * 自定义模板SQL表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlExpression;
                    bool m_sqlExpressionHasBeenSet;

                    /**
                     * 模版子维度，0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subQualityDim;
                    bool m_subQualityDimHasBeenSet;

                    /**
                     * sql表达式解析对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SqlExpression m_resolvedSqlExpression;
                    bool m_resolvedSqlExpressionHasBeenSet;

                    /**
                     * 支持的数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_datasourceTypes;
                    bool m_datasourceTypesHasBeenSet;

                    /**
                     * 创建人IdStr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATE_H_
