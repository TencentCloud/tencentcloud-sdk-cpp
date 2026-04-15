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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTALARMPOLICYRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTALARMPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/AlarmPolicyRsp.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAlarmPolicy返回参数结构体
                */
                class ListAlarmPolicyResponse : public AbstractModel
                {
                public:
                    ListAlarmPolicyResponse();
                    ~ListAlarmPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回记录的数量</p>
                     * @return Total <p>返回记录的数量</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>告警策略返回值</p>
                     * @return AlarmPolicyList <p>告警策略返回值</p>
                     * 
                     */
                    std::vector<AlarmPolicyRsp> GetAlarmPolicyList() const;

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                private:

                    /**
                     * <p>返回记录的数量</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>告警策略返回值</p>
                     */
                    std::vector<AlarmPolicyRsp> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTALARMPOLICYRESPONSE_H_
