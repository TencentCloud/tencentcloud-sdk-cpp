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
#include <tencentcloud/teo/v20220901/model/DeviceProfile.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


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
                     * 获取客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li>
                     * @return Id 客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li>
                     * @param _id 客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li>
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
                     * 获取客户端认证规则的名称。
                     * @return Name 客户端认证规则的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置客户端认证规则的名称。
                     * @param _name 客户端认证规则的名称。
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
                     * 获取规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled 规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled 规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
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
                     * 获取规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * @return Priority 规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * @param _priority 规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
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
                     * 获取规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @return Condition 规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @param _condition 规则的具体内容，需符合表达式语法，详细规范参见产品文档。
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
                     * 获取客户端认证选项 ID。
                     * @return AttesterId 客户端认证选项 ID。
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置客户端认证选项 ID。
                     * @param _attesterId 客户端认证选项 ID。
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
                     * 获取客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。
                     * @return DeviceProfiles 客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。
                     * 
                     */
                    std::vector<DeviceProfile> GetDeviceProfiles() const;

                    /**
                     * 设置客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。
                     * @param _deviceProfiles 客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。
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
                     * 获取客户端认证未通过的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @return InvalidAttestationAction 客户端认证未通过的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    SecurityAction GetInvalidAttestationAction() const;

                    /**
                     * 设置客户端认证未通过的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @param _invalidAttestationAction 客户端认证未通过的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    void SetInvalidAttestationAction(const SecurityAction& _invalidAttestationAction);

                    /**
                     * 判断参数 InvalidAttestationAction 是否已赋值
                     * @return InvalidAttestationAction 是否已赋值
                     * 
                     */
                    bool InvalidAttestationActionHasBeenSet() const;

                private:

                    /**
                     * 客户端认证规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：BotManagement 参数中，ClientAttestationRule 列表中未包含的已有规则将被删除。</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端认证规则的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 规则的优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 客户端认证选项 ID。
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                    /**
                     * 客户端设备配置。若 ClientAttestationRules 参数中，未指定 DeviceProfiles 参数值：保持已有客户端设备配置，不做修改。
                     */
                    std::vector<DeviceProfile> m_deviceProfiles;
                    bool m_deviceProfilesHasBeenSet;

                    /**
                     * 客户端认证未通过的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     */
                    SecurityAction m_invalidAttestationAction;
                    bool m_invalidAttestationActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTATIONRULE_H_
