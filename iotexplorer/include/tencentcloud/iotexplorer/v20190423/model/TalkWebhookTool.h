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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKTOOL_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkWebhookEndpoint.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkWebhookAuth.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * Webhook工具配置列表
                */
                class TalkWebhookTool : public AbstractModel
                {
                public:
                    TalkWebhookTool();
                    ~TalkWebhookTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Webhook工具名称
                     * @return Name Webhook工具名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Webhook工具名称
                     * @param _name Webhook工具名称
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
                     * 获取Webhook工具描述
                     * @return Description Webhook工具描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Webhook工具描述
                     * @param _description Webhook工具描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * @return Parameters 工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * @param _parameters 工具参数JSON Schema，JSON对象字符串，必须为type=object
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Webhook HTTP端点配置
                     * @return Endpoint Webhook HTTP端点配置
                     * 
                     */
                    TalkWebhookEndpoint GetEndpoint() const;

                    /**
                     * 设置Webhook HTTP端点配置
                     * @param _endpoint Webhook HTTP端点配置
                     * 
                     */
                    void SetEndpoint(const TalkWebhookEndpoint& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取必填参数名列表，必须存在于Parameters.properties中
                     * @return Required 必填参数名列表，必须存在于Parameters.properties中
                     * 
                     */
                    std::vector<std::string> GetRequired() const;

                    /**
                     * 设置必填参数名列表，必须存在于Parameters.properties中
                     * @param _required 必填参数名列表，必须存在于Parameters.properties中
                     * 
                     */
                    void SetRequired(const std::vector<std::string>& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取Webhook鉴权配置
                     * @return Auth Webhook鉴权配置
                     * 
                     */
                    TalkWebhookAuth GetAuth() const;

                    /**
                     * 设置Webhook鉴权配置
                     * @param _auth Webhook鉴权配置
                     * 
                     */
                    void SetAuth(const TalkWebhookAuth& _auth);

                    /**
                     * 判断参数 Auth 是否已赋值
                     * @return Auth 是否已赋值
                     * 
                     */
                    bool AuthHasBeenSet() const;

                private:

                    /**
                     * Webhook工具名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Webhook工具描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工具参数JSON Schema，JSON对象字符串，必须为type=object
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Webhook HTTP端点配置
                     */
                    TalkWebhookEndpoint m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 必填参数名列表，必须存在于Parameters.properties中
                     */
                    std::vector<std::string> m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * Webhook鉴权配置
                     */
                    TalkWebhookAuth m_auth;
                    bool m_authHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKWEBHOOKTOOL_H_
