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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * RechargeVip返回参数结构体
                */
                class RechargeVipResponse : public AbstractModel
                {
                public:
                    RechargeVipResponse();
                    ~RechargeVipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取厂商订单号。
                     * @return PartnerNo 厂商订单号。
                     * 
                     */
                    std::string GetPartnerNo() const;

                    /**
                     * 判断参数 PartnerNo 是否已赋值
                     * @return PartnerNo 是否已赋值
                     * 
                     */
                    bool PartnerNoHasBeenSet() const;

                    /**
                     * 获取TME订单号。
                     * @return OrderNo TME订单号。
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取订单创建时间。
                     * @return CreateTime 订单创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 厂商订单号。
                     */
                    std::string m_partnerNo;
                    bool m_partnerNoHasBeenSet;

                    /**
                     * TME订单号。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 订单创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPRESPONSE_H_
