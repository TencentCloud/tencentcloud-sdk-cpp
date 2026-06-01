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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYAGENTAPPREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYAGENTAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyAgentApp请求参数结构体
                */
                class ModifyAgentAppRequest : public AbstractModel
                {
                public:
                    ModifyAgentAppRequest();
                    ~ModifyAgentAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return ID <p>应用ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _iD <p>应用ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>OAuth2资源服务器ID</p>
                     * @return OAuth2ResourceServerID <p>OAuth2资源服务器ID</p>
                     * 
                     */
                    std::string GetOAuth2ResourceServerID() const;

                    /**
                     * 设置<p>OAuth2资源服务器ID</p>
                     * @param _oAuth2ResourceServerID <p>OAuth2资源服务器ID</p>
                     * 
                     */
                    void SetOAuth2ResourceServerID(const std::string& _oAuth2ResourceServerID);

                    /**
                     * 判断参数 OAuth2ResourceServerID 是否已赋值
                     * @return OAuth2ResourceServerID 是否已赋值
                     * 
                     */
                    bool OAuth2ResourceServerIDHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>凭据ID</p>
                     * @return ConnectorIDs <p>凭据ID</p>
                     * 
                     */
                    std::vector<std::string> GetConnectorIDs() const;

                    /**
                     * 设置<p>凭据ID</p>
                     * @param _connectorIDs <p>凭据ID</p>
                     * 
                     */
                    void SetConnectorIDs(const std::vector<std::string>& _connectorIDs);

                    /**
                     * 判断参数 ConnectorIDs 是否已赋值
                     * @return ConnectorIDs 是否已赋值
                     * 
                     */
                    bool ConnectorIDsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>OAuth2资源服务器ID</p>
                     */
                    std::string m_oAuth2ResourceServerID;
                    bool m_oAuth2ResourceServerIDHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::vector<std::string> m_connectorIDs;
                    bool m_connectorIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYAGENTAPPREQUEST_H_
