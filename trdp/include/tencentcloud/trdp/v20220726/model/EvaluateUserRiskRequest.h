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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKREQUEST_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trdp/v20220726/model/AccountInfo.h>
#include <tencentcloud/trdp/v20220726/model/UserInfo.h>
#include <tencentcloud/trdp/v20220726/model/DeviceFingerprintInfo.h>
#include <tencentcloud/trdp/v20220726/model/DeviceDetailInfo.h>
#include <tencentcloud/trdp/v20220726/model/MarketingInfo.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * EvaluateUserRisk请求参数结构体
                */
                class EvaluateUserRiskRequest : public AbstractModel
                {
                public:
                    EvaluateUserRiskRequest();
                    ~EvaluateUserRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号信息
                     * @return Account 账号信息
                     * 
                     */
                    AccountInfo GetAccount() const;

                    /**
                     * 设置账号信息
                     * @param _account 账号信息
                     * 
                     */
                    void SetAccount(const AccountInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取用户信息
                     * @return User 用户信息
                     * 
                     */
                    UserInfo GetUser() const;

                    /**
                     * 设置用户信息
                     * @param _user 用户信息
                     * 
                     */
                    void SetUser(const UserInfo& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取设备指纹信息
                     * @return DeviceFingerprint 设备指纹信息
                     * 
                     */
                    DeviceFingerprintInfo GetDeviceFingerprint() const;

                    /**
                     * 设置设备指纹信息
                     * @param _deviceFingerprint 设备指纹信息
                     * 
                     */
                    void SetDeviceFingerprint(const DeviceFingerprintInfo& _deviceFingerprint);

                    /**
                     * 判断参数 DeviceFingerprint 是否已赋值
                     * @return DeviceFingerprint 是否已赋值
                     * 
                     */
                    bool DeviceFingerprintHasBeenSet() const;

                    /**
                     * 获取场景Code，不传默认活动防刷；
e_activity_antirush；活动防刷场景
e_login_protection；登录保护场景
e_register_protection：注册保护场景
                     * @return SceneCode 场景Code，不传默认活动防刷；
e_activity_antirush；活动防刷场景
e_login_protection；登录保护场景
e_register_protection：注册保护场景
                     * 
                     */
                    std::string GetSceneCode() const;

                    /**
                     * 设置场景Code，不传默认活动防刷；
e_activity_antirush；活动防刷场景
e_login_protection；登录保护场景
e_register_protection：注册保护场景
                     * @param _sceneCode 场景Code，不传默认活动防刷；
e_activity_antirush；活动防刷场景
e_login_protection；登录保护场景
e_register_protection：注册保护场景
                     * 
                     */
                    void SetSceneCode(const std::string& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取设备详情
                     * @return DeviceDetail 设备详情
                     * 
                     */
                    DeviceDetailInfo GetDeviceDetail() const;

                    /**
                     * 设置设备详情
                     * @param _deviceDetail 设备详情
                     * 
                     */
                    void SetDeviceDetail(const DeviceDetailInfo& _deviceDetail);

                    /**
                     * 判断参数 DeviceDetail 是否已赋值
                     * @return DeviceDetail 是否已赋值
                     * 
                     */
                    bool DeviceDetailHasBeenSet() const;

                    /**
                     * 获取营销信息
                     * @return Marketing 营销信息
                     * 
                     */
                    MarketingInfo GetMarketing() const;

                    /**
                     * 设置营销信息
                     * @param _marketing 营销信息
                     * 
                     */
                    void SetMarketing(const MarketingInfo& _marketing);

                    /**
                     * 判断参数 Marketing 是否已赋值
                     * @return Marketing 是否已赋值
                     * 
                     */
                    bool MarketingHasBeenSet() const;

                private:

                    /**
                     * 账号信息
                     */
                    AccountInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 用户信息
                     */
                    UserInfo m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 设备指纹信息
                     */
                    DeviceFingerprintInfo m_deviceFingerprint;
                    bool m_deviceFingerprintHasBeenSet;

                    /**
                     * 场景Code，不传默认活动防刷；
e_activity_antirush；活动防刷场景
e_login_protection；登录保护场景
e_register_protection：注册保护场景
                     */
                    std::string m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 设备详情
                     */
                    DeviceDetailInfo m_deviceDetail;
                    bool m_deviceDetailHasBeenSet;

                    /**
                     * 营销信息
                     */
                    MarketingInfo m_marketing;
                    bool m_marketingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKREQUEST_H_
