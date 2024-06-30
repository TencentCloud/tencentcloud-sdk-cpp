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
#include <tencentcloud/emr/v20190103/model/StrategyConfig.h>
#include <tencentcloud/emr/v20190103/model/StopParams.h>


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
                     * 获取操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>
<li>RestartService：重启服务 如果操作类型选择重启服务 StrategyConfig操作策略则是必填项</li>
                     * @return OpType 操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>
<li>RestartService：重启服务 如果操作类型选择重启服务 StrategyConfig操作策略则是必填项</li>
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>
<li>RestartService：重启服务 如果操作类型选择重启服务 StrategyConfig操作策略则是必填项</li>
                     * @param _opType 操作类型，当前支持
<li>StartService：启动服务</li>
<li>StopService：停止服务</li>
<li>StartMonitor：退出维护</li>
<li>StopMonitor：进入维护</li>
<li>RestartService：重启服务 如果操作类型选择重启服务 StrategyConfig操作策略则是必填项</li>
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取操作范围
                     * @return OpScope 操作范围
                     * 
                     */
                    OpScope GetOpScope() const;

                    /**
                     * 设置操作范围
                     * @param _opScope 操作范围
                     * 
                     */
                    void SetOpScope(const OpScope& _opScope);

                    /**
                     * 判断参数 OpScope 是否已赋值
                     * @return OpScope 是否已赋值
                     * 
                     */
                    bool OpScopeHasBeenSet() const;

                    /**
                     * 获取操作策略
                     * @return StrategyConfig 操作策略
                     * 
                     */
                    StrategyConfig GetStrategyConfig() const;

                    /**
                     * 设置操作策略
                     * @param _strategyConfig 操作策略
                     * 
                     */
                    void SetStrategyConfig(const StrategyConfig& _strategyConfig);

                    /**
                     * 判断参数 StrategyConfig 是否已赋值
                     * @return StrategyConfig 是否已赋值
                     * 
                     */
                    bool StrategyConfigHasBeenSet() const;

                    /**
                     * 获取暂停服务时用的参数
                     * @return StopParams 暂停服务时用的参数
                     * 
                     */
                    StopParams GetStopParams() const;

                    /**
                     * 设置暂停服务时用的参数
                     * @param _stopParams 暂停服务时用的参数
                     * 
                     */
                    void SetStopParams(const StopParams& _stopParams);

                    /**
                     * 判断参数 StopParams 是否已赋值
                     * @return StopParams 是否已赋值
                     * 
                     */
                    bool StopParamsHasBeenSet() const;

                    /**
                     * 获取当OpType为<li>StopMonitor</li>才有用，true表示进入维护模式但是仍然监控进程但是不拉起进程
                     * @return KeepMonitorButNotRecoverProcess 当OpType为<li>StopMonitor</li>才有用，true表示进入维护模式但是仍然监控进程但是不拉起进程
                     * 
                     */
                    bool GetKeepMonitorButNotRecoverProcess() const;

                    /**
                     * 设置当OpType为<li>StopMonitor</li>才有用，true表示进入维护模式但是仍然监控进程但是不拉起进程
                     * @param _keepMonitorButNotRecoverProcess 当OpType为<li>StopMonitor</li>才有用，true表示进入维护模式但是仍然监控进程但是不拉起进程
                     * 
                     */
                    void SetKeepMonitorButNotRecoverProcess(const bool& _keepMonitorButNotRecoverProcess);

                    /**
                     * 判断参数 KeepMonitorButNotRecoverProcess 是否已赋值
                     * @return KeepMonitorButNotRecoverProcess 是否已赋值
                     * 
                     */
                    bool KeepMonitorButNotRecoverProcessHasBeenSet() const;

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
<li>RestartService：重启服务 如果操作类型选择重启服务 StrategyConfig操作策略则是必填项</li>
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 操作范围
                     */
                    OpScope m_opScope;
                    bool m_opScopeHasBeenSet;

                    /**
                     * 操作策略
                     */
                    StrategyConfig m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                    /**
                     * 暂停服务时用的参数
                     */
                    StopParams m_stopParams;
                    bool m_stopParamsHasBeenSet;

                    /**
                     * 当OpType为<li>StopMonitor</li>才有用，true表示进入维护模式但是仍然监控进程但是不拉起进程
                     */
                    bool m_keepMonitorButNotRecoverProcess;
                    bool m_keepMonitorButNotRecoverProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_
