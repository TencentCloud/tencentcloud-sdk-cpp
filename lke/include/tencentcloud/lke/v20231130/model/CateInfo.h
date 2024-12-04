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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/CateInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 分类信息
                */
                class CateInfo : public AbstractModel
                {
                public:
                    CateInfo();
                    ~CateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CateBizId 分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cateBizId 分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取分类名称

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 分类名称

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分类名称

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 分类名称

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分类下的Record（如文档、同义词等）数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 分类下的Record（如文档、同义词等）数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置分类下的Record（如文档、同义词等）数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 分类下的Record（如文档、同义词等）数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取是否可新增

注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanAdd 是否可新增

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 设置是否可新增

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canAdd 是否可新增

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanAdd(const bool& _canAdd);

                    /**
                     * 判断参数 CanAdd 是否已赋值
                     * @return CanAdd 是否已赋值
                     * 
                     */
                    bool CanAddHasBeenSet() const;

                    /**
                     * 获取是否可编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanEdit 是否可编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置是否可编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canEdit 是否可编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                    /**
                     * 获取是否可删除

注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanDelete 是否可删除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置是否可删除

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canDelete 是否可删除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanDelete(const bool& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取子分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 子分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CateInfo> GetChildren() const;

                    /**
                     * 设置子分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 子分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<CateInfo>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 分类名称

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分类下的Record（如文档、同义词等）数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 是否可新增

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * 是否可编辑

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * 是否可删除

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * 子分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CateInfo> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CATEINFO_H_
