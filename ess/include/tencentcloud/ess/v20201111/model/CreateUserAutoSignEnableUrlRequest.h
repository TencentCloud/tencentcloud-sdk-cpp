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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/AutoSignConfig.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateUserAutoSignEnableUrl请求参数结构体
                */
                class CreateUserAutoSignEnableUrlRequest : public AbstractModel
                {
                public:
                    CreateUserAutoSignEnableUrlRequest();
                    ~CreateUserAutoSignEnableUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息,UserId必填
                     * @return Operator 操作人信息,UserId必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息,UserId必填
                     * @param _operator 操作人信息,UserId必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * @return SceneKey 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * @param _sceneKey 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * 
                     */
                    void SetSceneKey(const std::string& _sceneKey);

                    /**
                     * 判断参数 SceneKey 是否已赋值
                     * @return SceneKey 是否已赋值
                     * 
                     */
                    bool SceneKeyHasBeenSet() const;

                    /**
                     * 获取自动签开通，签署相关配置
                     * @return AutoSignConfig 自动签开通，签署相关配置
                     * 
                     */
                    AutoSignConfig GetAutoSignConfig() const;

                    /**
                     * 设置自动签开通，签署相关配置
                     * @param _autoSignConfig 自动签开通，签署相关配置
                     * 
                     */
                    void SetAutoSignConfig(const AutoSignConfig& _autoSignConfig);

                    /**
                     * 判断参数 AutoSignConfig 是否已赋值
                     * @return AutoSignConfig 是否已赋值
                     * 
                     */
                    bool AutoSignConfigHasBeenSet() const;

                    /**
                     * 获取链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     * @return UrlType 链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     * 
                     */
                    std::string GetUrlType() const;

                    /**
                     * 设置链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     * @param _urlType 链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     * 
                     */
                    void SetUrlType(const std::string& _urlType);

                    /**
                     * 判断参数 UrlType 是否已赋值
                     * @return UrlType 是否已赋值
                     * 
                     */
                    bool UrlTypeHasBeenSet() const;

                    /**
                     * 获取通知类型，默认不填为不通知开通方，填写 SMS 为短信通知。
                     * @return NotifyType 通知类型，默认不填为不通知开通方，填写 SMS 为短信通知。
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置通知类型，默认不填为不通知开通方，填写 SMS 为短信通知。
                     * @param _notifyType 通知类型，默认不填为不通知开通方，填写 SMS 为短信通知。
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取若上方填写为 SMS，则此处为手机号
                     * @return NotifyAddress 若上方填写为 SMS，则此处为手机号
                     * 
                     */
                    std::string GetNotifyAddress() const;

                    /**
                     * 设置若上方填写为 SMS，则此处为手机号
                     * @param _notifyAddress 若上方填写为 SMS，则此处为手机号
                     * 
                     */
                    void SetNotifyAddress(const std::string& _notifyAddress);

                    /**
                     * 判断参数 NotifyAddress 是否已赋值
                     * @return NotifyAddress 是否已赋值
                     * 
                     */
                    bool NotifyAddressHasBeenSet() const;

                    /**
                     * 获取链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为30天。如果不传，默认有效期为7天。
                     * @return ExpiredTime 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为30天。如果不传，默认有效期为7天。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为30天。如果不传，默认有效期为7天。
                     * @param _expiredTime 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为30天。如果不传，默认有效期为7天。
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 操作人信息,UserId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                    /**
                     * 自动签开通，签署相关配置
                     */
                    AutoSignConfig m_autoSignConfig;
                    bool m_autoSignConfigHasBeenSet;

                    /**
                     * 链接类型，空-默认小程序端链接，H5SIGN-h5端链接
                     */
                    std::string m_urlType;
                    bool m_urlTypeHasBeenSet;

                    /**
                     * 通知类型，默认不填为不通知开通方，填写 SMS 为短信通知。
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 若上方填写为 SMS，则此处为手机号
                     */
                    std::string m_notifyAddress;
                    bool m_notifyAddressHasBeenSet;

                    /**
                     * 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为30天。如果不传，默认有效期为7天。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_
