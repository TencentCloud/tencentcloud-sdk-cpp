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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_ALARMPOLICY_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_ALARMPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 告警策略
                */
                class AlarmPolicy : public AbstractModel
                {
                public:
                    AlarmPolicy();
                    ~AlarmPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户账号
                     * @return Uin 用户账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户账号
                     * @param _uin 用户账号
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取告警事件
                     * @return Event 告警事件
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置告警事件
                     * @param _event 告警事件
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取告警阈值
                     * @return Limit 告警阈值
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置告警阈值
                     * @param _limit 告警阈值
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取告警策略是否生效，0：停用，1：启用
                     * @return Status 告警策略是否生效，0：停用，1：启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警策略是否生效，0：停用，1：启用
                     * @param _status 告警策略是否生效，0：停用，1：启用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取在这个时间后才允许发送告警
                     * @return BeginTime 在这个时间后才允许发送告警
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置在这个时间后才允许发送告警
                     * @param _beginTime 在这个时间后才允许发送告警
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取在这个时间前才允许发送告警
                     * @return EndTime 在这个时间前才允许发送告警
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置在这个时间前才允许发送告警
                     * @param _endTime 在这个时间前才允许发送告警
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
                     * 用户账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 告警事件
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 告警阈值
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 告警策略是否生效，0：停用，1：启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 在这个时间后才允许发送告警
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 在这个时间前才允许发送告警
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_ALARMPOLICY_H_
