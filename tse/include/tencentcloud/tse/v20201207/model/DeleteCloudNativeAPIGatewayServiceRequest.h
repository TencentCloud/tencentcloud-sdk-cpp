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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteCloudNativeAPIGatewayService请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayServiceRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayServiceRequest();
                    ~DeleteCloudNativeAPIGatewayServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务名字，服务ID
                     * @return Name 服务名字，服务ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名字，服务ID
                     * @param _name 服务名字，服务ID
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
                     * 获取是否同步删除服务上绑定的路由
                     * @return DeleteRoutes 是否同步删除服务上绑定的路由
                     * 
                     */
                    bool GetDeleteRoutes() const;

                    /**
                     * 设置是否同步删除服务上绑定的路由
                     * @param _deleteRoutes 是否同步删除服务上绑定的路由
                     * 
                     */
                    void SetDeleteRoutes(const bool& _deleteRoutes);

                    /**
                     * 判断参数 DeleteRoutes 是否已赋值
                     * @return DeleteRoutes 是否已赋值
                     * 
                     */
                    bool DeleteRoutesHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务名字，服务ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否同步删除服务上绑定的路由
                     */
                    bool m_deleteRoutes;
                    bool m_deleteRoutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_
