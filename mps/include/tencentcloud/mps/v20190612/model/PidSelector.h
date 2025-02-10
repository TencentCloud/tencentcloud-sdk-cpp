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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PIDSELECTOR_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PIDSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 对于含有多个音/视频轨的流，可以指定需要使用的轨道
                */
                class PidSelector : public AbstractModel
                {
                public:
                    PidSelector();
                    ~PidSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对于含有多音轨的流, 可以通过输入PID来指定需要使用的音轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioPID 对于含有多音轨的流, 可以通过输入PID来指定需要使用的音轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAudioPID() const;

                    /**
                     * 设置对于含有多音轨的流, 可以通过输入PID来指定需要使用的音轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioPID 对于含有多音轨的流, 可以通过输入PID来指定需要使用的音轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioPID(const std::vector<int64_t>& _audioPID);

                    /**
                     * 判断参数 AudioPID 是否已赋值
                     * @return AudioPID 是否已赋值
                     * 
                     */
                    bool AudioPIDHasBeenSet() const;

                    /**
                     * 获取对于含有多个视频轨的流，可以通过输入PID来指定需要使用的视频轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoPID 对于含有多个视频轨的流，可以通过输入PID来指定需要使用的视频轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetVideoPID() const;

                    /**
                     * 设置对于含有多个视频轨的流，可以通过输入PID来指定需要使用的视频轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoPID 对于含有多个视频轨的流，可以通过输入PID来指定需要使用的视频轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoPID(const std::vector<int64_t>& _videoPID);

                    /**
                     * 判断参数 VideoPID 是否已赋值
                     * @return VideoPID 是否已赋值
                     * 
                     */
                    bool VideoPIDHasBeenSet() const;

                private:

                    /**
                     * 对于含有多音轨的流, 可以通过输入PID来指定需要使用的音轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_audioPID;
                    bool m_audioPIDHasBeenSet;

                    /**
                     * 对于含有多个视频轨的流，可以通过输入PID来指定需要使用的视频轨，PID可以输入1到8191之间的正整数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_videoPID;
                    bool m_videoPIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PIDSELECTOR_H_
