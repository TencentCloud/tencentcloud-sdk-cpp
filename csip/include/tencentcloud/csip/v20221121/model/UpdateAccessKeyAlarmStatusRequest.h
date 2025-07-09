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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UpdateAccessKeyAlarmStatus请求参数结构体
                */
                class UpdateAccessKeyAlarmStatusRequest : public AbstractModel
                {
                public:
                    UpdateAccessKeyAlarmStatusRequest();
                    ~UpdateAccessKeyAlarmStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态  0:未处理 1:已处理 2:已忽略
                     * @return Status 状态  0:未处理 1:已处理 2:已忽略
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态  0:未处理 1:已处理 2:已忽略
                     * @param _status 状态  0:未处理 1:已处理 2:已忽略
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
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取告警ID列表
                     * @return AlarmIDList 告警ID列表
                     * 
                     */
                    std::vector<int64_t> GetAlarmIDList() const;

                    /**
                     * 设置告警ID列表
                     * @param _alarmIDList 告警ID列表
                     * 
                     */
                    void SetAlarmIDList(const std::vector<int64_t>& _alarmIDList);

                    /**
                     * 判断参数 AlarmIDList 是否已赋值
                     * @return AlarmIDList 是否已赋值
                     * 
                     */
                    bool AlarmIDListHasBeenSet() const;

                    /**
                     * 获取风险ID列表
                     * @return RiskIDList 风险ID列表
                     * 
                     */
                    std::vector<int64_t> GetRiskIDList() const;

                    /**
                     * 设置风险ID列表
                     * @param _riskIDList 风险ID列表
                     * 
                     */
                    void SetRiskIDList(const std::vector<int64_t>& _riskIDList);

                    /**
                     * 判断参数 RiskIDList 是否已赋值
                     * @return RiskIDList 是否已赋值
                     * 
                     */
                    bool RiskIDListHasBeenSet() const;

                private:

                    /**
                     * 状态  0:未处理 1:已处理 2:已忽略
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 告警ID列表
                     */
                    std::vector<int64_t> m_alarmIDList;
                    bool m_alarmIDListHasBeenSet;

                    /**
                     * 风险ID列表
                     */
                    std::vector<int64_t> m_riskIDList;
                    bool m_riskIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_
