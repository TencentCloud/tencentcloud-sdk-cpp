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
                     * 获取实例 ID
                     * @return GatewayId 实例 ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置实例 ID
                     * @param _gatewayId 实例 ID
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
                     * 获取密钥名字
                     * @return Status 密钥名字
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置密钥名字
                     * @param _status 密钥名字
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
                     * 获取密钥id
                     * @return SecretKeyId 密钥id
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置密钥id
                     * @param _secretKeyId 密钥id
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
                     * 实例 ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 密钥名字
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 密钥id
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSECRETKEYSTATUSREQUEST_H_
