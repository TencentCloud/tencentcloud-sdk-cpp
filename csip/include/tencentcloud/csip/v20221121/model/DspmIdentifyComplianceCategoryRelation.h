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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceRuleRelation.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceCategoryRelation.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm数据识别模板分类关联关系
                */
                class DspmIdentifyComplianceCategoryRelation : public AbstractModel
                {
                public:
                    DspmIdentifyComplianceCategoryRelation();
                    ~DspmIdentifyComplianceCategoryRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分类ID</p>
                     * @return CategoryId <p>分类ID</p>
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置<p>分类ID</p>
                     * @param _categoryId <p>分类ID</p>
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>分类名称</p>
                     * @return CategoryName <p>分类名称</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>分类名称</p>
                     * @param _categoryName <p>分类名称</p>
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
                     * 获取<p>父分类ID</p>
                     * @return CategoryParentId <p>父分类ID</p>
                     * 
                     */
                    std::string GetCategoryParentId() const;

                    /**
                     * 设置<p>父分类ID</p>
                     * @param _categoryParentId <p>父分类ID</p>
                     * 
                     */
                    void SetCategoryParentId(const std::string& _categoryParentId);

                    /**
                     * 判断参数 CategoryParentId 是否已赋值
                     * @return CategoryParentId 是否已赋值
                     * 
                     */
                    bool CategoryParentIdHasBeenSet() const;

                    /**
                     * 获取<p>是否叶子节点</p>
                     * @return IsLeaf <p>是否叶子节点</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>是否叶子节点</p>
                     * @param _isLeaf <p>是否叶子节点</p>
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取<p>分类类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @return CategoryType <p>分类类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * 
                     */
                    uint64_t GetCategoryType() const;

                    /**
                     * 设置<p>分类类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @param _categoryType <p>分类类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * 
                     */
                    void SetCategoryType(const uint64_t& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>分类层级</p><p>单位：层</p>
                     * @return CategoryGrade <p>分类层级</p><p>单位：层</p>
                     * 
                     */
                    uint64_t GetCategoryGrade() const;

                    /**
                     * 设置<p>分类层级</p><p>单位：层</p>
                     * @param _categoryGrade <p>分类层级</p><p>单位：层</p>
                     * 
                     */
                    void SetCategoryGrade(const uint64_t& _categoryGrade);

                    /**
                     * 判断参数 CategoryGrade 是否已赋值
                     * @return CategoryGrade 是否已赋值
                     * 
                     */
                    bool CategoryGradeHasBeenSet() const;

                    /**
                     * 获取<p>关联的数据项信息</p>
                     * @return RuleRelations <p>关联的数据项信息</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceRuleRelation> GetRuleRelations() const;

                    /**
                     * 设置<p>关联的数据项信息</p>
                     * @param _ruleRelations <p>关联的数据项信息</p>
                     * 
                     */
                    void SetRuleRelations(const std::vector<DspmIdentifyComplianceRuleRelation>& _ruleRelations);

                    /**
                     * 判断参数 RuleRelations 是否已赋值
                     * @return RuleRelations 是否已赋值
                     * 
                     */
                    bool RuleRelationsHasBeenSet() const;

                    /**
                     * 获取<p>子节点信息</p>
                     * @return Children <p>子节点信息</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> GetChildren() const;

                    /**
                     * 设置<p>子节点信息</p>
                     * @param _children <p>子节点信息</p>
                     * 
                     */
                    void SetChildren(const std::vector<DspmIdentifyComplianceCategoryRelation>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * <p>分类ID</p>
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>分类名称</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>父分类ID</p>
                     */
                    std::string m_categoryParentId;
                    bool m_categoryParentIdHasBeenSet;

                    /**
                     * <p>是否叶子节点</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>分类类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     */
                    uint64_t m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                    /**
                     * <p>分类层级</p><p>单位：层</p>
                     */
                    uint64_t m_categoryGrade;
                    bool m_categoryGradeHasBeenSet;

                    /**
                     * <p>关联的数据项信息</p>
                     */
                    std::vector<DspmIdentifyComplianceRuleRelation> m_ruleRelations;
                    bool m_ruleRelationsHasBeenSet;

                    /**
                     * <p>子节点信息</p>
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCECATEGORYRELATION_H_
