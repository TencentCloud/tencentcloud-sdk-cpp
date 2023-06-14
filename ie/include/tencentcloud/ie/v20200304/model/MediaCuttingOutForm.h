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
#include <tencentcloud/ie/v20200304/model/SpriteImageInfo.h>
#include <tencentcloud/ie/v20200304/model/DynamicImageInfo.h>


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
                     * 
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
                     * @param _type 输出类型，可选值：
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
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     * @param _fillType 背景填充方式，可选值：
White：白色填充；
Black：黑色填充；
Stretch：拉伸；
Gaussian：高斯模糊；
默认White。
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取【废弃】参考SpriteInfo
                     * @return SpriteRowCount 【废弃】参考SpriteInfo
                     * 
                     */
                    int64_t GetSpriteRowCount() const;

                    /**
                     * 设置【废弃】参考SpriteInfo
                     * @param _spriteRowCount 【废弃】参考SpriteInfo
                     * 
                     */
                    void SetSpriteRowCount(const int64_t& _spriteRowCount);

                    /**
                     * 判断参数 SpriteRowCount 是否已赋值
                     * @return SpriteRowCount 是否已赋值
                     * 
                     */
                    bool SpriteRowCountHasBeenSet() const;

                    /**
                     * 获取【废弃】参考SpriteInfo
                     * @return SpriteColumnCount 【废弃】参考SpriteInfo
                     * 
                     */
                    int64_t GetSpriteColumnCount() const;

                    /**
                     * 设置【废弃】参考SpriteInfo
                     * @param _spriteColumnCount 【废弃】参考SpriteInfo
                     * 
                     */
                    void SetSpriteColumnCount(const int64_t& _spriteColumnCount);

                    /**
                     * 判断参数 SpriteColumnCount 是否已赋值
                     * @return SpriteColumnCount 是否已赋值
                     * 
                     */
                    bool SpriteColumnCountHasBeenSet() const;

                    /**
                     * 获取Type=Sprite时有效，表示雪碧图参数信息。
                     * @return SpriteInfo Type=Sprite时有效，表示雪碧图参数信息。
                     * 
                     */
                    SpriteImageInfo GetSpriteInfo() const;

                    /**
                     * 设置Type=Sprite时有效，表示雪碧图参数信息。
                     * @param _spriteInfo Type=Sprite时有效，表示雪碧图参数信息。
                     * 
                     */
                    void SetSpriteInfo(const SpriteImageInfo& _spriteInfo);

                    /**
                     * 判断参数 SpriteInfo 是否已赋值
                     * @return SpriteInfo 是否已赋值
                     * 
                     */
                    bool SpriteInfoHasBeenSet() const;

                    /**
                     * 获取Type=Dynamic时有效，表示动图参数信息。
                     * @return DynamicInfo Type=Dynamic时有效，表示动图参数信息。
                     * 
                     */
                    DynamicImageInfo GetDynamicInfo() const;

                    /**
                     * 设置Type=Dynamic时有效，表示动图参数信息。
                     * @param _dynamicInfo Type=Dynamic时有效，表示动图参数信息。
                     * 
                     */
                    void SetDynamicInfo(const DynamicImageInfo& _dynamicInfo);

                    /**
                     * 判断参数 DynamicInfo 是否已赋值
                     * @return DynamicInfo 是否已赋值
                     * 
                     */
                    bool DynamicInfoHasBeenSet() const;

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
                     * 【废弃】参考SpriteInfo
                     */
                    int64_t m_spriteRowCount;
                    bool m_spriteRowCountHasBeenSet;

                    /**
                     * 【废弃】参考SpriteInfo
                     */
                    int64_t m_spriteColumnCount;
                    bool m_spriteColumnCountHasBeenSet;

                    /**
                     * Type=Sprite时有效，表示雪碧图参数信息。
                     */
                    SpriteImageInfo m_spriteInfo;
                    bool m_spriteInfoHasBeenSet;

                    /**
                     * Type=Dynamic时有效，表示动图参数信息。
                     */
                    DynamicImageInfo m_dynamicInfo;
                    bool m_dynamicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGOUTFORM_H_
