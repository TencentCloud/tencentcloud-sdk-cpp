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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>
#include <tencentcloud/mps/v20190612/model/EraseTimeArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除模板去水印配置
                */
                class UpdateSmartEraseWatermarkConfig : public AbstractModel
                {
                public:
                    UpdateSmartEraseWatermarkConfig();
                    ~UpdateSmartEraseWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印擦除方式。
**自动擦除：**通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。
当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。
**指定区域擦除：**针对位置较固定的静态水印，建议您直接指定擦除区域。
当您选择指定区域擦除时，请至少传入一个指定区域。

- auto 自动擦除
- custom 指定区域擦除
                     * @return WatermarkEraseMethod 水印擦除方式。
**自动擦除：**通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。
当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。
**指定区域擦除：**针对位置较固定的静态水印，建议您直接指定擦除区域。
当您选择指定区域擦除时，请至少传入一个指定区域。

- auto 自动擦除
- custom 指定区域擦除
                     * 
                     */
                    std::string GetWatermarkEraseMethod() const;

                    /**
                     * 设置水印擦除方式。
**自动擦除：**通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。
当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。
**指定区域擦除：**针对位置较固定的静态水印，建议您直接指定擦除区域。
当您选择指定区域擦除时，请至少传入一个指定区域。

- auto 自动擦除
- custom 指定区域擦除
                     * @param _watermarkEraseMethod 水印擦除方式。
**自动擦除：**通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。
当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。
**指定区域擦除：**针对位置较固定的静态水印，建议您直接指定擦除区域。
当您选择指定区域擦除时，请至少传入一个指定区域。

- auto 自动擦除
- custom 指定区域擦除
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
                     * 获取水印擦除模型。
基础版：效果一般，性价比高，适合动画或背景较干净的视频。
高级版：效果更好，适合短剧等现实风格视频。
- basic 基础版
- advanced 高级版
                     * @return WatermarkModel 水印擦除模型。
基础版：效果一般，性价比高，适合动画或背景较干净的视频。
高级版：效果更好，适合短剧等现实风格视频。
- basic 基础版
- advanced 高级版
                     * 
                     */
                    std::string GetWatermarkModel() const;

                    /**
                     * 设置水印擦除模型。
基础版：效果一般，性价比高，适合动画或背景较干净的视频。
高级版：效果更好，适合短剧等现实风格视频。
- basic 基础版
- advanced 高级版
                     * @param _watermarkModel 水印擦除模型。
基础版：效果一般，性价比高，适合动画或背景较干净的视频。
高级版：效果更好，适合短剧等现实风格视频。
- basic 基础版
- advanced 高级版
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
                     * 获取自动擦除自定义区域。
对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。
注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。
                     * @return AutoAreas 自动擦除自定义区域。
对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。
注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置自动擦除自定义区域。
对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。
注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。
                     * @param _autoAreas 自动擦除自定义区域。
对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。
注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。
                     * 
                     */
                    void SetAutoAreas(const std::vector<EraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取指定擦除自定义区域。
对选定区域，在选定时间段内不进行检测识别直接进行擦除。
注意：清除区域请传入[]，不传时将保持模板区域信息不变。
                     * @return CustomAreas 指定擦除自定义区域。
对选定区域，在选定时间段内不进行检测识别直接进行擦除。
注意：清除区域请传入[]，不传时将保持模板区域信息不变。
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置指定擦除自定义区域。
对选定区域，在选定时间段内不进行检测识别直接进行擦除。
注意：清除区域请传入[]，不传时将保持模板区域信息不变。
                     * @param _customAreas 指定擦除自定义区域。
对选定区域，在选定时间段内不进行检测识别直接进行擦除。
注意：清除区域请传入[]，不传时将保持模板区域信息不变。
                     * 
                     */
                    void SetCustomAreas(const std::vector<EraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                private:

                    /**
                     * 水印擦除方式。
**自动擦除：**通过A模型自动识别视频中的水印，擦除后生成新的视频。适用于动态水印。
当使用自动擦除时，若您不指定AutoAreas，将对视频全屏进行自动擦除；若指定AutoAreas，将改为对您指定的区域进行自动擦除。
**指定区域擦除：**针对位置较固定的静态水印，建议您直接指定擦除区域。
当您选择指定区域擦除时，请至少传入一个指定区域。

- auto 自动擦除
- custom 指定区域擦除
                     */
                    std::string m_watermarkEraseMethod;
                    bool m_watermarkEraseMethodHasBeenSet;

                    /**
                     * 水印擦除模型。
基础版：效果一般，性价比高，适合动画或背景较干净的视频。
高级版：效果更好，适合短剧等现实风格视频。
- basic 基础版
- advanced 高级版
                     */
                    std::string m_watermarkModel;
                    bool m_watermarkModelHasBeenSet;

                    /**
                     * 自动擦除自定义区域。
对选定区域，利用AI模型自动检测其中存在的擦除目标并擦除。
注意，当擦除方式为custom时，此参数将不会生效。清除区域请传入[]，不传时将保持模板区域信息不变。
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * 指定擦除自定义区域。
对选定区域，在选定时间段内不进行检测识别直接进行擦除。
注意：清除区域请传入[]，不传时将保持模板区域信息不变。
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEWATERMARKCONFIG_H_
