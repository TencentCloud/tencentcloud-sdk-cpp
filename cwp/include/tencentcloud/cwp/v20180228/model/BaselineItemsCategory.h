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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测项分类树状结构
                */
                class BaselineItemsCategory : public AbstractModel
                {
                public:
                    BaselineItemsCategory();
                    ~BaselineItemsCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线检测项父分类id
                     * @return ParentCategoryId 基线检测项父分类id
                     * 
                     */
                    int64_t GetParentCategoryId() const;

                    /**
                     * 设置基线检测项父分类id
                     * @param _parentCategoryId 基线检测项父分类id
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
                     * 获取基线检测项父分类名称
                     * @return ParentCategoryName 基线检测项父分类名称
                     * 
                     */
                    std::string GetParentCategoryName() const;

                    /**
                     * 设置基线检测项父分类名称
                     * @param _parentCategoryName 基线检测项父分类名称
                     * 
                     */
                    void SetParentCategoryName(const std::string& _parentCategoryName);

                    /**
                     * 判断参数 ParentCategoryName 是否已赋值
                     * @return ParentCategoryName 是否已赋值
                     * 
                     */
                    bool ParentCategoryNameHasBeenSet() const;

                    /**
                     * 获取基线检测项子分类数目
                     * @return CategoryCount 基线检测项子分类数目
                     * 
                     */
                    int64_t GetCategoryCount() const;

                    /**
                     * 设置基线检测项子分类数目
                     * @param _categoryCount 基线检测项子分类数目
                     * 
                     */
                    void SetCategoryCount(const int64_t& _categoryCount);

                    /**
                     * 判断参数 CategoryCount 是否已赋值
                     * @return CategoryCount 是否已赋值
                     * 
                     */
                    bool CategoryCountHasBeenSet() const;

                    /**
                     * 获取基线检测项子分类列表
                     * @return CategoryLists 基线检测项子分类列表
                     * 
                     */
                    std::vector<BaselineCategory> GetCategoryLists() const;

                    /**
                     * 设置基线检测项子分类列表
                     * @param _categoryLists 基线检测项子分类列表
                     * 
                     */
                    void SetCategoryLists(const std::vector<BaselineCategory>& _categoryLists);

                    /**
                     * 判断参数 CategoryLists 是否已赋值
                     * @return CategoryLists 是否已赋值
                     * 
                     */
                    bool CategoryListsHasBeenSet() const;

                private:

                    /**
                     * 基线检测项父分类id
                     */
                    int64_t m_parentCategoryId;
                    bool m_parentCategoryIdHasBeenSet;

                    /**
                     * 基线检测项父分类名称
                     */
                    std::string m_parentCategoryName;
                    bool m_parentCategoryNameHasBeenSet;

                    /**
                     * 基线检测项子分类数目
                     */
                    int64_t m_categoryCount;
                    bool m_categoryCountHasBeenSet;

                    /**
                     * 基线检测项子分类列表
                     */
                    std::vector<BaselineCategory> m_categoryLists;
                    bool m_categoryListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMSCATEGORY_H_
