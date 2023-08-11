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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/EnhancedService.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ResetInstances请求参数结构体
                */
                class ResetInstancesRequest : public AbstractModel
                {
                public:
                    ResetInstancesRequest();
                    ~ResetInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待重装的实例ID列表。
                     * @return InstanceIdSet 待重装的实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待重装的实例ID列表。
                     * @param _instanceIdSet 待重装的实例ID列表。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取重装使用的镜像ID，若未指定，则使用各个实例当前的镜像进行重装。
                     * @return ImageId 重装使用的镜像ID，若未指定，则使用各个实例当前的镜像进行重装。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置重装使用的镜像ID，若未指定，则使用各个实例当前的镜像进行重装。
                     * @param _imageId 重装使用的镜像ID，若未指定，则使用各个实例当前的镜像进行重装。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取密码设置，若未指定，则后续将以站内信的形式通知密码。
                     * @return Password 密码设置，若未指定，则后续将以站内信的形式通知密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码设置，若未指定，则后续将以站内信的形式通知密码。
                     * @param _password 密码设置，若未指定，则后续将以站内信的形式通知密码。
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
                     * 获取是否开启腾讯云可观测平台和主机安全服务，未指定时默认开启。
                     * @return EnhancedService 是否开启腾讯云可观测平台和主机安全服务，未指定时默认开启。
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置是否开启腾讯云可观测平台和主机安全服务，未指定时默认开启。
                     * @param _enhancedService 是否开启腾讯云可观测平台和主机安全服务，未指定时默认开启。
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取是否保留数据盘数据，取值"true"/"false"。默认为"true"
                     * @return KeepData 是否保留数据盘数据，取值"true"/"false"。默认为"true"
                     * 
                     */
                    std::string GetKeepData() const;

                    /**
                     * 设置是否保留数据盘数据，取值"true"/"false"。默认为"true"
                     * @param _keepData 是否保留数据盘数据，取值"true"/"false"。默认为"true"
                     * 
                     */
                    void SetKeepData(const std::string& _keepData);

                    /**
                     * 判断参数 KeepData 是否已赋值
                     * @return KeepData 是否已赋值
                     * 
                     */
                    bool KeepDataHasBeenSet() const;

                    /**
                     * 获取保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
TRUE：表示保持镜像的登录设置
FALSE：表示不保持镜像的登录设置

默认取值：FALSE。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeepImageLogin 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
TRUE：表示保持镜像的登录设置
FALSE：表示不保持镜像的登录设置

默认取值：FALSE。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeepImageLogin() const;

                    /**
                     * 设置保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
TRUE：表示保持镜像的登录设置
FALSE：表示不保持镜像的登录设置

默认取值：FALSE。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keepImageLogin 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
TRUE：表示保持镜像的登录设置
FALSE：表示不保持镜像的登录设置

默认取值：FALSE。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeepImageLogin(const std::string& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * 待重装的实例ID列表。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 重装使用的镜像ID，若未指定，则使用各个实例当前的镜像进行重装。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 密码设置，若未指定，则后续将以站内信的形式通知密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否开启腾讯云可观测平台和主机安全服务，未指定时默认开启。
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 是否保留数据盘数据，取值"true"/"false"。默认为"true"
                     */
                    std::string m_keepData;
                    bool m_keepDataHasBeenSet;

                    /**
                     * 保持镜像的原始设置。该参数与Password或KeyIds.N不能同时指定。只有使用自定义镜像、共享镜像或外部导入镜像创建实例时才能指定该参数为TRUE。取值范围：
TRUE：表示保持镜像的登录设置
FALSE：表示不保持镜像的登录设置

默认取值：FALSE。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_
