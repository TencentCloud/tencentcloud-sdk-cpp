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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSELECTINGSUBTITLEAREASCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSELECTINGSUBTITLEAREASCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 字幕OCR提取框选区域配置
                */
                class MPSSelectingSubtitleAreasConfig : public AbstractModel
                {
                public:
                    MPSSelectingSubtitleAreasConfig();
                    ~MPSSelectingSubtitleAreasConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自动选择自定义区域。 对选定区域，利用AI模型自动检测其中存在的选择目标并提取。</p>
                     * @return AutoAreas <p>自动选择自定义区域。 对选定区域，利用AI模型自动检测其中存在的选择目标并提取。</p>
                     * 
                     */
                    std::vector<MPSEraseArea> GetAutoAreas() const;

                    /**
                     * 设置<p>自动选择自定义区域。 对选定区域，利用AI模型自动检测其中存在的选择目标并提取。</p>
                     * @param _autoAreas <p>自动选择自定义区域。 对选定区域，利用AI模型自动检测其中存在的选择目标并提取。</p>
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
                     * 获取<p>示例视频或图片的宽，单位像素值</p>
                     * @return SampleWidth <p>示例视频或图片的宽，单位像素值</p>
                     * 
                     */
                    uint64_t GetSampleWidth() const;

                    /**
                     * 设置<p>示例视频或图片的宽，单位像素值</p>
                     * @param _sampleWidth <p>示例视频或图片的宽，单位像素值</p>
                     * 
                     */
                    void SetSampleWidth(const uint64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取<p>示例视频或图片的高，单位像素值</p>
                     * @return SampleHeight <p>示例视频或图片的高，单位像素值</p>
                     * 
                     */
                    uint64_t GetSampleHeight() const;

                    /**
                     * 设置<p>示例视频或图片的高，单位像素值</p>
                     * @param _sampleHeight <p>示例视频或图片的高，单位像素值</p>
                     * 
                     */
                    void SetSampleHeight(const uint64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * <p>自动选择自定义区域。 对选定区域，利用AI模型自动检测其中存在的选择目标并提取。</p>
                     */
                    std::vector<MPSEraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * <p>示例视频或图片的宽，单位像素值</p>
                     */
                    uint64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * <p>示例视频或图片的高，单位像素值</p>
                     */
                    uint64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSELECTINGSUBTITLEAREASCONFIG_H_
