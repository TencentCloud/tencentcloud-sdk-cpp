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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RemoteWriteAuthInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyRemoteWriteTask请求参数结构体
                */
                class ModifyRemoteWriteTaskRequest : public AbstractModel
                {
                public:
                    ModifyRemoteWriteTaskRequest();
                    ~ModifyRemoteWriteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>日志主题id</p>
                     * @return TopicId <p>日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p>
                     * @param _topicId <p>日志主题id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态<br>0 关闭 1 开启</p>
                     * @return Enable <p>任务状态<br>0 关闭 1 开启</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>任务状态<br>0 关闭 1 开启</p>
                     * @param _enable <p>任务状态<br>0 关闭 1 开启</p>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>RemoteWrite任务名称</p>
                     * @return Name <p>RemoteWrite任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>RemoteWrite任务名称</p>
                     * @param _name <p>RemoteWrite任务名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>1 内网 2外网</p>
                     * @return NetType <p>1 内网 2外网</p>
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置<p>1 内网 2外网</p>
                     * @param _netType <p>1 内网 2外网</p>
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>私有网络id</p>
                     * @return VpcId <p>私有网络id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络id</p>
                     * @param _vpcId <p>私有网络id</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>目标服务名称</p>
                     * @return Target <p>目标服务名称</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>目标服务名称</p>
                     * @param _target <p>目标服务名称</p>
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
                     * 获取<p>目标地址</p>
                     * @return RemoteWriteURL <p>目标地址</p>
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置<p>目标地址</p>
                     * @param _remoteWriteURL <p>目标地址</p>
                     * 
                     */
                    void SetRemoteWriteURL(const std::string& _remoteWriteURL);

                    /**
                     * 判断参数 RemoteWriteURL 是否已赋值
                     * @return RemoteWriteURL 是否已赋值
                     * 
                     */
                    bool RemoteWriteURLHasBeenSet() const;

                    /**
                     * 获取<p>0: 无鉴权 1: basic_auth 2: token</p>
                     * @return AuthType <p>0: 无鉴权 1: basic_auth 2: token</p>
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置<p>0: 无鉴权 1: basic_auth 2: token</p>
                     * @param _authType <p>0: 无鉴权 1: basic_auth 2: token</p>
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>鉴权信息</p>
                     * @return AuthInfo <p>鉴权信息</p>
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置<p>鉴权信息</p>
                     * @param _authInfo <p>鉴权信息</p>
                     * 
                     */
                    void SetAuthInfo(const RemoteWriteAuthInfo& _authInfo);

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                    /**
                     * 获取<p>后端服务类型<br>-1 没有<br>0 CVM<br>1025 CLB</p>
                     * @return VirtualGatewayType <p>后端服务类型<br>-1 没有<br>0 CVM<br>1025 CLB</p>
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置<p>后端服务类型<br>-1 没有<br>0 CVM<br>1025 CLB</p>
                     * @param _virtualGatewayType <p>后端服务类型<br>-1 没有<br>0 CVM<br>1025 CLB</p>
                     * 
                     */
                    void SetVirtualGatewayType(const int64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                    /**
                     * 获取<p>云时序数据库实例ID</p>
                     * @return InstanceId <p>云时序数据库实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云时序数据库实例ID</p>
                     * @param _instanceId <p>云时序数据库实例ID</p>
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
                     * 获取<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>任务状态<br>0 关闭 1 开启</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>RemoteWrite任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>1 内网 2外网</p>
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>私有网络id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>目标服务名称</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>目标地址</p>
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * <p>0: 无鉴权 1: basic_auth 2: token</p>
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>鉴权信息</p>
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * <p>后端服务类型<br>-1 没有<br>0 CVM<br>1025 CLB</p>
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * <p>云时序数据库实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1：关闭，2：开启。</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_
