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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 套图图片信息
                */
                class RecipeItem : public AbstractModel
                {
                public:
                    RecipeItem();
                    ~RecipeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子图类型</p><p>枚举值：</p><ul><li>hero： 商品主图</li><li>detail： 商品细节图</li><li>selling： 核心卖点图</li><li>atmosphere： 场景氛围图</li><li>angles： 多角度图</li><li>scene： 使用场景图</li></ul>
                     * @return Theme <p>子图类型</p><p>枚举值：</p><ul><li>hero： 商品主图</li><li>detail： 商品细节图</li><li>selling： 核心卖点图</li><li>atmosphere： 场景氛围图</li><li>angles： 多角度图</li><li>scene： 使用场景图</li></ul>
                     * 
                     */
                    std::string GetTheme() const;

                    /**
                     * 设置<p>子图类型</p><p>枚举值：</p><ul><li>hero： 商品主图</li><li>detail： 商品细节图</li><li>selling： 核心卖点图</li><li>atmosphere： 场景氛围图</li><li>angles： 多角度图</li><li>scene： 使用场景图</li></ul>
                     * @param _theme <p>子图类型</p><p>枚举值：</p><ul><li>hero： 商品主图</li><li>detail： 商品细节图</li><li>selling： 核心卖点图</li><li>atmosphere： 场景氛围图</li><li>angles： 多角度图</li><li>scene： 使用场景图</li></ul>
                     * 
                     */
                    void SetTheme(const std::string& _theme);

                    /**
                     * 判断参数 Theme 是否已赋值
                     * @return Theme 是否已赋值
                     * 
                     */
                    bool ThemeHasBeenSet() const;

                    /**
                     * 获取<p>对应子图数量。</p><p>取值范围：[1, 4]</p><p>单位：张</p><p>单种子图最多4张，子图总数必须在4-12张范围内。</p>
                     * @return Num <p>对应子图数量。</p><p>取值范围：[1, 4]</p><p>单位：张</p><p>单种子图最多4张，子图总数必须在4-12张范围内。</p>
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置<p>对应子图数量。</p><p>取值范围：[1, 4]</p><p>单位：张</p><p>单种子图最多4张，子图总数必须在4-12张范围内。</p>
                     * @param _num <p>对应子图数量。</p><p>取值范围：[1, 4]</p><p>单位：张</p><p>单种子图最多4张，子图总数必须在4-12张范围内。</p>
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * <p>子图类型</p><p>枚举值：</p><ul><li>hero： 商品主图</li><li>detail： 商品细节图</li><li>selling： 核心卖点图</li><li>atmosphere： 场景氛围图</li><li>angles： 多角度图</li><li>scene： 使用场景图</li></ul>
                     */
                    std::string m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * <p>对应子图数量。</p><p>取值范围：[1, 4]</p><p>单位：张</p><p>单种子图最多4张，子图总数必须在4-12张范围内。</p>
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_
