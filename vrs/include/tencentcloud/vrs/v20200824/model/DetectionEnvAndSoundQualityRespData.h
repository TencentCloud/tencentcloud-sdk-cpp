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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_DETECTIONENVANDSOUNDQUALITYRESPDATA_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_DETECTIONENVANDSOUNDQUALITYRESPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vrs/v20200824/model/Words.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 环境检测和音频检测响应
                */
                class DetectionEnvAndSoundQualityRespData : public AbstractModel
                {
                public:
                    DetectionEnvAndSoundQualityRespData();
                    ~DetectionEnvAndSoundQualityRespData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频ID （用于创建任务接口AudioIds）,环境检测该值为空，仅在音质检测情况下返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioId 音频ID （用于创建任务接口AudioIds）,环境检测该值为空，仅在音质检测情况下返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAudioId() const;

                    /**
                     * 设置音频ID （用于创建任务接口AudioIds）,环境检测该值为空，仅在音质检测情况下返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioId 音频ID （用于创建任务接口AudioIds）,环境检测该值为空，仅在音质检测情况下返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioId(const std::string& _audioId);

                    /**
                     * 判断参数 AudioId 是否已赋值
                     * @return AudioId 是否已赋值
                     * 
                     */
                    bool AudioIdHasBeenSet() const;

                    /**
                     * 获取检测code 

0 表示当前语音通过
-1 表示检测失败，需要重试
-2 表示语音检测不通过，提示用户再重新录制一下（通常漏读，错读，或多读）
-3 表示语音中噪声较大，不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionCode 检测code 

0 表示当前语音通过
-1 表示检测失败，需要重试
-2 表示语音检测不通过，提示用户再重新录制一下（通常漏读，错读，或多读）
-3 表示语音中噪声较大，不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDetectionCode() const;

                    /**
                     * 设置检测code 

0 表示当前语音通过
-1 表示检测失败，需要重试
-2 表示语音检测不通过，提示用户再重新录制一下（通常漏读，错读，或多读）
-3 表示语音中噪声较大，不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectionCode 检测code 

0 表示当前语音通过
-1 表示检测失败，需要重试
-2 表示语音检测不通过，提示用户再重新录制一下（通常漏读，错读，或多读）
-3 表示语音中噪声较大，不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectionCode(const int64_t& _detectionCode);

                    /**
                     * 判断参数 DetectionCode 是否已赋值
                     * @return DetectionCode 是否已赋值
                     * 
                     */
                    bool DetectionCodeHasBeenSet() const;

                    /**
                     * 获取检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionMsg 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetectionMsg() const;

                    /**
                     * 设置检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectionMsg 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectionMsg(const std::string& _detectionMsg);

                    /**
                     * 判断参数 DetectionMsg 是否已赋值
                     * @return DetectionMsg 是否已赋值
                     * 
                     */
                    bool DetectionMsgHasBeenSet() const;

                    /**
                     * 获取检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionTip 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Words> GetDetectionTip() const;

                    /**
                     * 设置检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectionTip 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectionTip(const std::vector<Words>& _detectionTip);

                    /**
                     * 判断参数 DetectionTip 是否已赋值
                     * @return DetectionTip 是否已赋值
                     * 
                     */
                    bool DetectionTipHasBeenSet() const;

                private:

                    /**
                     * 音频ID （用于创建任务接口AudioIds）,环境检测该值为空，仅在音质检测情况下返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_audioId;
                    bool m_audioIdHasBeenSet;

                    /**
                     * 检测code 

0 表示当前语音通过
-1 表示检测失败，需要重试
-2 表示语音检测不通过，提示用户再重新录制一下（通常漏读，错读，或多读）
-3 表示语音中噪声较大，不通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_detectionCode;
                    bool m_detectionCodeHasBeenSet;

                    /**
                     * 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectionMsg;
                    bool m_detectionMsgHasBeenSet;

                    /**
                     * 检测提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Words> m_detectionTip;
                    bool m_detectionTipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_DETECTIONENVANDSOUNDQUALITYRESPDATA_H_
