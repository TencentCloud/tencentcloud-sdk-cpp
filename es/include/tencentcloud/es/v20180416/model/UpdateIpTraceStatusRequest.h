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
                     * 获取<p>集群ID。该字段为必填字段。</p>
                     * @return InstanceId <p>集群ID。该字段为必填字段。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群ID。该字段为必填字段。</p>
                     * @param _instanceId <p>集群ID。该字段为必填字段。</p>
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
                     * 获取<p>IP溯源配置开关。该字段为必填字段。</p>
                     * @return OpenIpTrace <p>IP溯源配置开关。该字段为必填字段。</p>
                     * 
                     */
                    bool GetOpenIpTrace() const;

                    /**
                     * 设置<p>IP溯源配置开关。该字段为必填字段。</p>
                     * @param _openIpTrace <p>IP溯源配置开关。该字段为必填字段。</p>
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
                     * 获取<p>IP溯源开启持续时间，单位：秒。该字段为必填字段。</p>
                     * @return DurationTime <p>IP溯源开启持续时间，单位：秒。该字段为必填字段。</p>
                     * 
                     */
                    int64_t GetDurationTime() const;

                    /**
                     * 设置<p>IP溯源开启持续时间，单位：秒。该字段为必填字段。</p>
                     * @param _durationTime <p>IP溯源开启持续时间，单位：秒。该字段为必填字段。</p>
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
                     * 获取<p>IP溯源配置。该字段为必填字段。</p>
                     * @return IpTraceConfig <p>IP溯源配置。该字段为必填字段。</p>
                     * 
                     */
                    IpTraceConfig GetIpTraceConfig() const;

                    /**
                     * 设置<p>IP溯源配置。该字段为必填字段。</p>
                     * @param _ipTraceConfig <p>IP溯源配置。该字段为必填字段。</p>
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
                     * 获取<p>是否过滤kibana节点IP。</p>
                     * @return FilterKibanaIp <p>是否过滤kibana节点IP。</p>
                     * 
                     */
                    bool GetFilterKibanaIp() const;

                    /**
                     * 设置<p>是否过滤kibana节点IP。</p>
                     * @param _filterKibanaIp <p>是否过滤kibana节点IP。</p>
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
                     * <p>集群ID。该字段为必填字段。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>IP溯源配置开关。该字段为必填字段。</p>
                     */
                    bool m_openIpTrace;
                    bool m_openIpTraceHasBeenSet;

                    /**
                     * <p>IP溯源开启持续时间，单位：秒。该字段为必填字段。</p>
                     */
                    int64_t m_durationTime;
                    bool m_durationTimeHasBeenSet;

                    /**
                     * <p>IP溯源配置。该字段为必填字段。</p>
                     */
                    IpTraceConfig m_ipTraceConfig;
                    bool m_ipTraceConfigHasBeenSet;

                    /**
                     * <p>是否过滤kibana节点IP。</p>
                     */
                    bool m_filterKibanaIp;
                    bool m_filterKibanaIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEIPTRACESTATUSREQUEST_H_
