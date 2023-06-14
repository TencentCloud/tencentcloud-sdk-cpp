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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCloudRefundOrder请求参数结构体
                */
                class QueryCloudRefundOrderRequest : public AbstractModel
                {
                public:
                    QueryCloudRefundOrderRequest();
                    ~QueryCloudRefundOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师分配的支付主MidasAppId
                     * @return MidasAppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId
                     * @param _midasAppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @param _userId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @return RefundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    std::string GetRefundId() const;

                    /**
                     * 设置退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @param _refundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    void SetRefundId(const std::string& _refundId);

                    /**
                     * 判断参数 RefundId 是否已赋值
                     * @return RefundId 是否已赋值
                     * 
                     */
                    bool RefundIdHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _midasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户Id，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDREFUNDORDERREQUEST_H_
