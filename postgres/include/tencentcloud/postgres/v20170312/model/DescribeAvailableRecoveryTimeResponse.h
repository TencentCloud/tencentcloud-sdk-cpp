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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAVAILABLERECOVERYTIMERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAVAILABLERECOVERYTIMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAvailableRecoveryTime返回参数结构体
                */
                class DescribeAvailableRecoveryTimeResponse : public AbstractModel
                {
                public:
                    DescribeAvailableRecoveryTimeResponse();
                    ~DescribeAvailableRecoveryTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可恢复的最早时间，时区为东八区（UTC+8）。
                     * @return RecoveryBeginTime 可恢复的最早时间，时区为东八区（UTC+8）。
                     * 
                     */
                    std::string GetRecoveryBeginTime() const;

                    /**
                     * 判断参数 RecoveryBeginTime 是否已赋值
                     * @return RecoveryBeginTime 是否已赋值
                     * 
                     */
                    bool RecoveryBeginTimeHasBeenSet() const;

                    /**
                     * 获取可恢复的最晚时间，时区为东八区（UTC+8）。
                     * @return RecoveryEndTime 可恢复的最晚时间，时区为东八区（UTC+8）。
                     * 
                     */
                    std::string GetRecoveryEndTime() const;

                    /**
                     * 判断参数 RecoveryEndTime 是否已赋值
                     * @return RecoveryEndTime 是否已赋值
                     * 
                     */
                    bool RecoveryEndTimeHasBeenSet() const;

                private:

                    /**
                     * 可恢复的最早时间，时区为东八区（UTC+8）。
                     */
                    std::string m_recoveryBeginTime;
                    bool m_recoveryBeginTimeHasBeenSet;

                    /**
                     * 可恢复的最晚时间，时区为东八区（UTC+8）。
                     */
                    std::string m_recoveryEndTime;
                    bool m_recoveryEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAVAILABLERECOVERYTIMERESPONSE_H_
