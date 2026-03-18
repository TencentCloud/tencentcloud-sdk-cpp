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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLIENTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLIENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyClient请求参数结构体
                */
                class ModifyClientRequest : public AbstractModel
                {
                public:
                    ModifyClientRequest();
                    ~ModifyClientRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端所属的云开发环境 ID，用于标识该应用归属的云开发环境。不同环境之间的应用数据相互隔离。
                     * @return EnvId 客户端所属的云开发环境 ID，用于标识该应用归属的云开发环境。不同环境之间的应用数据相互隔离。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置客户端所属的云开发环境 ID，用于标识该应用归属的云开发环境。不同环境之间的应用数据相互隔离。
                     * @param _envId 客户端所属的云开发环境 ID，用于标识该应用归属的云开发环境。不同环境之间的应用数据相互隔离。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取需要修改的客户端唯一标识符（Client ID），在 OAuth/OIDC 授权流程中作为 client_id 参数使用。该字段为定位参数，仅用于指定目标客户端，不可修改。
                     * @return Id 需要修改的客户端唯一标识符（Client ID），在 OAuth/OIDC 授权流程中作为 client_id 参数使用。该字段为定位参数，仅用于指定目标客户端，不可修改。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置需要修改的客户端唯一标识符（Client ID），在 OAuth/OIDC 授权流程中作为 client_id 参数使用。该字段为定位参数，仅用于指定目标客户端，不可修改。
                     * @param _id 需要修改的客户端唯一标识符（Client ID），在 OAuth/OIDC 授权流程中作为 client_id 参数使用。该字段为定位参数，仅用于指定目标客户端，不可修改。
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
                     * 获取Refresh Token 的有效期，单位为秒。超过该时间后 Refresh Token 将失效，用户需重新登录。取值范围：1800~2592000（即 30 分钟至 30 天），超出上限将被截断为 2592000。默认值为 2592000（即 30 天）。注意：当该值 ≤ 7200 时，AccessTokenExpiresIn 将被自动设为该值减去 660 秒。
                     * @return RefreshTokenExpiresIn Refresh Token 的有效期，单位为秒。超过该时间后 Refresh Token 将失效，用户需重新登录。取值范围：1800~2592000（即 30 分钟至 30 天），超出上限将被截断为 2592000。默认值为 2592000（即 30 天）。注意：当该值 ≤ 7200 时，AccessTokenExpiresIn 将被自动设为该值减去 660 秒。
                     * 
                     */
                    int64_t GetRefreshTokenExpiresIn() const;

                    /**
                     * 设置Refresh Token 的有效期，单位为秒。超过该时间后 Refresh Token 将失效，用户需重新登录。取值范围：1800~2592000（即 30 分钟至 30 天），超出上限将被截断为 2592000。默认值为 2592000（即 30 天）。注意：当该值 ≤ 7200 时，AccessTokenExpiresIn 将被自动设为该值减去 660 秒。
                     * @param _refreshTokenExpiresIn Refresh Token 的有效期，单位为秒。超过该时间后 Refresh Token 将失效，用户需重新登录。取值范围：1800~2592000（即 30 分钟至 30 天），超出上限将被截断为 2592000。默认值为 2592000（即 30 天）。注意：当该值 ≤ 7200 时，AccessTokenExpiresIn 将被自动设为该值减去 660 秒。
                     * 
                     */
                    void SetRefreshTokenExpiresIn(const int64_t& _refreshTokenExpiresIn);

                    /**
                     * 判断参数 RefreshTokenExpiresIn 是否已赋值
                     * @return RefreshTokenExpiresIn 是否已赋值
                     * 
                     */
                    bool RefreshTokenExpiresInHasBeenSet() const;

                    /**
                     * 获取单个用户在该应用下允许同时登录的最大会话数量。取值范围：-1~50。特殊值说明：-1 表示不限制设备数；0 表示按客户端 User-Agent 区分设备（相同 User-Agent 视为同一设备）；1~50 为精确的最大会话数限制，超出限制后最早登录的会话将被自动踢出。不传则保持原有配置不变。
                     * @return MaxDevice 单个用户在该应用下允许同时登录的最大会话数量。取值范围：-1~50。特殊值说明：-1 表示不限制设备数；0 表示按客户端 User-Agent 区分设备（相同 User-Agent 视为同一设备）；1~50 为精确的最大会话数限制，超出限制后最早登录的会话将被自动踢出。不传则保持原有配置不变。
                     * 
                     */
                    int64_t GetMaxDevice() const;

                    /**
                     * 设置单个用户在该应用下允许同时登录的最大会话数量。取值范围：-1~50。特殊值说明：-1 表示不限制设备数；0 表示按客户端 User-Agent 区分设备（相同 User-Agent 视为同一设备）；1~50 为精确的最大会话数限制，超出限制后最早登录的会话将被自动踢出。不传则保持原有配置不变。
                     * @param _maxDevice 单个用户在该应用下允许同时登录的最大会话数量。取值范围：-1~50。特殊值说明：-1 表示不限制设备数；0 表示按客户端 User-Agent 区分设备（相同 User-Agent 视为同一设备）；1~50 为精确的最大会话数限制，超出限制后最早登录的会话将被自动踢出。不传则保持原有配置不变。
                     * 
                     */
                    void SetMaxDevice(const int64_t& _maxDevice);

                    /**
                     * 判断参数 MaxDevice 是否已赋值
                     * @return MaxDevice 是否已赋值
                     * 
                     */
                    bool MaxDeviceHasBeenSet() const;

                    /**
                     * 获取Access Token 的有效期，单位为秒。超过该时间后 Access Token 将失效，需使用 Refresh Token 重新换取。最小有效值为 1800 秒（小于 1800 将被忽略，使用默认值），默认值为 7200（即 2 小时）。该值应小于 RefreshTokenExpiresIn。
                     * @return AccessTokenExpiresIn Access Token 的有效期，单位为秒。超过该时间后 Access Token 将失效，需使用 Refresh Token 重新换取。最小有效值为 1800 秒（小于 1800 将被忽略，使用默认值），默认值为 7200（即 2 小时）。该值应小于 RefreshTokenExpiresIn。
                     * 
                     */
                    int64_t GetAccessTokenExpiresIn() const;

                    /**
                     * 设置Access Token 的有效期，单位为秒。超过该时间后 Access Token 将失效，需使用 Refresh Token 重新换取。最小有效值为 1800 秒（小于 1800 将被忽略，使用默认值），默认值为 7200（即 2 小时）。该值应小于 RefreshTokenExpiresIn。
                     * @param _accessTokenExpiresIn Access Token 的有效期，单位为秒。超过该时间后 Access Token 将失效，需使用 Refresh Token 重新换取。最小有效值为 1800 秒（小于 1800 将被忽略，使用默认值），默认值为 7200（即 2 小时）。该值应小于 RefreshTokenExpiresIn。
                     * 
                     */
                    void SetAccessTokenExpiresIn(const int64_t& _accessTokenExpiresIn);

                    /**
                     * 判断参数 AccessTokenExpiresIn 是否已赋值
                     * @return AccessTokenExpiresIn 是否已赋值
                     * 
                     */
                    bool AccessTokenExpiresInHasBeenSet() const;

                private:

                    /**
                     * 客户端所属的云开发环境 ID，用于标识该应用归属的云开发环境。不同环境之间的应用数据相互隔离。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 需要修改的客户端唯一标识符（Client ID），在 OAuth/OIDC 授权流程中作为 client_id 参数使用。该字段为定位参数，仅用于指定目标客户端，不可修改。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Refresh Token 的有效期，单位为秒。超过该时间后 Refresh Token 将失效，用户需重新登录。取值范围：1800~2592000（即 30 分钟至 30 天），超出上限将被截断为 2592000。默认值为 2592000（即 30 天）。注意：当该值 ≤ 7200 时，AccessTokenExpiresIn 将被自动设为该值减去 660 秒。
                     */
                    int64_t m_refreshTokenExpiresIn;
                    bool m_refreshTokenExpiresInHasBeenSet;

                    /**
                     * 单个用户在该应用下允许同时登录的最大会话数量。取值范围：-1~50。特殊值说明：-1 表示不限制设备数；0 表示按客户端 User-Agent 区分设备（相同 User-Agent 视为同一设备）；1~50 为精确的最大会话数限制，超出限制后最早登录的会话将被自动踢出。不传则保持原有配置不变。
                     */
                    int64_t m_maxDevice;
                    bool m_maxDeviceHasBeenSet;

                    /**
                     * Access Token 的有效期，单位为秒。超过该时间后 Access Token 将失效，需使用 Refresh Token 重新换取。最小有效值为 1800 秒（小于 1800 将被忽略，使用默认值），默认值为 7200（即 2 小时）。该值应小于 RefreshTokenExpiresIn。
                     */
                    int64_t m_accessTokenExpiresIn;
                    bool m_accessTokenExpiresInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLIENTREQUEST_H_
