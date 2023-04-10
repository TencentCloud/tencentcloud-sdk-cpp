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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_

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
                * 房间列表
                */
                class RoomItem : public AbstractModel
                {
                public:
                    RoomItem();
                    ~RoomItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取房间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoomId 房间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoomId 房间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取房间状态。0 未开始 ；1进行中  ；2 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 房间状态。0 未开始 ；1进行中  ；2 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置房间状态。0 未开始 ；1进行中  ；2 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 房间状态。0 未开始 ；1进行中  ；2 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealStartTime 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRealStartTime() const;

                    /**
                     * 设置实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealStartTime 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealStartTime(const uint64_t& _realStartTime);

                    /**
                     * 判断参数 RealStartTime 是否已赋值
                     * @return RealStartTime 是否已赋值
                     */
                    bool RealStartTimeHasBeenSet() const;

                    /**
                     * 获取实际结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealEndTime 实际结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRealEndTime() const;

                    /**
                     * 设置实际结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealEndTime 实际结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealEndTime(const uint64_t& _realEndTime);

                    /**
                     * 判断参数 RealEndTime 是否已赋值
                     * @return RealEndTime 是否已赋值
                     */
                    bool RealEndTimeHasBeenSet() const;

                    /**
                     * 获取分辨率。1 标清
2 高清
3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resolution 分辨率。1 标清
2 高清
3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置分辨率。1 标清
2 高清
3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Resolution 分辨率。1 标清
2 高清
3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取最大允许连麦人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRTCMember 最大允许连麦人数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxRTCMember() const;

                    /**
                     * 设置最大允许连麦人数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxRTCMember 最大允许连麦人数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxRTCMember(const uint64_t& _maxRTCMember);

                    /**
                     * 判断参数 MaxRTCMember 是否已赋值
                     * @return MaxRTCMember 是否已赋值
                     */
                    bool MaxRTCMemberHasBeenSet() const;

                    /**
                     * 获取房间录制地址。已废弃，使用新字段 RecordUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplayUrl 房间录制地址。已废弃，使用新字段 RecordUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReplayUrl() const;

                    /**
                     * 设置房间录制地址。已废弃，使用新字段 RecordUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReplayUrl 房间录制地址。已废弃，使用新字段 RecordUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplayUrl(const std::string& _replayUrl);

                    /**
                     * 判断参数 ReplayUrl 是否已赋值
                     * @return ReplayUrl 是否已赋值
                     */
                    bool ReplayUrlHasBeenSet() const;

                    /**
                     * 获取录制地址（协议为https)。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordUrl 录制地址（协议为https)。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录制地址（协议为https)。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordUrl 录制地址（协议为https)。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     */
                    bool RecordUrlHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 房间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间状态。0 未开始 ；1进行中  ；2 已结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 实际开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_realStartTime;
                    bool m_realStartTimeHasBeenSet;

                    /**
                     * 实际结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_realEndTime;
                    bool m_realEndTimeHasBeenSet;

                    /**
                     * 分辨率。1 标清
2 高清
3 全高清
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大允许连麦人数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxRTCMember;
                    bool m_maxRTCMemberHasBeenSet;

                    /**
                     * 房间录制地址。已废弃，使用新字段 RecordUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replayUrl;
                    bool m_replayUrlHasBeenSet;

                    /**
                     * 录制地址（协议为https)。仅在房间结束后存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
