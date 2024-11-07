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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_

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
                * 自适应码流任务多语言字幕的输入参数。
                */
                class ComplexAdaptiveDynamicStreamingTaskSubtitleInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskSubtitleInput();
                    ~ComplexAdaptiveDynamicStreamingTaskSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕 ID。该字幕必须归属于自适应码流任务的输入主媒体。
                     * @return Id 字幕 ID。该字幕必须归属于自适应码流任务的输入主媒体。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置字幕 ID。该字幕必须归属于自适应码流任务的输入主媒体。
                     * @param _id 字幕 ID。该字幕必须归属于自适应码流任务的输入主媒体。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否设置为自适应码流的默认字幕。取值：
<li>YES：设置为默认字幕；</li>
<li>NO：不设置为默认字幕（默认值）。</li>
                     * @return Default 是否设置为自适应码流的默认字幕。取值：
<li>YES：设置为默认字幕；</li>
<li>NO：不设置为默认字幕（默认值）。</li>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置是否设置为自适应码流的默认字幕。取值：
<li>YES：设置为默认字幕；</li>
<li>NO：不设置为默认字幕（默认值）。</li>
                     * @param _default 是否设置为自适应码流的默认字幕。取值：
<li>YES：设置为默认字幕；</li>
<li>NO：不设置为默认字幕（默认值）。</li>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * 字幕 ID。该字幕必须归属于自适应码流任务的输入主媒体。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否设置为自适应码流的默认字幕。取值：
<li>YES：设置为默认字幕；</li>
<li>NO：不设置为默认字幕（默认值）。</li>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_
