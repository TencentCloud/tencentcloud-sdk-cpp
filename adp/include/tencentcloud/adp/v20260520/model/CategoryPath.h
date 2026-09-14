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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPATH_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 分类路径信息
                */
                class CategoryPath : public AbstractModel
                {
                public:
                    CategoryPath();
                    ~CategoryPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>从根节点开始的路径分类 ID 列表</p>
                     * @return CategoryIdPath <p>从根节点开始的路径分类 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryIdPath() const;

                    /**
                     * 设置<p>从根节点开始的路径分类 ID 列表</p>
                     * @param _categoryIdPath <p>从根节点开始的路径分类 ID 列表</p>
                     * 
                     */
                    void SetCategoryIdPath(const std::vector<std::string>& _categoryIdPath);

                    /**
                     * 判断参数 CategoryIdPath 是否已赋值
                     * @return CategoryIdPath 是否已赋值
                     * 
                     */
                    bool CategoryIdPathHasBeenSet() const;

                    /**
                     * 获取<p>从根节点开始的路径分类名称列表</p>
                     * @return CategoryNamePath <p>从根节点开始的路径分类名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryNamePath() const;

                    /**
                     * 设置<p>从根节点开始的路径分类名称列表</p>
                     * @param _categoryNamePath <p>从根节点开始的路径分类名称列表</p>
                     * 
                     */
                    void SetCategoryNamePath(const std::vector<std::string>& _categoryNamePath);

                    /**
                     * 判断参数 CategoryNamePath 是否已赋值
                     * @return CategoryNamePath 是否已赋值
                     * 
                     */
                    bool CategoryNamePathHasBeenSet() const;

                private:

                    /**
                     * <p>分类 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>从根节点开始的路径分类 ID 列表</p>
                     */
                    std::vector<std::string> m_categoryIdPath;
                    bool m_categoryIdPathHasBeenSet;

                    /**
                     * <p>从根节点开始的路径分类名称列表</p>
                     */
                    std::vector<std::string> m_categoryNamePath;
                    bool m_categoryNamePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPATH_H_
