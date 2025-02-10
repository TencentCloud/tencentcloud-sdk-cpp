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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_APPASSET_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_APPASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Resource.h>
#include <tencentcloud/bh/v20230418/model/Group.h>
#include <tencentcloud/bh/v20230418/model/Department.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 应用资产信息
                */
                class AppAsset : public AbstractModel
                {
                public:
                    AppAsset();
                    ~AppAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用资产id
                     * @return Id 应用资产id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置应用资产id
                     * @param _id 应用资产id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资产名称
                     * @return Name 资产名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产名称
                     * @param _name 资产名称
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
                     * 获取应用服务器id
                     * @return DeviceId 应用服务器id
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置应用服务器id
                     * @param _deviceId 应用服务器id
                     * 
                     */
                    void SetDeviceId(const uint64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取应用服务器账号id
                     * @return DeviceAccountId 应用服务器账号id
                     * 
                     */
                    uint64_t GetDeviceAccountId() const;

                    /**
                     * 设置应用服务器账号id
                     * @param _deviceAccountId 应用服务器账号id
                     * 
                     */
                    void SetDeviceAccountId(const uint64_t& _deviceAccountId);

                    /**
                     * 判断参数 DeviceAccountId 是否已赋值
                     * @return DeviceAccountId 是否已赋值
                     * 
                     */
                    bool DeviceAccountIdHasBeenSet() const;

                    /**
                     * 获取应用资产类型。1-web应用
                     * @return Kind 应用资产类型。1-web应用
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置应用资产类型。1-web应用
                     * @param _kind 应用资产类型。1-web应用
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取客户端工具路径
                     * @return ClientAppPath 客户端工具路径
                     * 
                     */
                    std::string GetClientAppPath() const;

                    /**
                     * 设置客户端工具路径
                     * @param _clientAppPath 客户端工具路径
                     * 
                     */
                    void SetClientAppPath(const std::string& _clientAppPath);

                    /**
                     * 判断参数 ClientAppPath 是否已赋值
                     * @return ClientAppPath 是否已赋值
                     * 
                     */
                    bool ClientAppPathHasBeenSet() const;

                    /**
                     * 获取客户端工具类型
                     * @return ClientAppKind 客户端工具类型
                     * 
                     */
                    std::string GetClientAppKind() const;

                    /**
                     * 设置客户端工具类型
                     * @param _clientAppKind 客户端工具类型
                     * 
                     */
                    void SetClientAppKind(const std::string& _clientAppKind);

                    /**
                     * 判断参数 ClientAppKind 是否已赋值
                     * @return ClientAppKind 是否已赋值
                     * 
                     */
                    bool ClientAppKindHasBeenSet() const;

                    /**
                     * 获取应用资产url
                     * @return Url 应用资产url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置应用资产url
                     * @param _url 应用资产url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取托管状态。0-未托管，1-已托管
                     * @return BindStatus 托管状态。0-未托管，1-已托管
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置托管状态。0-未托管，1-已托管
                     * @param _bindStatus 托管状态。0-未托管，1-已托管
                     * 
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取应用服务器实例id
                     * @return DeviceInstanceId 应用服务器实例id
                     * 
                     */
                    std::string GetDeviceInstanceId() const;

                    /**
                     * 设置应用服务器实例id
                     * @param _deviceInstanceId 应用服务器实例id
                     * 
                     */
                    void SetDeviceInstanceId(const std::string& _deviceInstanceId);

                    /**
                     * 判断参数 DeviceInstanceId 是否已赋值
                     * @return DeviceInstanceId 是否已赋值
                     * 
                     */
                    bool DeviceInstanceIdHasBeenSet() const;

                    /**
                     * 获取应用服务器名称
                     * @return DeviceName 应用服务器名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置应用服务器名称
                     * @param _deviceName 应用服务器名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取应用服务器账号名称
                     * @return DeviceAccountName 应用服务器账号名称
                     * 
                     */
                    std::string GetDeviceAccountName() const;

                    /**
                     * 设置应用服务器账号名称
                     * @param _deviceAccountName 应用服务器账号名称
                     * 
                     */
                    void SetDeviceAccountName(const std::string& _deviceAccountName);

                    /**
                     * 判断参数 DeviceAccountName 是否已赋值
                     * @return DeviceAccountName 是否已赋值
                     * 
                     */
                    bool DeviceAccountNameHasBeenSet() const;

                    /**
                     * 获取堡垒机实例id
                     * @return ResourceId 堡垒机实例id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机实例id
                     * @param _resourceId 堡垒机实例id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取堡垒机实例信息
                     * @return Resource 堡垒机实例信息
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置堡垒机实例信息
                     * @param _resource 堡垒机实例信息
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取网络域id
                     * @return DomainId 网络域id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域id
                     * @param _domainId 网络域id
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取网络域名称
                     * @return DomainName 网络域名称
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置网络域名称
                     * @param _domainName 网络域名称
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取资产组信息
                     * @return GroupSet 资产组信息
                     * 
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置资产组信息
                     * @param _groupSet 资产组信息
                     * 
                     */
                    void SetGroupSet(const std::vector<Group>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取资产所属部门
                     * @return Department 资产所属部门
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置资产所属部门
                     * @param _department 资产所属部门
                     * 
                     */
                    void SetDepartment(const Department& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                private:

                    /**
                     * 应用资产id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用服务器id
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 应用服务器账号id
                     */
                    uint64_t m_deviceAccountId;
                    bool m_deviceAccountIdHasBeenSet;

                    /**
                     * 应用资产类型。1-web应用
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 客户端工具路径
                     */
                    std::string m_clientAppPath;
                    bool m_clientAppPathHasBeenSet;

                    /**
                     * 客户端工具类型
                     */
                    std::string m_clientAppKind;
                    bool m_clientAppKindHasBeenSet;

                    /**
                     * 应用资产url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 托管状态。0-未托管，1-已托管
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 应用服务器实例id
                     */
                    std::string m_deviceInstanceId;
                    bool m_deviceInstanceIdHasBeenSet;

                    /**
                     * 应用服务器名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 应用服务器账号名称
                     */
                    std::string m_deviceAccountName;
                    bool m_deviceAccountNameHasBeenSet;

                    /**
                     * 堡垒机实例id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 堡垒机实例信息
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 网络域id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 网络域名称
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 资产组信息
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 资产所属部门
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_APPASSET_H_
