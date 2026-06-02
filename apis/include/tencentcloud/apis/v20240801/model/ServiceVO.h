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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetHostDTO.h>
#include <tencentcloud/apis/v20240801/model/VersionDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/HealthCheckConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/SourceTypeConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TokenLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TmsConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/IDNameVO.h>
#include <tencentcloud/apis/v20240801/model/SqlTemplate.h>
#include <tencentcloud/apis/v20240801/model/TargetServerGroupDTO.h>
#include <tencentcloud/apis/v20240801/model/FieldValueDTO.h>
#include <tencentcloud/apis/v20240801/model/CustomMatch.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ServiceVO
                */
                class ServiceVO : public AbstractModel
                {
                public:
                    ServiceVO();
                    ~ServiceVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaasID <p>里约应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetPaasID() const;

                    /**
                     * 设置<p>里约应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paasID <p>里约应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelIDs <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelIDs() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelIDs <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryIDs <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCategoryIDs() const;

                    /**
                     * 设置<p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryIDs <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType <p>鉴权方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>鉴权方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType <p>鉴权方式</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignType <p>签名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSignType() const;

                    /**
                     * 设置<p>签名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signType <p>签名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginTypes <p>登录方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetLoginTypes() const;

                    /**
                     * 设置<p>登录方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginTypes <p>登录方式</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSelect <p>负载方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置<p>负载方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSelect <p>负载方式</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PubPath <p>公开路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPubPath() const;

                    /**
                     * 设置<p>公开路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pubPath <p>公开路径</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置<p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestMethod <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>目标服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHosts <p>目标服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置<p>目标服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHosts <p>目标服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHosts(const std::vector<TargetHostDTO>& _targetHosts);

                    /**
                     * 判断参数 TargetHosts 是否已赋值
                     * @return TargetHosts 是否已赋值
                     * 
                     */
                    bool TargetHostsHasBeenSet() const;

                    /**
                     * 获取<p>是否https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpProtocolType <p>是否https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置<p>是否https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpProtocolType <p>是否https</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckTargetCertsError <p>证书检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置<p>证书检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkTargetCertsError <p>证书检查</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpProtocolVersion <p>http协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpProtocolVersion() const;

                    /**
                     * 设置<p>http协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpProtocolVersion <p>http协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Versions <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VersionDTO> GetVersions() const;

                    /**
                     * 设置<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versions <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetPath <p>目标路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>目标路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetPath <p>目标路径</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestParamsValidatorStatus <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRequestParamsValidatorStatus() const;

                    /**
                     * 设置<p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestParamsValidatorStatus <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestParamsValidatorJsonInfoT <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestParamsValidatorJsonInfoT() const;

                    /**
                     * 设置<p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestParamsValidatorJsonInfoT <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseParamsValidatorStatus <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResponseParamsValidatorStatus() const;

                    /**
                     * 设置<p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseParamsValidatorStatus <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseParamsValidatorJsonInfoT <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseParamsValidatorJsonInfoT() const;

                    /**
                     * 设置<p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseParamsValidatorJsonInfoT <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeLimitConfigStatus <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeLimitConfigStatus <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeLimitConfig <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeLimitConfig <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckStatus <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHealthCheckStatus() const;

                    /**
                     * 设置<p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckStatus <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckConfig <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckConfigDTO GetHealthCheckConfig() const;

                    /**
                     * 设置<p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckConfig <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTypeStatus <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSourceTypeStatus() const;

                    /**
                     * 设置<p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTypeStatus <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceTypeConfig <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SourceTypeConfigDTO GetSourceTypeConfig() const;

                    /**
                     * 设置<p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceTypeConfig <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否开启Token限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenLimitStatus <p>是否开启Token限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetTokenLimitStatus() const;

                    /**
                     * 设置<p>是否开启Token限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenLimitStatus <p>是否开启Token限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTokenLimitStatus(const bool& _tokenLimitStatus);

                    /**
                     * 判断参数 TokenLimitStatus 是否已赋值
                     * @return TokenLimitStatus 是否已赋值
                     * @deprecated
                     */
                    bool TokenLimitStatusHasBeenSet() const;

                    /**
                     * 获取<p>Token限流配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenLimitConfig <p>Token限流配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    TokenLimitConfigDTO GetTokenLimitConfig() const;

                    /**
                     * 设置<p>Token限流配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenLimitConfig <p>Token限流配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig);

                    /**
                     * 判断参数 TokenLimitConfig 是否已赋值
                     * @return TokenLimitConfig 是否已赋值
                     * @deprecated
                     */
                    bool TokenLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启内容安全</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmsStatus <p>是否开启内容安全</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetTmsStatus() const;

                    /**
                     * 设置<p>是否开启内容安全</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmsStatus <p>是否开启内容安全</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTmsStatus(const bool& _tmsStatus);

                    /**
                     * 判断参数 TmsStatus 是否已赋值
                     * @return TmsStatus 是否已赋值
                     * @deprecated
                     */
                    bool TmsStatusHasBeenSet() const;

                    /**
                     * 获取<p>内容安全配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmsConfig <p>内容安全配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    TmsConfigDTO GetTmsConfig() const;

                    /**
                     * 设置<p>内容安全配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmsConfig <p>内容安全配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTmsConfig(const TmsConfigDTO& _tmsConfig);

                    /**
                     * 判断参数 TmsConfig 是否已赋值
                     * @return TmsConfig 是否已赋值
                     * @deprecated
                     */
                    bool TmsConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteStatus <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置<p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteStatus <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpWhiteList <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipWhiteList <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackStatus <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置<p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackStatus <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpBlackList <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置<p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipBlackList <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginConfigs <p>插件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置<p>插件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginConfigs <p>插件</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return App <p>app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDNameVO GetApp() const;

                    /**
                     * 设置<p>app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _app <p>app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApp(const IDNameVO& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取<p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalogs <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IDNameVO> GetCatalogs() const;

                    /**
                     * 设置<p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogs <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogs(const std::vector<IDNameVO>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IDNameVO> GetLabels() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<IDNameVO>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logins <p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IDNameVO> GetLogins() const;

                    /**
                     * 设置<p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logins <p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogins(const std::vector<IDNameVO>& _logins);

                    /**
                     * 判断参数 Logins 是否已赋值
                     * @return Logins 是否已赋值
                     * 
                     */
                    bool LoginsHasBeenSet() const;

                    /**
                     * 获取<p>授权数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthAppNum <p>授权数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthAppNum() const;

                    /**
                     * 设置<p>授权数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authAppNum <p>授权数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthAppNum(const int64_t& _authAppNum);

                    /**
                     * 判断参数 AuthAppNum 是否已赋值
                     * @return AuthAppNum 是否已赋值
                     * 
                     */
                    bool AuthAppNumHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin <p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>是否开启报文记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenMessageLogStatus <p>是否开启报文记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOpenMessageLogStatus() const;

                    /**
                     * 设置<p>是否开启报文记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openMessageLogStatus <p>是否开启报文记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenMessageLogStatus(const bool& _openMessageLogStatus);

                    /**
                     * 判断参数 OpenMessageLogStatus 是否已赋值
                     * @return OpenMessageLogStatus 是否已赋值
                     * 
                     */
                    bool OpenMessageLogStatusHasBeenSet() const;

                    /**
                     * 获取<p>订阅页面的当前用户是否订阅了该API</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrPaasIDSubscriptionID <p>订阅页面的当前用户是否订阅了该API</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetCurrPaasIDSubscriptionID() const;

                    /**
                     * 设置<p>订阅页面的当前用户是否订阅了该API</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currPaasIDSubscriptionID <p>订阅页面的当前用户是否订阅了该API</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetCurrPaasIDSubscriptionID(const std::string& _currPaasIDSubscriptionID);

                    /**
                     * 判断参数 CurrPaasIDSubscriptionID 是否已赋值
                     * @return CurrPaasIDSubscriptionID 是否已赋值
                     * @deprecated
                     */
                    bool CurrPaasIDSubscriptionIDHasBeenSet() const;

                    /**
                     * 获取<p>目标服务类型 Restful Database Mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceType <p>目标服务类型 Restful Database Mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置<p>目标服务类型 Restful Database Mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceType <p>目标服务类型 Restful Database Mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>SQL模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplate <p>SQL模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SqlTemplate GetSqlTemplate() const;

                    /**
                     * 设置<p>SQL模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlTemplate <p>SQL模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlTemplate(const SqlTemplate& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取<p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHostType <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetHostType() const;

                    /**
                     * 设置<p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHostType <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHostType(const int64_t& _targetHostType);

                    /**
                     * 判断参数 TargetHostType 是否已赋值
                     * @return TargetHostType 是否已赋值
                     * 
                     */
                    bool TargetHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>后端服务类型 0 自定义 原始数据:ip/域名或vpc 1 后端服务 服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceHostType <p>后端服务类型 0 自定义 原始数据:ip/域名或vpc 1 后端服务 服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetServiceHostType() const;

                    /**
                     * 设置<p>后端服务类型 0 自定义 原始数据:ip/域名或vpc 1 后端服务 服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceHostType <p>后端服务类型 0 自定义 原始数据:ip/域名或vpc 1 后端服务 服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServiceHostType(const uint64_t& _targetServiceHostType);

                    /**
                     * 判断参数 TargetServiceHostType 是否已赋值
                     * @return TargetServiceHostType 是否已赋值
                     * 
                     */
                    bool TargetServiceHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServerGroupID <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServerGroupID() const;

                    /**
                     * 设置<p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServerGroupID <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServerGroupID(const std::string& _targetServerGroupID);

                    /**
                     * 判断参数 TargetServerGroupID 是否已赋值
                     * @return TargetServerGroupID 是否已赋值
                     * 
                     */
                    bool TargetServerGroupIDHasBeenSet() const;

                    /**
                     * 获取<p>后端服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServerGroup <p>后端服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetServerGroupDTO GetTargetServerGroup() const;

                    /**
                     * 设置<p>后端服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServerGroup <p>后端服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServerGroup(const TargetServerGroupDTO& _targetServerGroup);

                    /**
                     * 判断参数 TargetServerGroup 是否已赋值
                     * @return TargetServerGroup 是否已赋值
                     * 
                     */
                    bool TargetServerGroupHasBeenSet() const;

                    /**
                     * 获取<p>自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomHttpHost <p>自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomHttpHost() const;

                    /**
                     * 设置<p>自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customHttpHost <p>自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomHttpHost(const std::string& _customHttpHost);

                    /**
                     * 判断参数 CustomHttpHost 是否已赋值
                     * @return CustomHttpHost 是否已赋值
                     * 
                     */
                    bool CustomHttpHostHasBeenSet() const;

                    /**
                     * 获取<p>Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpHostType <p>Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpHostType() const;

                    /**
                     * 设置<p>Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpHostType <p>Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpHostType(const std::string& _httpHostType);

                    /**
                     * 判断参数 HttpHostType 是否已赋值
                     * @return HttpHostType 是否已赋值
                     * 
                     */
                    bool HttpHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>mock响应状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MockStatusCode <p>mock响应状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMockStatusCode() const;

                    /**
                     * 设置<p>mock响应状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mockStatusCode <p>mock响应状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMockStatusCode(const int64_t& _mockStatusCode);

                    /**
                     * 判断参数 MockStatusCode 是否已赋值
                     * @return MockStatusCode 是否已赋值
                     * 
                     */
                    bool MockStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>mock响应body</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MockBody <p>mock响应body</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMockBody() const;

                    /**
                     * 设置<p>mock响应body</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mockBody <p>mock响应body</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMockBody(const std::string& _mockBody);

                    /**
                     * 判断参数 MockBody 是否已赋值
                     * @return MockBody 是否已赋值
                     * 
                     */
                    bool MockBodyHasBeenSet() const;

                    /**
                     * 获取<p>mock响应头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MockHeaders <p>mock响应头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FieldValueDTO> GetMockHeaders() const;

                    /**
                     * 设置<p>mock响应头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mockHeaders <p>mock响应头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMockHeaders(const std::vector<FieldValueDTO>& _mockHeaders);

                    /**
                     * 判断参数 MockHeaders 是否已赋值
                     * @return MockHeaders 是否已赋值
                     * 
                     */
                    bool MockHeadersHasBeenSet() const;

                    /**
                     * 获取<p>路径匹配类型: prefix 前缀匹配(不送默认); absolute 绝对匹配; regex正则匹配;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathMatchType <p>路径匹配类型: prefix 前缀匹配(不送默认); absolute 绝对匹配; regex正则匹配;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPathMatchType() const;

                    /**
                     * 设置<p>路径匹配类型: prefix 前缀匹配(不送默认); absolute 绝对匹配; regex正则匹配;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathMatchType <p>路径匹配类型: prefix 前缀匹配(不送默认); absolute 绝对匹配; regex正则匹配;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathMatchType(const std::string& _pathMatchType);

                    /**
                     * 判断参数 PathMatchType 是否已赋值
                     * @return PathMatchType 是否已赋值
                     * 
                     */
                    bool PathMatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomMatch <p>自定义匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomMatch GetCustomMatch() const;

                    /**
                     * 设置<p>自定义匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customMatch <p>自定义匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomMatch(const CustomMatch& _customMatch);

                    /**
                     * 判断参数 CustomMatch 是否已赋值
                     * @return CustomMatch 是否已赋值
                     * 
                     */
                    bool CustomMatchHasBeenSet() const;

                    /**
                     * 获取<p>请求的超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout <p>请求的超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>请求的超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout <p>请求的超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>绑定的mcp server数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return McpServerNum <p>绑定的mcp server数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMcpServerNum() const;

                    /**
                     * 设置<p>绑定的mcp server数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mcpServerNum <p>绑定的mcp server数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMcpServerNum(const int64_t& _mcpServerNum);

                    /**
                     * 判断参数 McpServerNum 是否已赋值
                     * @return McpServerNum 是否已赋值
                     * 
                     */
                    bool McpServerNumHasBeenSet() const;

                private:

                    /**
                     * <p>实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>里约应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paasID;
                    bool m_paasIDHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelIDs;
                    bool m_labelIDsHasBeenSet;

                    /**
                     * <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_categoryIDs;
                    bool m_categoryIDsHasBeenSet;

                    /**
                     * <p>鉴权方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>签名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * <p>登录方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_loginTypes;
                    bool m_loginTypesHasBeenSet;

                    /**
                     * <p>负载方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * <p>公开路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pubPath;
                    bool m_pubPathHasBeenSet;

                    /**
                     * <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * <p>目标服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * <p>是否https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * <p>证书检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * <p>http协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpProtocolVersion;
                    bool m_httpProtocolVersionHasBeenSet;

                    /**
                     * <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VersionDTO> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * <p>目标路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_requestParamsValidatorStatus;
                    bool m_requestParamsValidatorStatusHasBeenSet;

                    /**
                     * <p>入参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestParamsValidatorJsonInfoT;
                    bool m_requestParamsValidatorJsonInfoTHasBeenSet;

                    /**
                     * <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_responseParamsValidatorStatus;
                    bool m_responseParamsValidatorStatusHasBeenSet;

                    /**
                     * <p>出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseParamsValidatorJsonInfoT;
                    bool m_responseParamsValidatorJsonInfoTHasBeenSet;

                    /**
                     * <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>流量控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                    /**
                     * <p>健康检查</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckConfigDTO m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sourceTypeStatus;
                    bool m_sourceTypeStatusHasBeenSet;

                    /**
                     * <p>格式转换</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SourceTypeConfigDTO m_sourceTypeConfig;
                    bool m_sourceTypeConfigHasBeenSet;

                    /**
                     * <p>是否开启Token限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tokenLimitStatus;
                    bool m_tokenLimitStatusHasBeenSet;

                    /**
                     * <p>Token限流配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TokenLimitConfigDTO m_tokenLimitConfig;
                    bool m_tokenLimitConfigHasBeenSet;

                    /**
                     * <p>是否开启内容安全</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tmsStatus;
                    bool m_tmsStatusHasBeenSet;

                    /**
                     * <p>内容安全配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TmsConfigDTO m_tmsConfig;
                    bool m_tmsConfigHasBeenSet;

                    /**
                     * <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * <p>IP白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * <p>IP黑名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * <p>插件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>预览地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>app</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDNameVO m_app;
                    bool m_appHasBeenSet;

                    /**
                     * <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IDNameVO> m_catalogs;
                    bool m_catalogsHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IDNameVO> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>认证方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IDNameVO> m_logins;
                    bool m_loginsHasBeenSet;

                    /**
                     * <p>授权数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_authAppNum;
                    bool m_authAppNumHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>用户ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>是否开启报文记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_openMessageLogStatus;
                    bool m_openMessageLogStatusHasBeenSet;

                    /**
                     * <p>订阅页面的当前用户是否订阅了该API</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currPaasIDSubscriptionID;
                    bool m_currPaasIDSubscriptionIDHasBeenSet;

                    /**
                     * <p>目标服务类型 Restful Database Mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * <p>SQL模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SqlTemplate m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetHostType;
                    bool m_targetHostTypeHasBeenSet;

                    /**
                     * <p>后端服务类型 0 自定义 原始数据:ip/域名或vpc 1 后端服务 服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetServiceHostType;
                    bool m_targetServiceHostTypeHasBeenSet;

                    /**
                     * <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServerGroupID;
                    bool m_targetServerGroupIDHasBeenSet;

                    /**
                     * <p>后端服务组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetServerGroupDTO m_targetServerGroup;
                    bool m_targetServerGroupHasBeenSet;

                    /**
                     * <p>自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customHttpHost;
                    bool m_customHttpHostHasBeenSet;

                    /**
                     * <p>Http 请求host类型 useRequestHost 保持源请求host targetHost 修正为源站host  customHost 自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpHostType;
                    bool m_httpHostTypeHasBeenSet;

                    /**
                     * <p>mock响应状态码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mockStatusCode;
                    bool m_mockStatusCodeHasBeenSet;

                    /**
                     * <p>mock响应body</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mockBody;
                    bool m_mockBodyHasBeenSet;

                    /**
                     * <p>mock响应头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FieldValueDTO> m_mockHeaders;
                    bool m_mockHeadersHasBeenSet;

                    /**
                     * <p>路径匹配类型: prefix 前缀匹配(不送默认); absolute 绝对匹配; regex正则匹配;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathMatchType;
                    bool m_pathMatchTypeHasBeenSet;

                    /**
                     * <p>自定义匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomMatch m_customMatch;
                    bool m_customMatchHasBeenSet;

                    /**
                     * <p>请求的超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>绑定的mcp server数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mcpServerNum;
                    bool m_mcpServerNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEVO_H_
