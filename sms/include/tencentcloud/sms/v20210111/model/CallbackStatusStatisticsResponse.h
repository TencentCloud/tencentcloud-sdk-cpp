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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/CallbackStatusStatistics.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * CallbackStatusStatistics返回参数结构体
                */
                class CallbackStatusStatisticsResponse : public AbstractModel
                {
                public:
                    CallbackStatusStatisticsResponse();
                    ~CallbackStatusStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回执数据统计响应包体。
                     * @return CallbackStatusStatistics 回执数据统计响应包体。
                     * 
                     */
                    CallbackStatusStatistics GetCallbackStatusStatistics() const;

                    /**
                     * 判断参数 CallbackStatusStatistics 是否已赋值
                     * @return CallbackStatusStatistics 是否已赋值
                     * 
                     */
                    bool CallbackStatusStatisticsHasBeenSet() const;

                private:

                    /**
                     * 回执数据统计响应包体。
                     */
                    CallbackStatusStatistics m_callbackStatusStatistics;
                    bool m_callbackStatusStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_CALLBACKSTATUSSTATISTICSRESPONSE_H_
