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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGPOLICY_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 安全组策略
                */
                class UsgPolicy : public AbstractModel
                {
                public:
                    UsgPolicy();
                    ~UsgPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cidr格式地址
                     * @return Ip cidr格式地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置cidr格式地址
                     * @param _ip cidr格式地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取安全组id代表的地址集合
                     * @return Id 安全组id代表的地址集合
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置安全组id代表的地址集合
                     * @param _id 安全组id代表的地址集合
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
                     * 获取地址组id代表的地址集合
                     * @return AddressModule 地址组id代表的地址集合
                     * 
                     */
                    std::string GetAddressModule() const;

                    /**
                     * 设置地址组id代表的地址集合
                     * @param _addressModule 地址组id代表的地址集合
                     * 
                     */
                    void SetAddressModule(const std::string& _addressModule);

                    /**
                     * 判断参数 AddressModule 是否已赋值
                     * @return AddressModule 是否已赋值
                     * 
                     */
                    bool AddressModuleHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Proto 协议
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置协议
                     * @param _proto 协议
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取服务组id代表的协议和端口集合
                     * @return ServiceModule 服务组id代表的协议和端口集合
                     * 
                     */
                    std::string GetServiceModule() const;

                    /**
                     * 设置服务组id代表的协议和端口集合
                     * @param _serviceModule 服务组id代表的协议和端口集合
                     * 
                     */
                    void SetServiceModule(const std::string& _serviceModule);

                    /**
                     * 判断参数 ServiceModule 是否已赋值
                     * @return ServiceModule 是否已赋值
                     * 
                     */
                    bool ServiceModuleHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Desc 备注
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置备注
                     * @param _desc 备注
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取匹配后行为:ACCEPT/DROP
                     * @return Action 匹配后行为:ACCEPT/DROP
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置匹配后行为:ACCEPT/DROP
                     * @param _action 匹配后行为:ACCEPT/DROP
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * cidr格式地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 安全组id代表的地址集合
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 地址组id代表的地址集合
                     */
                    std::string m_addressModule;
                    bool m_addressModuleHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 服务组id代表的协议和端口集合
                     */
                    std::string m_serviceModule;
                    bool m_serviceModuleHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 匹配后行为:ACCEPT/DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_USGPOLICY_H_
