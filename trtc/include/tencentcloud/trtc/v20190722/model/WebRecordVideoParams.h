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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 页面录制视频参数
                */
                class WebRecordVideoParams : public AbstractModel
                {
                public:
                    WebRecordVideoParams();
                    ~WebRecordVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制画面宽度，默认为1280，取值范围[0, 1920]
                     * @return Width 录制画面宽度，默认为1280，取值范围[0, 1920]
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置录制画面宽度，默认为1280，取值范围[0, 1920]
                     * @param _width 录制画面宽度，默认为1280，取值范围[0, 1920]
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取录制画面高度，默认为720，取值范围[0, 1080]
                     * @return Height 录制画面高度，默认为720，取值范围[0, 1080]
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置录制画面高度，默认为720，取值范围[0, 1080]
                     * @param _height 录制画面高度，默认为720，取值范围[0, 1080]
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取指定输出格式，可选hls,mp4

                     * @return Format 指定输出格式，可选hls,mp4

                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置指定输出格式，可选hls,mp4

                     * @param _format 指定输出格式，可选hls,mp4

                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 录制画面宽度，默认为1280，取值范围[0, 1920]
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 录制画面高度，默认为720，取值范围[0, 1080]
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 指定输出格式，可选hls,mp4

                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
