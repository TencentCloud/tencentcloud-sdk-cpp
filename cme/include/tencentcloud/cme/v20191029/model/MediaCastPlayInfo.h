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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastDestinationStatus.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播转直播播放信息。
                */
                class MediaCastPlayInfo : public AbstractModel
                {
                public:
                    MediaCastPlayInfo();
                    ~MediaCastPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点播转直播项目运行状态，取值有：
<li> Working : 运行中；</li>
<li> Idle: 空闲状态。</li>
                     * @return Status 点播转直播项目运行状态，取值有：
<li> Working : 运行中；</li>
<li> Idle: 空闲状态。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置点播转直播项目运行状态，取值有：
<li> Working : 运行中；</li>
<li> Idle: 空闲状态。</li>
                     * @param _status 点播转直播项目运行状态，取值有：
<li> Working : 运行中；</li>
<li> Idle: 空闲状态。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前播放的输入源 Id。
                     * @return CurrentSourceId 当前播放的输入源 Id。
                     * 
                     */
                    std::string GetCurrentSourceId() const;

                    /**
                     * 设置当前播放的输入源 Id。
                     * @param _currentSourceId 当前播放的输入源 Id。
                     * 
                     */
                    void SetCurrentSourceId(const std::string& _currentSourceId);

                    /**
                     * 判断参数 CurrentSourceId 是否已赋值
                     * @return CurrentSourceId 是否已赋值
                     * 
                     */
                    bool CurrentSourceIdHasBeenSet() const;

                    /**
                     * 获取当前播放的输入源的播放位置，单位：秒。
                     * @return CurrentSourcePosition 当前播放的输入源的播放位置，单位：秒。
                     * 
                     */
                    double GetCurrentSourcePosition() const;

                    /**
                     * 设置当前播放的输入源的播放位置，单位：秒。
                     * @param _currentSourcePosition 当前播放的输入源的播放位置，单位：秒。
                     * 
                     */
                    void SetCurrentSourcePosition(const double& _currentSourcePosition);

                    /**
                     * 判断参数 CurrentSourcePosition 是否已赋值
                     * @return CurrentSourcePosition 是否已赋值
                     * 
                     */
                    bool CurrentSourcePositionHasBeenSet() const;

                    /**
                     * 获取当前播放的输入源时长，单位：秒。
                     * @return CurrentSourceDuration 当前播放的输入源时长，单位：秒。
                     * 
                     */
                    double GetCurrentSourceDuration() const;

                    /**
                     * 设置当前播放的输入源时长，单位：秒。
                     * @param _currentSourceDuration 当前播放的输入源时长，单位：秒。
                     * 
                     */
                    void SetCurrentSourceDuration(const double& _currentSourceDuration);

                    /**
                     * 判断参数 CurrentSourceDuration 是否已赋值
                     * @return CurrentSourceDuration 是否已赋值
                     * 
                     */
                    bool CurrentSourceDurationHasBeenSet() const;

                    /**
                     * 获取输出源状态信息。
                     * @return DestinationStatusSet 输出源状态信息。
                     * 
                     */
                    std::vector<MediaCastDestinationStatus> GetDestinationStatusSet() const;

                    /**
                     * 设置输出源状态信息。
                     * @param _destinationStatusSet 输出源状态信息。
                     * 
                     */
                    void SetDestinationStatusSet(const std::vector<MediaCastDestinationStatus>& _destinationStatusSet);

                    /**
                     * 判断参数 DestinationStatusSet 是否已赋值
                     * @return DestinationStatusSet 是否已赋值
                     * 
                     */
                    bool DestinationStatusSetHasBeenSet() const;

                    /**
                     * 获取已经循环播放的次数。
                     * @return LoopCount 已经循环播放的次数。
                     * 
                     */
                    int64_t GetLoopCount() const;

                    /**
                     * 设置已经循环播放的次数。
                     * @param _loopCount 已经循环播放的次数。
                     * 
                     */
                    void SetLoopCount(const int64_t& _loopCount);

                    /**
                     * 判断参数 LoopCount 是否已赋值
                     * @return LoopCount 是否已赋值
                     * 
                     */
                    bool LoopCountHasBeenSet() const;

                private:

                    /**
                     * 点播转直播项目运行状态，取值有：
<li> Working : 运行中；</li>
<li> Idle: 空闲状态。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前播放的输入源 Id。
                     */
                    std::string m_currentSourceId;
                    bool m_currentSourceIdHasBeenSet;

                    /**
                     * 当前播放的输入源的播放位置，单位：秒。
                     */
                    double m_currentSourcePosition;
                    bool m_currentSourcePositionHasBeenSet;

                    /**
                     * 当前播放的输入源时长，单位：秒。
                     */
                    double m_currentSourceDuration;
                    bool m_currentSourceDurationHasBeenSet;

                    /**
                     * 输出源状态信息。
                     */
                    std::vector<MediaCastDestinationStatus> m_destinationStatusSet;
                    bool m_destinationStatusSetHasBeenSet;

                    /**
                     * 已经循环播放的次数。
                     */
                    int64_t m_loopCount;
                    bool m_loopCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPLAYINFO_H_
