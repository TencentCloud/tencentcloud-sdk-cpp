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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULETEMPLATEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRuleTemplate请求参数结构体
                */
                class ModifyRuleTemplateRequest : public AbstractModel
                {
                public:
                    ModifyRuleTemplateRequest();
                    ~ModifyRuleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param TemplateId 模版ID
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模版类型  1.系统模版   2.自定义模版
                     * @return Type 模版类型  1.系统模版   2.自定义模版
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置模版类型  1.系统模版   2.自定义模版
                     * @param Type 模版类型  1.系统模版   2.自定义模版
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取模版名称
                     * @return Name 模版名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置模版名称
                     * @param Name 模版名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取质量检测维度 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性
                     * @return QualityDim 质量检测维度 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置质量检测维度 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性
                     * @param QualityDim 质量检测维度 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     */
                    bool QualityDimHasBeenSet() const;

                    /**
                     * 获取源端数据对象类型 1.常量  2.离线表级   2.离线字段级
                     * @return SourceObjectType 源端数据对象类型 1.常量  2.离线表级   2.离线字段级
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置源端数据对象类型 1.常量  2.离线表级   2.离线字段级
                     * @param SourceObjectType 源端数据对象类型 1.常量  2.离线表级   2.离线字段级
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取源端对应的引擎类型
                     * @return SourceEngineTypes 源端对应的引擎类型
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置源端对应的引擎类型
                     * @param SourceEngineTypes 源端对应的引擎类型
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                    /**
                     * 获取是否关联其它库表
                     * @return MultiSourceFlag 是否关联其它库表
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置是否关联其它库表
                     * @param MultiSourceFlag 是否关联其它库表
                     */
                    void SetMultiSourceFlag(const bool& _multiSourceFlag);

                    /**
                     * 判断参数 MultiSourceFlag 是否已赋值
                     * @return MultiSourceFlag 是否已赋值
                     */
                    bool MultiSourceFlagHasBeenSet() const;

                    /**
                     * 获取SQL 表达式
                     * @return SqlExpression SQL 表达式
                     */
                    std::string GetSqlExpression() const;

                    /**
                     * 设置SQL 表达式
                     * @param SqlExpression SQL 表达式
                     */
                    void SetSqlExpression(const std::string& _sqlExpression);

                    /**
                     * 判断参数 SqlExpression 是否已赋值
                     * @return SqlExpression 是否已赋值
                     */
                    bool SqlExpressionHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param ProjectId 项目Id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否添加where参数
                     * @return WhereFlag 是否添加where参数
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置是否添加where参数
                     * @param WhereFlag 是否添加where参数
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     */
                    bool WhereFlagHasBeenSet() const;

                private:

                    /**
                     * 模版ID
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模版类型  1.系统模版   2.自定义模版
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 模版名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 质量检测维度 1.准确性 2.唯一性 3.完整性 4.一致性 5.及时性 6.有效性
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 源端数据对象类型 1.常量  2.离线表级   2.离线字段级
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 源端对应的引擎类型
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * 是否关联其它库表
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * SQL 表达式
                     */
                    std::string m_sqlExpression;
                    bool m_sqlExpressionHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否添加where参数
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULETEMPLATEREQUEST_H_
