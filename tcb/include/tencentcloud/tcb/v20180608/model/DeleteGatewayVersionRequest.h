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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEGATEWAYVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEGATEWAYVERSIONREQUEST_H_

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
                * DeleteGatewayVersion请求参数结构体
                */
                class DeleteGatewayVersionRequest : public AbstractModel
                {
                public:
                    DeleteGatewayVersionRequest();
                    ~DeleteGatewayVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * 获取网关id
                     * @return GatewayId 网关id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关id
                     * @param _gatewayId 网关id
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
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取是否删除服务
                     * @return IsDeleteServer 是否删除服务
                     * 
                     */
                    bool GetIsDeleteServer() const;

                    /**
                     * 设置是否删除服务
                     * @param _isDeleteServer 是否删除服务
                     * 
                     */
                    void SetIsDeleteServer(const bool& _isDeleteServer);

                    /**
                     * 判断参数 IsDeleteServer 是否已赋值
                     * @return IsDeleteServer 是否已赋值
                     * 
                     */
                    bool IsDeleteServerHasBeenSet() const;

                    /**
                     * 获取是否删除镜像
                     * @return IsDeleteImage 是否删除镜像
                     * 
                     */
                    bool GetIsDeleteImage() const;

                    /**
                     * 设置是否删除镜像
                     * @param _isDeleteImage 是否删除镜像
                     * 
                     */
                    void SetIsDeleteImage(const bool& _isDeleteImage);

                    /**
                     * 判断参数 IsDeleteImage 是否已赋值
                     * @return IsDeleteImage 是否已赋值
                     * 
                     */
                    bool IsDeleteImageHasBeenSet() const;

                    /**
                     * 获取是否强制删除
                     * @return IsForce 是否强制删除
                     * 
                     */
                    bool GetIsForce() const;

                    /**
                     * 设置是否强制删除
                     * @param _isForce 是否强制删除
                     * 
                     */
                    void SetIsForce(const bool& _isForce);

                    /**
                     * 判断参数 IsForce 是否已赋值
                     * @return IsForce 是否已赋值
                     * 
                     */
                    bool IsForceHasBeenSet() const;

                    /**
                     * 获取操作者记录
                     * @return OperatorRemark 操作者记录
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作者记录
                     * @param _operatorRemark 操作者记录
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 是否删除服务
                     */
                    bool m_isDeleteServer;
                    bool m_isDeleteServerHasBeenSet;

                    /**
                     * 是否删除镜像
                     */
                    bool m_isDeleteImage;
                    bool m_isDeleteImageHasBeenSet;

                    /**
                     * 是否强制删除
                     */
                    bool m_isForce;
                    bool m_isForceHasBeenSet;

                    /**
                     * 操作者记录
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEGATEWAYVERSIONREQUEST_H_
