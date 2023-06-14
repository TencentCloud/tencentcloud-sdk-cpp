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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVDEALREGIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVDEALREGIONREQUEST_H_

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
                * DescribeEnvDealRegion请求参数结构体
                */
                class DescribeEnvDealRegionRequest : public AbstractModel
                {
                public:
                    DescribeEnvDealRegionRequest();
                    ~DescribeEnvDealRegionRequest() = default;
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
                     * 获取订单类型：
ENV_PREPAY_MINIAPP= 预付费环境(微信小程序)
ENV_PREPAY_CLOUD= 预付费环境(腾讯云)
ENV_POSTPAY = 后付费环境
HOSTING_PREPAY = 预付费静态托管
PACKAGE=套餐包
                     * @return DealType 订单类型：
ENV_PREPAY_MINIAPP= 预付费环境(微信小程序)
ENV_PREPAY_CLOUD= 预付费环境(腾讯云)
ENV_POSTPAY = 后付费环境
HOSTING_PREPAY = 预付费静态托管
PACKAGE=套餐包
                     * 
                     */
                    std::string GetDealType() const;

                    /**
                     * 设置订单类型：
ENV_PREPAY_MINIAPP= 预付费环境(微信小程序)
ENV_PREPAY_CLOUD= 预付费环境(腾讯云)
ENV_POSTPAY = 后付费环境
HOSTING_PREPAY = 预付费静态托管
PACKAGE=套餐包
                     * @param _dealType 订单类型：
ENV_PREPAY_MINIAPP= 预付费环境(微信小程序)
ENV_PREPAY_CLOUD= 预付费环境(腾讯云)
ENV_POSTPAY = 后付费环境
HOSTING_PREPAY = 预付费静态托管
PACKAGE=套餐包
                     * 
                     */
                    void SetDealType(const std::string& _dealType);

                    /**
                     * 判断参数 DealType 是否已赋值
                     * @return DealType 是否已赋值
                     * 
                     */
                    bool DealTypeHasBeenSet() const;

                    /**
                     * 获取下单类型：
CREATE = 新购
RENEW = 续费
MODIFY = 套餐调整(升级/降级)
REFUND = 退费
                     * @return DealAction 下单类型：
CREATE = 新购
RENEW = 续费
MODIFY = 套餐调整(升级/降级)
REFUND = 退费
                     * 
                     */
                    std::string GetDealAction() const;

                    /**
                     * 设置下单类型：
CREATE = 新购
RENEW = 续费
MODIFY = 套餐调整(升级/降级)
REFUND = 退费
                     * @param _dealAction 下单类型：
CREATE = 新购
RENEW = 续费
MODIFY = 套餐调整(升级/降级)
REFUND = 退费
                     * 
                     */
                    void SetDealAction(const std::string& _dealAction);

                    /**
                     * 判断参数 DealAction 是否已赋值
                     * @return DealAction 是否已赋值
                     * 
                     */
                    bool DealActionHasBeenSet() const;

                    /**
                     * 获取下单地域：
ap-guangzhou = 广州地域
ap-shanghai = 上海地域
ap-beijing = 北京地域
                     * @return DealRegion 下单地域：
ap-guangzhou = 广州地域
ap-shanghai = 上海地域
ap-beijing = 北京地域
                     * 
                     */
                    std::string GetDealRegion() const;

                    /**
                     * 设置下单地域：
ap-guangzhou = 广州地域
ap-shanghai = 上海地域
ap-beijing = 北京地域
                     * @param _dealRegion 下单地域：
ap-guangzhou = 广州地域
ap-shanghai = 上海地域
ap-beijing = 北京地域
                     * 
                     */
                    void SetDealRegion(const std::string& _dealRegion);

                    /**
                     * 判断参数 DealRegion 是否已赋值
                     * @return DealRegion 是否已赋值
                     * 
                     */
                    bool DealRegionHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 订单类型：
ENV_PREPAY_MINIAPP= 预付费环境(微信小程序)
ENV_PREPAY_CLOUD= 预付费环境(腾讯云)
ENV_POSTPAY = 后付费环境
HOSTING_PREPAY = 预付费静态托管
PACKAGE=套餐包
                     */
                    std::string m_dealType;
                    bool m_dealTypeHasBeenSet;

                    /**
                     * 下单类型：
CREATE = 新购
RENEW = 续费
MODIFY = 套餐调整(升级/降级)
REFUND = 退费
                     */
                    std::string m_dealAction;
                    bool m_dealActionHasBeenSet;

                    /**
                     * 下单地域：
ap-guangzhou = 广州地域
ap-shanghai = 上海地域
ap-beijing = 北京地域
                     */
                    std::string m_dealRegion;
                    bool m_dealRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVDEALREGIONREQUEST_H_
