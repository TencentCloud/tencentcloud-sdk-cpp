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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMCATEGORY_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 自定义分类信息
                */
                class CustomCategory : public AbstractModel
                {
                public:
                    CustomCategory();
                    ~CustomCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义分类ID
                     * @return CategoryId 自定义分类ID
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置自定义分类ID
                     * @param _categoryId 自定义分类ID
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
                     * 获取一级自定义类型
                     * @return L1Category 一级自定义类型
                     * 
                     */
                    std::string GetL1Category() const;

                    /**
                     * 设置一级自定义类型
                     * @param _l1Category 一级自定义类型
                     * 
                     */
                    void SetL1Category(const std::string& _l1Category);

                    /**
                     * 判断参数 L1Category 是否已赋值
                     * @return L1Category 是否已赋值
                     * 
                     */
                    bool L1CategoryHasBeenSet() const;

                    /**
                     * 获取二级自定义类型
                     * @return L2Category 二级自定义类型
                     * 
                     */
                    std::string GetL2Category() const;

                    /**
                     * 设置二级自定义类型
                     * @param _l2Category 二级自定义类型
                     * 
                     */
                    void SetL2Category(const std::string& _l2Category);

                    /**
                     * 判断参数 L2Category 是否已赋值
                     * @return L2Category 是否已赋值
                     * 
                     */
                    bool L2CategoryHasBeenSet() const;

                private:

                    /**
                     * 自定义分类ID
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 一级自定义类型
                     */
                    std::string m_l1Category;
                    bool m_l1CategoryHasBeenSet;

                    /**
                     * 二级自定义类型
                     */
                    std::string m_l2Category;
                    bool m_l2CategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMCATEGORY_H_
