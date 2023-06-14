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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TARGETVIDEOINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TARGETVIDEOINFO_H_

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
                * 目标视频信息。
                */
                class TargetVideoInfo : public AbstractModel
                {
                public:
                    TargetVideoInfo();
                    ~TargetVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频宽度，单位像素，一般要求是偶数，否则会向下对齐。
                     * @return Width 视频宽度，单位像素，一般要求是偶数，否则会向下对齐。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频宽度，单位像素，一般要求是偶数，否则会向下对齐。
                     * @param _width 视频宽度，单位像素，一般要求是偶数，否则会向下对齐。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频高度，单位像素，一般要求是偶数，否则会向下对齐。
                     * @return Height 视频高度，单位像素，一般要求是偶数，否则会向下对齐。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频高度，单位像素，一般要求是偶数，否则会向下对齐。
                     * @param _height 视频高度，单位像素，一般要求是偶数，否则会向下对齐。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频帧率，范围在1到120之间
                     * @return FrameRate 视频帧率，范围在1到120之间
                     * 
                     */
                    int64_t GetFrameRate() const;

                    /**
                     * 设置视频帧率，范围在1到120之间
                     * @param _frameRate 视频帧率，范围在1到120之间
                     * 
                     */
                    void SetFrameRate(const int64_t& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                private:

                    /**
                     * 视频宽度，单位像素，一般要求是偶数，否则会向下对齐。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频高度，单位像素，一般要求是偶数，否则会向下对齐。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频帧率，范围在1到120之间
                     */
                    int64_t m_frameRate;
                    bool m_frameRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TARGETVIDEOINFO_H_
