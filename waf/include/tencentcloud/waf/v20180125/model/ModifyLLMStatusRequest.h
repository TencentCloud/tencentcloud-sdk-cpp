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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMStatus请求参数结构体
                */
                class ModifyLLMStatusRequest : public AbstractModel
                {
                public:
                    ModifyLLMStatusRequest();
                    ~ModifyLLMStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开关状态。true：开启，false：关闭。</p>
                     * @return Status <p>开关状态。true：开启，false：关闭。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>开关状态。true：开启，false：关闭。</p>
                     * @param _status <p>开关状态。true：开启，false：关闭。</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>需要操作的域名或者serviceid</p>
                     * @return Domain <p>需要操作的域名或者serviceid</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>需要操作的域名或者serviceid</p>
                     * @param _domain <p>需要操作的域名或者serviceid</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>开关类型，用于指定要操作的防护模块开关。取值如下：<br>1：防护总开关，控制大模型防护功能的全局开启/关闭。<br>2：算力消耗防护规则开关，控制算力消耗限制功能的开启/关闭。<br>3：自定义防护规则开关，控制内容安全自定义规则功能的开启/关闭。<br>4：ToolCall 防护开关，控制工具调用安全检测功能的开启/关闭。<br>5：提示词攻击防护开关，控制提示词注入/越狱攻击检测功能的开启/关闭。<br>6：内容合规检测开关，控制输入输出内容合规检测功能的开启/关闭。<br>7：敏感数据检测开关，控制敏感信息泄露检测（DLP）功能的开启/关闭。<br>8：Skill 安全检测开关，控制 Skill/Plugin 调用安全检测功能的开启/关闭。<br>9：意图行为检测开关，控制用户意图识别与行为检测功能的开启/关闭。<br>10：恶意URL检测开关，控制响应中恶意链接检测功能的开启/关闭。</p>
                     * @return SwitchType <p>开关类型，用于指定要操作的防护模块开关。取值如下：<br>1：防护总开关，控制大模型防护功能的全局开启/关闭。<br>2：算力消耗防护规则开关，控制算力消耗限制功能的开启/关闭。<br>3：自定义防护规则开关，控制内容安全自定义规则功能的开启/关闭。<br>4：ToolCall 防护开关，控制工具调用安全检测功能的开启/关闭。<br>5：提示词攻击防护开关，控制提示词注入/越狱攻击检测功能的开启/关闭。<br>6：内容合规检测开关，控制输入输出内容合规检测功能的开启/关闭。<br>7：敏感数据检测开关，控制敏感信息泄露检测（DLP）功能的开启/关闭。<br>8：Skill 安全检测开关，控制 Skill/Plugin 调用安全检测功能的开启/关闭。<br>9：意图行为检测开关，控制用户意图识别与行为检测功能的开启/关闭。<br>10：恶意URL检测开关，控制响应中恶意链接检测功能的开启/关闭。</p>
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置<p>开关类型，用于指定要操作的防护模块开关。取值如下：<br>1：防护总开关，控制大模型防护功能的全局开启/关闭。<br>2：算力消耗防护规则开关，控制算力消耗限制功能的开启/关闭。<br>3：自定义防护规则开关，控制内容安全自定义规则功能的开启/关闭。<br>4：ToolCall 防护开关，控制工具调用安全检测功能的开启/关闭。<br>5：提示词攻击防护开关，控制提示词注入/越狱攻击检测功能的开启/关闭。<br>6：内容合规检测开关，控制输入输出内容合规检测功能的开启/关闭。<br>7：敏感数据检测开关，控制敏感信息泄露检测（DLP）功能的开启/关闭。<br>8：Skill 安全检测开关，控制 Skill/Plugin 调用安全检测功能的开启/关闭。<br>9：意图行为检测开关，控制用户意图识别与行为检测功能的开启/关闭。<br>10：恶意URL检测开关，控制响应中恶意链接检测功能的开启/关闭。</p>
                     * @param _switchType <p>开关类型，用于指定要操作的防护模块开关。取值如下：<br>1：防护总开关，控制大模型防护功能的全局开启/关闭。<br>2：算力消耗防护规则开关，控制算力消耗限制功能的开启/关闭。<br>3：自定义防护规则开关，控制内容安全自定义规则功能的开启/关闭。<br>4：ToolCall 防护开关，控制工具调用安全检测功能的开启/关闭。<br>5：提示词攻击防护开关，控制提示词注入/越狱攻击检测功能的开启/关闭。<br>6：内容合规检测开关，控制输入输出内容合规检测功能的开启/关闭。<br>7：敏感数据检测开关，控制敏感信息泄露检测（DLP）功能的开启/关闭。<br>8：Skill 安全检测开关，控制 Skill/Plugin 调用安全检测功能的开启/关闭。<br>9：意图行为检测开关，控制用户意图识别与行为检测功能的开启/关闭。<br>10：恶意URL检测开关，控制响应中恶意链接检测功能的开启/关闭。</p>
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取<p>WAF 实例 ID，表示当前操作所属的 WAF 实例。可通过 DescribeInstances 接口获取。</p>
                     * @return InstanceId <p>WAF 实例 ID，表示当前操作所属的 WAF 实例。可通过 DescribeInstances 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>WAF 实例 ID，表示当前操作所属的 WAF 实例。可通过 DescribeInstances 接口获取。</p>
                     * @param _instanceId <p>WAF 实例 ID，表示当前操作所属的 WAF 实例。可通过 DescribeInstances 接口获取。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>开关状态。true：开启，false：关闭。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>需要操作的域名或者serviceid</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>开关类型，用于指定要操作的防护模块开关。取值如下：<br>1：防护总开关，控制大模型防护功能的全局开启/关闭。<br>2：算力消耗防护规则开关，控制算力消耗限制功能的开启/关闭。<br>3：自定义防护规则开关，控制内容安全自定义规则功能的开启/关闭。<br>4：ToolCall 防护开关，控制工具调用安全检测功能的开启/关闭。<br>5：提示词攻击防护开关，控制提示词注入/越狱攻击检测功能的开启/关闭。<br>6：内容合规检测开关，控制输入输出内容合规检测功能的开启/关闭。<br>7：敏感数据检测开关，控制敏感信息泄露检测（DLP）功能的开启/关闭。<br>8：Skill 安全检测开关，控制 Skill/Plugin 调用安全检测功能的开启/关闭。<br>9：意图行为检测开关，控制用户意图识别与行为检测功能的开启/关闭。<br>10：恶意URL检测开关，控制响应中恶意链接检测功能的开启/关闭。</p>
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * <p>WAF 实例 ID，表示当前操作所属的 WAF 实例。可通过 DescribeInstances 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMSTATUSREQUEST_H_
