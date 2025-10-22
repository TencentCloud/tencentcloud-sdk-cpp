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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_

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
                * API 资源。
                */
                class APIResource : public AbstractModel
                {
                public:
                    APIResource();
                    ~APIResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID。
                     * @return Id 资源 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源 ID。
                     * @param _id 资源 ID。
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
                     * 获取资源名称。
                     * @return Name 资源名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称。
                     * @param _name 资源名称。
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
                     * 获取API 资源关联的 API 服务 ID 列表。
                     * @return APIServiceIds API 资源关联的 API 服务 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetAPIServiceIds() const;

                    /**
                     * 设置API 资源关联的 API 服务 ID 列表。
                     * @param _aPIServiceIds API 资源关联的 API 服务 ID 列表。
                     * 
                     */
                    void SetAPIServiceIds(const std::vector<std::string>& _aPIServiceIds);

                    /**
                     * 判断参数 APIServiceIds 是否已赋值
                     * @return APIServiceIds 是否已赋值
                     * 
                     */
                    bool APIServiceIdsHasBeenSet() const;

                    /**
                     * 获取资源路径。
                     * @return Path 资源路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置资源路径。
                     * @param _path 资源路径。
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
                     * 获取请求方法列表。支持以下取值：GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE。
                     * @return Methods 请求方法列表。支持以下取值：GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE。
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置请求方法列表。支持以下取值：GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE。
                     * @param _methods 请求方法列表。支持以下取值：GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE。
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
                     * 获取请求内容匹配规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @return RequestConstraint 请求内容匹配规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    std::string GetRequestConstraint() const;

                    /**
                     * 设置请求内容匹配规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @param _requestConstraint 请求内容匹配规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    void SetRequestConstraint(const std::string& _requestConstraint);

                    /**
                     * 判断参数 RequestConstraint 是否已赋值
                     * @return RequestConstraint 是否已赋值
                     * 
                     */
                    bool RequestConstraintHasBeenSet() const;

                private:

                    /**
                     * 资源 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API 资源关联的 API 服务 ID 列表。
                     */
                    std::vector<std::string> m_aPIServiceIds;
                    bool m_aPIServiceIdsHasBeenSet;

                    /**
                     * 资源路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求方法列表。支持以下取值：GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE。
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 请求内容匹配规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     */
                    std::string m_requestConstraint;
                    bool m_requestConstraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_
