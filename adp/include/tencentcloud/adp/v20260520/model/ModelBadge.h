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
                * <p>模型徽章（对外，用户端可见）：所有文案已渲染为最终展示内容，不暴露模板参数</p>
                */
                class ModelBadge : public AbstractModel
                {
                public:
                    ModelBadge();
                    ~ModelBadge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>展示文案（已渲染为最终文案）</p>
                     * @return Text <p>展示文案（已渲染为最终文案）</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>展示文案（已渲染为最终文案）</p>
                     * @param _text <p>展示文案（已渲染为最终文案）</p>
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
                     * 获取<p>样式主题</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>信息（蓝色）</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>成功（绿色）</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>警告（橙色）</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>危险（红色）</td></tr></table>
                     * @return Theme <p>样式主题</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>信息（蓝色）</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>成功（绿色）</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>警告（橙色）</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>危险（红色）</td></tr></table>
                     * 
                     */
                    int64_t GetTheme() const;

                    /**
                     * 设置<p>样式主题</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>信息（蓝色）</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>成功（绿色）</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>警告（橙色）</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>危险（红色）</td></tr></table>
                     * @param _theme <p>样式主题</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>信息（蓝色）</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>成功（绿色）</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>警告（橙色）</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>危险（红色）</td></tr></table>
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
                     * 获取<p>tooltip 文案（已渲染为最终文案），为空则不展示</p>
                     * @return Tips <p>tooltip 文案（已渲染为最终文案），为空则不展示</p>
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>tooltip 文案（已渲染为最终文案），为空则不展示</p>
                     * @param _tips <p>tooltip 文案（已渲染为最终文案），为空则不展示</p>
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
                     * 获取<p>徽章类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>限时免费</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>即将下线</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>新模型</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>热门</td></tr></table>
                     * @return Type <p>徽章类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>限时免费</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>即将下线</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>新模型</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>热门</td></tr></table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>徽章类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>限时免费</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>即将下线</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>新模型</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>热门</td></tr></table>
                     * @param _type <p>徽章类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>限时免费</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>即将下线</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>新模型</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>热门</td></tr></table>
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
                     * <p>展示文案（已渲染为最终文案）</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>样式主题</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_THEME_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_THEME_INFO</td><td>1</td><td>信息（蓝色）</td></tr><tr><td>MODEL_BADGE_THEME_SUCCESS</td><td>2</td><td>成功（绿色）</td></tr><tr><td>MODEL_BADGE_THEME_WARNING</td><td>3</td><td>警告（橙色）</td></tr><tr><td>MODEL_BADGE_THEME_DANGER</td><td>4</td><td>危险（红色）</td></tr></table>
                     */
                    int64_t m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * <p>tooltip 文案（已渲染为最终文案），为空则不展示</p>
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>徽章类型</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>MODEL_BADGE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>MODEL_BADGE_TYPE_FREE_TRIAL</td><td>1</td><td>限时免费</td></tr><tr><td>MODEL_BADGE_TYPE_DEPRECATING</td><td>2</td><td>即将下线</td></tr><tr><td>MODEL_BADGE_TYPE_NEW</td><td>3</td><td>新模型</td></tr><tr><td>MODEL_BADGE_TYPE_HOT</td><td>4</td><td>热门</td></tr></table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELBADGE_H_
