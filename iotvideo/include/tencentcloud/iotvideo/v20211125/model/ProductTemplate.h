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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PRODUCTTEMPLATE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PRODUCTTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 产品分类实体
                */
                class ProductTemplate : public AbstractModel
                {
                public:
                    ProductTemplate();
                    ~ProductTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体ID
                     * @return Id 实体ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置实体ID
                     * @param _id 实体ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取分类字段
                     * @return CategoryKey 分类字段
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置分类字段
                     * @param _categoryKey 分类字段
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

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
                     * 获取上层实体ID
                     * @return ParentId 上层实体ID
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置上层实体ID
                     * @param _parentId 上层实体ID
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取物模型
                     * @return ModelTemplate 物模型
                     * 
                     */
                    std::string GetModelTemplate() const;

                    /**
                     * 设置物模型
                     * @param _modelTemplate 物模型
                     * 
                     */
                    void SetModelTemplate(const std::string& _modelTemplate);

                    /**
                     * 判断参数 ModelTemplate 是否已赋值
                     * @return ModelTemplate 是否已赋值
                     * 
                     */
                    bool ModelTemplateHasBeenSet() const;

                    /**
                     * 获取排列顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListOrder 排列顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetListOrder() const;

                    /**
                     * 设置排列顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listOrder 排列顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListOrder(const int64_t& _listOrder);

                    /**
                     * 判断参数 ListOrder 是否已赋值
                     * @return ListOrder 是否已赋值
                     * 
                     */
                    bool ListOrderHasBeenSet() const;

                    /**
                     * 获取分类图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrl 分类图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置分类图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iconUrl 分类图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取九宫格图片地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrlGrid 九宫格图片地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrlGrid() const;

                    /**
                     * 设置九宫格图片地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iconUrlGrid 九宫格图片地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIconUrlGrid(const std::string& _iconUrlGrid);

                    /**
                     * 判断参数 IconUrlGrid 是否已赋值
                     * @return IconUrlGrid 是否已赋值
                     * 
                     */
                    bool IconUrlGridHasBeenSet() const;

                private:

                    /**
                     * 实体ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分类字段
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * 分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 上层实体ID
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 物模型
                     */
                    std::string m_modelTemplate;
                    bool m_modelTemplateHasBeenSet;

                    /**
                     * 排列顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_listOrder;
                    bool m_listOrderHasBeenSet;

                    /**
                     * 分类图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 九宫格图片地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrlGrid;
                    bool m_iconUrlGridHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PRODUCTTEMPLATE_H_
