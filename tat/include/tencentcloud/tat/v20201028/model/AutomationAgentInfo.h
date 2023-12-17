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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 自动化助手客户端信息
                */
                class AutomationAgentInfo : public AbstractModel
                {
                public:
                    AutomationAgentInfo();
                    ~AutomationAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取Agent 版本号。
                     * @return Version Agent 版本号。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Agent 版本号。
                     * @param _version Agent 版本号。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取上次心跳时间
                     * @return LastHeartbeatTime 上次心跳时间
                     * 
                     */
                    std::string GetLastHeartbeatTime() const;

                    /**
                     * 设置上次心跳时间
                     * @param _lastHeartbeatTime 上次心跳时间
                     * 
                     */
                    void SetLastHeartbeatTime(const std::string& _lastHeartbeatTime);

                    /**
                     * 判断参数 LastHeartbeatTime 是否已赋值
                     * @return LastHeartbeatTime 是否已赋值
                     * 
                     */
                    bool LastHeartbeatTimeHasBeenSet() const;

                    /**
                     * 获取Agent状态，取值范围：
Online：在线，Offline：离线

                     * @return AgentStatus Agent状态，取值范围：
Online：在线，Offline：离线

                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置Agent状态，取值范围：
Online：在线，Offline：离线

                     * @param _agentStatus Agent状态，取值范围：
Online：在线，Offline：离线

                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取Agent运行环境，取值范围：Linux：Linux实例Windows：Windows实例
                     * @return Environment Agent运行环境，取值范围：Linux：Linux实例Windows：Windows实例
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Agent运行环境，取值范围：Linux：Linux实例Windows：Windows实例
                     * @param _environment Agent运行环境，取值范围：Linux：Linux实例Windows：Windows实例
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Agent 支持的功能列表。
                     * @return SupportFeatures Agent 支持的功能列表。
                     * 
                     */
                    std::vector<std::string> GetSupportFeatures() const;

                    /**
                     * 设置Agent 支持的功能列表。
                     * @param _supportFeatures Agent 支持的功能列表。
                     * 
                     */
                    void SetSupportFeatures(const std::vector<std::string>& _supportFeatures);

                    /**
                     * 判断参数 SupportFeatures 是否已赋值
                     * @return SupportFeatures 是否已赋值
                     * 
                     */
                    bool SupportFeaturesHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent 版本号。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 上次心跳时间
                     */
                    std::string m_lastHeartbeatTime;
                    bool m_lastHeartbeatTimeHasBeenSet;

                    /**
                     * Agent状态，取值范围：
Online：在线，Offline：离线

                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * Agent运行环境，取值范围：Linux：Linux实例Windows：Windows实例
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Agent 支持的功能列表。
                     */
                    std::vector<std::string> m_supportFeatures;
                    bool m_supportFeaturesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_
