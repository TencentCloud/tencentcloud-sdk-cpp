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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEGATEWAYREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateGateway请求参数结构体
                */
                class UpdateGatewayRequest : public AbstractModel
                {
                public:
                    UpdateGatewayRequest();
                    ~UpdateGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关索引ID（从获取网关列表ListGateways接口中获取）	
                     * @return GatewayId 网关索引ID（从获取网关列表ListGateways接口中获取）	
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关索引ID（从获取网关列表ListGateways接口中获取）	
                     * @param _gatewayId 网关索引ID（从获取网关列表ListGateways接口中获取）	
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
                     * 获取仅支持中文、英文、数网关名称，字、_、-，长度不超过32个字符
                     * @return Name 仅支持中文、英文、数网关名称，字、_、-，长度不超过32个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仅支持中文、英文、数网关名称，字、_、-，长度不超过32个字符
                     * @param _name 仅支持中文、英文、数网关名称，字、_、-，长度不超过32个字符
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
                     * 获取网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @return Description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @param _description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
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
                     * 网关索引ID（从获取网关列表ListGateways接口中获取）	
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 仅支持中文、英文、数网关名称，字、_、-，长度不超过32个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEGATEWAYREQUEST_H_
