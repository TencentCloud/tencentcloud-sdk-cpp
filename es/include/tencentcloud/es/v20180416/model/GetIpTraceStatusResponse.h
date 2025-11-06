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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_GETIPTRACESTATUSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_GETIPTRACESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/IpTraceConfig.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetIpTraceStatus返回参数结构体
                */
                class GetIpTraceStatusResponse : public AbstractModel
                {
                public:
                    GetIpTraceStatusResponse();
                    ~GetIpTraceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启IP溯源
                     * @return OpenIpTrace 是否开启IP溯源
                     * 
                     */
                    bool GetOpenIpTrace() const;

                    /**
                     * 判断参数 OpenIpTrace 是否已赋值
                     * @return OpenIpTrace 是否已赋值
                     * 
                     */
                    bool OpenIpTraceHasBeenSet() const;

                    /**
                     * 获取IP溯源开启持续时间，单位：秒
                     * @return DurationTime IP溯源开启持续时间，单位：秒
                     * 
                     */
                    int64_t GetDurationTime() const;

                    /**
                     * 判断参数 DurationTime 是否已赋值
                     * @return DurationTime 是否已赋值
                     * 
                     */
                    bool DurationTimeHasBeenSet() const;

                    /**
                     * 获取IP溯源配置
                     * @return IpTraceConfig IP溯源配置
                     * 
                     */
                    IpTraceConfig GetIpTraceConfig() const;

                    /**
                     * 判断参数 IpTraceConfig 是否已赋值
                     * @return IpTraceConfig 是否已赋值
                     * 
                     */
                    bool IpTraceConfigHasBeenSet() const;

                    /**
                     * 获取上次执行时间
                     * @return LastStartTime 上次执行时间
                     * 
                     */
                    std::string GetLastStartTime() const;

                    /**
                     * 判断参数 LastStartTime 是否已赋值
                     * @return LastStartTime 是否已赋值
                     * 
                     */
                    bool LastStartTimeHasBeenSet() const;

                    /**
                     * 获取上次关闭时间
                     * @return LastEndTime 上次关闭时间
                     * 
                     */
                    std::string GetLastEndTime() const;

                    /**
                     * 判断参数 LastEndTime 是否已赋值
                     * @return LastEndTime 是否已赋值
                     * 
                     */
                    bool LastEndTimeHasBeenSet() const;

                    /**
                     * 获取是否过滤Kibana节点IP
                     * @return FilterKibanaIp 是否过滤Kibana节点IP
                     * 
                     */
                    bool GetFilterKibanaIp() const;

                    /**
                     * 判断参数 FilterKibanaIp 是否已赋值
                     * @return FilterKibanaIp 是否已赋值
                     * 
                     */
                    bool FilterKibanaIpHasBeenSet() const;

                private:

                    /**
                     * 是否开启IP溯源
                     */
                    bool m_openIpTrace;
                    bool m_openIpTraceHasBeenSet;

                    /**
                     * IP溯源开启持续时间，单位：秒
                     */
                    int64_t m_durationTime;
                    bool m_durationTimeHasBeenSet;

                    /**
                     * IP溯源配置
                     */
                    IpTraceConfig m_ipTraceConfig;
                    bool m_ipTraceConfigHasBeenSet;

                    /**
                     * 上次执行时间
                     */
                    std::string m_lastStartTime;
                    bool m_lastStartTimeHasBeenSet;

                    /**
                     * 上次关闭时间
                     */
                    std::string m_lastEndTime;
                    bool m_lastEndTimeHasBeenSet;

                    /**
                     * 是否过滤Kibana节点IP
                     */
                    bool m_filterKibanaIp;
                    bool m_filterKibanaIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_GETIPTRACESTATUSRESPONSE_H_
