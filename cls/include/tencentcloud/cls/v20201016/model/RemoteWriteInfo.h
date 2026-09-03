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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RemoteWrite配置信息
                */
                class RemoteWriteInfo : public AbstractModel
                {
                public:
                    RemoteWriteInfo();
                    ~RemoteWriteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId <p>日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId <p>日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Remote Write任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>Remote Write任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Remote Write任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>Remote Write任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>网络类型<br>1: 内网<br>2:外网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetType <p>网络类型<br>1: 内网<br>2:外网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置<p>网络类型<br>1: 内网<br>2:外网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netType <p>网络类型<br>1: 内网<br>2:外网</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>私有网络id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>私有网络id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>任务运行状态<br>1: 运行中<br>2:暂停<br>3: 失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务运行状态<br>1: 运行中<br>2:暂停<br>3: 失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务运行状态<br>1: 运行中<br>2:暂停<br>3: 失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>任务运行状态<br>1: 运行中<br>2:暂停<br>3: 失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>目标服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Target <p>目标服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>目标服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _target <p>目标服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteWriteURL <p>目标地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置<p>目标地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteWriteURL <p>目标地址</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>鉴权类型<br>0: 无鉴权 1: basic_auth 2: token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType <p>鉴权类型<br>0: 无鉴权 1: basic_auth 2: token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置<p>鉴权类型<br>0: 无鉴权 1: basic_auth 2: token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType <p>鉴权类型<br>0: 无鉴权 1: basic_auth 2: token</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthInfo <p>鉴权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置<p>鉴权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authInfo <p>鉴权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>日志集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId <p>日志集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetId <p>日志集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>后端服务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualGatewayType <p>后端服务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置<p>后端服务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualGatewayType <p>后端服务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>云时序数据库实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云时序数据库实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>云时序数据库实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1：关闭，2：开启。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasServicesLog <p>是否开启投递服务日志。1：关闭，2：开启。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Remote Write任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>网络类型<br>1: 内网<br>2:外网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>私有网络id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>任务运行状态<br>1: 运行中<br>2:暂停<br>3: 失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>目标服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>目标地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * <p>鉴权类型<br>0: 无鉴权 1: basic_auth 2: token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>鉴权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * <p>日志集</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>后端服务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * <p>云时序数据库实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1：关闭，2：开启。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_
