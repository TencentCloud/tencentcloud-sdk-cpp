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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIIDSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIIDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API状态
                */
                class ApiIdStatus : public AbstractModel
                {
                public:
                    ApiIdStatus();
                    ~ApiIdStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务唯一ID。
                     * @return ServiceId 服务唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一ID。
                     * @param _serviceId 服务唯一ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API唯一ID。
                     * @return ApiId API唯一ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API唯一ID。
                     * @param _apiId API唯一ID。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiDesc API描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiDesc API描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取API PATH。
                     * @return Path API PATH。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API PATH。
                     * @param _path API PATH。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API METHOD。
                     * @return Method API METHOD。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API METHOD。
                     * @param _method API METHOD。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取服务创建时间。
                     * @return CreatedTime 服务创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置服务创建时间。
                     * @param _createdTime 服务创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取服务修改时间。
                     * @return ModifiedTime 服务修改时间。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置服务修改时间。
                     * @param _modifiedTime 服务修改时间。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取API名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName API名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName API名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取VPC唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId VPC唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqVpcId VPC唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiType API类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiType API类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol API协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol API协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取是否买后调试。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDebugAfterCharge 是否买后调试。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置是否买后调试。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDebugAfterCharge 是否买后调试。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDebugAfterCharge(const bool& _isDebugAfterCharge);

                    /**
                     * 判断参数 IsDebugAfterCharge 是否已赋值
                     * @return IsDebugAfterCharge 是否已赋值
                     * 
                     */
                    bool IsDebugAfterChargeHasBeenSet() const;

                    /**
                     * 获取授权类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType 授权类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置授权类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType 授权类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取API业务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiBusinessType API业务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置API业务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiBusinessType API业务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiBusinessType(const std::string& _apiBusinessType);

                    /**
                     * 判断参数 ApiBusinessType 是否已赋值
                     * @return ApiBusinessType 是否已赋值
                     * 
                     */
                    bool ApiBusinessTypeHasBeenSet() const;

                    /**
                     * 获取关联授权API唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthRelationApiId 关联授权API唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置关联授权API唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authRelationApiId 关联授权API唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthRelationApiId(const std::string& _authRelationApiId);

                    /**
                     * 判断参数 AuthRelationApiId 是否已赋值
                     * @return AuthRelationApiId 是否已赋值
                     * 
                     */
                    bool AuthRelationApiIdHasBeenSet() const;

                    /**
                     * 获取授权API关联的业务API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelationBuniessApiIds 授权API关联的业务API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetRelationBuniessApiIds() const;

                    /**
                     * 设置授权API关联的业务API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relationBuniessApiIds 授权API关联的业务API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRelationBuniessApiIds(const std::vector<std::string>& _relationBuniessApiIds);

                    /**
                     * 判断参数 RelationBuniessApiIds 是否已赋值
                     * @return RelationBuniessApiIds 是否已赋值
                     * @deprecated
                     */
                    bool RelationBuniessApiIdsHasBeenSet() const;

                    /**
                     * 获取oauth配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OauthConfig oauth配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置oauth配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oauthConfig oauth配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOauthConfig(const OauthConfig& _oauthConfig);

                    /**
                     * 判断参数 OauthConfig 是否已赋值
                     * @return OauthConfig 是否已赋值
                     * 
                     */
                    bool OauthConfigHasBeenSet() const;

                    /**
                     * 获取oauth2.0API请求，token存放位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenLocation oauth2.0API请求，token存放位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTokenLocation() const;

                    /**
                     * 设置oauth2.0API请求，token存放位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenLocation oauth2.0API请求，token存放位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenLocation(const std::string& _tokenLocation);

                    /**
                     * 判断参数 TokenLocation 是否已赋值
                     * @return TokenLocation 是否已赋值
                     * 
                     */
                    bool TokenLocationHasBeenSet() const;

                private:

                    /**
                     * 服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API唯一ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * API PATH。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API METHOD。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 服务创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 服务修改时间。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * API名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * VPC唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * API类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 是否买后调试。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * 授权类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * API业务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * 关联授权API唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * 授权API关联的业务API列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_relationBuniessApiIds;
                    bool m_relationBuniessApiIdsHasBeenSet;

                    /**
                     * oauth配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * oauth2.0API请求，token存放位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tokenLocation;
                    bool m_tokenLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIIDSTATUS_H_
