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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/FrequencyConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * API数据源连接配置
                */
                class ApiDatasourceConfig : public AbstractModel
                {
                public:
                    ApiDatasourceConfig();
                    ~ApiDatasourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API数据源解析结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldsJsonData API数据源解析结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldsJsonData() const;

                    /**
                     * 设置API数据源解析结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldsJsonData API数据源解析结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldsJsonData(const std::string& _fieldsJsonData);

                    /**
                     * 判断参数 FieldsJsonData 是否已赋值
                     * @return FieldsJsonData 是否已赋值
                     * 
                     */
                    bool FieldsJsonDataHasBeenSet() const;

                    /**
                     * 获取连接类型1:直连 2:抽取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionType 连接类型1:直连 2:抽取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConnectionType() const;

                    /**
                     * 设置连接类型1:直连 2:抽取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectionType 连接类型1:直连 2:抽取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectionType(const uint64_t& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取抽取频率配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrequencyConfig 抽取频率配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FrequencyConfig GetFrequencyConfig() const;

                    /**
                     * 设置抽取频率配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frequencyConfig 抽取频率配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrequencyConfig(const FrequencyConfig& _frequencyConfig);

                    /**
                     * 判断参数 FrequencyConfig 是否已赋值
                     * @return FrequencyConfig 是否已赋值
                     * 
                     */
                    bool FrequencyConfigHasBeenSet() const;

                    /**
                     * 获取请求URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 请求URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 请求URL
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
                     * 获取1:GET 2:POST
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod 1:GET 2:POST
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRequestMethod() const;

                    /**
                     * 设置1:GET 2:POST
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestMethod 1:GET 2:POST
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestMethod(const uint64_t& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeader 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestHeader 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestParams 请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestParams() const;

                    /**
                     * 设置请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestParams 请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestParams(const std::string& _requestParams);

                    /**
                     * 判断参数 RequestParams 是否已赋值
                     * @return RequestParams 是否已赋值
                     * 
                     */
                    bool RequestParamsHasBeenSet() const;

                    /**
                     * 获取请求体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestBody 请求体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置请求体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestBody 请求体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 密码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取1: 无鉴权 2:BASIC_AUTH
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizationType 1: 无鉴权 2:BASIC_AUTH
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAuthorizationType() const;

                    /**
                     * 设置1: 无鉴权 2:BASIC_AUTH
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizationType 1: 无鉴权 2:BASIC_AUTH
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorizationType(const uint64_t& _authorizationType);

                    /**
                     * 判断参数 AuthorizationType 是否已赋值
                     * @return AuthorizationType 是否已赋值
                     * 
                     */
                    bool AuthorizationTypeHasBeenSet() const;

                    /**
                     * 获取表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTableId() const;

                    /**
                     * 设置表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const uint64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取路径DbName映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonPathDbNameMap 路径DbName映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJsonPathDbNameMap() const;

                    /**
                     * 设置路径DbName映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonPathDbNameMap 路径DbName映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJsonPathDbNameMap(const std::string& _jsonPathDbNameMap);

                    /**
                     * 判断参数 JsonPathDbNameMap 是否已赋值
                     * @return JsonPathDbNameMap 是否已赋值
                     * 
                     */
                    bool JsonPathDbNameMapHasBeenSet() const;

                    /**
                     * 获取鉴权API
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthApi 鉴权API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthApi() const;

                    /**
                     * 设置鉴权API
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authApi 鉴权API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthApi(const std::string& _authApi);

                    /**
                     * 判断参数 AuthApi 是否已赋值
                     * @return AuthApi 是否已赋值
                     * 
                     */
                    bool AuthApiHasBeenSet() const;

                    /**
                     * 获取应用Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppKey 应用Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置应用Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appKey 应用Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppSecret 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppSecret() const;

                    /**
                     * 设置应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appSecret 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppSecret(const std::string& _appSecret);

                    /**
                     * 判断参数 AppSecret 是否已赋值
                     * @return AppSecret 是否已赋值
                     * 
                     */
                    bool AppSecretHasBeenSet() const;

                    /**
                     * 获取数据密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 数据密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置数据密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey 数据密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取数据密钥初始化向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretIv 数据密钥初始化向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretIv() const;

                    /**
                     * 设置数据密钥初始化向量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretIv 数据密钥初始化向量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretIv(const std::string& _secretIv);

                    /**
                     * 判断参数 SecretIv 是否已赋值
                     * @return SecretIv 是否已赋值
                     * 
                     */
                    bool SecretIvHasBeenSet() const;

                private:

                    /**
                     * API数据源解析结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldsJsonData;
                    bool m_fieldsJsonDataHasBeenSet;

                    /**
                     * 连接类型1:直连 2:抽取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 抽取频率配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FrequencyConfig m_frequencyConfig;
                    bool m_frequencyConfigHasBeenSet;

                    /**
                     * 请求URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 1:GET 2:POST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestParams;
                    bool m_requestParamsHasBeenSet;

                    /**
                     * 请求体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 1: 无鉴权 2:BASIC_AUTH
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                    /**
                     * 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 路径DbName映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jsonPathDbNameMap;
                    bool m_jsonPathDbNameMapHasBeenSet;

                    /**
                     * 鉴权API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authApi;
                    bool m_authApiHasBeenSet;

                    /**
                     * 应用Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appSecret;
                    bool m_appSecretHasBeenSet;

                    /**
                     * 数据密钥Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 数据密钥初始化向量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretIv;
                    bool m_secretIvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_
