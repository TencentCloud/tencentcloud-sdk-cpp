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
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
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
                     * 获取日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 日志主题ID
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
                     * 获取Remote Write任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Remote Write任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Remote Write任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Remote Write任务名称
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
                     * 获取网络类型
1: 内网
2:外网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetType 网络类型
1: 内网
2:外网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置网络类型
1: 内网
2:外网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netType 网络类型
1: 内网
2:外网
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
                     * 获取私有网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 私有网络id
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
                     * 获取任务运行状态
1: 运行中
2:暂停
3: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务运行状态
1: 运行中
2:暂停
3: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务运行状态
1: 运行中
2:暂停
3: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务运行状态
1: 运行中
2:暂停
3: 失败
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取目标服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Target 目标服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _target 目标服务名称
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
                     * 获取目标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteWriteURL 目标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteWriteURL() const;

                    /**
                     * 设置目标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteWriteURL 目标地址
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
                     * 获取鉴权类型
0: 无鉴权 1: basic_auth 2: token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType 鉴权类型
0: 无鉴权 1: basic_auth 2: token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置鉴权类型
0: 无鉴权 1: basic_auth 2: token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType 鉴权类型
0: 无鉴权 1: basic_auth 2: token
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
                     * 获取鉴权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthInfo 鉴权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoteWriteAuthInfo GetAuthInfo() const;

                    /**
                     * 设置鉴权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authInfo 鉴权信息
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
                     * 获取日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetId 日志集
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
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 任务状态
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
                     * 获取后端服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualGatewayType 后端服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVirtualGatewayType() const;

                    /**
                     * 设置后端服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualGatewayType 后端服务类型
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

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Remote Write任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网络类型
1: 内网
2:外网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 私有网络id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 任务运行状态
1: 运行中
2:暂停
3: 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 目标服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 目标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteWriteURL;
                    bool m_remoteWriteURLHasBeenSet;

                    /**
                     * 鉴权类型
0: 无鉴权 1: basic_auth 2: token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 鉴权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoteWriteAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * 日志集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 后端服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_REMOTEWRITEINFO_H_
