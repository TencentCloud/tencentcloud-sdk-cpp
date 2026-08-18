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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESMODIFYCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESMODIFYCONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Es修改连接源参数
                */
                class EsModifyConnectParam : public AbstractModel
                {
                public:
                    EsModifyConnectParam();
                    ~EsModifyConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Es连接源的实例资源【不支持修改】</p>
                     * @return Resource <p>Es连接源的实例资源【不支持修改】</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>Es连接源的实例资源【不支持修改】</p>
                     * @param _resource <p>Es连接源的实例资源【不支持修改】</p>
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>Es的连接port【不支持修改】</p>
                     * @return Port <p>Es的连接port【不支持修改】</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Es的连接port【不支持修改】</p>
                     * @param _port <p>Es的连接port【不支持修改】</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Es连接源的实例vip【不支持修改】</p>
                     * @return ServiceVip <p>Es连接源的实例vip【不支持修改】</p>
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置<p>Es连接源的实例vip【不支持修改】</p>
                     * @param _serviceVip <p>Es连接源的实例vip【不支持修改】</p>
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取<p>Es连接源的vpcId【不支持修改】</p>
                     * @return UniqVpcId <p>Es连接源的vpcId【不支持修改】</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>Es连接源的vpcId【不支持修改】</p>
                     * @param _uniqVpcId <p>Es连接源的vpcId【不支持修改】</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Es连接源的用户名</p>
                     * @return UserName <p>Es连接源的用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Es连接源的用户名</p>
                     * @param _userName <p>Es连接源的用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Es连接源的密码</p>
                     * @return Password <p>Es连接源的密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Es连接源的密码</p>
                     * @param _password <p>Es连接源的密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Es连接源是否为自建集群【不支持修改】</p>
                     * @return SelfBuilt <p>Es连接源是否为自建集群【不支持修改】</p>
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置<p>Es连接源是否为自建集群【不支持修改】</p>
                     * @param _selfBuilt <p>Es连接源是否为自建集群【不支持修改】</p>
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取<p>是否更新到关联的Datahub任务</p>
                     * @return IsUpdate <p>是否更新到关联的Datahub任务</p>
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置<p>是否更新到关联的Datahub任务</p>
                     * @param _isUpdate <p>是否更新到关联的Datahub任务</p>
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                    /**
                     * 获取<p>es类型</p><p>枚举值：</p><ul><li>CLUSTER： 普通集群es</li><li>SERVERLESS： serverless形态es</li></ul>
                     * @return EsType <p>es类型</p><p>枚举值：</p><ul><li>CLUSTER： 普通集群es</li><li>SERVERLESS： serverless形态es</li></ul>
                     * 
                     */
                    std::string GetEsType() const;

                    /**
                     * 设置<p>es类型</p><p>枚举值：</p><ul><li>CLUSTER： 普通集群es</li><li>SERVERLESS： serverless形态es</li></ul>
                     * @param _esType <p>es类型</p><p>枚举值：</p><ul><li>CLUSTER： 普通集群es</li><li>SERVERLESS： serverless形态es</li></ul>
                     * 
                     */
                    void SetEsType(const std::string& _esType);

                    /**
                     * 判断参数 EsType 是否已赋值
                     * @return EsType 是否已赋值
                     * 
                     */
                    bool EsTypeHasBeenSet() const;

                    /**
                     * 获取<p>es版本，默认7.14.2</p><p>默认值：7.14.2</p>
                     * @return EsVersion <p>es版本，默认7.14.2</p><p>默认值：7.14.2</p>
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置<p>es版本，默认7.14.2</p><p>默认值：7.14.2</p>
                     * @param _esVersion <p>es版本，默认7.14.2</p><p>默认值：7.14.2</p>
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取<p>endpointUrl，es的serverless版本的访问入口地址</p>
                     * @return EndpointUrl <p>endpointUrl，es的serverless版本的访问入口地址</p>
                     * 
                     */
                    std::string GetEndpointUrl() const;

                    /**
                     * 设置<p>endpointUrl，es的serverless版本的访问入口地址</p>
                     * @param _endpointUrl <p>endpointUrl，es的serverless版本的访问入口地址</p>
                     * 
                     */
                    void SetEndpointUrl(const std::string& _endpointUrl);

                    /**
                     * 判断参数 EndpointUrl 是否已赋值
                     * @return EndpointUrl 是否已赋值
                     * 
                     */
                    bool EndpointUrlHasBeenSet() const;

                    /**
                     * 获取<p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * @return Protocol <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * @param _protocol <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>Es连接源的实例资源【不支持修改】</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>Es的连接port【不支持修改】</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Es连接源的实例vip【不支持修改】</p>
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * <p>Es连接源的vpcId【不支持修改】</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Es连接源的用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Es连接源的密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Es连接源是否为自建集群【不支持修改】</p>
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * <p>是否更新到关联的Datahub任务</p>
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * <p>es类型</p><p>枚举值：</p><ul><li>CLUSTER： 普通集群es</li><li>SERVERLESS： serverless形态es</li></ul>
                     */
                    std::string m_esType;
                    bool m_esTypeHasBeenSet;

                    /**
                     * <p>es版本，默认7.14.2</p><p>默认值：7.14.2</p>
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * <p>endpointUrl，es的serverless版本的访问入口地址</p>
                     */
                    std::string m_endpointUrl;
                    bool m_endpointUrlHasBeenSet;

                    /**
                     * <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESMODIFYCONNECTPARAM_H_
