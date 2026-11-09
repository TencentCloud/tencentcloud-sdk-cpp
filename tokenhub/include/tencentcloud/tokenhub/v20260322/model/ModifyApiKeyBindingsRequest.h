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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYBINDINGSREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/BindingItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * ModifyApiKeyBindings请求参数结构体
                */
                class ModifyApiKeyBindingsRequest : public AbstractModel
                {
                public:
                    ModifyApiKeyBindingsRequest();
                    ~ModifyApiKeyBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API 密钥 ID。</p>
                     * @return ApiKeyId <p>API 密钥 ID。</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置<p>API 密钥 ID。</p>
                     * @param _apiKeyId <p>API 密钥 ID。</p>
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>平台类型。取值：maas。</p>
                     * @return Platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台类型。取值：maas。</p>
                     * @param _platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * @return BindType <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置<p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * @param _bindType <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取<p>修改后的apikey的模型或服务绑定列表</p>
                     * @return Bindings <p>修改后的apikey的模型或服务绑定列表</p>
                     * 
                     */
                    std::vector<BindingItem> GetBindings() const;

                    /**
                     * 设置<p>修改后的apikey的模型或服务绑定列表</p>
                     * @param _bindings <p>修改后的apikey的模型或服务绑定列表</p>
                     * 
                     */
                    void SetBindings(const std::vector<BindingItem>& _bindings);

                    /**
                     * 判断参数 Bindings 是否已赋值
                     * @return Bindings 是否已赋值
                     * 
                     */
                    bool BindingsHasBeenSet() const;

                private:

                    /**
                     * <p>API 密钥 ID。</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>平台类型。取值：maas。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * <p>修改后的apikey的模型或服务绑定列表</p>
                     */
                    std::vector<BindingItem> m_bindings;
                    bool m_bindingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYBINDINGSREQUEST_H_
