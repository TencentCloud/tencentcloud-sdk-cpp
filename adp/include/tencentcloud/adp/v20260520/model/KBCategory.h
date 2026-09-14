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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBCategory.h>
#include <tencentcloud/adp/v20260520/model/MetaValue.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库分类信息（含元数据配置）
                */
                class KBCategory : public AbstractModel
                {
                public:
                    KBCategory();
                    ~KBCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否可新增</p>
                     * @return CanAdd <p>是否可新增</p>
                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 设置<p>是否可新增</p>
                     * @param _canAdd <p>是否可新增</p>
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
                     * 获取<p>是否可删除</p>
                     * @return CanDelete <p>是否可删除</p>
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置<p>是否可删除</p>
                     * @param _canDelete <p>是否可删除</p>
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
                     * 获取<p>是否可编辑</p>
                     * @return CanEdit <p>是否可编辑</p>
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置<p>是否可编辑</p>
                     * @param _canEdit <p>是否可编辑</p>
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
                     * 获取<p>分类 ID</p>
                     * @return CategoryId <p>分类 ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>分类 ID</p>
                     * @param _categoryId <p>分类 ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>子分类列表</p>
                     * @return ChildList <p>子分类列表</p>
                     * 
                     */
                    std::vector<KBCategory> GetChildList() const;

                    /**
                     * 设置<p>子分类列表</p>
                     * @param _childList <p>子分类列表</p>
                     * 
                     */
                    void SetChildList(const std::vector<KBCategory>& _childList);

                    /**
                     * 判断参数 ChildList 是否已赋值
                     * @return ChildList 是否已赋值
                     * 
                     */
                    bool ChildListHasBeenSet() const;

                    /**
                     * 获取<p>是否为叶子节点（无子分类）</p>
                     * @return IsLeaf <p>是否为叶子节点（无子分类）</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>是否为叶子节点（无子分类）</p>
                     * @param _isLeaf <p>是否为叶子节点（无子分类）</p>
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
                     * 获取<p>分类对象的数量</p>
                     * @return ItemCount <p>分类对象的数量</p>
                     * 
                     */
                    uint64_t GetItemCount() const;

                    /**
                     * 设置<p>分类对象的数量</p>
                     * @param _itemCount <p>分类对象的数量</p>
                     * 
                     */
                    void SetItemCount(const uint64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取<p>元数据配置（该分类被设置为元数据时的配置信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaValue <p>元数据配置（该分类被设置为元数据时的配置信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaValue GetMetaValue() const;

                    /**
                     * 设置<p>元数据配置（该分类被设置为元数据时的配置信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaValue <p>元数据配置（该分类被设置为元数据时的配置信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaValue(const MetaValue& _metaValue);

                    /**
                     * 判断参数 MetaValue 是否已赋值
                     * @return MetaValue 是否已赋值
                     * 
                     */
                    bool MetaValueHasBeenSet() const;

                    /**
                     * 获取<p>分类名称</p>
                     * @return Name <p>分类名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分类名称</p>
                     * @param _name <p>分类名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>是否可新增</p>
                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * <p>是否可删除</p>
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * <p>是否可编辑</p>
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * <p>分类 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>子分类列表</p>
                     */
                    std::vector<KBCategory> m_childList;
                    bool m_childListHasBeenSet;

                    /**
                     * <p>是否为叶子节点（无子分类）</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>分类对象的数量</p>
                     */
                    uint64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * <p>元数据配置（该分类被设置为元数据时的配置信息）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaValue m_metaValue;
                    bool m_metaValueHasBeenSet;

                    /**
                     * <p>分类名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBCATEGORY_H_
