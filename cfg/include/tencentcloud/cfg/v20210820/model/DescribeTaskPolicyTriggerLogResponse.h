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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKPOLICYTRIGGERLOGRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKPOLICYTRIGGERLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/PolicyTriggerLog.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskPolicyTriggerLog返回参数结构体
                */
                class DescribeTaskPolicyTriggerLogResponse : public AbstractModel
                {
                public:
                    DescribeTaskPolicyTriggerLogResponse();
                    ~DescribeTaskPolicyTriggerLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取触发日志
                     * @return TriggerLogs 触发日志
                     * 
                     */
                    std::vector<PolicyTriggerLog> GetTriggerLogs() const;

                    /**
                     * 判断参数 TriggerLogs 是否已赋值
                     * @return TriggerLogs 是否已赋值
                     * 
                     */
                    bool TriggerLogsHasBeenSet() const;

                private:

                    /**
                     * 触发日志
                     */
                    std::vector<PolicyTriggerLog> m_triggerLogs;
                    bool m_triggerLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKPOLICYTRIGGERLOGRESPONSE_H_
