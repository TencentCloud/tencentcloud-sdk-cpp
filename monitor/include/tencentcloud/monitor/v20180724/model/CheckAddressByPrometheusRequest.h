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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CHECKADDRESSBYPROMETHEUSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CHECKADDRESSBYPROMETHEUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CheckAddressByPrometheus请求参数结构体
                */
                class CheckAddressByPrometheusRequest : public AbstractModel
                {
                public:
                    CheckAddressByPrometheusRequest();
                    ~CheckAddressByPrometheusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>探测地址</p>
                     * @return Target <p>探测地址</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>探测地址</p>
                     * @param _target <p>探测地址</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>探测方式。tcp或http，默认是tcp</p>
                     * @return ProbeProtocol <p>探测方式。tcp或http，默认是tcp</p>
                     * 
                     */
                    std::string GetProbeProtocol() const;

                    /**
                     * 设置<p>探测方式。tcp或http，默认是tcp</p>
                     * @param _probeProtocol <p>探测方式。tcp或http，默认是tcp</p>
                     * 
                     */
                    void SetProbeProtocol(const std::string& _probeProtocol);

                    /**
                     * 判断参数 ProbeProtocol 是否已赋值
                     * @return ProbeProtocol 是否已赋值
                     * 
                     */
                    bool ProbeProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>探测地址</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>探测方式。tcp或http，默认是tcp</p>
                     */
                    std::string m_probeProtocol;
                    bool m_probeProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CHECKADDRESSBYPROMETHEUSREQUEST_H_
