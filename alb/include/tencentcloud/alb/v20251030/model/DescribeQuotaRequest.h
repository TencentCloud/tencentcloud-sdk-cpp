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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeQuota请求参数结构体
                */
                class DescribeQuotaRequest : public AbstractModel
                {
                public:
                    DescribeQuotaRequest();
                    ~DescribeQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配额类型列表。支持同时传入多个配额类型。查询资源级配额时，可配合 ResourceIds 传入对应资源ID；如需返回已使用量和可用量，可在 DisplayFields 中传入 used、available。

枚举说明：
- alb_quota_loadbalancers_num：每个地域可创建的 ALB 实例数。
- alb_quota_targetgroups_num：每个地域可创建的 ALB 目标组数。
- alb_quota_loadbalancer_listeners_num：每个 ALB 实例可创建的监听器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_rules_num：每个 ALB 实例可添加的转发规则数，不计入默认规则，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_certificates_num：每个 ALB 实例可添加的扩展证书数，不计入默认证书，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_targetgroup_num：每个 ALB 实例可绑定的目标组数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_servers_num：每个 ALB 实例可添加的后端服务器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_server_added_num：单个后端服务器 IP 可被添加到 ALB 后端目标组的次数。
- alb_quota_targetgroup_attached_num：每个目标组可被 ALB 转发规则关联的次数，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num：每个目标组支持的后端服务器数，适用于 IP 和端口类型后端，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num_scf：每个目标组支持的 SCF 函数后端数，ResourceIds 填写目标组 ID。
- alb_quota_max_request_timeout：创建监听器时可配置的连接请求最大超时时间。
- alb_quota_max_idle_timeout：创建监听器时可配置的连接空闲最大超时时间。
- alb_quota_listener_certificates_num：单个监听器可添加的证书数量，ResourceIds 填写监听器 ID。
- alb_quota_rule_targetgroups_num：单条转发规则可绑定的目标组数量。
- alb_quota_rule_conditions_num：单条转发规则可添加的匹配条件条目数。
- alb_quota_rule_wildcards_num：单条转发规则可添加的包含通配符的匹配条目数。
- alb_quota_rule_actions_num：单条转发规则可添加的动作条目数。
- alb_quota_cipher_template_listeners_num：单个加密套件模板可关联的监听器数量。
- alb_quota_healthcheck_templates_num：每个地域可创建的健康检查模板数。
- alb_quota_securitygroup_templates_num：单个 ALB 实例支持绑定的安全组数量。
- alb_quota_securitygroup_rules_per_sg_num：单个 ALB 实例中单个安全组支持的规则条目数。
- alb_quota_security_policies_num：每个地域可创建的自定义安全策略数。
                     * @return QuotaTypes 配额类型列表。支持同时传入多个配额类型。查询资源级配额时，可配合 ResourceIds 传入对应资源ID；如需返回已使用量和可用量，可在 DisplayFields 中传入 used、available。

枚举说明：
- alb_quota_loadbalancers_num：每个地域可创建的 ALB 实例数。
- alb_quota_targetgroups_num：每个地域可创建的 ALB 目标组数。
- alb_quota_loadbalancer_listeners_num：每个 ALB 实例可创建的监听器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_rules_num：每个 ALB 实例可添加的转发规则数，不计入默认规则，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_certificates_num：每个 ALB 实例可添加的扩展证书数，不计入默认证书，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_targetgroup_num：每个 ALB 实例可绑定的目标组数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_servers_num：每个 ALB 实例可添加的后端服务器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_server_added_num：单个后端服务器 IP 可被添加到 ALB 后端目标组的次数。
- alb_quota_targetgroup_attached_num：每个目标组可被 ALB 转发规则关联的次数，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num：每个目标组支持的后端服务器数，适用于 IP 和端口类型后端，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num_scf：每个目标组支持的 SCF 函数后端数，ResourceIds 填写目标组 ID。
- alb_quota_max_request_timeout：创建监听器时可配置的连接请求最大超时时间。
- alb_quota_max_idle_timeout：创建监听器时可配置的连接空闲最大超时时间。
- alb_quota_listener_certificates_num：单个监听器可添加的证书数量，ResourceIds 填写监听器 ID。
- alb_quota_rule_targetgroups_num：单条转发规则可绑定的目标组数量。
- alb_quota_rule_conditions_num：单条转发规则可添加的匹配条件条目数。
- alb_quota_rule_wildcards_num：单条转发规则可添加的包含通配符的匹配条目数。
- alb_quota_rule_actions_num：单条转发规则可添加的动作条目数。
- alb_quota_cipher_template_listeners_num：单个加密套件模板可关联的监听器数量。
- alb_quota_healthcheck_templates_num：每个地域可创建的健康检查模板数。
- alb_quota_securitygroup_templates_num：单个 ALB 实例支持绑定的安全组数量。
- alb_quota_securitygroup_rules_per_sg_num：单个 ALB 实例中单个安全组支持的规则条目数。
- alb_quota_security_policies_num：每个地域可创建的自定义安全策略数。
                     * 
                     */
                    std::vector<std::string> GetQuotaTypes() const;

                    /**
                     * 设置配额类型列表。支持同时传入多个配额类型。查询资源级配额时，可配合 ResourceIds 传入对应资源ID；如需返回已使用量和可用量，可在 DisplayFields 中传入 used、available。

枚举说明：
- alb_quota_loadbalancers_num：每个地域可创建的 ALB 实例数。
- alb_quota_targetgroups_num：每个地域可创建的 ALB 目标组数。
- alb_quota_loadbalancer_listeners_num：每个 ALB 实例可创建的监听器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_rules_num：每个 ALB 实例可添加的转发规则数，不计入默认规则，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_certificates_num：每个 ALB 实例可添加的扩展证书数，不计入默认证书，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_targetgroup_num：每个 ALB 实例可绑定的目标组数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_servers_num：每个 ALB 实例可添加的后端服务器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_server_added_num：单个后端服务器 IP 可被添加到 ALB 后端目标组的次数。
- alb_quota_targetgroup_attached_num：每个目标组可被 ALB 转发规则关联的次数，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num：每个目标组支持的后端服务器数，适用于 IP 和端口类型后端，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num_scf：每个目标组支持的 SCF 函数后端数，ResourceIds 填写目标组 ID。
- alb_quota_max_request_timeout：创建监听器时可配置的连接请求最大超时时间。
- alb_quota_max_idle_timeout：创建监听器时可配置的连接空闲最大超时时间。
- alb_quota_listener_certificates_num：单个监听器可添加的证书数量，ResourceIds 填写监听器 ID。
- alb_quota_rule_targetgroups_num：单条转发规则可绑定的目标组数量。
- alb_quota_rule_conditions_num：单条转发规则可添加的匹配条件条目数。
- alb_quota_rule_wildcards_num：单条转发规则可添加的包含通配符的匹配条目数。
- alb_quota_rule_actions_num：单条转发规则可添加的动作条目数。
- alb_quota_cipher_template_listeners_num：单个加密套件模板可关联的监听器数量。
- alb_quota_healthcheck_templates_num：每个地域可创建的健康检查模板数。
- alb_quota_securitygroup_templates_num：单个 ALB 实例支持绑定的安全组数量。
- alb_quota_securitygroup_rules_per_sg_num：单个 ALB 实例中单个安全组支持的规则条目数。
- alb_quota_security_policies_num：每个地域可创建的自定义安全策略数。
                     * @param _quotaTypes 配额类型列表。支持同时传入多个配额类型。查询资源级配额时，可配合 ResourceIds 传入对应资源ID；如需返回已使用量和可用量，可在 DisplayFields 中传入 used、available。

枚举说明：
- alb_quota_loadbalancers_num：每个地域可创建的 ALB 实例数。
- alb_quota_targetgroups_num：每个地域可创建的 ALB 目标组数。
- alb_quota_loadbalancer_listeners_num：每个 ALB 实例可创建的监听器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_rules_num：每个 ALB 实例可添加的转发规则数，不计入默认规则，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_certificates_num：每个 ALB 实例可添加的扩展证书数，不计入默认证书，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_targetgroup_num：每个 ALB 实例可绑定的目标组数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_servers_num：每个 ALB 实例可添加的后端服务器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_server_added_num：单个后端服务器 IP 可被添加到 ALB 后端目标组的次数。
- alb_quota_targetgroup_attached_num：每个目标组可被 ALB 转发规则关联的次数，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num：每个目标组支持的后端服务器数，适用于 IP 和端口类型后端，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num_scf：每个目标组支持的 SCF 函数后端数，ResourceIds 填写目标组 ID。
- alb_quota_max_request_timeout：创建监听器时可配置的连接请求最大超时时间。
- alb_quota_max_idle_timeout：创建监听器时可配置的连接空闲最大超时时间。
- alb_quota_listener_certificates_num：单个监听器可添加的证书数量，ResourceIds 填写监听器 ID。
- alb_quota_rule_targetgroups_num：单条转发规则可绑定的目标组数量。
- alb_quota_rule_conditions_num：单条转发规则可添加的匹配条件条目数。
- alb_quota_rule_wildcards_num：单条转发规则可添加的包含通配符的匹配条目数。
- alb_quota_rule_actions_num：单条转发规则可添加的动作条目数。
- alb_quota_cipher_template_listeners_num：单个加密套件模板可关联的监听器数量。
- alb_quota_healthcheck_templates_num：每个地域可创建的健康检查模板数。
- alb_quota_securitygroup_templates_num：单个 ALB 实例支持绑定的安全组数量。
- alb_quota_securitygroup_rules_per_sg_num：单个 ALB 实例中单个安全组支持的规则条目数。
- alb_quota_security_policies_num：每个地域可创建的自定义安全策略数。
                     * 
                     */
                    void SetQuotaTypes(const std::vector<std::string>& _quotaTypes);

                    /**
                     * 判断参数 QuotaTypes 是否已赋值
                     * @return QuotaTypes 是否已赋值
                     * 
                     */
                    bool QuotaTypesHasBeenSet() const;

                    /**
                     * 获取显示字段列表，用于控制是否额外返回用量信息。支持 used、available：used 表示返回当前已使用量，available 表示返回当前剩余可用量。QuotaType 和 Limit 总是返回；ResourceId 会在请求传入 ResourceIds 时返回。
                     * @return DisplayFields 显示字段列表，用于控制是否额外返回用量信息。支持 used、available：used 表示返回当前已使用量，available 表示返回当前剩余可用量。QuotaType 和 Limit 总是返回；ResourceId 会在请求传入 ResourceIds 时返回。
                     * 
                     */
                    std::vector<std::string> GetDisplayFields() const;

                    /**
                     * 设置显示字段列表，用于控制是否额外返回用量信息。支持 used、available：used 表示返回当前已使用量，available 表示返回当前剩余可用量。QuotaType 和 Limit 总是返回；ResourceId 会在请求传入 ResourceIds 时返回。
                     * @param _displayFields 显示字段列表，用于控制是否额外返回用量信息。支持 used、available：used 表示返回当前已使用量，available 表示返回当前剩余可用量。QuotaType 和 Limit 总是返回；ResourceId 会在请求传入 ResourceIds 时返回。
                     * 
                     */
                    void SetDisplayFields(const std::vector<std::string>& _displayFields);

                    /**
                     * 判断参数 DisplayFields 是否已赋值
                     * @return DisplayFields 是否已赋值
                     * 
                     */
                    bool DisplayFieldsHasBeenSet() const;

                    /**
                     * 获取资源ID列表。用于查询具体资源维度的配额和用量；不传时查询账号或地域维度的默认配额配置。资源ID的类型由 QuotaTypes 决定，例如 ALB 实例级配额填写 ALB 实例 ID，监听器级配额填写监听器 ID，目标组级配额填写目标组 ID。
                     * @return ResourceIds 资源ID列表。用于查询具体资源维度的配额和用量；不传时查询账号或地域维度的默认配额配置。资源ID的类型由 QuotaTypes 决定，例如 ALB 实例级配额填写 ALB 实例 ID，监听器级配额填写监听器 ID，目标组级配额填写目标组 ID。
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID列表。用于查询具体资源维度的配额和用量；不传时查询账号或地域维度的默认配额配置。资源ID的类型由 QuotaTypes 决定，例如 ALB 实例级配额填写 ALB 实例 ID，监听器级配额填写监听器 ID，目标组级配额填写目标组 ID。
                     * @param _resourceIds 资源ID列表。用于查询具体资源维度的配额和用量；不传时查询账号或地域维度的默认配额配置。资源ID的类型由 QuotaTypes 决定，例如 ALB 实例级配额填写 ALB 实例 ID，监听器级配额填写监听器 ID，目标组级配额填写目标组 ID。
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 配额类型列表。支持同时传入多个配额类型。查询资源级配额时，可配合 ResourceIds 传入对应资源ID；如需返回已使用量和可用量，可在 DisplayFields 中传入 used、available。

枚举说明：
- alb_quota_loadbalancers_num：每个地域可创建的 ALB 实例数。
- alb_quota_targetgroups_num：每个地域可创建的 ALB 目标组数。
- alb_quota_loadbalancer_listeners_num：每个 ALB 实例可创建的监听器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_rules_num：每个 ALB 实例可添加的转发规则数，不计入默认规则，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_certificates_num：每个 ALB 实例可添加的扩展证书数，不计入默认证书，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_targetgroup_num：每个 ALB 实例可绑定的目标组数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_loadbalancer_servers_num：每个 ALB 实例可添加的后端服务器数，ResourceIds 填写 ALB 实例 ID。
- alb_quota_server_added_num：单个后端服务器 IP 可被添加到 ALB 后端目标组的次数。
- alb_quota_targetgroup_attached_num：每个目标组可被 ALB 转发规则关联的次数，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num：每个目标组支持的后端服务器数，适用于 IP 和端口类型后端，ResourceIds 填写目标组 ID。
- alb_quota_targetgroup_targets_num_scf：每个目标组支持的 SCF 函数后端数，ResourceIds 填写目标组 ID。
- alb_quota_max_request_timeout：创建监听器时可配置的连接请求最大超时时间。
- alb_quota_max_idle_timeout：创建监听器时可配置的连接空闲最大超时时间。
- alb_quota_listener_certificates_num：单个监听器可添加的证书数量，ResourceIds 填写监听器 ID。
- alb_quota_rule_targetgroups_num：单条转发规则可绑定的目标组数量。
- alb_quota_rule_conditions_num：单条转发规则可添加的匹配条件条目数。
- alb_quota_rule_wildcards_num：单条转发规则可添加的包含通配符的匹配条目数。
- alb_quota_rule_actions_num：单条转发规则可添加的动作条目数。
- alb_quota_cipher_template_listeners_num：单个加密套件模板可关联的监听器数量。
- alb_quota_healthcheck_templates_num：每个地域可创建的健康检查模板数。
- alb_quota_securitygroup_templates_num：单个 ALB 实例支持绑定的安全组数量。
- alb_quota_securitygroup_rules_per_sg_num：单个 ALB 实例中单个安全组支持的规则条目数。
- alb_quota_security_policies_num：每个地域可创建的自定义安全策略数。
                     */
                    std::vector<std::string> m_quotaTypes;
                    bool m_quotaTypesHasBeenSet;

                    /**
                     * 显示字段列表，用于控制是否额外返回用量信息。支持 used、available：used 表示返回当前已使用量，available 表示返回当前剩余可用量。QuotaType 和 Limit 总是返回；ResourceId 会在请求传入 ResourceIds 时返回。
                     */
                    std::vector<std::string> m_displayFields;
                    bool m_displayFieldsHasBeenSet;

                    /**
                     * 资源ID列表。用于查询具体资源维度的配额和用量；不传时查询账号或地域维度的默认配额配置。资源ID的类型由 QuotaTypes 决定，例如 ALB 实例级配额填写 ALB 实例 ID，监听器级配额填写监听器 ID，目标组级配额填写目标组 ID。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_
