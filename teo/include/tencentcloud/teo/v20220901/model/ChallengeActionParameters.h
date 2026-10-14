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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全执行动作为挑战时的附加参数。

该参数用于指定在命中安全规则并执行挑战动作时，系统所采取的附加处置动作。
挑战处置动作通过 ChallengeOption 进行细分，不同挑战类型对应不同的交互形式及参数要求，系统将根据所选挑战类型，生效对应的参数配置。
ChallengeActionParameters 支持以下挑战处置类型：<li>插页式挑战：响应新页面，并在新页面内运行认证机制。对应 ChallengeOption 取值 InterstitialChallenge。</li><li>内嵌式挑战：响应 SDK 挑战。对应 ChallengeOption 取值 InlineChallenge。</li><li>JavaScript 挑战：浏览器无感验证，浏览器自动完成校验并展示请求资源。对应 ChallengeOption 取值 JSChallenge。</li><li>托管挑战：响应包含 JavaScript 程序的重定向页面，用于校验浏览器运行环境。对应 ChallengeOption 取值 ManagedChallenge。</li>
                */
                class ChallengeActionParameters : public AbstractModel
                {
                public:
                    ChallengeActionParameters();
                    ~ChallengeActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全执行的具体挑战动作。</p><p>枚举值：</p><ul><li>InterstitialChallenge： 插页式挑战；</li><li>InlineChallenge： 内嵌式挑战（SDK 挑战）；</li><li>ManagedChallenge： 托管挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置；</li><li>JSChallenge： JavaScript 挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置。</li></ul>
                     * @return ChallengeOption <p>安全执行的具体挑战动作。</p><p>枚举值：</p><ul><li>InterstitialChallenge： 插页式挑战；</li><li>InlineChallenge： 内嵌式挑战（SDK 挑战）；</li><li>ManagedChallenge： 托管挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置；</li><li>JSChallenge： JavaScript 挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置。</li></ul>
                     * 
                     */
                    std::string GetChallengeOption() const;

                    /**
                     * 设置<p>安全执行的具体挑战动作。</p><p>枚举值：</p><ul><li>InterstitialChallenge： 插页式挑战；</li><li>InlineChallenge： 内嵌式挑战（SDK 挑战）；</li><li>ManagedChallenge： 托管挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置；</li><li>JSChallenge： JavaScript 挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置。</li></ul>
                     * @param _challengeOption <p>安全执行的具体挑战动作。</p><p>枚举值：</p><ul><li>InterstitialChallenge： 插页式挑战；</li><li>InlineChallenge： 内嵌式挑战（SDK 挑战）；</li><li>ManagedChallenge： 托管挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置；</li><li>JSChallenge： JavaScript 挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置。</li></ul>
                     * 
                     */
                    void SetChallengeOption(const std::string& _challengeOption);

                    /**
                     * 判断参数 ChallengeOption 是否已赋值
                     * @return ChallengeOption 是否已赋值
                     * 
                     */
                    bool ChallengeOptionHasBeenSet() const;

                    /**
                     * 获取<p>重复挑战的时间间隔，当 ChallengeOption 为 InterstitialChallenge/InlineChallenge 时，该字段必填。默认值为 300s。支持的单位有：<li>s：秒，取值范围1～60；</li><li>m：分，取值范围1～60；</li><li>h：小时，取值范围1～24。</li></p>
                     * @return Interval <p>重复挑战的时间间隔，当 ChallengeOption 为 InterstitialChallenge/InlineChallenge 时，该字段必填。默认值为 300s。支持的单位有：<li>s：秒，取值范围1～60；</li><li>m：分，取值范围1～60；</li><li>h：小时，取值范围1～24。</li></p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>重复挑战的时间间隔，当 ChallengeOption 为 InterstitialChallenge/InlineChallenge 时，该字段必填。默认值为 300s。支持的单位有：<li>s：秒，取值范围1～60；</li><li>m：分，取值范围1～60；</li><li>h：小时，取值范围1～24。</li></p>
                     * @param _interval <p>重复挑战的时间间隔，当 ChallengeOption 为 InterstitialChallenge/InlineChallenge 时，该字段必填。默认值为 300s。支持的单位有：<li>s：秒，取值范围1～60；</li><li>m：分，取值范围1～60；</li><li>h：小时，取值范围1～24。</li></p>
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>客户端认证方式 ID 。当 Name 为 InterstitialChallenge/InlineChallenge 时，该字段必填。</p>
                     * @return AttesterId <p>客户端认证方式 ID 。当 Name 为 InterstitialChallenge/InlineChallenge 时，该字段必填。</p>
                     * 
                     */
                    std::string GetAttesterId() const;

                    /**
                     * 设置<p>客户端认证方式 ID 。当 Name 为 InterstitialChallenge/InlineChallenge 时，该字段必填。</p>
                     * @param _attesterId <p>客户端认证方式 ID 。当 Name 为 InterstitialChallenge/InlineChallenge 时，该字段必填。</p>
                     * 
                     */
                    void SetAttesterId(const std::string& _attesterId);

                    /**
                     * 判断参数 AttesterId 是否已赋值
                     * @return AttesterId 是否已赋值
                     * 
                     */
                    bool AttesterIdHasBeenSet() const;

                private:

                    /**
                     * <p>安全执行的具体挑战动作。</p><p>枚举值：</p><ul><li>InterstitialChallenge： 插页式挑战；</li><li>InlineChallenge： 内嵌式挑战（SDK 挑战）；</li><li>ManagedChallenge： 托管挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置；</li><li>JSChallenge： JavaScript 挑战。仅适用于用户通过浏览器直接访问的 HTML 网页。API 接口、网页内 XHR/AJAX 异步请求、移动 App、命令行工具等场景无法完成验证，请勿配置。</li></ul>
                     */
                    std::string m_challengeOption;
                    bool m_challengeOptionHasBeenSet;

                    /**
                     * <p>重复挑战的时间间隔，当 ChallengeOption 为 InterstitialChallenge/InlineChallenge 时，该字段必填。默认值为 300s。支持的单位有：<li>s：秒，取值范围1～60；</li><li>m：分，取值范围1～60；</li><li>h：小时，取值范围1～24。</li></p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>客户端认证方式 ID 。当 Name 为 InterstitialChallenge/InlineChallenge 时，该字段必填。</p>
                     */
                    std::string m_attesterId;
                    bool m_attesterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHALLENGEACTIONPARAMETERS_H_
