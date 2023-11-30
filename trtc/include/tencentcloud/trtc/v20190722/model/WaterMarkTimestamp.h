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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_

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
                * 时间戳水印数据结构
                */
                class WaterMarkTimestamp : public AbstractModel
                {
                public:
                    WaterMarkTimestamp();
                    ~WaterMarkTimestamp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳的位置，取值范围0-6，分别代表上左，上右，下左，下右，上居中，下居中，居中
                     * @return Pos 时间戳的位置，取值范围0-6，分别代表上左，上右，下左，下右，上居中，下居中，居中
                     * 
                     */
                    uint64_t GetPos() const;

                    /**
                     * 设置时间戳的位置，取值范围0-6，分别代表上左，上右，下左，下右，上居中，下居中，居中
                     * @param _pos 时间戳的位置，取值范围0-6，分别代表上左，上右，下左，下右，上居中，下居中，居中
                     * 
                     */
                    void SetPos(const uint64_t& _pos);

                    /**
                     * 判断参数 Pos 是否已赋值
                     * @return Pos 是否已赋值
                     * 
                     */
                    bool PosHasBeenSet() const;

                    /**
                     * 获取显示时间戳的时区，默认东八区
                     * @return TimeZone 显示时间戳的时区，默认东八区
                     * 
                     */
                    uint64_t GetTimeZone() const;

                    /**
                     * 设置显示时间戳的时区，默认东八区
                     * @param _timeZone 显示时间戳的时区，默认东八区
                     * 
                     */
                    void SetTimeZone(const uint64_t& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取文字水印的字体，支持设置以下值：
1. Tencent （默认）
2. SourceHanSans
                     * @return Font 文字水印的字体，支持设置以下值：
1. Tencent （默认）
2. SourceHanSans
                     * 
                     */
                    std::string GetFont() const;

                    /**
                     * 设置文字水印的字体，支持设置以下值：
1. Tencent （默认）
2. SourceHanSans
                     * @param _font 文字水印的字体，支持设置以下值：
1. Tencent （默认）
2. SourceHanSans
                     * 
                     */
                    void SetFont(const std::string& _font);

                    /**
                     * 判断参数 Font 是否已赋值
                     * @return Font 是否已赋值
                     * 
                     */
                    bool FontHasBeenSet() const;

                private:

                    /**
                     * 时间戳的位置，取值范围0-6，分别代表上左，上右，下左，下右，上居中，下居中，居中
                     */
                    uint64_t m_pos;
                    bool m_posHasBeenSet;

                    /**
                     * 显示时间戳的时区，默认东八区
                     */
                    uint64_t m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 文字水印的字体，支持设置以下值：
1. Tencent （默认）
2. SourceHanSans
                     */
                    std::string m_font;
                    bool m_fontHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKTIMESTAMP_H_
