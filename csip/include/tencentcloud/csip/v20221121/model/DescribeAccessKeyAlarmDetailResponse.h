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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarm.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAccessKeyAlarmDetail返回参数结构体
                */
                class DescribeAccessKeyAlarmDetailResponse : public AbstractModel
                {
                public:
                    DescribeAccessKeyAlarmDetailResponse();
                    ~DescribeAccessKeyAlarmDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警信息
                     * @return AlarmInfo 告警信息
                     * 
                     */
                    AccessKeyAlarm GetAlarmInfo() const;

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取所属账号CAM策略数量
                     * @return CamCount 所属账号CAM策略数量
                     * 
                     */
                    int64_t GetCamCount() const;

                    /**
                     * 判断参数 CamCount 是否已赋值
                     * @return CamCount 是否已赋值
                     * 
                     */
                    bool CamCountHasBeenSet() const;

                    /**
                     * 获取AK风险数量
                     * @return RiskCount AK风险数量
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取告警策略描述
                     * @return AlarmDesc 告警策略描述
                     * 
                     */
                    std::string GetAlarmDesc() const;

                    /**
                     * 判断参数 AlarmDesc 是否已赋值
                     * @return AlarmDesc 是否已赋值
                     * 
                     */
                    bool AlarmDescHasBeenSet() const;

                private:

                    /**
                     * 告警信息
                     */
                    AccessKeyAlarm m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * 所属账号CAM策略数量
                     */
                    int64_t m_camCount;
                    bool m_camCountHasBeenSet;

                    /**
                     * AK风险数量
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 告警策略描述
                     */
                    std::string m_alarmDesc;
                    bool m_alarmDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMDETAILRESPONSE_H_
