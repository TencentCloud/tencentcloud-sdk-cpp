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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ForwardTKEEdgeApplicationRequestV3请求参数结构体
                */
                class ForwardTKEEdgeApplicationRequestV3Request : public AbstractModel
                {
                public:
                    ForwardTKEEdgeApplicationRequestV3Request();
                    ~ForwardTKEEdgeApplicationRequestV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求集群addon的访问
                     * @return Method 请求集群addon的访问
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求集群addon的访问
                     * @param _method 请求集群addon的访问
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
                     * 获取请求集群addon的路径
                     * @return Path 请求集群addon的路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求集群addon的路径
                     * @param _path 请求集群addon的路径
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
                     * 获取请求集群addon后允许接收的数据格式
                     * @return Accept 请求集群addon后允许接收的数据格式
                     * 
                     */
                    std::string GetAccept() const;

                    /**
                     * 设置请求集群addon后允许接收的数据格式
                     * @param _accept 请求集群addon后允许接收的数据格式
                     * 
                     */
                    void SetAccept(const std::string& _accept);

                    /**
                     * 判断参数 Accept 是否已赋值
                     * @return Accept 是否已赋值
                     * 
                     */
                    bool AcceptHasBeenSet() const;

                    /**
                     * 获取请求集群addon的数据格式
                     * @return ContentType 请求集群addon的数据格式
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置请求集群addon的数据格式
                     * @param _contentType 请求集群addon的数据格式
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取请求集群addon的数据
                     * @return RequestBody 请求集群addon的数据
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置请求集群addon的数据
                     * @param _requestBody 请求集群addon的数据
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取集群名称，例如cls-1234abcd
                     * @return ClusterName 集群名称，例如cls-1234abcd
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，例如cls-1234abcd
                     * @param _clusterName 集群名称，例如cls-1234abcd
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取是否编码请求内容
                     * @return EncodedBody 是否编码请求内容
                     * 
                     */
                    std::string GetEncodedBody() const;

                    /**
                     * 设置是否编码请求内容
                     * @param _encodedBody 是否编码请求内容
                     * 
                     */
                    void SetEncodedBody(const std::string& _encodedBody);

                    /**
                     * 判断参数 EncodedBody 是否已赋值
                     * @return EncodedBody 是否已赋值
                     * 
                     */
                    bool EncodedBodyHasBeenSet() const;

                private:

                    /**
                     * 请求集群addon的访问
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求集群addon的路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求集群addon后允许接收的数据格式
                     */
                    std::string m_accept;
                    bool m_acceptHasBeenSet;

                    /**
                     * 请求集群addon的数据格式
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 请求集群addon的数据
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * 集群名称，例如cls-1234abcd
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 是否编码请求内容
                     */
                    std::string m_encodedBody;
                    bool m_encodedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_
