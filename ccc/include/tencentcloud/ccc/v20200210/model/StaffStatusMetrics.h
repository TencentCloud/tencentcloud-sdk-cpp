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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffStatusExtra.h>
#include <tencentcloud/ccc/v20200210/model/ClientInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席状态相关信息
                */
                class StaffStatusMetrics : public AbstractModel
                {
                public:
                    StaffStatusMetrics();
                    ~StaffStatusMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席邮箱
                     * @return Email 座席邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置座席邮箱
                     * @param _email 座席邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @return Status 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @param _status 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
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
                     * 获取座席状态补充信息
                     * @return StatusExtra 座席状态补充信息
                     * 
                     */
                    StaffStatusExtra GetStatusExtra() const;

                    /**
                     * 设置座席状态补充信息
                     * @param _statusExtra 座席状态补充信息
                     * 
                     */
                    void SetStatusExtra(const StaffStatusExtra& _statusExtra);

                    /**
                     * 判断参数 StatusExtra 是否已赋值
                     * @return StatusExtra 是否已赋值
                     * 
                     */
                    bool StatusExtraHasBeenSet() const;

                    /**
                     * 获取当天在线总时长
                     * @return OnlineDuration 当天在线总时长
                     * 
                     */
                    int64_t GetOnlineDuration() const;

                    /**
                     * 设置当天在线总时长
                     * @param _onlineDuration 当天在线总时长
                     * 
                     */
                    void SetOnlineDuration(const int64_t& _onlineDuration);

                    /**
                     * 判断参数 OnlineDuration 是否已赋值
                     * @return OnlineDuration 是否已赋值
                     * 
                     */
                    bool OnlineDurationHasBeenSet() const;

                    /**
                     * 获取当天示闲总时长
                     * @return FreeDuration 当天示闲总时长
                     * 
                     */
                    int64_t GetFreeDuration() const;

                    /**
                     * 设置当天示闲总时长
                     * @param _freeDuration 当天示闲总时长
                     * 
                     */
                    void SetFreeDuration(const int64_t& _freeDuration);

                    /**
                     * 判断参数 FreeDuration 是否已赋值
                     * @return FreeDuration 是否已赋值
                     * 
                     */
                    bool FreeDurationHasBeenSet() const;

                    /**
                     * 获取当天忙碌总时长
                     * @return BusyDuration 当天忙碌总时长
                     * 
                     */
                    int64_t GetBusyDuration() const;

                    /**
                     * 设置当天忙碌总时长
                     * @param _busyDuration 当天忙碌总时长
                     * 
                     */
                    void SetBusyDuration(const int64_t& _busyDuration);

                    /**
                     * 判断参数 BusyDuration 是否已赋值
                     * @return BusyDuration 是否已赋值
                     * 
                     */
                    bool BusyDurationHasBeenSet() const;

                    /**
                     * 获取当天示忙总时长
                     * @return NotReadyDuration 当天示忙总时长
                     * 
                     */
                    int64_t GetNotReadyDuration() const;

                    /**
                     * 设置当天示忙总时长
                     * @param _notReadyDuration 当天示忙总时长
                     * 
                     */
                    void SetNotReadyDuration(const int64_t& _notReadyDuration);

                    /**
                     * 判断参数 NotReadyDuration 是否已赋值
                     * @return NotReadyDuration 是否已赋值
                     * 
                     */
                    bool NotReadyDurationHasBeenSet() const;

                    /**
                     * 获取当天小休总时长
                     * @return RestDuration 当天小休总时长
                     * 
                     */
                    int64_t GetRestDuration() const;

                    /**
                     * 设置当天小休总时长
                     * @param _restDuration 当天小休总时长
                     * 
                     */
                    void SetRestDuration(const int64_t& _restDuration);

                    /**
                     * 判断参数 RestDuration 是否已赋值
                     * @return RestDuration 是否已赋值
                     * 
                     */
                    bool RestDurationHasBeenSet() const;

                    /**
                     * 获取当天话后调整总时长
                     * @return AfterCallWorkDuration 当天话后调整总时长
                     * 
                     */
                    int64_t GetAfterCallWorkDuration() const;

                    /**
                     * 设置当天话后调整总时长
                     * @param _afterCallWorkDuration 当天话后调整总时长
                     * 
                     */
                    void SetAfterCallWorkDuration(const int64_t& _afterCallWorkDuration);

                    /**
                     * 判断参数 AfterCallWorkDuration 是否已赋值
                     * @return AfterCallWorkDuration 是否已赋值
                     * 
                     */
                    bool AfterCallWorkDurationHasBeenSet() const;

                    /**
                     * 获取小休原因
                     * @return Reason 小休原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置小休原因
                     * @param _reason 小休原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否预约小休
                     * @return ReserveRest 是否预约小休
                     * 
                     */
                    bool GetReserveRest() const;

                    /**
                     * 设置是否预约小休
                     * @param _reserveRest 是否预约小休
                     * 
                     */
                    void SetReserveRest(const bool& _reserveRest);

                    /**
                     * 判断参数 ReserveRest 是否已赋值
                     * @return ReserveRest 是否已赋值
                     * 
                     */
                    bool ReserveRestHasBeenSet() const;

                    /**
                     * 获取是否预约示忙
                     * @return ReserveNotReady 是否预约示忙
                     * 
                     */
                    bool GetReserveNotReady() const;

                    /**
                     * 设置是否预约示忙
                     * @param _reserveNotReady 是否预约示忙
                     * 
                     */
                    void SetReserveNotReady(const bool& _reserveNotReady);

                    /**
                     * 判断参数 ReserveNotReady 是否已赋值
                     * @return ReserveNotReady 是否已赋值
                     * 
                     */
                    bool ReserveNotReadyHasBeenSet() const;

                    /**
                     * 获取手机接听模式： 0 - 关闭 | 1 - 仅离线 | 2- 始终
                     * @return UseMobileAccept 手机接听模式： 0 - 关闭 | 1 - 仅离线 | 2- 始终
                     * 
                     */
                    int64_t GetUseMobileAccept() const;

                    /**
                     * 设置手机接听模式： 0 - 关闭 | 1 - 仅离线 | 2- 始终
                     * @param _useMobileAccept 手机接听模式： 0 - 关闭 | 1 - 仅离线 | 2- 始终
                     * 
                     */
                    void SetUseMobileAccept(const int64_t& _useMobileAccept);

                    /**
                     * 判断参数 UseMobileAccept 是否已赋值
                     * @return UseMobileAccept 是否已赋值
                     * 
                     */
                    bool UseMobileAcceptHasBeenSet() const;

                    /**
                     * 获取手机外呼开关
                     * @return UseMobileCallOut 手机外呼开关
                     * 
                     */
                    bool GetUseMobileCallOut() const;

                    /**
                     * 设置手机外呼开关
                     * @param _useMobileCallOut 手机外呼开关
                     * 
                     */
                    void SetUseMobileCallOut(const bool& _useMobileCallOut);

                    /**
                     * 判断参数 UseMobileCallOut 是否已赋值
                     * @return UseMobileCallOut 是否已赋值
                     * 
                     */
                    bool UseMobileCallOutHasBeenSet() const;

                    /**
                     * 获取最近一次上线时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOnlineTimestamp 最近一次上线时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastOnlineTimestamp() const;

                    /**
                     * 设置最近一次上线时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOnlineTimestamp 最近一次上线时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOnlineTimestamp(const int64_t& _lastOnlineTimestamp);

                    /**
                     * 判断参数 LastOnlineTimestamp 是否已赋值
                     * @return LastOnlineTimestamp 是否已赋值
                     * 
                     */
                    bool LastOnlineTimestampHasBeenSet() const;

                    /**
                     * 获取最近一次状态时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastStatusTimestamp 最近一次状态时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastStatusTimestamp() const;

                    /**
                     * 设置最近一次状态时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastStatusTimestamp 最近一次状态时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastStatusTimestamp(const int64_t& _lastStatusTimestamp);

                    /**
                     * 判断参数 LastStatusTimestamp 是否已赋值
                     * @return LastStatusTimestamp 是否已赋值
                     * 
                     */
                    bool LastStatusTimestampHasBeenSet() const;

                    /**
                     * 获取客服登录的端信息
                     * @return ClientInfo 客服登录的端信息
                     * 
                     */
                    std::vector<ClientInfo> GetClientInfo() const;

                    /**
                     * 设置客服登录的端信息
                     * @param _clientInfo 客服登录的端信息
                     * 
                     */
                    void SetClientInfo(const std::vector<ClientInfo>& _clientInfo);

                    /**
                     * 判断参数 ClientInfo 是否已赋值
                     * @return ClientInfo 是否已赋值
                     * 
                     */
                    bool ClientInfoHasBeenSet() const;

                private:

                    /**
                     * 座席邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 座席状态补充信息
                     */
                    StaffStatusExtra m_statusExtra;
                    bool m_statusExtraHasBeenSet;

                    /**
                     * 当天在线总时长
                     */
                    int64_t m_onlineDuration;
                    bool m_onlineDurationHasBeenSet;

                    /**
                     * 当天示闲总时长
                     */
                    int64_t m_freeDuration;
                    bool m_freeDurationHasBeenSet;

                    /**
                     * 当天忙碌总时长
                     */
                    int64_t m_busyDuration;
                    bool m_busyDurationHasBeenSet;

                    /**
                     * 当天示忙总时长
                     */
                    int64_t m_notReadyDuration;
                    bool m_notReadyDurationHasBeenSet;

                    /**
                     * 当天小休总时长
                     */
                    int64_t m_restDuration;
                    bool m_restDurationHasBeenSet;

                    /**
                     * 当天话后调整总时长
                     */
                    int64_t m_afterCallWorkDuration;
                    bool m_afterCallWorkDurationHasBeenSet;

                    /**
                     * 小休原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 是否预约小休
                     */
                    bool m_reserveRest;
                    bool m_reserveRestHasBeenSet;

                    /**
                     * 是否预约示忙
                     */
                    bool m_reserveNotReady;
                    bool m_reserveNotReadyHasBeenSet;

                    /**
                     * 手机接听模式： 0 - 关闭 | 1 - 仅离线 | 2- 始终
                     */
                    int64_t m_useMobileAccept;
                    bool m_useMobileAcceptHasBeenSet;

                    /**
                     * 手机外呼开关
                     */
                    bool m_useMobileCallOut;
                    bool m_useMobileCallOutHasBeenSet;

                    /**
                     * 最近一次上线时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastOnlineTimestamp;
                    bool m_lastOnlineTimestampHasBeenSet;

                    /**
                     * 最近一次状态时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastStatusTimestamp;
                    bool m_lastStatusTimestampHasBeenSet;

                    /**
                     * 客服登录的端信息
                     */
                    std::vector<ClientInfo> m_clientInfo;
                    bool m_clientInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
