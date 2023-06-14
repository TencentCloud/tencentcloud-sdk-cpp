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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_RESULTAUDIOINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_RESULTAUDIOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 结果媒体文件的视频流信息
                */
                class ResultAudioInfo : public AbstractModel
                {
                public:
                    ResultAudioInfo();
                    ~ResultAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamId 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStreamId() const;

                    /**
                     * 设置流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamId 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamId(const int64_t& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_RESULTAUDIOINFO_H_
