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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_

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
                * UpdateCloudNativeAPIGatewayCertificateInfo请求参数结构体
                */
                class UpdateCloudNativeAPIGatewayCertificateInfoRequest : public AbstractModel
                {
                public:
                    UpdateCloudNativeAPIGatewayCertificateInfoRequest();
                    ~UpdateCloudNativeAPIGatewayCertificateInfoRequest() = default;
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
                     * 获取证书id
                     * @return Id 证书id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置证书id
                     * @param _id 证书id
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
                     * 获取绑定的域名列表
                     * @return BindDomains 绑定的域名列表
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置绑定的域名列表
                     * @param _bindDomains 绑定的域名列表
                     * 
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取证书名称
                     * @return Name 证书名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置证书名称
                     * @param _name 证书名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 证书id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 绑定的域名列表
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * 证书名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATECLOUDNATIVEAPIGATEWAYCERTIFICATEINFOREQUEST_H_
