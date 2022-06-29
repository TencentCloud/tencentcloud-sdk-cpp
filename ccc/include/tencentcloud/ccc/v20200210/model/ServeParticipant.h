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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 参与者信息
                */
                class ServeParticipant : public AbstractModel
                {
                public:
                    ServeParticipant();
                    ~ServeParticipant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取坐席邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mail 坐席邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMail() const;

                    /**
                     * 设置坐席邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mail 坐席邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取坐席电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 坐席电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置坐席电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Phone 坐席电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取振铃时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RingTimestamp 振铃时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置振铃时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RingTimestamp 振铃时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRingTimestamp(const int64_t& _ringTimestamp);

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取接听时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcceptTimestamp 接听时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置接听时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AcceptTimestamp 接听时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAcceptTimestamp(const int64_t& _acceptTimestamp);

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndedTimestamp 结束时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置结束时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndedTimestamp 结束时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndedTimestamp(const int64_t& _endedTimestamp);

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取录音 ID，能够索引到坐席侧的录音
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 录音 ID，能够索引到坐席侧的录音
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录音 ID，能够索引到坐席侧的录音
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordId 录音 ID，能够索引到坐席侧的录音
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取参与者类型，"staffSeat", "outboundSeat", "staffPhoneSeat"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 参与者类型，"staffSeat", "outboundSeat", "staffPhoneSeat"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置参与者类型，"staffSeat", "outboundSeat", "staffPhoneSeat"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 参与者类型，"staffSeat", "outboundSeat", "staffPhoneSeat"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取转接来源坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferFrom 转接来源坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransferFrom() const;

                    /**
                     * 设置转接来源坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransferFrom 转接来源坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransferFrom(const std::string& _transferFrom);

                    /**
                     * 判断参数 TransferFrom 是否已赋值
                     * @return TransferFrom 是否已赋值
                     */
                    bool TransferFromHasBeenSet() const;

                    /**
                     * 获取转接去向坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferTo 转接去向坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransferTo() const;

                    /**
                     * 设置转接去向坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransferTo 转接去向坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransferTo(const std::string& _transferTo);

                    /**
                     * 判断参数 TransferTo 是否已赋值
                     * @return TransferTo 是否已赋值
                     */
                    bool TransferToHasBeenSet() const;

                    /**
                     * 获取转接去向参与者类型，取值与 Type 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferToType 转接去向参与者类型，取值与 Type 一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransferToType() const;

                    /**
                     * 设置转接去向参与者类型，取值与 Type 一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransferToType 转接去向参与者类型，取值与 Type 一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransferToType(const std::string& _transferToType);

                    /**
                     * 判断参数 TransferToType 是否已赋值
                     * @return TransferToType 是否已赋值
                     */
                    bool TransferToTypeHasBeenSet() const;

                    /**
                     * 获取技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupId 技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkillGroupId 技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndStatusString 结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndStatusString 结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndStatusString(const std::string& _endStatusString);

                    /**
                     * 判断参数 EndStatusString 是否已赋值
                     * @return EndStatusString 是否已赋值
                     */
                    bool EndStatusStringHasBeenSet() const;

                    /**
                     * 获取录音 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordURL 录音 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置录音 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RecordURL 录音 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取参与者序号，从 0 开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sequence 参与者序号，从 0 开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置参与者序号，从 0 开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sequence 参与者序号，从 0 开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取开始时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimestamp 开始时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置开始时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTimestamp 开始时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取技能组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupName 技能组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkillGroupName 技能组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取录音转存第三方COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRecordURL 录音转存第三方COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 设置录音转存第三方COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomRecordURL 录音转存第三方COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomRecordURL(const std::string& _customRecordURL);

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     */
                    bool CustomRecordURLHasBeenSet() const;

                private:

                    /**
                     * 坐席邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 坐席电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 振铃时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * 接听时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * 结束时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * 录音 ID，能够索引到坐席侧的录音
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 参与者类型，"staffSeat", "outboundSeat", "staffPhoneSeat"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 转接来源坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferFrom;
                    bool m_transferFromHasBeenSet;

                    /**
                     * 转接去向坐席信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferTo;
                    bool m_transferToHasBeenSet;

                    /**
                     * 转接去向参与者类型，取值与 Type 一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferToType;
                    bool m_transferToTypeHasBeenSet;

                    /**
                     * 技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * 录音 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * 参与者序号，从 0 开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 开始时间戳，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 技能组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * 录音转存第三方COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SERVEPARTICIPANT_H_
