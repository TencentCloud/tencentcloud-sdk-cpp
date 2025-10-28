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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_STREAMSELECTOR_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_STREAMSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PidSelector.h>
#include <tencentcloud/mps/v20190612/model/TrackSelector.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 选择指定的音轨或者视频输出
                */
                class StreamSelector : public AbstractModel
                {
                public:
                    StreamSelector();
                    ~StreamSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选择类型: PID | TRACK
                     * @return SelectorType 选择类型: PID | TRACK
                     * 
                     */
                    std::string GetSelectorType() const;

                    /**
                     * 设置选择类型: PID | TRACK
                     * @param _selectorType 选择类型: PID | TRACK
                     * 
                     */
                    void SetSelectorType(const std::string& _selectorType);

                    /**
                     * 判断参数 SelectorType 是否已赋值
                     * @return SelectorType 是否已赋值
                     * 
                     */
                    bool SelectorTypeHasBeenSet() const;

                    /**
                     * 获取根据 PID 配置选择器
                     * @return PidSelector 根据 PID 配置选择器
                     * 
                     */
                    PidSelector GetPidSelector() const;

                    /**
                     * 设置根据 PID 配置选择器
                     * @param _pidSelector 根据 PID 配置选择器
                     * 
                     */
                    void SetPidSelector(const PidSelector& _pidSelector);

                    /**
                     * 判断参数 PidSelector 是否已赋值
                     * @return PidSelector 是否已赋值
                     * 
                     */
                    bool PidSelectorHasBeenSet() const;

                    /**
                     * 获取根据 Track 配置选择器
                     * @return TrackSelector 根据 Track 配置选择器
                     * 
                     */
                    TrackSelector GetTrackSelector() const;

                    /**
                     * 设置根据 Track 配置选择器
                     * @param _trackSelector 根据 Track 配置选择器
                     * 
                     */
                    void SetTrackSelector(const TrackSelector& _trackSelector);

                    /**
                     * 判断参数 TrackSelector 是否已赋值
                     * @return TrackSelector 是否已赋值
                     * 
                     */
                    bool TrackSelectorHasBeenSet() const;

                private:

                    /**
                     * 选择类型: PID | TRACK
                     */
                    std::string m_selectorType;
                    bool m_selectorTypeHasBeenSet;

                    /**
                     * 根据 PID 配置选择器
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                    /**
                     * 根据 Track 配置选择器
                     */
                    TrackSelector m_trackSelector;
                    bool m_trackSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_STREAMSELECTOR_H_
