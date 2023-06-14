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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeL4RulesErrHealth返回参数结构体
                */
                class DescribeL4RulesErrHealthResponse : public AbstractModel
                {
                public:
                    DescribeL4RulesErrHealthResponse();
                    ~DescribeL4RulesErrHealthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异常规则的总数
                     * @return Total 异常规则的总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP，多个IP用","分割
                     * @return ErrHealths 异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP，多个IP用","分割
                     * 
                     */
                    std::vector<KeyValue> GetErrHealths() const;

                    /**
                     * 判断参数 ErrHealths 是否已赋值
                     * @return ErrHealths 是否已赋值
                     * 
                     */
                    bool ErrHealthsHasBeenSet() const;

                    /**
                     * 获取异常规则列表(提供更多的错误相关信息)，返回值说明:
Key值为RuleId时，Value值为规则ID；
Key值为Protocol时，Value值为规则的转发协议；
Key值为VirtualPort时，Value值为规则的转发端口；
Key值为ErrMessage时，Value值为健康检查异常信息；
健康检查异常信息的格式为"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6" 多个源IP的错误信息用，分割,
SourceIp表示源站IP，SourcePort表示源站端口，AbnormalStatTime表示异常时间，AbnormalReason表示异常原因，Interval表示检查周期，CheckNum表示检查次数，FailNum表示失败次数；
                     * @return ExtErrHealths 异常规则列表(提供更多的错误相关信息)，返回值说明:
Key值为RuleId时，Value值为规则ID；
Key值为Protocol时，Value值为规则的转发协议；
Key值为VirtualPort时，Value值为规则的转发端口；
Key值为ErrMessage时，Value值为健康检查异常信息；
健康检查异常信息的格式为"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6" 多个源IP的错误信息用，分割,
SourceIp表示源站IP，SourcePort表示源站端口，AbnormalStatTime表示异常时间，AbnormalReason表示异常原因，Interval表示检查周期，CheckNum表示检查次数，FailNum表示失败次数；
                     * 
                     */
                    std::vector<KeyValueRecord> GetExtErrHealths() const;

                    /**
                     * 判断参数 ExtErrHealths 是否已赋值
                     * @return ExtErrHealths 是否已赋值
                     * 
                     */
                    bool ExtErrHealthsHasBeenSet() const;

                private:

                    /**
                     * 异常规则的总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 异常规则列表，返回值说明: Key值为规则ID，Value值为异常IP，多个IP用","分割
                     */
                    std::vector<KeyValue> m_errHealths;
                    bool m_errHealthsHasBeenSet;

                    /**
                     * 异常规则列表(提供更多的错误相关信息)，返回值说明:
Key值为RuleId时，Value值为规则ID；
Key值为Protocol时，Value值为规则的转发协议；
Key值为VirtualPort时，Value值为规则的转发端口；
Key值为ErrMessage时，Value值为健康检查异常信息；
健康检查异常信息的格式为"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6" 多个源IP的错误信息用，分割,
SourceIp表示源站IP，SourcePort表示源站端口，AbnormalStatTime表示异常时间，AbnormalReason表示异常原因，Interval表示检查周期，CheckNum表示检查次数，FailNum表示失败次数；
                     */
                    std::vector<KeyValueRecord> m_extErrHealths;
                    bool m_extErrHealthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_
