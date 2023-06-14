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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIARESULTINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIARESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/ResultVideoInfo.h>
#include <tencentcloud/ie/v20200304/model/ResultAudioInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 结果文件媒体信息
                */
                class MediaResultInfo : public AbstractModel
                {
                public:
                    MediaResultInfo();
                    ~MediaResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 媒体时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置媒体时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 媒体时长，单位：毫秒
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

                    /**
                     * 获取视频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultVideoInfoSet 视频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultVideoInfo> GetResultVideoInfoSet() const;

                    /**
                     * 设置视频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultVideoInfoSet 视频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultVideoInfoSet(const std::vector<ResultVideoInfo>& _resultVideoInfoSet);

                    /**
                     * 判断参数 ResultVideoInfoSet 是否已赋值
                     * @return ResultVideoInfoSet 是否已赋值
                     * 
                     */
                    bool ResultVideoInfoSetHasBeenSet() const;

                    /**
                     * 获取音频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultAudioInfoSet 音频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultAudioInfo> GetResultAudioInfoSet() const;

                    /**
                     * 设置音频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultAudioInfoSet 音频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultAudioInfoSet(const std::vector<ResultAudioInfo>& _resultAudioInfoSet);

                    /**
                     * 判断参数 ResultAudioInfoSet 是否已赋值
                     * @return ResultAudioInfoSet 是否已赋值
                     * 
                     */
                    bool ResultAudioInfoSetHasBeenSet() const;

                private:

                    /**
                     * 媒体时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultVideoInfo> m_resultVideoInfoSet;
                    bool m_resultVideoInfoSetHasBeenSet;

                    /**
                     * 音频流信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultAudioInfo> m_resultAudioInfoSet;
                    bool m_resultAudioInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIARESULTINFO_H_
