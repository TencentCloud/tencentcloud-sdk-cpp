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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERREQUEST_H_

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
                * QueryCloudOrder请求参数结构体
                */
                class QueryCloudOrderRequest : public AbstractModel
                {
                public:
                    QueryCloudOrderRequest();
                    ~QueryCloudOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师分配的支付主MidasAppId
                     * @return MidasAppId 米大师分配的支付主MidasAppId
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId
                     * @param MidasAppId 米大师分配的支付主MidasAppId
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @param UserId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取查询类型
by_order:根据订单号查订单
                     * @return Type 查询类型
by_order:根据订单号查订单
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型
by_order:根据订单号查订单
                     * @param Type 查询类型
by_order:根据订单号查订单
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取开发者的主订单号
                     * @return OutTradeNo 开发者的主订单号
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置开发者的主订单号
                     * @param OutTradeNo 开发者的主订单号
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     */
                    bool OutTradeNoHasBeenSet() const;

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
                     * 查询类型
by_order:根据订单号查订单
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 开发者的主订单号
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERREQUEST_H_
