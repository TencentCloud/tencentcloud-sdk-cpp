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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CALLINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 服务调用信息
                */
                class CallInfo : public AbstractModel
                {
                public:
                    CallInfo();
                    ~CallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取服务调用地址
                     * @return PublicEndpoint 服务调用地址
                     * 
                     */
                    std::string GetPublicEndpoint() const;

                    /**
                     * 设置服务调用地址
                     * @param _publicEndpoint 服务调用地址
                     * 
                     */
                    void SetPublicEndpoint(const std::string& _publicEndpoint);

                    /**
                     * 判断参数 PublicEndpoint 是否已赋值
                     * @return PublicEndpoint 是否已赋值
                     * 
                     */
                    bool PublicEndpointHasBeenSet() const;

                    /**
                     * 获取服务调用的API_KEY
                     * @return ApiKey 服务调用的API_KEY
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置服务调用的API_KEY
                     * @param _apiKey 服务调用的API_KEY
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取内网调用地址
                     * @return VpcEndpoint 内网调用地址
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置内网调用地址
                     * @param _vpcEndpoint 内网调用地址
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务调用地址
                     */
                    std::string m_publicEndpoint;
                    bool m_publicEndpointHasBeenSet;

                    /**
                     * 服务调用的API_KEY
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 内网调用地址
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CALLINFO_H_
