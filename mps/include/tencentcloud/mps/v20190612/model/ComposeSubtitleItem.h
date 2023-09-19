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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 字幕元素信息。
                */
                class ComposeSubtitleItem : public AbstractModel
                {
                public:
                    ComposeSubtitleItem();
                    ~ComposeSubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕样式，Styles 列表中对应的 Subtitle样式的 ID。
                     * @return StyleId 字幕样式，Styles 列表中对应的 Subtitle样式的 ID。
                     * 
                     */
                    std::string GetStyleId() const;

                    /**
                     * 设置字幕样式，Styles 列表中对应的 Subtitle样式的 ID。
                     * @param _styleId 字幕样式，Styles 列表中对应的 Subtitle样式的 ID。
                     * 
                     */
                    void SetStyleId(const std::string& _styleId);

                    /**
                     * 判断参数 StyleId 是否已赋值
                     * @return StyleId 是否已赋值
                     * 
                     */
                    bool StyleIdHasBeenSet() const;

                    /**
                     * 获取字幕文本。
                     * @return Text 字幕文本。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置字幕文本。
                     * @param _text 字幕文本。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。	
                     * @return TrackTime 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。	
                     * 
                     */
                    ComposeTrackTime GetTrackTime() const;

                    /**
                     * 设置元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。	
                     * @param _trackTime 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。	
                     * 
                     */
                    void SetTrackTime(const ComposeTrackTime& _trackTime);

                    /**
                     * 判断参数 TrackTime 是否已赋值
                     * @return TrackTime 是否已赋值
                     * 
                     */
                    bool TrackTimeHasBeenSet() const;

                private:

                    /**
                     * 字幕样式，Styles 列表中对应的 Subtitle样式的 ID。
                     */
                    std::string m_styleId;
                    bool m_styleIdHasBeenSet;

                    /**
                     * 字幕文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 元素在轨道时间轴上的时间信息，不填则紧跟上一个元素。	
                     */
                    ComposeTrackTime m_trackTime;
                    bool m_trackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_
