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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeRoom返回参数结构体
                */
                class DescribeRoomResponse : public AbstractModel
                {
                public:
                    DescribeRoomResponse();
                    ~DescribeRoomResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取房间名称。
                     * @return Name 房间名称。
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取预定的房间开始时间，unix时间戳。
                     * @return StartTime 预定的房间开始时间，unix时间戳。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取预定的房间结束时间，unix时间戳。
                     * @return EndTime 预定的房间结束时间，unix时间戳。
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取老师ID。
                     * @return TeacherId 老师ID。
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @return Resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取最大连麦人数（不包括老师）。取值范围[0, 16]
                     * @return MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
                     * @return AutoMic 进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
                     * @return AudioQuality 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
                     * @return SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
                     */
                    std::string GetSubType() const;

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
                     * @return DisableRecord 禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取助教Id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Assistants 助教Id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取录制地址。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordUrl 录制地址。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     */
                    bool RecordUrlHasBeenSet() const;

                private:

                    /**
                     * 房间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 预定的房间开始时间，unix时间戳。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预定的房间结束时间，unix时间戳。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 老师ID。
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大连麦人数（不包括老师）。取值范围[0, 16]
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * 进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 助教Id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * 录制地址。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMRESPONSE_H_
