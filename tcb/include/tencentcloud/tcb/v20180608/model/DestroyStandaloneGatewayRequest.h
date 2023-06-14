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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTANDALONEGATEWAYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTANDALONEGATEWAYREQUEST_H_

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
                * DestroyStandaloneGateway请求参数结构体
                */
                class DestroyStandaloneGatewayRequest : public AbstractModel
                {
                public:
                    DestroyStandaloneGatewayRequest();
                    ~DestroyStandaloneGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
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
                     * 获取网名名称
                     * @return GatewayName 网名名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置网名名称
                     * @param _gatewayName 网名名称
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取是否强制释放
                     * @return IsForce 是否强制释放
                     * 
                     */
                    bool GetIsForce() const;

                    /**
                     * 设置是否强制释放
                     * @param _isForce 是否强制释放
                     * 
                     */
                    void SetIsForce(const bool& _isForce);

                    /**
                     * 判断参数 IsForce 是否已赋值
                     * @return IsForce 是否已赋值
                     * 
                     */
                    bool IsForceHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网名名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 是否强制释放
                     */
                    bool m_isForce;
                    bool m_isForceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYSTANDALONEGATEWAYREQUEST_H_
