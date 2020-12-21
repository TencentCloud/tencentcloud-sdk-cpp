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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGOUTFORM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGOUTFORM_H_

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
                * 编辑处理/剪切任务/输出形式信息
                */
                class MediaCuttingOutForm : public AbstractModel
                {
                public:
                    MediaCuttingOutForm();
                    ~MediaCuttingOutForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出类型，可选值：
Static：静态图；
Dynamic：动态图；
Sprite：雪碧图；
Video：视频。

注1：不同类型时，对应的 TargetInfo.Format 格式支持如下：
Static：jpg、png；
Dynamic：gif；
Sprite：jpg、png；
Video：mp4。

注2：当 Type=Sprite时，TargetInfo指定的尺寸表示小图的大小，最终结果尺寸以输出为准。
                     * @return Type 输出类型，可选值：
Static：静态图；
Dynamic：动态图；
Sprite：雪碧图；
Video：视频。

注1：不同类型时，对应的 TargetInfo.Format 格式支持如下：
Static：jpg、png；
Dynamic：gif；
Sprite：jpg、png；
Video：mp4。

注2：当 Type=Sprite时，TargetInfo指定的尺寸表示小图的大小，最终结果尺寸以输出为准。
                     */
                    std::string GetType() const;

                    /**
                     * 设置输出类型，可选值：
Static：静态图；
Dynamic：动态图；
Sprite：雪碧图；
Video：视频。

注1：不同类型时，对应的 TargetInfo.Format 格式支持如下：
Static：jpg、png；
Dynamic：gif；
Sprite：jpg、png；
Video：mp4。

注2：当 Type=Sprite时，TargetInfo指定的尺寸表示小图的大小，最终结果尺寸以输出为准。
                     * @param Type 输出类型，可选值：
Static：静态图；
Dynamic：动态图；
Sprite：雪碧图；
Video：视频。

注1：不同类型时，对应的 TargetInfo.Format 格式支持如下：
Static：jpg、png；
Dynamic：gif；
Sprite：jpg、png；
Video：mp4。

注2：当 Type=Sprite时，TargetInfo指定的尺寸表示小图的大小，最终结果尺寸以输出为准。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     * @return FillType 背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     * @param FillType 背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取Type=Sprite时有效，表示雪碧图行数，范围为 [1,200]，默认100。
                     * @return SpriteRowCount Type=Sprite时有效，表示雪碧图行数，范围为 [1,200]，默认100。
                     */
                    int64_t GetSpriteRowCount() const;

                    /**
                     * 设置Type=Sprite时有效，表示雪碧图行数，范围为 [1,200]，默认100。
                     * @param SpriteRowCount Type=Sprite时有效，表示雪碧图行数，范围为 [1,200]，默认100。
                     */
                    void SetSpriteRowCount(const int64_t& _spriteRowCount);

                    /**
                     * 判断参数 SpriteRowCount 是否已赋值
                     * @return SpriteRowCount 是否已赋值
                     */
                    bool SpriteRowCountHasBeenSet() const;

                    /**
                     * 获取Type=Sprite时有效，表示雪碧图列数，范围为 [1,200]，默认100。
                     * @return SpriteColumnCount Type=Sprite时有效，表示雪碧图列数，范围为 [1,200]，默认100。
                     */
                    int64_t GetSpriteColumnCount() const;

                    /**
                     * 设置Type=Sprite时有效，表示雪碧图列数，范围为 [1,200]，默认100。
                     * @param SpriteColumnCount Type=Sprite时有效，表示雪碧图列数，范围为 [1,200]，默认100。
                     */
                    void SetSpriteColumnCount(const int64_t& _spriteColumnCount);

                    /**
                     * 判断参数 SpriteColumnCount 是否已赋值
                     * @return SpriteColumnCount 是否已赋值
                     */
                    bool SpriteColumnCountHasBeenSet() const;

                private:

                    /**
                     * 输出类型，可选值：
Static：静态图；
Dynamic：动态图；
Sprite：雪碧图；
Video：视频。

注1：不同类型时，对应的 TargetInfo.Format 格式支持如下：
Static：jpg、png；
Dynamic：gif；
Sprite：jpg、png；
Video：mp4。

注2：当 Type=Sprite时，TargetInfo指定的尺寸表示小图的大小，最终结果尺寸以输出为准。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * Type=Sprite时有效，表示雪碧图行数，范围为 [1,200]，默认100。
                     */
                    int64_t m_spriteRowCount;
                    bool m_spriteRowCountHasBeenSet;

                    /**
                     * Type=Sprite时有效，表示雪碧图列数，范围为 [1,200]，默认100。
                     */
                    int64_t m_spriteColumnCount;
                    bool m_spriteColumnCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGOUTFORM_H_
