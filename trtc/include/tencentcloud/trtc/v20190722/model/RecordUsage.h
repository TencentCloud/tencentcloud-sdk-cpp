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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_

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
                * 录制的使用信息。
                */
                class RecordUsage : public AbstractModel
                {
                public:
                    RecordUsage();
                    ~RecordUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本组数据对应的时间点，格式如:2020-09-07或2020-09-07 00:05:05。
                     * @return TimeKey 本组数据对应的时间点，格式如:2020-09-07或2020-09-07 00:05:05。
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置本组数据对应的时间点，格式如:2020-09-07或2020-09-07 00:05:05。
                     * @param _timeKey 本组数据对应的时间点，格式如:2020-09-07或2020-09-07 00:05:05。
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取视频时长-标清SD，单位：秒。
                     * @return Class1VideoTime 视频时长-标清SD，单位：秒。
                     * 
                     */
                    uint64_t GetClass1VideoTime() const;

                    /**
                     * 设置视频时长-标清SD，单位：秒。
                     * @param _class1VideoTime 视频时长-标清SD，单位：秒。
                     * 
                     */
                    void SetClass1VideoTime(const uint64_t& _class1VideoTime);

                    /**
                     * 判断参数 Class1VideoTime 是否已赋值
                     * @return Class1VideoTime 是否已赋值
                     * 
                     */
                    bool Class1VideoTimeHasBeenSet() const;

                    /**
                     * 获取视频时长-高清HD，单位：秒。
                     * @return Class2VideoTime 视频时长-高清HD，单位：秒。
                     * 
                     */
                    uint64_t GetClass2VideoTime() const;

                    /**
                     * 设置视频时长-高清HD，单位：秒。
                     * @param _class2VideoTime 视频时长-高清HD，单位：秒。
                     * 
                     */
                    void SetClass2VideoTime(const uint64_t& _class2VideoTime);

                    /**
                     * 判断参数 Class2VideoTime 是否已赋值
                     * @return Class2VideoTime 是否已赋值
                     * 
                     */
                    bool Class2VideoTimeHasBeenSet() const;

                    /**
                     * 获取视频时长-超清HD，单位：秒。
                     * @return Class3VideoTime 视频时长-超清HD，单位：秒。
                     * 
                     */
                    uint64_t GetClass3VideoTime() const;

                    /**
                     * 设置视频时长-超清HD，单位：秒。
                     * @param _class3VideoTime 视频时长-超清HD，单位：秒。
                     * 
                     */
                    void SetClass3VideoTime(const uint64_t& _class3VideoTime);

                    /**
                     * 判断参数 Class3VideoTime 是否已赋值
                     * @return Class3VideoTime 是否已赋值
                     * 
                     */
                    bool Class3VideoTimeHasBeenSet() const;

                    /**
                     * 获取语音时长，单位：秒。
                     * @return AudioTime 语音时长，单位：秒。
                     * 
                     */
                    uint64_t GetAudioTime() const;

                    /**
                     * 设置语音时长，单位：秒。
                     * @param _audioTime 语音时长，单位：秒。
                     * 
                     */
                    void SetAudioTime(const uint64_t& _audioTime);

                    /**
                     * 判断参数 AudioTime 是否已赋值
                     * @return AudioTime 是否已赋值
                     * 
                     */
                    bool AudioTimeHasBeenSet() const;

                private:

                    /**
                     * 本组数据对应的时间点，格式如:2020-09-07或2020-09-07 00:05:05。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 视频时长-标清SD，单位：秒。
                     */
                    uint64_t m_class1VideoTime;
                    bool m_class1VideoTimeHasBeenSet;

                    /**
                     * 视频时长-高清HD，单位：秒。
                     */
                    uint64_t m_class2VideoTime;
                    bool m_class2VideoTimeHasBeenSet;

                    /**
                     * 视频时长-超清HD，单位：秒。
                     */
                    uint64_t m_class3VideoTime;
                    bool m_class3VideoTimeHasBeenSet;

                    /**
                     * 语音时长，单位：秒。
                     */
                    uint64_t m_audioTime;
                    bool m_audioTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_
