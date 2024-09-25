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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASERUNSERVERVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASERUNSERVERVERSIONREQUEST_H_

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
                * DeleteCloudBaseRunServerVersion请求参数结构体
                */
                class DeleteCloudBaseRunServerVersionRequest : public AbstractModel
                {
                public:
                    DeleteCloudBaseRunServerVersionRequest();
                    ~DeleteCloudBaseRunServerVersionRequest() = default;
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
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名称
                     * @param _serverName 服务名称
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
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
                     * 获取是否删除服务，只有最后一个版本的时候，才生效。
                     * @return IsDeleteServer 是否删除服务，只有最后一个版本的时候，才生效。
                     * 
                     */
                    bool GetIsDeleteServer() const;

                    /**
                     * 设置是否删除服务，只有最后一个版本的时候，才生效。
                     * @param _isDeleteServer 是否删除服务，只有最后一个版本的时候，才生效。
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
                     * 获取只有删除服务的时候，才会起作用
                     * @return IsDeleteImage 只有删除服务的时候，才会起作用
                     * 
                     */
                    bool GetIsDeleteImage() const;

                    /**
                     * 设置只有删除服务的时候，才会起作用
                     * @param _isDeleteImage 只有删除服务的时候，才会起作用
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
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param _operatorRemark 操作备注
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                    /**
                     * 获取延迟删除版本时间
                     * @return DelayedDeletionTime 延迟删除版本时间
                     * 
                     */
                    int64_t GetDelayedDeletionTime() const;

                    /**
                     * 设置延迟删除版本时间
                     * @param _delayedDeletionTime 延迟删除版本时间
                     * 
                     */
                    void SetDelayedDeletionTime(const int64_t& _delayedDeletionTime);

                    /**
                     * 判断参数 DelayedDeletionTime 是否已赋值
                     * @return DelayedDeletionTime 是否已赋值
                     * 
                     */
                    bool DelayedDeletionTimeHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 是否删除服务，只有最后一个版本的时候，才生效。
                     */
                    bool m_isDeleteServer;
                    bool m_isDeleteServerHasBeenSet;

                    /**
                     * 只有删除服务的时候，才会起作用
                     */
                    bool m_isDeleteImage;
                    bool m_isDeleteImageHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                    /**
                     * 延迟删除版本时间
                     */
                    int64_t m_delayedDeletionTime;
                    bool m_delayedDeletionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASERUNSERVERVERSIONREQUEST_H_
