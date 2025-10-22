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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECREATEGATEWAYAPISTATUSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECREATEGATEWAYAPISTATUSREQUEST_H_

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
                * DescribeCreateGatewayApiStatus请求参数结构体
                */
                class DescribeCreateGatewayApiStatusRequest : public AbstractModel
                {
                public:
                    DescribeCreateGatewayApiStatusRequest();
                    ~DescribeCreateGatewayApiStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关分组ID。该参数可以通过调用 [DescribeApiGroups](https://cloud.tencent.com/document/product/649/50636) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app?tab=middleware&subTab=app)-网关应用详情-Java网关实例-实例详情-分组管理页查看；也可以调用[CreateApiGroup](https://cloud.tencent.com/document/product/649/50641)创建新的网关分组。
                     * @return GroupId 网关分组ID。该参数可以通过调用 [DescribeApiGroups](https://cloud.tencent.com/document/product/649/50636) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app?tab=middleware&subTab=app)-网关应用详情-Java网关实例-实例详情-分组管理页查看；也可以调用[CreateApiGroup](https://cloud.tencent.com/document/product/649/50641)创建新的网关分组。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置网关分组ID。该参数可以通过调用 [DescribeApiGroups](https://cloud.tencent.com/document/product/649/50636) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app?tab=middleware&subTab=app)-网关应用详情-Java网关实例-实例详情-分组管理页查看；也可以调用[CreateApiGroup](https://cloud.tencent.com/document/product/649/50641)创建新的网关分组。
                     * @param _groupId 网关分组ID。该参数可以通过调用 [DescribeApiGroups](https://cloud.tencent.com/document/product/649/50636) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app?tab=middleware&subTab=app)-网关应用详情-Java网关实例-实例详情-分组管理页查看；也可以调用[CreateApiGroup](https://cloud.tencent.com/document/product/649/50641)创建新的网关分组。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

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

                private:

                    /**
                     * 网关分组ID。该参数可以通过调用 [DescribeApiGroups](https://cloud.tencent.com/document/product/649/50636) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/app?tab=middleware&subTab=app)-网关应用详情-Java网关实例-实例详情-分组管理页查看；也可以调用[CreateApiGroup](https://cloud.tencent.com/document/product/649/50641)创建新的网关分组。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECREATEGATEWAYAPISTATUSREQUEST_H_
