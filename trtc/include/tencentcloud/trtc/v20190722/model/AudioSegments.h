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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOSEGMENTS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOSEGMENTS_H_

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
                * 音频分片时间
                */
                class AudioSegments : public AbstractModel
                {
                public:
                    AudioSegments();
                    ~AudioSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为秒。 示例值：0</p>
                     * @return StartTime <p>该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为秒。 示例值：0</p>
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置<p>该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为秒。 示例值：0</p>
                     * @param _startTime <p>该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为秒。 示例值：0</p>
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为秒。 示例值：15</p>
                     * @return FinishTime <p>该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为秒。 示例值：15</p>
                     * 
                     */
                    double GetFinishTime() const;

                    /**
                     * 设置<p>该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为秒。 示例值：15</p>
                     * @param _finishTime <p>该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为秒。 示例值：15</p>
                     * 
                     */
                    void SetFinishTime(const double& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * <p>该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为秒。 示例值：0</p>
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为秒。 示例值：15</p>
                     */
                    double m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOSEGMENTS_H_
