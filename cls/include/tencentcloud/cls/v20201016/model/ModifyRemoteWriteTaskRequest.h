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
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
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
                     * 获取任务状态
0 关闭 1 开启
                     * @return Enable 任务状态
0 关闭 1 开启
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置任务状态
0 关闭 1 开启
                     * @param _enable 任务状态
0 关闭 1 开启
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
                     * 获取RemoteWrite任务名称
                     * @return Name RemoteWrite任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置RemoteWrite任务名称
                     * @param _name RemoteWrite任务名称
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
                     * 获取1 内网 2外网
                     * @return NetType 1 内网 2外网
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置1 内网 2外网
                     * @param _netType 1 内网 2外网
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
                     * 获取私有网络id
                     * @return VpcId 私有网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络id
                     * @param _vpcId 私有网络id
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
                     * 获取目标服务名称
                     * @return Target 目标服务名称
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标服务名称
                     * @param _target 目标服务名称
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
                     * 获取目标地址
                     * @return RemoteWriteURL 目标地址
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置目标地址
                     * @param _remoteWriteURL 目标地址
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
                     * 获取0: 无鉴权 1: basic_auth 2: token	
                     * @return AuthType 0: 无鉴权 1: basic_auth 2: token	
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置0: 无鉴权 1: basic_auth 2: token	
                     * @param _authType 0: 无鉴权 1: basic_auth 2: token	
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
                     * 获取鉴权信息
                     * @return AuthInfo 鉴权信息
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置鉴权信息
                     * @param _authInfo 鉴权信息
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
                     * 获取后端服务类型
-1 没有
0 CVM
1025 CLB
                     * @return VirtualGatewayType 后端服务类型
-1 没有
0 CVM
1025 CLB
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置后端服务类型
-1 没有
0 CVM
1025 CLB
                     * @param _virtualGatewayType 后端服务类型
-1 没有
0 CVM
1025 CLB
                     * 
                     */
                    void SetVirtualGatewayType(const int64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 任务状态
0 关闭 1 开启
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * RemoteWrite任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 1 内网 2外网
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 私有网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 目标服务名称
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 目标地址
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * 0: 无鉴权 1: basic_auth 2: token	
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 鉴权信息
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * 后端服务类型
-1 没有
0 CVM
1025 CLB
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYREMOTEWRITETASKREQUEST_H_
