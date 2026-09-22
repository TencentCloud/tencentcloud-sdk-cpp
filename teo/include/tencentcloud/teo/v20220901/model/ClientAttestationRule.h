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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/DeviceProfile.h>
#include <tencentcloud/teo/v20220901/model/AccountProtectionSettings.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 客户端认证规则
                */
                class ClientAttestationRule : public AbstractModel
                {
                public:
                    ClientAttestationRule();
                    ~ClientAttestationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li></p>
                     * @return Id <p>客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li></p>
                     * @param _id <p>客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li></p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>客户端认证规则的名称。</p>
                     * @return Name <p>客户端认证规则的名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>客户端认证规则的名称。</p>
                     * @param _name <p>客户端认证规则的名称。</p>
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
                     * 获取<p>规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * @return Enabled <p>规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * @param _enabled <p>规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。</p>
                     * @return Priority <p>规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。</p>
                     * @param _priority <p>规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * @return Condition <p>规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * @param _condition <p>规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>客户端认证选项 ID。</p>
                     * @return AttesterId <p>客户端认证选项 ID。</p>
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置<p>客户端认证选项 ID。</p>
                     * @param _attesterId <p>客户端认证选项 ID。</p>
                     * 
                     */
                    void SetAttesterId(const std::string& _attesterId);

                    /**
                     * 判断参数 AttesterId 是否已赋值
                     * @return AttesterId 是否已赋值
                     * 
                     */
                    bool AttesterIdHasBeenSet() const;

                    /**
                     * 获取<p>客户端认证未通过的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge、ManagedChallenge、InterstitialChallenge 和 InlineChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * @return InvalidAttestationAction <p>客户端认证未通过的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge、ManagedChallenge、InterstitialChallenge 和 InlineChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * 
                     */
                    SecurityAction GetInvalidAttestationAction() const;

                    /**
                     * 设置<p>客户端认证未通过的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge、ManagedChallenge、InterstitialChallenge 和 InlineChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * @param _invalidAttestationAction <p>客户端认证未通过的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge、ManagedChallenge、InterstitialChallenge 和 InlineChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * 
                     */
                    void SetInvalidAttestationAction(const SecurityAction& _invalidAttestationAction);

                    /**
                     * 判断参数 InvalidAttestationAction 是否已赋值
                     * @return InvalidAttestationAction 是否已赋值
                     * 
                     */
                    bool InvalidAttestationActionHasBeenSet() const;

                    /**
                     * 获取<p>客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。</p>
                     * @return DeviceProfiles <p>客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。</p>
                     * 
                     */
                    std::vector<DeviceProfile> GetDeviceProfiles() const;

                    /**
                     * 设置<p>客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。</p>
                     * @param _deviceProfiles <p>客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。</p>
                     * 
                     */
                    void SetDeviceProfiles(const std::vector<DeviceProfile>& _deviceProfiles);

                    /**
                     * 判断参数 DeviceProfiles 是否已赋值
                     * @return DeviceProfiles 是否已赋值
                     * 
                     */
                    bool DeviceProfilesHasBeenSet() const;

                    /**
                     * 获取<p>账号保护配置。</p>
                     * @return AccountProtectionSettings <p>账号保护配置。</p>
                     * 
                     */
                    AccountProtectionSettings GetAccountProtectionSettings() const;

                    /**
                     * 设置<p>账号保护配置。</p>
                     * @param _accountProtectionSettings <p>账号保护配置。</p>
                     * 
                     */
                    void SetAccountProtectionSettings(const AccountProtectionSettings& _accountProtectionSettings);

                    /**
                     * 判断参数 AccountProtectionSettings 是否已赋值
                     * @return AccountProtectionSettings 是否已赋值
                     * 
                     */
                    bool AccountProtectionSettingsHasBeenSet() const;

                private:

                    /**
                     * <p>客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>客户端认证规则的名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>客户端认证选项 ID。</p>
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                    /**
                     * <p>客户端认证未通过的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 BlockIp、ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge、ManagedChallenge、InterstitialChallenge 和 InlineChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     */
                    SecurityAction m_invalidAttestationAction;
                    bool m_invalidAttestationActionHasBeenSet;

                    /**
                     * <p>客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。</p>
                     */
                    std::vector<DeviceProfile> m_deviceProfiles;
                    bool m_deviceProfilesHasBeenSet;

                    /**
                     * <p>账号保护配置。</p>
                     */
                    AccountProtectionSettings m_accountProtectionSettings;
                    bool m_accountProtectionSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
