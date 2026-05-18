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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGRESULTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGRESULTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 创建/编辑企业目录配置之后返回结果数据
                */
                class DirectoryConfigResultData : public AbstractModel
                {
                public:
                    DirectoryConfigResultData();
                    ~DirectoryConfigResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>企业目录 ID</p>
                     * @return Id <p>企业目录 ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>企业目录 ID</p>
                     * @param _id <p>企业目录 ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>企业目录名称</p>
                     * @return Name <p>企业目录名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>企业目录名称</p>
                     * @param _name <p>企业目录名称</p>
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
                     * 获取<p>身份源配置 ID</p>
                     * @return IdentifySourceId <p>身份源配置 ID</p>
                     * 
                     */
                    std::string GetIdentifySourceId() const;

                    /**
                     * 设置<p>身份源配置 ID</p>
                     * @param _identifySourceId <p>身份源配置 ID</p>
                     * 
                     */
                    void SetIdentifySourceId(const std::string& _identifySourceId);

                    /**
                     * 判断参数 IdentifySourceId 是否已赋值
                     * @return IdentifySourceId 是否已赋值
                     * 
                     */
                    bool IdentifySourceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否同步创建了认证配置</p>
                     * @return CreateAuthConfig <p>是否同步创建了认证配置</p>
                     * 
                     */
                    bool GetCreateAuthConfig() const;

                    /**
                     * 设置<p>是否同步创建了认证配置</p>
                     * @param _createAuthConfig <p>是否同步创建了认证配置</p>
                     * 
                     */
                    void SetCreateAuthConfig(const bool& _createAuthConfig);

                    /**
                     * 判断参数 CreateAuthConfig 是否已赋值
                     * @return CreateAuthConfig 是否已赋值
                     * 
                     */
                    bool CreateAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>认证源配置 ID</p>
                     * @return AuthSourceId <p>认证源配置 ID</p>
                     * 
                     */
                    std::string GetAuthSourceId() const;

                    /**
                     * 设置<p>认证源配置 ID</p>
                     * @param _authSourceId <p>认证源配置 ID</p>
                     * 
                     */
                    void SetAuthSourceId(const std::string& _authSourceId);

                    /**
                     * 判断参数 AuthSourceId 是否已赋值
                     * @return AuthSourceId 是否已赋值
                     * 
                     */
                    bool AuthSourceIdHasBeenSet() const;

                    /**
                     * 获取<p>认证配置 ID</p>
                     * @return AuthConfigId <p>认证配置 ID</p>
                     * 
                     */
                    int64_t GetAuthConfigId() const;

                    /**
                     * 设置<p>认证配置 ID</p>
                     * @param _authConfigId <p>认证配置 ID</p>
                     * 
                     */
                    void SetAuthConfigId(const int64_t& _authConfigId);

                    /**
                     * 判断参数 AuthConfigId 是否已赋值
                     * @return AuthConfigId 是否已赋值
                     * 
                     */
                    bool AuthConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>认证策略 ID</p>
                     * @return AuthPolicyId <p>认证策略 ID</p>
                     * 
                     */
                    int64_t GetAuthPolicyId() const;

                    /**
                     * 设置<p>认证策略 ID</p>
                     * @param _authPolicyId <p>认证策略 ID</p>
                     * 
                     */
                    void SetAuthPolicyId(const int64_t& _authPolicyId);

                    /**
                     * 判断参数 AuthPolicyId 是否已赋值
                     * @return AuthPolicyId 是否已赋值
                     * 
                     */
                    bool AuthPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>认证支持的平台, PC 或 Mobile</p>
                     * @return AuthSupportPlatforms <p>认证支持的平台, PC 或 Mobile</p>
                     * 
                     */
                    std::vector<std::string> GetAuthSupportPlatforms() const;

                    /**
                     * 设置<p>认证支持的平台, PC 或 Mobile</p>
                     * @param _authSupportPlatforms <p>认证支持的平台, PC 或 Mobile</p>
                     * 
                     */
                    void SetAuthSupportPlatforms(const std::vector<std::string>& _authSupportPlatforms);

                    /**
                     * 判断参数 AuthSupportPlatforms 是否已赋值
                     * @return AuthSupportPlatforms 是否已赋值
                     * 
                     */
                    bool AuthSupportPlatformsHasBeenSet() const;

                    /**
                     * 获取<p>认证方式，授权认证/扫码认证 等</p>
                     * @return AuthMethods <p>认证方式，授权认证/扫码认证 等</p>
                     * 
                     */
                    std::vector<std::string> GetAuthMethods() const;

                    /**
                     * 设置<p>认证方式，授权认证/扫码认证 等</p>
                     * @param _authMethods <p>认证方式，授权认证/扫码认证 等</p>
                     * 
                     */
                    void SetAuthMethods(const std::vector<std::string>& _authMethods);

                    /**
                     * 判断参数 AuthMethods 是否已赋值
                     * @return AuthMethods 是否已赋值
                     * 
                     */
                    bool AuthMethodsHasBeenSet() const;

                private:

                    /**
                     * <p>企业目录 ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>企业目录名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>身份源配置 ID</p>
                     */
                    std::string m_identifySourceId;
                    bool m_identifySourceIdHasBeenSet;

                    /**
                     * <p>是否同步创建了认证配置</p>
                     */
                    bool m_createAuthConfig;
                    bool m_createAuthConfigHasBeenSet;

                    /**
                     * <p>认证源配置 ID</p>
                     */
                    std::string m_authSourceId;
                    bool m_authSourceIdHasBeenSet;

                    /**
                     * <p>认证配置 ID</p>
                     */
                    int64_t m_authConfigId;
                    bool m_authConfigIdHasBeenSet;

                    /**
                     * <p>认证策略 ID</p>
                     */
                    int64_t m_authPolicyId;
                    bool m_authPolicyIdHasBeenSet;

                    /**
                     * <p>认证支持的平台, PC 或 Mobile</p>
                     */
                    std::vector<std::string> m_authSupportPlatforms;
                    bool m_authSupportPlatformsHasBeenSet;

                    /**
                     * <p>认证方式，授权认证/扫码认证 等</p>
                     */
                    std::vector<std::string> m_authMethods;
                    bool m_authMethodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGRESULTDATA_H_
