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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSUPDATESMARTERASEWATERMARKCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSUPDATESMARTERASEWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseTimeArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能擦除模板去水印配置
                */
                class MPSUpdateSmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    MPSUpdateSmartEraseWatermarkConfig();
                    ~MPSUpdateSmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>水印擦除方式。<br> <strong>自动擦除：</strong>通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。 当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。<br><strong>指定区域擦除：</strong>针对位置较固定的静态水印，建议您直接指定擦除区域。 当您选择指定区域擦除时，请至少传入一个指定区域。 - auto 自动擦除 - custom 指定区域擦除</p>
                     * @return WatermarkEraseMethod <p>水印擦除方式。<br> <strong>自动擦除：</strong>通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。 当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。<br><strong>指定区域擦除：</strong>针对位置较固定的静态水印，建议您直接指定擦除区域。 当您选择指定区域擦除时，请至少传入一个指定区域。 - auto 自动擦除 - custom 指定区域擦除</p>
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置<p>水印擦除方式。<br> <strong>自动擦除：</strong>通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。 当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。<br><strong>指定区域擦除：</strong>针对位置较固定的静态水印，建议您直接指定擦除区域。 当您选择指定区域擦除时，请至少传入一个指定区域。 - auto 自动擦除 - custom 指定区域擦除</p>
                     * @param _watermarkEraseMethod <p>水印擦除方式。<br> <strong>自动擦除：</strong>通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。 当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。<br><strong>指定区域擦除：</strong>针对位置较固定的静态水印，建议您直接指定擦除区域。 当您选择指定区域擦除时，请至少传入一个指定区域。 - auto 自动擦除 - custom 指定区域擦除</p>
                     * 
                     */
                    void SetWatermarkEraseMethod(const std::string& _watermarkEraseMethod);

                    /**
                     * 判断参数 WatermarkEraseMethod 是否已赋值
                     * @return WatermarkEraseMethod 是否已赋值
                     * 
                     */
                    bool WatermarkEraseMethodHasBeenSet() const;

                    /**
                     * 获取<p>水印擦除模型。 基础版：效果一般，性价比高，适合动画或背景较干净的视频。 高级版：效果更好，适合短剧等现实风格视频。 </p><ul><li>basic 基础版 </li><li>advanced 高级版</li></ul>
                     * @return WatermarkModel <p>水印擦除模型。 基础版：效果一般，性价比高，适合动画或背景较干净的视频。 高级版：效果更好，适合短剧等现实风格视频。 </p><ul><li>basic 基础版 </li><li>advanced 高级版</li></ul>
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置<p>水印擦除模型。 基础版：效果一般，性价比高，适合动画或背景较干净的视频。 高级版：效果更好，适合短剧等现实风格视频。 </p><ul><li>basic 基础版 </li><li>advanced 高级版</li></ul>
                     * @param _watermarkModel <p>水印擦除模型。 基础版：效果一般，性价比高，适合动画或背景较干净的视频。 高级版：效果更好，适合短剧等现实风格视频。 </p><ul><li>basic 基础版 </li><li>advanced 高级版</li></ul>
                     * 
                     */
                    void SetWatermarkModel(const std::string& _watermarkModel);

                    /**
                     * 判断参数 WatermarkModel 是否已赋值
                     * @return WatermarkModel 是否已赋值
                     * 
                     */
                    bool WatermarkModelHasBeenSet() const;

                    /**
                     * 获取<p>自动擦除自定义区域。 对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。 注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * @return AutoAreas <p>自动擦除自定义区域。 对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。 注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * 
                     */
                    std::vector<MPSEraseArea> GetAutoAreas() const;

                    /**
                     * 设置<p>自动擦除自定义区域。 对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。 注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * @param _autoAreas <p>自动擦除自定义区域。 对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。 注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * 
                     */
                    void SetAutoAreas(const std::vector<MPSEraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取<p>指定擦除自定义区域。 对选定区域，在选定时间段内不进行检测识别直接进行擦除。 注意：清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * @return CustomAreas <p>指定擦除自定义区域。 对选定区域，在选定时间段内不进行检测识别直接进行擦除。 注意：清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * 
                     */
                    std::vector<MPSEraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置<p>指定擦除自定义区域。 对选定区域，在选定时间段内不进行检测识别直接进行擦除。 注意：清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * @param _customAreas <p>指定擦除自定义区域。 对选定区域，在选定时间段内不进行检测识别直接进行擦除。 注意：清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     * 
                     */
                    void SetCustomAreas(const std::vector<MPSEraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                private:

                    /**
                     * <p>水印擦除方式。<br> <strong>自动擦除：</strong>通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。 当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。<br><strong>指定区域擦除：</strong>针对位置较固定的静态水印，建议您直接指定擦除区域。 当您选择指定区域擦除时，请至少传入一个指定区域。 - auto 自动擦除 - custom 指定区域擦除</p>
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * <p>水印擦除模型。 基础版：效果一般，性价比高，适合动画或背景较干净的视频。 高级版：效果更好，适合短剧等现实风格视频。 </p><ul><li>basic 基础版 </li><li>advanced 高级版</li></ul>
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * <p>自动擦除自定义区域。 对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。 注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     */
                    std::vector<MPSEraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * <p>指定擦除自定义区域。 对选定区域，在选定时间段内不进行检测识别直接进行擦除。 注意：清除区域请传入[]，不传时将保持模板区域信息不变。</p>
                     */
                    std::vector<MPSEraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSUPDATESMARTERASEWATERMARKCONFIG_H_
