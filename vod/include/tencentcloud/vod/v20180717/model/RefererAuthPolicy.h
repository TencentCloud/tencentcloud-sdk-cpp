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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Referer 防盗链配置
                */
                class RefererAuthPolicy : public AbstractModel
                {
                public:
                    RefererAuthPolicy();
                    ~RefererAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)设置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * @return Status [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)设置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置[Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)设置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * @param _status [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)设置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Referer 校验类型，可选值：
<li>Black：黑名单方式校验。HTTP 请求携带了 Referers 列表中的某个 Referer 将被拒绝访问。</li>
<li>White：白名单方式校验。HTTP 请求携带了 Referers 列表中的 Referer 时才允许访问。</li>
当 Status 取值为 Enabled 时，AuthType 必须赋值。
                     * @return AuthType Referer 校验类型，可选值：
<li>Black：黑名单方式校验。HTTP 请求携带了 Referers 列表中的某个 Referer 将被拒绝访问。</li>
<li>White：白名单方式校验。HTTP 请求携带了 Referers 列表中的 Referer 时才允许访问。</li>
当 Status 取值为 Enabled 时，AuthType 必须赋值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置Referer 校验类型，可选值：
<li>Black：黑名单方式校验。HTTP 请求携带了 Referers 列表中的某个 Referer 将被拒绝访问。</li>
<li>White：白名单方式校验。HTTP 请求携带了 Referers 列表中的 Referer 时才允许访问。</li>
当 Status 取值为 Enabled 时，AuthType 必须赋值。
                     * @param _authType Referer 校验类型，可选值：
<li>Black：黑名单方式校验。HTTP 请求携带了 Referers 列表中的某个 Referer 将被拒绝访问。</li>
<li>White：白名单方式校验。HTTP 请求携带了 Referers 列表中的 Referer 时才允许访问。</li>
当 Status 取值为 Enabled 时，AuthType 必须赋值。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取用于校验的 Referer 列表，最大支持  400 个 Referer。当 Status 取值为 Enabled 时， Referers 不能为空数组。Referer 的格式参考域名的格式。
                     * @return Referers 用于校验的 Referer 列表，最大支持  400 个 Referer。当 Status 取值为 Enabled 时， Referers 不能为空数组。Referer 的格式参考域名的格式。
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置用于校验的 Referer 列表，最大支持  400 个 Referer。当 Status 取值为 Enabled 时， Referers 不能为空数组。Referer 的格式参考域名的格式。
                     * @param _referers 用于校验的 Referer 列表，最大支持  400 个 Referer。当 Status 取值为 Enabled 时， Referers 不能为空数组。Referer 的格式参考域名的格式。
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取是否允许空 Referer 访问本域名，可选值：
<li>Yes： 是。</li>
<li>No： 否。</li>
当 Status 取值为 Enabled 时，BlankRefererAllowed 必须赋值。
                     * @return BlankRefererAllowed 是否允许空 Referer 访问本域名，可选值：
<li>Yes： 是。</li>
<li>No： 否。</li>
当 Status 取值为 Enabled 时，BlankRefererAllowed 必须赋值。
                     * 
                     */
                    std::string GetBlankRefererAllowed() const;

                    /**
                     * 设置是否允许空 Referer 访问本域名，可选值：
<li>Yes： 是。</li>
<li>No： 否。</li>
当 Status 取值为 Enabled 时，BlankRefererAllowed 必须赋值。
                     * @param _blankRefererAllowed 是否允许空 Referer 访问本域名，可选值：
<li>Yes： 是。</li>
<li>No： 否。</li>
当 Status 取值为 Enabled 时，BlankRefererAllowed 必须赋值。
                     * 
                     */
                    void SetBlankRefererAllowed(const std::string& _blankRefererAllowed);

                    /**
                     * 判断参数 BlankRefererAllowed 是否已赋值
                     * @return BlankRefererAllowed 是否已赋值
                     * 
                     */
                    bool BlankRefererAllowedHasBeenSet() const;

                private:

                    /**
                     * [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)设置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Referer 校验类型，可选值：
<li>Black：黑名单方式校验。HTTP 请求携带了 Referers 列表中的某个 Referer 将被拒绝访问。</li>
<li>White：白名单方式校验。HTTP 请求携带了 Referers 列表中的 Referer 时才允许访问。</li>
当 Status 取值为 Enabled 时，AuthType 必须赋值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 用于校验的 Referer 列表，最大支持  400 个 Referer。当 Status 取值为 Enabled 时， Referers 不能为空数组。Referer 的格式参考域名的格式。
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * 是否允许空 Referer 访问本域名，可选值：
<li>Yes： 是。</li>
<li>No： 否。</li>
当 Status 取值为 Enabled 时，BlankRefererAllowed 必须赋值。
                     */
                    std::string m_blankRefererAllowed;
                    bool m_blankRefererAllowedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
