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
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param _roleName 角色名称
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
                     * 获取密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 头鉴权 |
| 1 | 请求信息鉴权 |
                     * @return KeyLocation 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 头鉴权 |
| 1 | 请求信息鉴权 |
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 头鉴权 |
| 1 | 请求信息鉴权 |
                     * @param _keyLocation 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 头鉴权 |
| 1 | 请求信息鉴权 |
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
                     * 获取SecretId字段名称
                     * @return SecretIdName SecretId字段名称
                     * 
                     */
                    std::string GetSecretIdName() const;

                    /**
                     * 设置SecretId字段名称
                     * @param _secretIdName SecretId字段名称
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
                     * 获取SecretKey字段名称
                     * @return SecretKeyName SecretKey字段名称
                     * 
                     */
                    std::string GetSecretKeyName() const;

                    /**
                     * 设置SecretKey字段名称
                     * @param _secretKeyName SecretKey字段名称
                     * 
                     */
                    void SetSecretKeyName(const std::string& _secretKeyName);

                    /**
                     * 判断参数 SecretKeyName 是否已赋值
                     * @return SecretKeyName 是否已赋值
                     * 
                     */
                    bool SecretKeyNameHasBeenSet() const;

                private:

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 头鉴权 |
| 1 | 请求信息鉴权 |
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * SecretId字段名称
                     */
                    std::string m_secretIdName;
                    bool m_secretIdNameHasBeenSet;

                    /**
                     * SecretKey字段名称
                     */
                    std::string m_secretKeyName;
                    bool m_secretKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_
