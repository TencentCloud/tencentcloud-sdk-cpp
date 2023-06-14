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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 拼接视频中被忽略的时间段
                */
                class OmittedDuration : public AbstractModel
                {
                public:
                    OmittedDuration();
                    ~OmittedDuration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制暂停时间戳对应的视频播放时间(单位: 毫秒)
                     * @return VideoTime 录制暂停时间戳对应的视频播放时间(单位: 毫秒)
                     * 
                     */
                    int64_t GetVideoTime() const;

                    /**
                     * 设置录制暂停时间戳对应的视频播放时间(单位: 毫秒)
                     * @param _videoTime 录制暂停时间戳对应的视频播放时间(单位: 毫秒)
                     * 
                     */
                    void SetVideoTime(const int64_t& _videoTime);

                    /**
                     * 判断参数 VideoTime 是否已赋值
                     * @return VideoTime 是否已赋值
                     * 
                     */
                    bool VideoTimeHasBeenSet() const;

                    /**
                     * 获取录制暂停时间戳(单位: 毫秒)
                     * @return PauseTime 录制暂停时间戳(单位: 毫秒)
                     * 
                     */
                    int64_t GetPauseTime() const;

                    /**
                     * 设置录制暂停时间戳(单位: 毫秒)
                     * @param _pauseTime 录制暂停时间戳(单位: 毫秒)
                     * 
                     */
                    void SetPauseTime(const int64_t& _pauseTime);

                    /**
                     * 判断参数 PauseTime 是否已赋值
                     * @return PauseTime 是否已赋值
                     * 
                     */
                    bool PauseTimeHasBeenSet() const;

                    /**
                     * 获取录制恢复时间戳(单位: 毫秒)
                     * @return ResumeTime 录制恢复时间戳(单位: 毫秒)
                     * 
                     */
                    int64_t GetResumeTime() const;

                    /**
                     * 设置录制恢复时间戳(单位: 毫秒)
                     * @param _resumeTime 录制恢复时间戳(单位: 毫秒)
                     * 
                     */
                    void SetResumeTime(const int64_t& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     * 
                     */
                    bool ResumeTimeHasBeenSet() const;

                private:

                    /**
                     * 录制暂停时间戳对应的视频播放时间(单位: 毫秒)
                     */
                    int64_t m_videoTime;
                    bool m_videoTimeHasBeenSet;

                    /**
                     * 录制暂停时间戳(单位: 毫秒)
                     */
                    int64_t m_pauseTime;
                    bool m_pauseTimeHasBeenSet;

                    /**
                     * 录制恢复时间戳(单位: 毫秒)
                     */
                    int64_t m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_
