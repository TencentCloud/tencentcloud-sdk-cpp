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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/Player.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 匹配票据信息
                */
                class MatchTicket : public AbstractModel
                {
                public:
                    MatchTicket();
                    ~MatchTicket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配票据 ID长度 128 [a-zA-Z0-9-\.]*
                     * @return Id 匹配票据 ID长度 128 [a-zA-Z0-9-\.]*
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置匹配票据 ID长度 128 [a-zA-Z0-9-\.]*
                     * @param _id 匹配票据 ID长度 128 [a-zA-Z0-9-\.]*
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取匹配 Code
                     * @return MatchCode 匹配 Code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配 Code
                     * @param _matchCode 匹配 Code
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取根据 MatchType 取不同的结构序列化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchResult 根据 MatchType 取不同的结构序列化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchResult() const;

                    /**
                     * 设置根据 MatchType 取不同的结构序列化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchResult 根据 MatchType 取不同的结构序列化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchResult(const std::string& _matchResult);

                    /**
                     * 判断参数 MatchResult 是否已赋值
                     * @return MatchResult 是否已赋值
                     * 
                     */
                    bool MatchResultHasBeenSet() const;

                    /**
                     * 获取表示不同的匹配类型,NORMAL | GSE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchType 表示不同的匹配类型,NORMAL | GSE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置表示不同的匹配类型,NORMAL | GSE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchType 表示不同的匹配类型,NORMAL | GSE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取玩家信息列表
                     * @return Players 玩家信息列表
                     * 
                     */
                    std::vector<Player> GetPlayers() const;

                    /**
                     * 设置玩家信息列表
                     * @param _players 玩家信息列表
                     * 
                     */
                    void SetPlayers(const std::vector<Player>& _players);

                    /**
                     * 判断参数 Players 是否已赋值
                     * @return Players 是否已赋值
                     * 
                     */
                    bool PlayersHasBeenSet() const;

                    /**
                     * 获取匹配状态: SEARCHING 匹配中; PLACING 匹配放置中; COMPLETED 匹配完成; CANCELLED 匹配取消; TIMEDOUT 匹配超时; FAILED 匹配失败
                     * @return Status 匹配状态: SEARCHING 匹配中; PLACING 匹配放置中; COMPLETED 匹配完成; CANCELLED 匹配取消; TIMEDOUT 匹配超时; FAILED 匹配失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置匹配状态: SEARCHING 匹配中; PLACING 匹配放置中; COMPLETED 匹配完成; CANCELLED 匹配取消; TIMEDOUT 匹配超时; FAILED 匹配失败
                     * @param _status 匹配状态: SEARCHING 匹配中; PLACING 匹配放置中; COMPLETED 匹配完成; CANCELLED 匹配取消; TIMEDOUT 匹配超时; FAILED 匹配失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取匹配状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMessage 匹配状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置匹配状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMessage 匹配状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取匹配状态原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusReason 匹配状态原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置匹配状态原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusReason 匹配状态原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取收到发起匹配请求的时间 eg: "2020-08-17T08:14:38.077Z"
                     * @return StartTime 收到发起匹配请求的时间 eg: "2020-08-17T08:14:38.077Z"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置收到发起匹配请求的时间 eg: "2020-08-17T08:14:38.077Z"
                     * @param _startTime 收到发起匹配请求的时间 eg: "2020-08-17T08:14:38.077Z"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取匹配请求因完成、失败、超时、被取消而停止执行的时间 eg: "2020-08-17T08:14:38.077Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 匹配请求因完成、失败、超时、被取消而停止执行的时间 eg: "2020-08-17T08:14:38.077Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置匹配请求因完成、失败、超时、被取消而停止执行的时间 eg: "2020-08-17T08:14:38.077Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 匹配请求因完成、失败、超时、被取消而停止执行的时间 eg: "2020-08-17T08:14:38.077Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 匹配票据 ID长度 128 [a-zA-Z0-9-\.]*
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 匹配 Code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 根据 MatchType 取不同的结构序列化结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchResult;
                    bool m_matchResultHasBeenSet;

                    /**
                     * 表示不同的匹配类型,NORMAL | GSE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 玩家信息列表
                     */
                    std::vector<Player> m_players;
                    bool m_playersHasBeenSet;

                    /**
                     * 匹配状态: SEARCHING 匹配中; PLACING 匹配放置中; COMPLETED 匹配完成; CANCELLED 匹配取消; TIMEDOUT 匹配超时; FAILED 匹配失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 匹配状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * 匹配状态原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * 收到发起匹配请求的时间 eg: "2020-08-17T08:14:38.077Z"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 匹配请求因完成、失败、超时、被取消而停止执行的时间 eg: "2020-08-17T08:14:38.077Z"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_
