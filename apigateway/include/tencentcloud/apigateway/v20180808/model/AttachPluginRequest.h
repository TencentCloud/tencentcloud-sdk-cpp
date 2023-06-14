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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * AttachPlugin请求参数结构体
                */
                class AttachPluginRequest : public AbstractModel
                {
                public:
                    AttachPluginRequest();
                    ~AttachPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定的API网关插件ID。
                     * @return PluginId 绑定的API网关插件ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置绑定的API网关插件ID。
                     * @param _pluginId 绑定的API网关插件ID。
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取要操作的服务ID。
                     * @return ServiceId 要操作的服务ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置要操作的服务ID。
                     * @param _serviceId 要操作的服务ID。
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
                     * 获取要操作API的环境。
                     * @return EnvironmentName 要操作API的环境。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置要操作API的环境。
                     * @param _environmentName 要操作API的环境。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取要绑定的API列表。
                     * @return ApiIds 要绑定的API列表。
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置要绑定的API列表。
                     * @param _apiIds 要绑定的API列表。
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * 绑定的API网关插件ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 要操作的服务ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 要操作API的环境。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 要绑定的API列表。
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_
