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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIDETAILREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIDETAILREQUEST_H_

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
                * DescribeApiDetail请求参数结构体
                */
                class DescribeApiDetailRequest : public AbstractModel
                {
                public:
                    DescribeApiDetailRequest();
                    ~DescribeApiDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取微服务id
                     * @return MicroserviceId 微服务id
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务id
                     * @param _microserviceId 微服务id
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
                     * 获取请求路径
                     * @return Path 请求路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求路径
                     * @param _path 请求路径
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
                     * 获取请求方法
                     * @return Method 请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
                     * @param _method 请求方法
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
                     * 获取包版本
                     * @return PkgVersion 包版本
                     * 
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置包版本
                     * @param _pkgVersion 包版本
                     * 
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     * 
                     */
                    bool PkgVersionHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 微服务id
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 请求路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 包版本
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIDETAILREQUEST_H_
