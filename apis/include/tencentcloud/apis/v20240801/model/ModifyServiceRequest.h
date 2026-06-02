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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYSERVICEREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/VersionDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/HealthCheckConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/SourceTypeConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyService请求参数结构体
                */
                class ModifyServiceRequest : public AbstractModel
                {
                public:
                    ModifyServiceRequest();
                    ~ModifyServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例</p>
                     * @return InstanceID <p>实例</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例</p>
                     * @param _instanceID <p>实例</p>
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
                     * 获取<p>里约应用ID</p>
                     * @return PaasID <p>里约应用ID</p>
                     * @deprecated
                     */
                    std::string GetPaasID() const;

                    /**
                     * 设置<p>里约应用ID</p>
                     * @param _paasID <p>里约应用ID</p>
                     * @deprecated
                     */
                    void SetPaasID(const std::string& _paasID);

                    /**
                     * 判断参数 PaasID 是否已赋值
                     * @return PaasID 是否已赋值
                     * @deprecated
                     */
                    bool PaasIDHasBeenSet() const;

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
                     * 获取<p>标签</p>
                     * @return LabelIDs <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabelIDs() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _labelIDs <p>标签</p>
                     * 
                     */
                    void SetLabelIDs(const std::vector<std::string>& _labelIDs);

                    /**
                     * 判断参数 LabelIDs 是否已赋值
                     * @return LabelIDs 是否已赋值
                     * 
                     */
                    bool LabelIDsHasBeenSet() const;

                    /**
                     * 获取<p>目录</p>
                     * @return CategoryIDs <p>目录</p>
                     * 
                     */
                    std::vector<std::string> GetCategoryIDs() const;

                    /**
                     * 设置<p>目录</p>
                     * @param _categoryIDs <p>目录</p>
                     * 
                     */
                    void SetCategoryIDs(const std::vector<std::string>& _categoryIDs);

                    /**
                     * 判断参数 CategoryIDs 是否已赋值
                     * @return CategoryIDs 是否已赋值
                     * 
                     */
                    bool CategoryIDsHasBeenSet() const;

                    /**
                     * 获取<p>鉴权方式</p>
                     * @return AuthType <p>鉴权方式</p>
                     * @deprecated
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>鉴权方式</p>
                     * @param _authType <p>鉴权方式</p>
                     * @deprecated
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * @deprecated
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>签名</p>
                     * @return SignType <p>签名</p>
                     * @deprecated
                     */
                    std::string GetSignType() const;

                    /**
                     * 设置<p>签名</p>
                     * @param _signType <p>签名</p>
                     * @deprecated
                     */
                    void SetSignType(const std::string& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * @deprecated
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取<p>登录方式</p>
                     * @return LoginTypes <p>登录方式</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetLoginTypes() const;

                    /**
                     * 设置<p>登录方式</p>
                     * @param _loginTypes <p>登录方式</p>
                     * @deprecated
                     */
                    void SetLoginTypes(const std::vector<std::string>& _loginTypes);

                    /**
                     * 判断参数 LoginTypes 是否已赋值
                     * @return LoginTypes 是否已赋值
                     * @deprecated
                     */
                    bool LoginTypesHasBeenSet() const;

                    /**
                     * 获取<p>负载方式</p>
                     * @return TargetSelect <p>负载方式</p>
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置<p>负载方式</p>
                     * @param _targetSelect <p>负载方式</p>
                     * 
                     */
                    void SetTargetSelect(const std::string& _targetSelect);

                    /**
                     * 判断参数 TargetSelect 是否已赋值
                     * @return TargetSelect 是否已赋值
                     * 
                     */
                    bool TargetSelectHasBeenSet() const;

                    /**
                     * 获取<p>公开路径</p>
                     * @return PubPath <p>公开路径</p>
                     * 
                     */
                    std::string GetPubPath() const;

                    /**
                     * 设置<p>公开路径</p>
                     * @param _pubPath <p>公开路径</p>
                     * 
                     */
                    void SetPubPath(const std::string& _pubPath);

                    /**
                     * 判断参数 PubPath 是否已赋值
                     * @return PubPath 是否已赋值
                     * 
                     */
                    bool PubPathHasBeenSet() const;

                    /**
                     * 获取<p>请求方法</p>
                     * @return RequestMethod <p>请求方法</p>
                     * 
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置<p>请求方法</p>
                     * @param _requestMethod <p>请求方法</p>
                     * 
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取<p>是否https</p>
                     * @return HttpProtocolType <p>是否https</p>
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置<p>是否https</p>
                     * @param _httpProtocolType <p>是否https</p>
                     * 
                     */
                    void SetHttpProtocolType(const std::string& _httpProtocolType);

                    /**
                     * 判断参数 HttpProtocolType 是否已赋值
                     * @return HttpProtocolType 是否已赋值
                     * 
                     */
                    bool HttpProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书检查</p>
                     * @return CheckTargetCertsError <p>证书检查</p>
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置<p>证书检查</p>
                     * @param _checkTargetCertsError <p>证书检查</p>
                     * 
                     */
                    void SetCheckTargetCertsError(const bool& _checkTargetCertsError);

                    /**
                     * 判断参数 CheckTargetCertsError 是否已赋值
                     * @return CheckTargetCertsError 是否已赋值
                     * 
                     */
                    bool CheckTargetCertsErrorHasBeenSet() const;

                    /**
                     * 获取<p>http协议类型</p>
                     * @return HttpProtocolVersion <p>http协议类型</p>
                     * 
                     */
                    std::string GetHttpProtocolVersion() const;

                    /**
                     * 设置<p>http协议类型</p>
                     * @param _httpProtocolVersion <p>http协议类型</p>
                     * 
                     */
                    void SetHttpProtocolVersion(const std::string& _httpProtocolVersion);

                    /**
                     * 判断参数 HttpProtocolVersion 是否已赋值
                     * @return HttpProtocolVersion 是否已赋值
                     * 
                     */
                    bool HttpProtocolVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
                     * @return Versions <p>版本号</p>
                     * 
                     */
                    std::vector<VersionDTO> GetVersions() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _versions <p>版本号</p>
                     * 
                     */
                    void SetVersions(const std::vector<VersionDTO>& _versions);

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取<p>目标路径</p>
                     * @return TargetPath <p>目标路径</p>
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>目标路径</p>
                     * @param _targetPath <p>目标路径</p>
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取<p>入参</p>
                     * @return RequestParamsValidatorStatus <p>入参</p>
                     * 
                     */
                    bool GetRequestParamsValidatorStatus() const;

                    /**
                     * 设置<p>入参</p>
                     * @param _requestParamsValidatorStatus <p>入参</p>
                     * 
                     */
                    void SetRequestParamsValidatorStatus(const bool& _requestParamsValidatorStatus);

                    /**
                     * 判断参数 RequestParamsValidatorStatus 是否已赋值
                     * @return RequestParamsValidatorStatus 是否已赋值
                     * 
                     */
                    bool RequestParamsValidatorStatusHasBeenSet() const;

                    /**
                     * 获取<p>入参</p>
                     * @return RequestParamsValidatorJsonInfoT <p>入参</p>
                     * 
                     */
                    std::string GetRequestParamsValidatorJsonInfoT() const;

                    /**
                     * 设置<p>入参</p>
                     * @param _requestParamsValidatorJsonInfoT <p>入参</p>
                     * 
                     */
                    void SetRequestParamsValidatorJsonInfoT(const std::string& _requestParamsValidatorJsonInfoT);

                    /**
                     * 判断参数 RequestParamsValidatorJsonInfoT 是否已赋值
                     * @return RequestParamsValidatorJsonInfoT 是否已赋值
                     * 
                     */
                    bool RequestParamsValidatorJsonInfoTHasBeenSet() const;

                    /**
                     * 获取<p>出参</p>
                     * @return ResponseParamsValidatorStatus <p>出参</p>
                     * 
                     */
                    bool GetResponseParamsValidatorStatus() const;

                    /**
                     * 设置<p>出参</p>
                     * @param _responseParamsValidatorStatus <p>出参</p>
                     * 
                     */
                    void SetResponseParamsValidatorStatus(const bool& _responseParamsValidatorStatus);

                    /**
                     * 判断参数 ResponseParamsValidatorStatus 是否已赋值
                     * @return ResponseParamsValidatorStatus 是否已赋值
                     * 
                     */
                    bool ResponseParamsValidatorStatusHasBeenSet() const;

                    /**
                     * 获取<p>出参</p>
                     * @return ResponseParamsValidatorJsonInfoT <p>出参</p>
                     * 
                     */
                    std::string GetResponseParamsValidatorJsonInfoT() const;

                    /**
                     * 设置<p>出参</p>
                     * @param _responseParamsValidatorJsonInfoT <p>出参</p>
                     * 
                     */
                    void SetResponseParamsValidatorJsonInfoT(const std::string& _responseParamsValidatorJsonInfoT);

                    /**
                     * 判断参数 ResponseParamsValidatorJsonInfoT 是否已赋值
                     * @return ResponseParamsValidatorJsonInfoT 是否已赋值
                     * 
                     */
                    bool ResponseParamsValidatorJsonInfoTHasBeenSet() const;

                    /**
                     * 获取<p>流量控制</p>
                     * @return InvokeLimitConfigStatus <p>流量控制</p>
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>流量控制</p>
                     * @param _invokeLimitConfigStatus <p>流量控制</p>
                     * 
                     */
                    void SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus);

                    /**
                     * 判断参数 InvokeLimitConfigStatus 是否已赋值
                     * @return InvokeLimitConfigStatus 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigStatusHasBeenSet() const;

                    /**
                     * 获取<p>流量控制</p>
                     * @return InvokeLimitConfig <p>流量控制</p>
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>流量控制</p>
                     * @param _invokeLimitConfig <p>流量控制</p>
                     * 
                     */
                    void SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig);

                    /**
                     * 判断参数 InvokeLimitConfig 是否已赋值
                     * @return InvokeLimitConfig 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>健康检查</p>
                     * @return HealthCheckStatus <p>健康检查</p>
                     * 
                     */
                    bool GetHealthCheckStatus() const;

                    /**
                     * 设置<p>健康检查</p>
                     * @param _healthCheckStatus <p>健康检查</p>
                     * 
                     */
                    void SetHealthCheckStatus(const bool& _healthCheckStatus);

                    /**
                     * 判断参数 HealthCheckStatus 是否已赋值
                     * @return HealthCheckStatus 是否已赋值
                     * 
                     */
                    bool HealthCheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>健康检查</p>
                     * @return HealthCheckConfig <p>健康检查</p>
                     * 
                     */
                    HealthCheckConfigDTO GetHealthCheckConfig() const;

                    /**
                     * 设置<p>健康检查</p>
                     * @param _healthCheckConfig <p>健康检查</p>
                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfigDTO& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                    /**
                     * 获取<p>格式转换</p>
                     * @return SourceTypeStatus <p>格式转换</p>
                     * 
                     */
                    bool GetSourceTypeStatus() const;

                    /**
                     * 设置<p>格式转换</p>
                     * @param _sourceTypeStatus <p>格式转换</p>
                     * 
                     */
                    void SetSourceTypeStatus(const bool& _sourceTypeStatus);

                    /**
                     * 判断参数 SourceTypeStatus 是否已赋值
                     * @return SourceTypeStatus 是否已赋值
                     * 
                     */
                    bool SourceTypeStatusHasBeenSet() const;

                    /**
                     * 获取<p>格式转换</p>
                     * @return SourceTypeConfig <p>格式转换</p>
                     * 
                     */
                    SourceTypeConfigDTO GetSourceTypeConfig() const;

                    /**
                     * 设置<p>格式转换</p>
                     * @param _sourceTypeConfig <p>格式转换</p>
                     * 
                     */
                    void SetSourceTypeConfig(const SourceTypeConfigDTO& _sourceTypeConfig);

                    /**
                     * 判断参数 SourceTypeConfig 是否已赋值
                     * @return SourceTypeConfig 是否已赋值
                     * 
                     */
                    bool SourceTypeConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单</p>
                     * @return IpWhiteStatus <p>IP白名单</p>
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置<p>IP白名单</p>
                     * @param _ipWhiteStatus <p>IP白名单</p>
                     * 
                     */
                    void SetIpWhiteStatus(const bool& _ipWhiteStatus);

                    /**
                     * 判断参数 IpWhiteStatus 是否已赋值
                     * @return IpWhiteStatus 是否已赋值
                     * 
                     */
                    bool IpWhiteStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单</p>
                     * @return IpWhiteList <p>IP白名单</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>IP白名单</p>
                     * @param _ipWhiteList <p>IP白名单</p>
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>IP黑名单</p>
                     * @return IpBlackStatus <p>IP黑名单</p>
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置<p>IP黑名单</p>
                     * @param _ipBlackStatus <p>IP黑名单</p>
                     * 
                     */
                    void SetIpBlackStatus(const bool& _ipBlackStatus);

                    /**
                     * 判断参数 IpBlackStatus 是否已赋值
                     * @return IpBlackStatus 是否已赋值
                     * 
                     */
                    bool IpBlackStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP黑名单</p>
                     * @return IpBlackList <p>IP黑名单</p>
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置<p>IP黑名单</p>
                     * @param _ipBlackList <p>IP黑名单</p>
                     * 
                     */
                    void SetIpBlackList(const std::vector<std::string>& _ipBlackList);

                    /**
                     * 判断参数 IpBlackList 是否已赋值
                     * @return IpBlackList 是否已赋值
                     * 
                     */
                    bool IpBlackListHasBeenSet() const;

                    /**
                     * 获取<p>插件</p>
                     * @return PluginConfigs <p>插件</p>
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置<p>插件</p>
                     * @param _pluginConfigs <p>插件</p>
                     * 
                     */
                    void SetPluginConfigs(const std::vector<PluginConfigDTO>& _pluginConfigs);

                    /**
                     * 判断参数 PluginConfigs 是否已赋值
                     * @return PluginConfigs 是否已赋值
                     * 
                     */
                    bool PluginConfigsHasBeenSet() const;

                    /**
                     * 获取<p>服务ID</p>
                     * @return ID <p>服务ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _iD <p>服务ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>实例</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>里约应用ID</p>
                     */
                    std::string m_paasID;
                    bool m_paasIDHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_labelIDs;
                    bool m_labelIDsHasBeenSet;

                    /**
                     * <p>目录</p>
                     */
                    std::vector<std::string> m_categoryIDs;
                    bool m_categoryIDsHasBeenSet;

                    /**
                     * <p>鉴权方式</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>签名</p>
                     */
                    std::string m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * <p>登录方式</p>
                     */
                    std::vector<std::string> m_loginTypes;
                    bool m_loginTypesHasBeenSet;

                    /**
                     * <p>负载方式</p>
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * <p>公开路径</p>
                     */
                    std::string m_pubPath;
                    bool m_pubPathHasBeenSet;

                    /**
                     * <p>请求方法</p>
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * <p>是否https</p>
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * <p>证书检查</p>
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * <p>http协议类型</p>
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::vector<VersionDTO> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * <p>目标路径</p>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>入参</p>
                     */
                    bool m_requestParamsValidatorStatus;
                    bool m_requestParamsValidatorStatusHasBeenSet;

                    /**
                     * <p>入参</p>
                     */
                    std::string m_requestParamsValidatorJsonInfoT;
                    bool m_requestParamsValidatorJsonInfoTHasBeenSet;

                    /**
                     * <p>出参</p>
                     */
                    bool m_responseParamsValidatorStatus;
                    bool m_responseParamsValidatorStatusHasBeenSet;

                    /**
                     * <p>出参</p>
                     */
                    std::string m_responseParamsValidatorJsonInfoT;
                    bool m_responseParamsValidatorJsonInfoTHasBeenSet;

                    /**
                     * <p>流量控制</p>
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>流量控制</p>
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>健康检查</p>
                     */
                    bool m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                    /**
                     * <p>健康检查</p>
                     */
                    HealthCheckConfigDTO m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * <p>格式转换</p>
                     */
                    bool m_sourceTypeStatus;
                    bool m_sourceTypeStatusHasBeenSet;

                    /**
                     * <p>格式转换</p>
                     */
                    SourceTypeConfigDTO m_sourceTypeConfig;
                    bool m_sourceTypeConfigHasBeenSet;

                    /**
                     * <p>IP白名单</p>
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * <p>IP白名单</p>
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>IP黑名单</p>
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * <p>IP黑名单</p>
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * <p>插件</p>
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYSERVICEREQUEST_H_
