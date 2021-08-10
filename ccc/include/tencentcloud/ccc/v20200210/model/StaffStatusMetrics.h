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


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 坐席状态相关信息
                */
                class StaffStatusMetrics : public AbstractModel
                {
                public:
                    StaffStatusMetrics();
                    ~StaffStatusMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取坐席邮箱
                     * @return Email 坐席邮箱
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置坐席邮箱
                     * @param Email 坐席邮箱
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取坐席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @return Status 坐席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置坐席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @param Status 坐席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取坐席状态补充信息
                     * @return StatusExtra 坐席状态补充信息
                     */
                    StaffStatusExtra GetStatusExtra() const;

                    /**
                     * 设置坐席状态补充信息
                     * @param StatusExtra 坐席状态补充信息
                     */
                    void SetStatusExtra(const StaffStatusExtra& _statusExtra);

                    /**
                     * 判断参数 StatusExtra 是否已赋值
                     * @return StatusExtra 是否已赋值
                     */
                    bool StatusExtraHasBeenSet() const;

                    /**
                     * 获取当天在线总时长
                     * @return OnlineDuration 当天在线总时长
                     */
                    int64_t GetOnlineDuration() const;

                    /**
                     * 设置当天在线总时长
                     * @param OnlineDuration 当天在线总时长
                     */
                    void SetOnlineDuration(const int64_t& _onlineDuration);

                    /**
                     * 判断参数 OnlineDuration 是否已赋值
                     * @return OnlineDuration 是否已赋值
                     */
                    bool OnlineDurationHasBeenSet() const;

                    /**
                     * 获取当天示闲总时长
                     * @return FreeDuration 当天示闲总时长
                     */
                    int64_t GetFreeDuration() const;

                    /**
                     * 设置当天示闲总时长
                     * @param FreeDuration 当天示闲总时长
                     */
                    void SetFreeDuration(const int64_t& _freeDuration);

                    /**
                     * 判断参数 FreeDuration 是否已赋值
                     * @return FreeDuration 是否已赋值
                     */
                    bool FreeDurationHasBeenSet() const;

                    /**
                     * 获取当天忙碌总时长
                     * @return BusyDuration 当天忙碌总时长
                     */
                    int64_t GetBusyDuration() const;

                    /**
                     * 设置当天忙碌总时长
                     * @param BusyDuration 当天忙碌总时长
                     */
                    void SetBusyDuration(const int64_t& _busyDuration);

                    /**
                     * 判断参数 BusyDuration 是否已赋值
                     * @return BusyDuration 是否已赋值
                     */
                    bool BusyDurationHasBeenSet() const;

                    /**
                     * 获取当天示忙总时长
                     * @return NotReadyDuration 当天示忙总时长
                     */
                    int64_t GetNotReadyDuration() const;

                    /**
                     * 设置当天示忙总时长
                     * @param NotReadyDuration 当天示忙总时长
                     */
                    void SetNotReadyDuration(const int64_t& _notReadyDuration);

                    /**
                     * 判断参数 NotReadyDuration 是否已赋值
                     * @return NotReadyDuration 是否已赋值
                     */
                    bool NotReadyDurationHasBeenSet() const;

                    /**
                     * 获取当天小休总时长
                     * @return RestDuration 当天小休总时长
                     */
                    int64_t GetRestDuration() const;

                    /**
                     * 设置当天小休总时长
                     * @param RestDuration 当天小休总时长
                     */
                    void SetRestDuration(const int64_t& _restDuration);

                    /**
                     * 判断参数 RestDuration 是否已赋值
                     * @return RestDuration 是否已赋值
                     */
                    bool RestDurationHasBeenSet() const;

                    /**
                     * 获取当天话后调整总时长
                     * @return AfterCallWorkDuration 当天话后调整总时长
                     */
                    int64_t GetAfterCallWorkDuration() const;

                    /**
                     * 设置当天话后调整总时长
                     * @param AfterCallWorkDuration 当天话后调整总时长
                     */
                    void SetAfterCallWorkDuration(const int64_t& _afterCallWorkDuration);

                    /**
                     * 判断参数 AfterCallWorkDuration 是否已赋值
                     * @return AfterCallWorkDuration 是否已赋值
                     */
                    bool AfterCallWorkDurationHasBeenSet() const;

                    /**
                     * 获取小休原因
                     * @return Reason 小休原因
                     */
                    std::string GetReason() const;

                    /**
                     * 设置小休原因
                     * @param Reason 小休原因
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否预约小休
                     * @return ReserveRest 是否预约小休
                     */
                    bool GetReserveRest() const;

                    /**
                     * 设置是否预约小休
                     * @param ReserveRest 是否预约小休
                     */
                    void SetReserveRest(const bool& _reserveRest);

                    /**
                     * 判断参数 ReserveRest 是否已赋值
                     * @return ReserveRest 是否已赋值
                     */
                    bool ReserveRestHasBeenSet() const;

                    /**
                     * 获取是否预约示忙
                     * @return ReserveNotReady 是否预约示忙
                     */
                    bool GetReserveNotReady() const;

                    /**
                     * 设置是否预约示忙
                     * @param ReserveNotReady 是否预约示忙
                     */
                    void SetReserveNotReady(const bool& _reserveNotReady);

                    /**
                     * 判断参数 ReserveNotReady 是否已赋值
                     * @return ReserveNotReady 是否已赋值
                     */
                    bool ReserveNotReadyHasBeenSet() const;

                private:

                    /**
                     * 坐席邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 坐席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 坐席状态补充信息
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
