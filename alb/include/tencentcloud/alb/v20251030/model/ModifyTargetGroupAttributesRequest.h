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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HealthCheckConfig.h>
#include <tencentcloud/alb/v20251030/model/StickySessionConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttributes请求参数结构体
                */
                class ModifyTargetGroupAttributesRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributesRequest();
                    ~ModifyTargetGroupAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改目标组。
- **true**：发送预览请求，检查修改目标组的参数、格式、业务限制等是否符合要求。
                     * @return DryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改目标组。
- **true**：发送预览请求，检查修改目标组的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改目标组。
- **true**：发送预览请求，检查修改目标组的参数、格式、业务限制等是否符合要求。
                     * @param _dryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改目标组。
- **true**：发送预览请求，检查修改目标组的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取健康检查配置。

                     * @return HealthCheckConfig 健康检查配置。

                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置健康检查配置。

                     * @param _healthCheckConfig 健康检查配置。

                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                    /**
                     * 获取是否开启长连接。
                     * @return KeepaliveEnabled 是否开启长连接。
                     * 
                     */
                    bool GetKeepaliveEnabled() const;

                    /**
                     * 设置是否开启长连接。
                     * @param _keepaliveEnabled 是否开启长连接。
                     * 
                     */
                    void SetKeepaliveEnabled(const bool& _keepaliveEnabled);

                    /**
                     * 判断参数 KeepaliveEnabled 是否已赋值
                     * @return KeepaliveEnabled 是否已赋值
                     * 
                     */
                    bool KeepaliveEnabledHasBeenSet() const;

                    /**
                     * 获取调度算法。取值：
- **wrr**：加权轮训，按照权重选择后端服务器，权重越高的服务器被轮训到的概率越高。
- **wlc**：加权最小连接数，当不同后端服务器权重值相同时，当前连接数越小的后端服务器被轮询到的概率越高。
                     * @return SchedulerAlgorithm 调度算法。取值：
- **wrr**：加权轮训，按照权重选择后端服务器，权重越高的服务器被轮训到的概率越高。
- **wlc**：加权最小连接数，当不同后端服务器权重值相同时，当前连接数越小的后端服务器被轮询到的概率越高。
                     * 
                     */
                    std::string GetSchedulerAlgorithm() const;

                    /**
                     * 设置调度算法。取值：
- **wrr**：加权轮训，按照权重选择后端服务器，权重越高的服务器被轮训到的概率越高。
- **wlc**：加权最小连接数，当不同后端服务器权重值相同时，当前连接数越小的后端服务器被轮询到的概率越高。
                     * @param _schedulerAlgorithm 调度算法。取值：
- **wrr**：加权轮训，按照权重选择后端服务器，权重越高的服务器被轮训到的概率越高。
- **wlc**：加权最小连接数，当不同后端服务器权重值相同时，当前连接数越小的后端服务器被轮询到的概率越高。
                     * 
                     */
                    void SetSchedulerAlgorithm(const std::string& _schedulerAlgorithm);

                    /**
                     * 判断参数 SchedulerAlgorithm 是否已赋值
                     * @return SchedulerAlgorithm 是否已赋值
                     * 
                     */
                    bool SchedulerAlgorithmHasBeenSet() const;

                    /**
                     * 获取会话保持配置。
                     * @return StickySessionConfig 会话保持配置。
                     * 
                     */
                    StickySessionConfig GetStickySessionConfig() const;

                    /**
                     * 设置会话保持配置。
                     * @param _stickySessionConfig 会话保持配置。
                     * 
                     */
                    void SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig);

                    /**
                     * 判断参数 StickySessionConfig 是否已赋值
                     * @return StickySessionConfig 是否已赋值
                     * 
                     */
                    bool StickySessionConfigHasBeenSet() const;

                    /**
                     * 获取目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组名称。长度为 1~255 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。不传目标组名称时默认使用ID作为目标组名称。
                     * @return TargetGroupName 目标组名称。长度为 1~255 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。不传目标组名称时默认使用ID作为目标组名称。
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组名称。长度为 1~255 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。不传目标组名称时默认使用ID作为目标组名称。
                     * @param _targetGroupName 目标组名称。长度为 1~255 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。不传目标组名称时默认使用ID作为目标组名称。
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                private:

                    /**
                     * 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改目标组。
- **true**：发送预览请求，检查修改目标组的参数、格式、业务限制等是否符合要求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 健康检查配置。

                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * 是否开启长连接。
                     */
                    bool m_keepaliveEnabled;
                    bool m_keepaliveEnabledHasBeenSet;

                    /**
                     * 调度算法。取值：
- **wrr**：加权轮训，按照权重选择后端服务器，权重越高的服务器被轮训到的概率越高。
- **wlc**：加权最小连接数，当不同后端服务器权重值相同时，当前连接数越小的后端服务器被轮询到的概率越高。
                     */
                    std::string m_schedulerAlgorithm;
                    bool m_schedulerAlgorithmHasBeenSet;

                    /**
                     * 会话保持配置。
                     */
                    StickySessionConfig m_stickySessionConfig;
                    bool m_stickySessionConfigHasBeenSet;

                    /**
                     * 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组名称。长度为 1~255 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。不传目标组名称时默认使用ID作为目标组名称。
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYTARGETGROUPATTRIBUTESREQUEST_H_
