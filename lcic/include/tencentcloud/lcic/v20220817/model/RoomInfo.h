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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 批量创建房间的房间信息
                */
                class RoomInfo : public AbstractModel
                {
                public:
                    RoomInfo();
                    ~RoomInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取房间名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 房间名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置房间名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 房间名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取预定的房间开始时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 预定的房间开始时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置预定的房间开始时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 预定的房间开始时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取预定的房间结束时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 预定的房间结束时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置预定的房间结束时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 预定的房间结束时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分辨率。可以有如下取值： 1 标清 2 高清 3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resolution 分辨率。可以有如下取值： 1 标清 2 高清 3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置分辨率。可以有如下取值： 1 标清 2 高清 3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Resolution 分辨率。可以有如下取值： 1 标清 2 高清 3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取最大连麦人数（不包括老师）。取值范围[0, 16]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置最大连麦人数（不包括老师）。取值范围[0, 16]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取房间子类型，可以有以下取值： videodoc 文档+视频 video 纯视频
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubType 房间子类型，可以有以下取值： videodoc 文档+视频 video 纯视频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置房间子类型，可以有以下取值： videodoc 文档+视频 video 纯视频
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubType 房间子类型，可以有以下取值： videodoc 文档+视频 video 纯视频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取老师ID。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TeacherId 老师ID。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置老师ID。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TeacherId 老师ID。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取进入课堂时是否自动连麦。可以有以下取值： 0 不自动连麦（需要手动申请上麦，默认值） 1 自动连麦
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoMic 进入课堂时是否自动连麦。可以有以下取值： 0 不自动连麦（需要手动申请上麦，默认值） 1 自动连麦
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置进入课堂时是否自动连麦。可以有以下取值： 0 不自动连麦（需要手动申请上麦，默认值） 1 自动连麦
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoMic 进入课堂时是否自动连麦。可以有以下取值： 0 不自动连麦（需要手动申请上麦，默认值） 1 自动连麦
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取释放音视频权限后是否自动取消连麦。可以有以下取值： 0 自动取消连麦（默认值） 1 保持连麦状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TurnOffMic 释放音视频权限后是否自动取消连麦。可以有以下取值： 0 自动取消连麦（默认值） 1 保持连麦状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTurnOffMic() const;

                    /**
                     * 设置释放音视频权限后是否自动取消连麦。可以有以下取值： 0 自动取消连麦（默认值） 1 保持连麦状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TurnOffMic 释放音视频权限后是否自动取消连麦。可以有以下取值： 0 自动取消连麦（默认值） 1 保持连麦状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTurnOffMic(const uint64_t& _turnOffMic);

                    /**
                     * 判断参数 TurnOffMic 是否已赋值
                     * @return TurnOffMic 是否已赋值
                     */
                    bool TurnOffMicHasBeenSet() const;

                    /**
                     * 获取高音质模式。可以有以下取值： 0 不开启高音质（默认值） 1 开启高音质
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioQuality 高音质模式。可以有以下取值： 0 不开启高音质（默认值） 1 开启高音质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置高音质模式。可以有以下取值： 0 不开启高音质（默认值） 1 开启高音质
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AudioQuality 高音质模式。可以有以下取值： 0 不开启高音质（默认值） 1 开启高音质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取上课后是否禁止自动录制。可以有以下取值： 0 不禁止录制（自动开启录制，默认值） 1 禁止录制 注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisableRecord 上课后是否禁止自动录制。可以有以下取值： 0 不禁止录制（自动开启录制，默认值） 1 禁止录制 注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置上课后是否禁止自动录制。可以有以下取值： 0 不禁止录制（自动开启录制，默认值） 1 禁止录制 注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisableRecord 上课后是否禁止自动录制。可以有以下取值： 0 不禁止录制（自动开启录制，默认值） 1 禁止录制 注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取助教Id列表。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Assistants 助教Id列表。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置助教Id列表。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Assistants 助教Id列表。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取rtc人数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTCAudienceNumber rtc人数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRTCAudienceNumber() const;

                    /**
                     * 设置rtc人数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTCAudienceNumber rtc人数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber);

                    /**
                     * 判断参数 RTCAudienceNumber 是否已赋值
                     * @return RTCAudienceNumber 是否已赋值
                     */
                    bool RTCAudienceNumberHasBeenSet() const;

                    /**
                     * 获取观看类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudienceType 观看类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAudienceType() const;

                    /**
                     * 设置观看类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AudienceType 观看类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudienceType(const uint64_t& _audienceType);

                    /**
                     * 判断参数 AudienceType 是否已赋值
                     * @return AudienceType 是否已赋值
                     */
                    bool AudienceTypeHasBeenSet() const;

                    /**
                     * 获取录制布局。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordLayout 录制布局。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置录制布局。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordLayout 录制布局。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取房间绑定的群组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 房间绑定的群组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置房间绑定的群组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 房间绑定的群组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 房间名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 预定的房间开始时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预定的房间结束时间，unix时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分辨率。可以有如下取值： 1 标清 2 高清 3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大连麦人数（不包括老师）。取值范围[0, 16]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * 房间子类型，可以有以下取值： videodoc 文档+视频 video 纯视频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 老师ID。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 进入课堂时是否自动连麦。可以有以下取值： 0 不自动连麦（需要手动申请上麦，默认值） 1 自动连麦
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * 释放音视频权限后是否自动取消连麦。可以有以下取值： 0 自动取消连麦（默认值） 1 保持连麦状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_turnOffMic;
                    bool m_turnOffMicHasBeenSet;

                    /**
                     * 高音质模式。可以有以下取值： 0 不开启高音质（默认值） 1 开启高音质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * 上课后是否禁止自动录制。可以有以下取值： 0 不禁止录制（自动开启录制，默认值） 1 禁止录制 注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 助教Id列表。通过[注册用户]接口获取的UserId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * rtc人数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rTCAudienceNumber;
                    bool m_rTCAudienceNumberHasBeenSet;

                    /**
                     * 观看类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_audienceType;
                    bool m_audienceTypeHasBeenSet;

                    /**
                     * 录制布局。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * 房间绑定的群组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMINFO_H_
