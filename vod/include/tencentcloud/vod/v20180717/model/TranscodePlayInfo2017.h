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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频转码播放信息（2017 版）
                */
                class TranscodePlayInfo2017 : public AbstractModel
                {
                public:
                    TranscodePlayInfo2017();
                    ~TranscodePlayInfo2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放地址。
                     * @return Url 播放地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置播放地址。
                     * @param _url 播放地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/266/33476)。
                     * @return Definition 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/266/33476)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/266/33476)。
                     * @param _definition 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/266/33476)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * @return Bitrate 视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * @param _bitrate 视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频流高度的最大值，单位：px。
                     * @return Height 视频流高度的最大值，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流高度的最大值，单位：px。
                     * @param _height 视频流高度的最大值，单位：px。
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
                     * 获取视频流宽度的最大值，单位：px。
                     * @return Width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流宽度的最大值，单位：px。
                     * @param _width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 转码规格 ID，参见[转码参数模板](https://cloud.tencent.com/document/product/266/33476)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频流码率平均值与音频流码率平均值之和， 单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流高度的最大值，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流宽度的最大值，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_
