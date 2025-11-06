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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEIPTRACESTATUSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEIPTRACESTATUSREQUEST_H_

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
                * UpdateIpTraceStatus请求参数结构体
                */
                class UpdateIpTraceStatusRequest : public AbstractModel
                {
                public:
                    UpdateIpTraceStatusRequest();
                    ~UpdateIpTraceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP溯源配置开关
                     * @return OpenIpTrace IP溯源配置开关
                     * 
                     */
                    bool GetOpenIpTrace() const;

                    /**
                     * 设置IP溯源配置开关
                     * @param _openIpTrace IP溯源配置开关
                     * 
                     */
                    void SetOpenIpTrace(const bool& _openIpTrace);

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
                     * 设置IP溯源开启持续时间，单位：秒
                     * @param _durationTime IP溯源开启持续时间，单位：秒
                     * 
                     */
                    void SetDurationTime(const int64_t& _durationTime);

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
                     * 设置IP溯源配置
                     * @param _ipTraceConfig IP溯源配置
                     * 
                     */
                    void SetIpTraceConfig(const IpTraceConfig& _ipTraceConfig);

                    /**
                     * 判断参数 IpTraceConfig 是否已赋值
                     * @return IpTraceConfig 是否已赋值
                     * 
                     */
                    bool IpTraceConfigHasBeenSet() const;

                    /**
                     * 获取是否过滤kibana节点IP
                     * @return FilterKibanaIp 是否过滤kibana节点IP
                     * 
                     */
                    bool GetFilterKibanaIp() const;

                    /**
                     * 设置是否过滤kibana节点IP
                     * @param _filterKibanaIp 是否过滤kibana节点IP
                     * 
                     */
                    void SetFilterKibanaIp(const bool& _filterKibanaIp);

                    /**
                     * 判断参数 FilterKibanaIp 是否已赋值
                     * @return FilterKibanaIp 是否已赋值
                     * 
                     */
                    bool FilterKibanaIpHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP溯源配置开关
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
                     * 是否过滤kibana节点IP
                     */
                    bool m_filterKibanaIp;
                    bool m_filterKibanaIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEIPTRACESTATUSREQUEST_H_
