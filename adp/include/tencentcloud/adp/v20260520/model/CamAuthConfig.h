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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyParamConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CAM授权信息
                */
                class CamAuthConfig : public AbstractModel
                {
                public:
                    CamAuthConfig();
                    ~CamAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色名称</p>
                     * @return RoleName <p>角色名称</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名称</p>
                     * @param _roleName <p>角色名称</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 头鉴权 |<br>| 1 | 请求信息鉴权 |</p>
                     * @return KeyLocation <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 头鉴权 |<br>| 1 | 请求信息鉴权 |</p>
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置<p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 头鉴权 |<br>| 1 | 请求信息鉴权 |</p>
                     * @param _keyLocation <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 头鉴权 |<br>| 1 | 请求信息鉴权 |</p>
                     * 
                     */
                    void SetKeyLocation(const int64_t& _keyLocation);

                    /**
                     * 判断参数 KeyLocation 是否已赋值
                     * @return KeyLocation 是否已赋值
                     * 
                     */
                    bool KeyLocationHasBeenSet() const;

                    /**
                     * 获取<p>SecretId字段名称</p>
                     * @return SecretIdName <p>SecretId字段名称</p>
                     * 
                     */
                    std::string GetSecretIdName() const;

                    /**
                     * 设置<p>SecretId字段名称</p>
                     * @param _secretIdName <p>SecretId字段名称</p>
                     * 
                     */
                    void SetSecretIdName(const std::string& _secretIdName);

                    /**
                     * 判断参数 SecretIdName 是否已赋值
                     * @return SecretIdName 是否已赋值
                     * 
                     */
                    bool SecretIdNameHasBeenSet() const;

                    /**
                     * 获取<p>SecretKey字段名称</p>
                     * @return SecretKeyName <p>SecretKey字段名称</p>
                     * 
                     */
                    std::string GetSecretKeyName() const;

                    /**
                     * 设置<p>SecretKey字段名称</p>
                     * @param _secretKeyName <p>SecretKey字段名称</p>
                     * 
                     */
                    void SetSecretKeyName(const std::string& _secretKeyName);

                    /**
                     * 判断参数 SecretKeyName 是否已赋值
                     * @return SecretKeyName 是否已赋值
                     * 
                     */
                    bool SecretKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>CAM Access Key 字段配置</p>
                     * @return ParamList <p>CAM Access Key 字段配置</p>
                     * 
                     */
                    std::vector<AccessKeyParamConfig> GetParamList() const;

                    /**
                     * 设置<p>CAM Access Key 字段配置</p>
                     * @param _paramList <p>CAM Access Key 字段配置</p>
                     * 
                     */
                    void SetParamList(const std::vector<AccessKeyParamConfig>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>是否支持CAM角色授权</p>
                     * @return SupportRoleAuth <p>是否支持CAM角色授权</p>
                     * 
                     */
                    bool GetSupportRoleAuth() const;

                    /**
                     * 设置<p>是否支持CAM角色授权</p>
                     * @param _supportRoleAuth <p>是否支持CAM角色授权</p>
                     * 
                     */
                    void SetSupportRoleAuth(const bool& _supportRoleAuth);

                    /**
                     * 判断参数 SupportRoleAuth 是否已赋值
                     * @return SupportRoleAuth 是否已赋值
                     * 
                     */
                    bool SupportRoleAuthHasBeenSet() const;

                private:

                    /**
                     * <p>角色名称</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | 头鉴权 |<br>| 1 | 请求信息鉴权 |</p>
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * <p>SecretId字段名称</p>
                     */
                    std::string m_secretIdName;
                    bool m_secretIdNameHasBeenSet;

                    /**
                     * <p>SecretKey字段名称</p>
                     */
                    std::string m_secretKeyName;
                    bool m_secretKeyNameHasBeenSet;

                    /**
                     * <p>CAM Access Key 字段配置</p>
                     */
                    std::vector<AccessKeyParamConfig> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>是否支持CAM角色授权</p>
                     */
                    bool m_supportRoleAuth;
                    bool m_supportRoleAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_
