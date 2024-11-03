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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线规则或项的分类
                */
                class BaselineCategory : public AbstractModel
                {
                public:
                    BaselineCategory();
                    ~BaselineCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类Id
                     * @return CategoryId 分类Id
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置分类Id
                     * @param _categoryId 分类Id
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

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
                     * 获取父分类ID,如果为0则没有父分类
                     * @return ParentCategoryId 父分类ID,如果为0则没有父分类
                     * 
                     */
                    int64_t GetParentCategoryId() const;

                    /**
                     * 设置父分类ID,如果为0则没有父分类
                     * @param _parentCategoryId 父分类ID,如果为0则没有父分类
                     * 
                     */
                    void SetParentCategoryId(const int64_t& _parentCategoryId);

                    /**
                     * 判断参数 ParentCategoryId 是否已赋值
                     * @return ParentCategoryId 是否已赋值
                     * 
                     */
                    bool ParentCategoryIdHasBeenSet() const;

                    /**
                     * 获取子分类下检测项总数
                     * @return ItemCount 子分类下检测项总数
                     * 
                     */
                    uint64_t GetItemCount() const;

                    /**
                     * 设置子分类下检测项总数
                     * @param _itemCount 子分类下检测项总数
                     * 
                     */
                    void SetItemCount(const uint64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                private:

                    /**
                     * 分类Id
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 父分类ID,如果为0则没有父分类
                     */
                    int64_t m_parentCategoryId;
                    bool m_parentCategoryIdHasBeenSet;

                    /**
                     * 子分类下检测项总数
                     */
                    uint64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINECATEGORY_H_
