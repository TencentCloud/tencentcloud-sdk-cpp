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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 路由 WAF 状态
                */
                class RouteWafStatus : public AbstractModel
                {
                public:
                    RouteWafStatus();
                    ~RouteWafStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由的名字
                     * @return Name 路由的名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置路由的名字
                     * @param _name 路由的名字
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
                     * 获取路由的 ID
                     * @return Id 路由的 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置路由的 ID
                     * @param _id 路由的 ID
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
                     * 获取 路由是否开启 WAF 防护
                     * @return Status  路由是否开启 WAF 防护
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置 路由是否开启 WAF 防护
                     * @param _status  路由是否开启 WAF 防护
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
                     * 获取方法
                     * @return Methods 方法
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置方法
                     * @param _methods 方法
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取路径
                     * @return Paths 路径
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置路径
                     * @param _paths 路径
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Hosts 域名
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置域名
                     * @param _hosts 域名
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取路由对应服务的名字
                     * @return ServiceName 路由对应服务的名字
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置路由对应服务的名字
                     * @param _serviceName 路由对应服务的名字
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取路由对应服务的ID
                     * @return ServiceId 路由对应服务的ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置路由对应服务的ID
                     * @param _serviceId 路由对应服务的ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 路由的名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 路由的 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     *  路由是否开启 WAF 防护
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 方法
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 路径
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * 域名
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 路由对应服务的名字
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 路由对应服务的ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ROUTEWAFSTATUS_H_
