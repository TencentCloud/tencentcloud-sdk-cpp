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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OpScope.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * StartStopServiceOrMonitor请求参数结构体
                */
                class StartStopServiceOrMonitorRequest : public AbstractModel
                {
                public:
                    StartStopServiceOrMonitorRequest();
                    ~StartStopServiceOrMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param InstanceId 集群ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>

                     * @return OpType 操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>

                     */
                    std::string GetOpType() const;

                    /**
                     * 设置操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>

                     * @param OpType 操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>

                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取操作范围
                     * @return OpScope 操作范围
                     */
                    OpScope GetOpScope() const;

                    /**
                     * 设置操作范围
                     * @param OpScope 操作范围
                     */
                    void SetOpScope(const OpScope& _opScope);

                    /**
                     * 判断参数 OpScope 是否已赋值
                     * @return OpScope 是否已赋值
                     */
                    bool OpScopeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>

                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 操作范围
                     */
                    OpScope m_opScope;
                    bool m_opScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_
