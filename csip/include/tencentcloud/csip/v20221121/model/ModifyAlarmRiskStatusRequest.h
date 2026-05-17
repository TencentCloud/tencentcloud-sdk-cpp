/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosAlarmRiskIdInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAlarmRiskStatus请求参数结构体
                */
                class ModifyAlarmRiskStatusRequest : public AbstractModel
                {
                public:
                    ModifyAlarmRiskStatusRequest();
                    ~ModifyAlarmRiskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警或者风险id
                     * @return AlarmRiskIdSet 告警或者风险id
                     * 
                     */
                    std::vector<CosAlarmRiskIdInfo> GetAlarmRiskIdSet() const;

                    /**
                     * 设置告警或者风险id
                     * @param _alarmRiskIdSet 告警或者风险id
                     * 
                     */
                    void SetAlarmRiskIdSet(const std::vector<CosAlarmRiskIdInfo>& _alarmRiskIdSet);

                    /**
                     * 判断参数 AlarmRiskIdSet 是否已赋值
                     * @return AlarmRiskIdSet 是否已赋值
                     * 
                     */
                    bool AlarmRiskIdSetHasBeenSet() const;

                    /**
                     * 获取风险或告警状态  1 告警 2风险
                     * @return AlarmRiskType 风险或告警状态  1 告警 2风险
                     * 
                     */
                    int64_t GetAlarmRiskType() const;

                    /**
                     * 设置风险或告警状态  1 告警 2风险
                     * @param _alarmRiskType 风险或告警状态  1 告警 2风险
                     * 
                     */
                    void SetAlarmRiskType(const int64_t& _alarmRiskType);

                    /**
                     * 判断参数 AlarmRiskType 是否已赋值
                     * @return AlarmRiskType 是否已赋值
                     * 
                     */
                    bool AlarmRiskTypeHasBeenSet() const;

                    /**
                     * 获取处置状态
                     * @return HandleStatus 处置状态
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置处置状态
                     * @param _handleStatus 处置状态
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                private:

                    /**
                     * 告警或者风险id
                     */
                    std::vector<CosAlarmRiskIdInfo> m_alarmRiskIdSet;
                    bool m_alarmRiskIdSetHasBeenSet;

                    /**
                     * 风险或告警状态  1 告警 2风险
                     */
                    int64_t m_alarmRiskType;
                    bool m_alarmRiskTypeHasBeenSet;

                    /**
                     * 处置状态
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_
