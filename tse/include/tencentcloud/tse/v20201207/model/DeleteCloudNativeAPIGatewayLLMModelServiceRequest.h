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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYLLMMODELSERVICEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYLLMMODELSERVICEREQUEST_H_

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
                * DeleteCloudNativeAPIGatewayLLMModelService请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayLLMModelServiceRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayLLMModelServiceRequest();
                    ~DeleteCloudNativeAPIGatewayLLMModelServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关 id。
                     * @return GatewayId 网关 id。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关 id。
                     * @param _gatewayId 网关 id。
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
                     * 获取模型服务 ID，全局唯一标识。
                     * @return ModelServiceId 模型服务 ID，全局唯一标识。
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置模型服务 ID，全局唯一标识。
                     * @param _modelServiceId 模型服务 ID，全局唯一标识。
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                private:

                    /**
                     * 网关 id。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 模型服务 ID，全局唯一标识。
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYLLMMODELSERVICEREQUEST_H_
