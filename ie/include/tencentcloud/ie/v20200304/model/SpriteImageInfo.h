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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SPRITEIMAGEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SPRITEIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 雪碧图参数信息
注意：雪碧图大图整体的宽和高都不能大于 15000 像素。
                */
                class SpriteImageInfo : public AbstractModel
                {
                public:
                    SpriteImageInfo();
                    ~SpriteImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示雪碧图行数，默认：10。
                     * @return RowCount 表示雪碧图行数，默认：10。
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置表示雪碧图行数，默认：10。
                     * @param _rowCount 表示雪碧图行数，默认：10。
                     * 
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取表示雪碧图列数，默认：10。
                     * @return ColumnCount 表示雪碧图列数，默认：10。
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置表示雪碧图列数，默认：10。
                     * @param _columnCount 表示雪碧图列数，默认：10。
                     * 
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取第一行元素与顶部像素距离，默认：0。
                     * @return MarginTop 第一行元素与顶部像素距离，默认：0。
                     * 
                     */
                    int64_t GetMarginTop() const;

                    /**
                     * 设置第一行元素与顶部像素距离，默认：0。
                     * @param _marginTop 第一行元素与顶部像素距离，默认：0。
                     * 
                     */
                    void SetMarginTop(const int64_t& _marginTop);

                    /**
                     * 判断参数 MarginTop 是否已赋值
                     * @return MarginTop 是否已赋值
                     * 
                     */
                    bool MarginTopHasBeenSet() const;

                    /**
                     * 获取最后一行元素与底部像素距离，默认：0。
                     * @return MarginBottom 最后一行元素与底部像素距离，默认：0。
                     * 
                     */
                    int64_t GetMarginBottom() const;

                    /**
                     * 设置最后一行元素与底部像素距离，默认：0。
                     * @param _marginBottom 最后一行元素与底部像素距离，默认：0。
                     * 
                     */
                    void SetMarginBottom(const int64_t& _marginBottom);

                    /**
                     * 判断参数 MarginBottom 是否已赋值
                     * @return MarginBottom 是否已赋值
                     * 
                     */
                    bool MarginBottomHasBeenSet() const;

                    /**
                     * 获取最左一行元素与左边像素距离，默认：0。
                     * @return MarginLeft 最左一行元素与左边像素距离，默认：0。
                     * 
                     */
                    int64_t GetMarginLeft() const;

                    /**
                     * 设置最左一行元素与左边像素距离，默认：0。
                     * @param _marginLeft 最左一行元素与左边像素距离，默认：0。
                     * 
                     */
                    void SetMarginLeft(const int64_t& _marginLeft);

                    /**
                     * 判断参数 MarginLeft 是否已赋值
                     * @return MarginLeft 是否已赋值
                     * 
                     */
                    bool MarginLeftHasBeenSet() const;

                    /**
                     * 获取最右一行元素与右边像素距离，默认：0。
                     * @return MarginRight 最右一行元素与右边像素距离，默认：0。
                     * 
                     */
                    int64_t GetMarginRight() const;

                    /**
                     * 设置最右一行元素与右边像素距离，默认：0。
                     * @param _marginRight 最右一行元素与右边像素距离，默认：0。
                     * 
                     */
                    void SetMarginRight(const int64_t& _marginRight);

                    /**
                     * 判断参数 MarginRight 是否已赋值
                     * @return MarginRight 是否已赋值
                     * 
                     */
                    bool MarginRightHasBeenSet() const;

                    /**
                     * 获取小图与元素顶部像素距离，默认：0。
                     * @return PaddingTop 小图与元素顶部像素距离，默认：0。
                     * 
                     */
                    int64_t GetPaddingTop() const;

                    /**
                     * 设置小图与元素顶部像素距离，默认：0。
                     * @param _paddingTop 小图与元素顶部像素距离，默认：0。
                     * 
                     */
                    void SetPaddingTop(const int64_t& _paddingTop);

                    /**
                     * 判断参数 PaddingTop 是否已赋值
                     * @return PaddingTop 是否已赋值
                     * 
                     */
                    bool PaddingTopHasBeenSet() const;

                    /**
                     * 获取小图与元素底部像素距离，默认：0。
                     * @return PaddingBottom 小图与元素底部像素距离，默认：0。
                     * 
                     */
                    int64_t GetPaddingBottom() const;

                    /**
                     * 设置小图与元素底部像素距离，默认：0。
                     * @param _paddingBottom 小图与元素底部像素距离，默认：0。
                     * 
                     */
                    void SetPaddingBottom(const int64_t& _paddingBottom);

                    /**
                     * 判断参数 PaddingBottom 是否已赋值
                     * @return PaddingBottom 是否已赋值
                     * 
                     */
                    bool PaddingBottomHasBeenSet() const;

                    /**
                     * 获取小图与元素左边像素距离，默认：0。
                     * @return PaddingLeft 小图与元素左边像素距离，默认：0。
                     * 
                     */
                    int64_t GetPaddingLeft() const;

                    /**
                     * 设置小图与元素左边像素距离，默认：0。
                     * @param _paddingLeft 小图与元素左边像素距离，默认：0。
                     * 
                     */
                    void SetPaddingLeft(const int64_t& _paddingLeft);

                    /**
                     * 判断参数 PaddingLeft 是否已赋值
                     * @return PaddingLeft 是否已赋值
                     * 
                     */
                    bool PaddingLeftHasBeenSet() const;

                    /**
                     * 获取小图与元素右边像素距离，默认：0。
                     * @return PaddingRight 小图与元素右边像素距离，默认：0。
                     * 
                     */
                    int64_t GetPaddingRight() const;

                    /**
                     * 设置小图与元素右边像素距离，默认：0。
                     * @param _paddingRight 小图与元素右边像素距离，默认：0。
                     * 
                     */
                    void SetPaddingRight(const int64_t& _paddingRight);

                    /**
                     * 判断参数 PaddingRight 是否已赋值
                     * @return PaddingRight 是否已赋值
                     * 
                     */
                    bool PaddingRightHasBeenSet() const;

                    /**
                     * 获取背景颜色，格式：#RRGGBB，默认：#FFFFFF。
                     * @return BackgroundColor 背景颜色，格式：#RRGGBB，默认：#FFFFFF。
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置背景颜色，格式：#RRGGBB，默认：#FFFFFF。
                     * @param _backgroundColor 背景颜色，格式：#RRGGBB，默认：#FFFFFF。
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                private:

                    /**
                     * 表示雪碧图行数，默认：10。
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * 表示雪碧图列数，默认：10。
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * 第一行元素与顶部像素距离，默认：0。
                     */
                    int64_t m_marginTop;
                    bool m_marginTopHasBeenSet;

                    /**
                     * 最后一行元素与底部像素距离，默认：0。
                     */
                    int64_t m_marginBottom;
                    bool m_marginBottomHasBeenSet;

                    /**
                     * 最左一行元素与左边像素距离，默认：0。
                     */
                    int64_t m_marginLeft;
                    bool m_marginLeftHasBeenSet;

                    /**
                     * 最右一行元素与右边像素距离，默认：0。
                     */
                    int64_t m_marginRight;
                    bool m_marginRightHasBeenSet;

                    /**
                     * 小图与元素顶部像素距离，默认：0。
                     */
                    int64_t m_paddingTop;
                    bool m_paddingTopHasBeenSet;

                    /**
                     * 小图与元素底部像素距离，默认：0。
                     */
                    int64_t m_paddingBottom;
                    bool m_paddingBottomHasBeenSet;

                    /**
                     * 小图与元素左边像素距离，默认：0。
                     */
                    int64_t m_paddingLeft;
                    bool m_paddingLeftHasBeenSet;

                    /**
                     * 小图与元素右边像素距离，默认：0。
                     */
                    int64_t m_paddingRight;
                    bool m_paddingRightHasBeenSet;

                    /**
                     * 背景颜色，格式：#RRGGBB，默认：#FFFFFF。
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SPRITEIMAGEINFO_H_
