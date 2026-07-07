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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BYOK信息
                */
                class ServiceProvider : public AbstractModel
                {
                public:
                    ServiceProvider();
                    ~ServiceProvider() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>BYOK类型</p>
                     * @return AccessType <p>BYOK类型</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>BYOK类型</p>
                     * @param _accessType <p>BYOK类型</p>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>单个byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * @return InputModalities <p>单个byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>单个byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * @param _inputModalities <p>单个byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     * 
                     */
                    void SetInputModalities(const std::vector<std::string>& _inputModalities);

                    /**
                     * 判断参数 InputModalities 是否已赋值
                     * @return InputModalities 是否已赋值
                     * 
                     */
                    bool InputModalitiesHasBeenSet() const;

                    /**
                     * 获取<p>模型协议</p>
                     * @return Protocol <p>模型协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>模型协议</p>
                     * @param _protocol <p>模型协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>BYOK的所属厂商</p>
                     * @return Provider <p>BYOK的所属厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>BYOK的所属厂商</p>
                     * @param _provider <p>BYOK的所属厂商</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>BYOK实例ID</p>
                     * @return ServiceProviderId <p>BYOK实例ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK实例ID</p>
                     * @param _serviceProviderId <p>BYOK实例ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>BYOK名称</p>
                     * @return ServiceProviderName <p>BYOK名称</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>BYOK名称</p>
                     * @param _serviceProviderName <p>BYOK名称</p>
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK类型</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>单个byok实例下该模型可支持的输入多模态能力列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>file： 支持文件输入（当前仅支持pdf）</li><li>image： 支持图像输入</li></ul>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                    /**
                     * <p>模型协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>BYOK的所属厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>BYOK实例ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>BYOK名称</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDER_H_
