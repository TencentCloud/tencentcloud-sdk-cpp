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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSECRETKEYSTATUSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSECRETKEYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewaySecretKeyStatus请求参数结构体
                */
                class ModifyCloudNativeAPIGatewaySecretKeyStatusRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewaySecretKeyStatusRequest();
                    ~ModifyCloudNativeAPIGatewaySecretKeyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * @return Status <p>密钥状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>密钥状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     * @param _status <p>密钥状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
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
                     * 获取<p>密钥 ID（以 secret- 开头）。</p>
                     * @return SecretKeyId <p>密钥 ID（以 secret- 开头）。</p>
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置<p>密钥 ID（以 secret- 开头）。</p>
                     * @param _secretKeyId <p>密钥 ID（以 secret- 开头）。</p>
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>密钥状态。</p><p>枚举值：</p><ul><li>Enable：启用</li><li>Disable：禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>密钥 ID（以 secret- 开头）。</p>
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSECRETKEYSTATUSREQUEST_H_
