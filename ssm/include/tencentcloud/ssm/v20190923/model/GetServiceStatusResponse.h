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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * GetServiceStatus返回参数结构体
                */
                class GetServiceStatusResponse : public AbstractModel
                {
                public:
                    GetServiceStatusResponse();
                    ~GetServiceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true表示服务已开通，false 表示服务尚未开通。
                     * @return ServiceEnabled true表示服务已开通，false 表示服务尚未开通。
                     * 
                     */
                    bool GetServiceEnabled() const;

                    /**
                     * 判断参数 ServiceEnabled 是否已赋值
                     * @return ServiceEnabled 是否已赋值
                     * 
                     */
                    bool ServiceEnabledHasBeenSet() const;

                    /**
                     * 获取服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放。
                     * @return InvalidType 服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放。
                     * 
                     */
                    int64_t GetInvalidType() const;

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取true表示用户已经可以使用密钥安全托管功能，
false表示用户暂时不能使用密钥安全托管功能。
                     * @return AccessKeyEscrowEnabled true表示用户已经可以使用密钥安全托管功能，
false表示用户暂时不能使用密钥安全托管功能。
                     * 
                     */
                    bool GetAccessKeyEscrowEnabled() const;

                    /**
                     * 判断参数 AccessKeyEscrowEnabled 是否已赋值
                     * @return AccessKeyEscrowEnabled 是否已赋值
                     * 
                     */
                    bool AccessKeyEscrowEnabledHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取计算性能限制
                     * @return QPSLimit 计算性能限制
                     * 
                     */
                    int64_t GetQPSLimit() const;

                    /**
                     * 判断参数 QPSLimit 是否已赋值
                     * @return QPSLimit 是否已赋值
                     * 
                     */
                    bool QPSLimitHasBeenSet() const;

                    /**
                     * 获取凭据个数限制
                     * @return SecretLimit 凭据个数限制
                     * 
                     */
                    int64_t GetSecretLimit() const;

                    /**
                     * 判断参数 SecretLimit 是否已赋值
                     * @return SecretLimit 是否已赋值
                     * 
                     */
                    bool SecretLimitHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayModel 付费模式
                     * 
                     */
                    std::string GetPayModel() const;

                    /**
                     * 判断参数 PayModel 是否已赋值
                     * @return PayModel 是否已赋值
                     * 
                     */
                    bool PayModelHasBeenSet() const;

                    /**
                     * 获取自动续费标识，0:手动续费 1:自动续费 2:到期不续
                     * @return RenewFlag 自动续费标识，0:手动续费 1:自动续费 2:到期不续
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取已托管凭据个数
                     * @return TotalCount 已托管凭据个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * true表示服务已开通，false 表示服务尚未开通。
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * 服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放。
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * true表示用户已经可以使用密钥安全托管功能，
false表示用户暂时不能使用密钥安全托管功能。
                     */
                    bool m_accessKeyEscrowEnabled;
                    bool m_accessKeyEscrowEnabledHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 计算性能限制
                     */
                    int64_t m_qPSLimit;
                    bool m_qPSLimitHasBeenSet;

                    /**
                     * 凭据个数限制
                     */
                    int64_t m_secretLimit;
                    bool m_secretLimitHasBeenSet;

                    /**
                     * 付费模式
                     */
                    std::string m_payModel;
                    bool m_payModelHasBeenSet;

                    /**
                     * 自动续费标识，0:手动续费 1:自动续费 2:到期不续
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 已托管凭据个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_
