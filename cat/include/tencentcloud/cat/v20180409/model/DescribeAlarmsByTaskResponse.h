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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/AlarmInfo.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeAlarmsByTask返回参数结构体
                */
                class DescribeAlarmsByTaskResponse : public AbstractModel
                {
                public:
                    DescribeAlarmsByTaskResponse();
                    ~DescribeAlarmsByTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警信息列表
                     * @return AlarmInfos 告警信息列表
                     */
                    std::vector<AlarmInfo> GetAlarmInfos() const;

                    /**
                     * 判断参数 AlarmInfos 是否已赋值
                     * @return AlarmInfos 是否已赋值
                     */
                    bool AlarmInfosHasBeenSet() const;

                    /**
                     * 获取故障率
                     * @return FaultRatio 故障率
                     */
                    double GetFaultRatio() const;

                    /**
                     * 判断参数 FaultRatio 是否已赋值
                     * @return FaultRatio 是否已赋值
                     */
                    bool FaultRatioHasBeenSet() const;

                    /**
                     * 获取故障总时长
                     * @return FaultTimeSpec 故障总时长
                     */
                    std::string GetFaultTimeSpec() const;

                    /**
                     * 判断参数 FaultTimeSpec 是否已赋值
                     * @return FaultTimeSpec 是否已赋值
                     */
                    bool FaultTimeSpecHasBeenSet() const;

                private:

                    /**
                     * 告警信息列表
                     */
                    std::vector<AlarmInfo> m_alarmInfos;
                    bool m_alarmInfosHasBeenSet;

                    /**
                     * 故障率
                     */
                    double m_faultRatio;
                    bool m_faultRatioHasBeenSet;

                    /**
                     * 故障总时长
                     */
                    std::string m_faultTimeSpec;
                    bool m_faultTimeSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMSBYTASKRESPONSE_H_
