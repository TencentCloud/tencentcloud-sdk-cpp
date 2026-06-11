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
                     * 获取<p>应用资产id</p>
                     * @return Id <p>应用资产id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>应用资产id</p>
                     * @param _id <p>应用资产id</p>
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
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>资产名称</p>
                     * @return Name <p>资产名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资产名称</p>
                     * @param _name <p>资产名称</p>
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
                     * 获取<p>应用服务器id</p>
                     * @return DeviceId <p>应用服务器id</p>
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置<p>应用服务器id</p>
                     * @param _deviceId <p>应用服务器id</p>
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
                     * 获取<p>应用服务器账号id</p>
                     * @return DeviceAccountId <p>应用服务器账号id</p>
                     * 
                     */
                    uint64_t GetDeviceAccountId() const;

                    /**
                     * 设置<p>应用服务器账号id</p>
                     * @param _deviceAccountId <p>应用服务器账号id</p>
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
                     * 获取<p>应用资产类型。1-web应用</p>
                     * @return Kind <p>应用资产类型。1-web应用</p>
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置<p>应用资产类型。1-web应用</p>
                     * @param _kind <p>应用资产类型。1-web应用</p>
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
                     * 获取<p>客户端工具路径</p>
                     * @return ClientAppPath <p>客户端工具路径</p>
                     * 
                     */
                    std::string GetClientAppPath() const;

                    /**
                     * 设置<p>客户端工具路径</p>
                     * @param _clientAppPath <p>客户端工具路径</p>
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
                     * 获取<p>客户端工具类型</p>
                     * @return ClientAppKind <p>客户端工具类型</p>
                     * 
                     */
                    std::string GetClientAppKind() const;

                    /**
                     * 设置<p>客户端工具类型</p>
                     * @param _clientAppKind <p>客户端工具类型</p>
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
                     * 获取<p>应用资产url</p>
                     * @return Url <p>应用资产url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>应用资产url</p>
                     * @param _url <p>应用资产url</p>
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
                     * 获取<p>托管状态</p><p>枚举值：</p><ul><li>0： 未托管</li><li>1： 已托管</li></ul>
                     * @return BindStatus <p>托管状态</p><p>枚举值：</p><ul><li>0： 未托管</li><li>1： 已托管</li></ul>
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置<p>托管状态</p><p>枚举值：</p><ul><li>0： 未托管</li><li>1： 已托管</li></ul>
                     * @param _bindStatus <p>托管状态</p><p>枚举值：</p><ul><li>0： 未托管</li><li>1： 已托管</li></ul>
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
                     * 获取<p>应用服务器实例id</p>
                     * @return DeviceInstanceId <p>应用服务器实例id</p>
                     * 
                     */
                    std::string GetDeviceInstanceId() const;

                    /**
                     * 设置<p>应用服务器实例id</p>
                     * @param _deviceInstanceId <p>应用服务器实例id</p>
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
                     * 获取<p>应用服务器名称</p>
                     * @return DeviceName <p>应用服务器名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>应用服务器名称</p>
                     * @param _deviceName <p>应用服务器名称</p>
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
                     * 获取<p>应用服务器账号名称</p>
                     * @return DeviceAccountName <p>应用服务器账号名称</p>
                     * 
                     */
                    std::string GetDeviceAccountName() const;

                    /**
                     * 设置<p>应用服务器账号名称</p>
                     * @param _deviceAccountName <p>应用服务器账号名称</p>
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
                     * 获取<p>堡垒机实例id</p>
                     * @return ResourceId <p>堡垒机实例id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>堡垒机实例id</p>
                     * @param _resourceId <p>堡垒机实例id</p>
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
                     * 获取<p>堡垒机实例信息</p>
                     * @return Resource <p>堡垒机实例信息</p>
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>堡垒机实例信息</p>
                     * @param _resource <p>堡垒机实例信息</p>
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
                     * 获取<p>网络域id</p>
                     * @return DomainId <p>网络域id</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>网络域id</p>
                     * @param _domainId <p>网络域id</p>
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
                     * 获取<p>网络域名称</p>
                     * @return DomainName <p>网络域名称</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>网络域名称</p>
                     * @param _domainName <p>网络域名称</p>
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
                     * 获取<p>资产组信息</p>
                     * @return GroupSet <p>资产组信息</p>
                     * 
                     */
                    std::vector<Group> GetGroupSet() const;

                    /**
                     * 设置<p>资产组信息</p>
                     * @param _groupSet <p>资产组信息</p>
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
                     * 获取<p>资产所属部门</p>
                     * @return Department <p>资产所属部门</p>
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置<p>资产所属部门</p>
                     * @param _department <p>资产所属部门</p>
                     * 
                     */
                    void SetDepartment(const Department& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取<p>账号数量</p>
                     * @return AccountCount <p>账号数量</p>
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置<p>账号数量</p>
                     * @param _accountCount <p>账号数量</p>
                     * 
                     */
                    void SetAccountCount(const uint64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取<p>代填类型</p><p>枚举值：</p><ul><li>0： 不支持代填</li><li>1： 元素定位代填</li></ul>
                     * @return AgentInputType <p>代填类型</p><p>枚举值：</p><ul><li>0： 不支持代填</li><li>1： 元素定位代填</li></ul>
                     * 
                     */
                    uint64_t GetAgentInputType() const;

                    /**
                     * 设置<p>代填类型</p><p>枚举值：</p><ul><li>0： 不支持代填</li><li>1： 元素定位代填</li></ul>
                     * @param _agentInputType <p>代填类型</p><p>枚举值：</p><ul><li>0： 不支持代填</li><li>1： 元素定位代填</li></ul>
                     * 
                     */
                    void SetAgentInputType(const uint64_t& _agentInputType);

                    /**
                     * 判断参数 AgentInputType 是否已赋值
                     * @return AgentInputType 是否已赋值
                     * 
                     */
                    bool AgentInputTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动提交</p><p>枚举值：</p><ul><li>0： 不自动提交</li><li>1： 自动提交</li></ul>
                     * @return AgentInputSubmit <p>是否自动提交</p><p>枚举值：</p><ul><li>0： 不自动提交</li><li>1： 自动提交</li></ul>
                     * 
                     */
                    uint64_t GetAgentInputSubmit() const;

                    /**
                     * 设置<p>是否自动提交</p><p>枚举值：</p><ul><li>0： 不自动提交</li><li>1： 自动提交</li></ul>
                     * @param _agentInputSubmit <p>是否自动提交</p><p>枚举值：</p><ul><li>0： 不自动提交</li><li>1： 自动提交</li></ul>
                     * 
                     */
                    void SetAgentInputSubmit(const uint64_t& _agentInputSubmit);

                    /**
                     * 判断参数 AgentInputSubmit 是否已赋值
                     * @return AgentInputSubmit 是否已赋值
                     * 
                     */
                    bool AgentInputSubmitHasBeenSet() const;

                    /**
                     * 获取<p>用户名输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @return UserNameType <p>用户名输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    std::string GetUserNameType() const;

                    /**
                     * 设置<p>用户名输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @param _userNameType <p>用户名输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    void SetUserNameType(const std::string& _userNameType);

                    /**
                     * 判断参数 UserNameType 是否已赋值
                     * @return UserNameType 是否已赋值
                     * 
                     */
                    bool UserNameTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户名输入框选择器属性</p>
                     * @return UserNameValue <p>用户名输入框选择器属性</p>
                     * 
                     */
                    std::string GetUserNameValue() const;

                    /**
                     * 设置<p>用户名输入框选择器属性</p>
                     * @param _userNameValue <p>用户名输入框选择器属性</p>
                     * 
                     */
                    void SetUserNameValue(const std::string& _userNameValue);

                    /**
                     * 判断参数 UserNameValue 是否已赋值
                     * @return UserNameValue 是否已赋值
                     * 
                     */
                    bool UserNameValueHasBeenSet() const;

                    /**
                     * 获取<p>密码输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @return PasswordType <p>密码输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    std::string GetPasswordType() const;

                    /**
                     * 设置<p>密码输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @param _passwordType <p>密码输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    void SetPasswordType(const std::string& _passwordType);

                    /**
                     * 判断参数 PasswordType 是否已赋值
                     * @return PasswordType 是否已赋值
                     * 
                     */
                    bool PasswordTypeHasBeenSet() const;

                    /**
                     * 获取<p>密码输入框选择器属性</p>
                     * @return PasswordValue <p>密码输入框选择器属性</p>
                     * 
                     */
                    std::string GetPasswordValue() const;

                    /**
                     * 设置<p>密码输入框选择器属性</p>
                     * @param _passwordValue <p>密码输入框选择器属性</p>
                     * 
                     */
                    void SetPasswordValue(const std::string& _passwordValue);

                    /**
                     * 判断参数 PasswordValue 是否已赋值
                     * @return PasswordValue 是否已赋值
                     * 
                     */
                    bool PasswordValueHasBeenSet() const;

                    /**
                     * 获取<p>提交按钮选择器类型，为空表示不支持自动提交</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @return SubmitType <p>提交按钮选择器类型，为空表示不支持自动提交</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    std::string GetSubmitType() const;

                    /**
                     * 设置<p>提交按钮选择器类型，为空表示不支持自动提交</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * @param _submitType <p>提交按钮选择器类型，为空表示不支持自动提交</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     * 
                     */
                    void SetSubmitType(const std::string& _submitType);

                    /**
                     * 判断参数 SubmitType 是否已赋值
                     * @return SubmitType 是否已赋值
                     * 
                     */
                    bool SubmitTypeHasBeenSet() const;

                    /**
                     * 获取<p>提交按钮选择器属性值</p>
                     * @return SubmitValue <p>提交按钮选择器属性值</p>
                     * 
                     */
                    std::string GetSubmitValue() const;

                    /**
                     * 设置<p>提交按钮选择器属性值</p>
                     * @param _submitValue <p>提交按钮选择器属性值</p>
                     * 
                     */
                    void SetSubmitValue(const std::string& _submitValue);

                    /**
                     * 判断参数 SubmitValue 是否已赋值
                     * @return SubmitValue 是否已赋值
                     * 
                     */
                    bool SubmitValueHasBeenSet() const;

                private:

                    /**
                     * <p>应用资产id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>资产名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>应用服务器id</p>
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>应用服务器账号id</p>
                     */
                    uint64_t m_deviceAccountId;
                    bool m_deviceAccountIdHasBeenSet;

                    /**
                     * <p>应用资产类型。1-web应用</p>
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>客户端工具路径</p>
                     */
                    std::string m_clientAppPath;
                    bool m_clientAppPathHasBeenSet;

                    /**
                     * <p>客户端工具类型</p>
                     */
                    std::string m_clientAppKind;
                    bool m_clientAppKindHasBeenSet;

                    /**
                     * <p>应用资产url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>托管状态</p><p>枚举值：</p><ul><li>0： 未托管</li><li>1： 已托管</li></ul>
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * <p>应用服务器实例id</p>
                     */
                    std::string m_deviceInstanceId;
                    bool m_deviceInstanceIdHasBeenSet;

                    /**
                     * <p>应用服务器名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>应用服务器账号名称</p>
                     */
                    std::string m_deviceAccountName;
                    bool m_deviceAccountNameHasBeenSet;

                    /**
                     * <p>堡垒机实例id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>堡垒机实例信息</p>
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>网络域id</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>网络域名称</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>资产组信息</p>
                     */
                    std::vector<Group> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * <p>资产所属部门</p>
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>账号数量</p>
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * <p>代填类型</p><p>枚举值：</p><ul><li>0： 不支持代填</li><li>1： 元素定位代填</li></ul>
                     */
                    uint64_t m_agentInputType;
                    bool m_agentInputTypeHasBeenSet;

                    /**
                     * <p>是否自动提交</p><p>枚举值：</p><ul><li>0： 不自动提交</li><li>1： 自动提交</li></ul>
                     */
                    uint64_t m_agentInputSubmit;
                    bool m_agentInputSubmitHasBeenSet;

                    /**
                     * <p>用户名输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     */
                    std::string m_userNameType;
                    bool m_userNameTypeHasBeenSet;

                    /**
                     * <p>用户名输入框选择器属性</p>
                     */
                    std::string m_userNameValue;
                    bool m_userNameValueHasBeenSet;

                    /**
                     * <p>密码输入框选择器类型</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     */
                    std::string m_passwordType;
                    bool m_passwordTypeHasBeenSet;

                    /**
                     * <p>密码输入框选择器属性</p>
                     */
                    std::string m_passwordValue;
                    bool m_passwordValueHasBeenSet;

                    /**
                     * <p>提交按钮选择器类型，为空表示不支持自动提交</p><p>枚举值：</p><ul><li>id： html标签id属性</li><li>name： html标签name属性</li><li>selector： css选择器</li><li>xpath： xpath</li></ul>
                     */
                    std::string m_submitType;
                    bool m_submitTypeHasBeenSet;

                    /**
                     * <p>提交按钮选择器属性值</p>
                     */
                    std::string m_submitValue;
                    bool m_submitValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_APPASSET_H_
