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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_

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
                * 模型徽章
                */
                class ModelBadge : public AbstractModel
                {
                public:
                    ModelBadge();
                    ~ModelBadge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取展示文案
                     * @return Text 展示文案
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置展示文案
                     * @param _text 展示文案
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取样式主题。1-信息（蓝色）, 2-成功（绿色）, 3-警告（橙色）, 4-危险（红色）
                     * @return Theme 样式主题。1-信息（蓝色）, 2-成功（绿色）, 3-警告（橙色）, 4-危险（红色）
                     * 
                     */
                    int64_t GetTheme() const;

                    /**
                     * 设置样式主题。1-信息（蓝色）, 2-成功（绿色）, 3-警告（橙色）, 4-危险（红色）
                     * @param _theme 样式主题。1-信息（蓝色）, 2-成功（绿色）, 3-警告（橙色）, 4-危险（红色）
                     * 
                     */
                    void SetTheme(const int64_t& _theme);

                    /**
                     * 判断参数 Theme 是否已赋值
                     * @return Theme 是否已赋值
                     * 
                     */
                    bool ThemeHasBeenSet() const;

                    /**
                     * 获取tooltip文案，为空则不展示
                     * @return Tips tooltip文案，为空则不展示
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置tooltip文案，为空则不展示
                     * @param _tips tooltip文案，为空则不展示
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取徽章类型。1-限时免费, 2-即将下线, 3-新模型, 4-热门
                     * @return Type 徽章类型。1-限时免费, 2-即将下线, 3-新模型, 4-热门
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置徽章类型。1-限时免费, 2-即将下线, 3-新模型, 4-热门
                     * @param _type 徽章类型。1-限时免费, 2-即将下线, 3-新模型, 4-热门
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 展示文案
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 样式主题。1-信息（蓝色）, 2-成功（绿色）, 3-警告（橙色）, 4-危险（红色）
                     */
                    int64_t m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * tooltip文案，为空则不展示
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 徽章类型。1-限时免费, 2-即将下线, 3-新模型, 4-热门
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_
