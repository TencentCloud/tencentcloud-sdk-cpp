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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_

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
                * 转动图任务类型
                */
                class AnimatedGraphicTaskInput : public AbstractModel
                {
                public:
                    AnimatedGraphicTaskInput();
                    ~AnimatedGraphicTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频转动图模板 ID
                     * @return Definition 视频转动图模板 ID
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置视频转动图模板 ID
                     * @param _definition 视频转动图模板 ID
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取动图在视频中的起始时间偏移，单位为秒。
<li>不填或填0，表示从视频的起始位置开始；</li>
<li>当数值大于0时（假设为 n），表示从视频的第 n 秒位置开始；</li>
<li>当数值小于0时（假设为 -n），表示从视频结束 n 秒前的位置开始。</li>
                     * @return StartTimeOffset 动图在视频中的起始时间偏移，单位为秒。
<li>不填或填0，表示从视频的起始位置开始；</li>
<li>当数值大于0时（假设为 n），表示从视频的第 n 秒位置开始；</li>
<li>当数值小于0时（假设为 -n），表示从视频结束 n 秒前的位置开始。</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置动图在视频中的起始时间偏移，单位为秒。
<li>不填或填0，表示从视频的起始位置开始；</li>
<li>当数值大于0时（假设为 n），表示从视频的第 n 秒位置开始；</li>
<li>当数值小于0时（假设为 -n），表示从视频结束 n 秒前的位置开始。</li>
                     * @param _startTimeOffset 动图在视频中的起始时间偏移，单位为秒。
<li>不填或填0，表示从视频的起始位置开始；</li>
<li>当数值大于0时（假设为 n），表示从视频的第 n 秒位置开始；</li>
<li>当数值小于0时（假设为 -n），表示从视频结束 n 秒前的位置开始。</li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取动图在视频中的终止时间偏移，单位为秒。
<li>不填或填0，表示持续到视频的末尾终止；</li>
<li>当数值大于0时（假设为 n），表示持续到视频第 n 秒时终止；</li>
<li>当数值小于0时（假设为 -n），表示持续到视频结束 n 秒前终止。</li>
                     * @return EndTimeOffset 动图在视频中的终止时间偏移，单位为秒。
<li>不填或填0，表示持续到视频的末尾终止；</li>
<li>当数值大于0时（假设为 n），表示持续到视频第 n 秒时终止；</li>
<li>当数值小于0时（假设为 -n），表示持续到视频结束 n 秒前终止。</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置动图在视频中的终止时间偏移，单位为秒。
<li>不填或填0，表示持续到视频的末尾终止；</li>
<li>当数值大于0时（假设为 n），表示持续到视频第 n 秒时终止；</li>
<li>当数值小于0时（假设为 -n），表示持续到视频结束 n 秒前终止。</li>
                     * @param _endTimeOffset 动图在视频中的终止时间偏移，单位为秒。
<li>不填或填0，表示持续到视频的末尾终止；</li>
<li>当数值大于0时（假设为 n），表示持续到视频第 n 秒时终止；</li>
<li>当数值小于0时（假设为 -n），表示持续到视频结束 n 秒前终止。</li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 视频转动图模板 ID
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 动图在视频中的起始时间偏移，单位为秒。
<li>不填或填0，表示从视频的起始位置开始；</li>
<li>当数值大于0时（假设为 n），表示从视频的第 n 秒位置开始；</li>
<li>当数值小于0时（假设为 -n），表示从视频结束 n 秒前的位置开始。</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 动图在视频中的终止时间偏移，单位为秒。
<li>不填或填0，表示持续到视频的末尾终止；</li>
<li>当数值大于0时（假设为 n），表示持续到视频第 n 秒时终止；</li>
<li>当数值小于0时（假设为 -n），表示持续到视频结束 n 秒前终止。</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_
