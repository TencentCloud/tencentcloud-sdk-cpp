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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEGATEWAYAPIREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEGATEWAYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateGatewayApi请求参数结构体
                */
                class UpdateGatewayApiRequest : public AbstractModel
                {
                public:
                    UpdateGatewayApiRequest();
                    ~UpdateGatewayApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API ID
                     * @return ApiId API ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
                     * @param _apiId API ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API 路径
                     * @return Path API 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 路径
                     * @param _path API 路径
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
                     * 获取Api 请求方法
                     * @return Method Api 请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Api 请求方法
                     * @param _method Api 请求方法
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
                     * 获取api所在服务host
                     * @return Host api所在服务host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置api所在服务host
                     * @param _host api所在服务host
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
                     * API ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Api 请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求映射
                     */
                    std::string m_pathMapping;
                    bool m_pathMappingHasBeenSet;

                    /**
                     * api所在服务host
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

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEGATEWAYAPIREQUEST_H_
