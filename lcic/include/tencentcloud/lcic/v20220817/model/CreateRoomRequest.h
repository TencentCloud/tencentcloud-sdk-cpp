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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_

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
                * CreateRoom请求参数结构体
                */
                class CreateRoomRequest : public AbstractModel
                {
                public:
                    CreateRoomRequest();
                    ~CreateRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间名称。
                     * @return Name 房间名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置房间名称。
                     * @param Name 房间名称。
                     */
                    void SetName(const std::string& _name);

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
                     * 设置预定的房间开始时间，unix时间戳。
                     * @param StartTime 预定的房间开始时间，unix时间戳。
                     */
                    void SetStartTime(const uint64_t& _startTime);

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
                     * 设置预定的房间结束时间，unix时间戳。
                     * @param EndTime 预定的房间结束时间，unix时间戳。
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param SdkAppId 低代码互动课堂的SdkAppId。
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

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
                     * 设置分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @param Resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     */
                    void SetResolution(const uint64_t& _resolution);

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
                     * 设置最大连麦人数（不包括老师）。取值范围[0, 16]
                     * @param MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * @return SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * @param SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * @return TeacherId 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * @param TeacherId 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * @return AutoMic 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * @param AutoMic 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

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
                     * 设置高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
                     * @param AudioQuality 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * @return DisableRecord 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * @param DisableRecord 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * @return Assistants 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * @param Assistants 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取录制布局。
                     * @return RecordLayout 录制布局。
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置录制布局。
                     * @param RecordLayout 录制布局。
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取房间绑定的群组ID,非空时限制组成员进入
                     * @return GroupId 房间绑定的群组ID,非空时限制组成员进入
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置房间绑定的群组ID,非空时限制组成员进入
                     * @param GroupId 房间绑定的群组ID,非空时限制组成员进入
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
                     * 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
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
                     * 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * 录制布局。
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * 房间绑定的群组ID,非空时限制组成员进入
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_
