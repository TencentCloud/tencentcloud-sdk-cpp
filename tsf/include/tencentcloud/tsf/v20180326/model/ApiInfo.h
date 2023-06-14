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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关API信息
                */
                class ApiInfo : public AbstractModel
                {
                public:
                    ApiInfo();
                    ~ApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间Id，若为外部API,为固定值："namespace-external"
                     * @return NamespaceId 命名空间Id，若为外部API,为固定值："namespace-external"
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间Id，若为外部API,为固定值："namespace-external"
                     * @param _namespaceId 命名空间Id，若为外部API,为固定值："namespace-external"
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取服务Id，若为外部API,为固定值："ms-external"
                     * @return MicroserviceId 服务Id，若为外部API,为固定值："ms-external"
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置服务Id，若为外部API,为固定值："ms-external"
                     * @param _microserviceId 服务Id，若为外部API,为固定值："ms-external"
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取API path
                     * @return Path API path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path
                     * @param _path API path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Api 请求
                     * @return Method Api 请求
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Api 请求
                     * @param _method Api 请求
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取请求映射
                     * @return PathMapping 请求映射
                     * 
                     */
                    std::string GetPathMapping() const;

                    /**
                     * 设置请求映射
                     * @param _pathMapping 请求映射
                     * 
                     */
                    void SetPathMapping(const std::string& _pathMapping);

                    /**
                     * 判断参数 PathMapping 是否已赋值
                     * @return PathMapping 是否已赋值
                     * 
                     */
                    bool PathMappingHasBeenSet() const;

                    /**
                     * 获取api所在服务host,限定外部Api填写。格式: `http://127.0.0.1:8080`
                     * @return Host api所在服务host,限定外部Api填写。格式: `http://127.0.0.1:8080`
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置api所在服务host,限定外部Api填写。格式: `http://127.0.0.1:8080`
                     * @param _host api所在服务host,限定外部Api填写。格式: `http://127.0.0.1:8080`
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取api描述信息
                     * @return Description api描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置api描述信息
                     * @param _description api描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 命名空间Id，若为外部API,为固定值："namespace-external"
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 服务Id，若为外部API,为固定值："ms-external"
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * API path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Api 请求
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求映射
                     */
                    std::string m_pathMapping;
                    bool m_pathMappingHasBeenSet;

                    /**
                     * api所在服务host,限定外部Api填写。格式: `http://127.0.0.1:8080`
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * api描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIINFO_H_
