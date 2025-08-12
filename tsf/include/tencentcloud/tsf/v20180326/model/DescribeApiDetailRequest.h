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
                     * 获取微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @return MicroserviceId 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @param _microserviceId 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
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
                     * 获取请求路径。
                     * @return Path 请求路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求路径。
                     * @param _path 请求路径。
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
                     * 获取请求方法。
- GET
- POST
- PUT
- DELETE
- HEAD
- PATCH
- OPTIONS
                     * @return Method 请求方法。
- GET
- POST
- PUT
- DELETE
- HEAD
- PATCH
- OPTIONS
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法。
- GET
- POST
- PUT
- DELETE
- HEAD
- PATCH
- OPTIONS
                     * @param _method 请求方法。
- GET
- POST
- PUT
- DELETE
- HEAD
- PATCH
- OPTIONS
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
                     * 获取应用包版本号。
                     * @return PkgVersion 应用包版本号。
                     * 
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置应用包版本号。
                     * @param _pkgVersion 应用包版本号。
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
                     * 获取应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @return ApplicationId 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     * @param _applicationId 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
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
                     * 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 请求路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求方法。
- GET
- POST
- PUT
- DELETE
- HEAD
- PATCH
- OPTIONS
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 应用包版本号。
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 应用ID。该参数可以通过调用 [DescribeApplications](https://cloud.tencent.com/document/product/649/36090) 的返回值中的 ApplicationId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app)查看；也可以调用[CreateApplication](https://cloud.tencent.com/document/product/649/36094)创建新的应用。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIDETAILREQUEST_H_
