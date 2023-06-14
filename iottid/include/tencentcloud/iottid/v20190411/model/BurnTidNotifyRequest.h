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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_BURNTIDNOTIFYREQUEST_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_BURNTIDNOTIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * BurnTidNotify请求参数结构体
                */
                class BurnTidNotifyRequest : public AbstractModel
                {
                public:
                    BurnTidNotifyRequest();
                    ~BurnTidNotifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单编号
                     * @return OrderId 订单编号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单编号
                     * @param _orderId 订单编号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取TID编号
                     * @return Tid TID编号
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置TID编号
                     * @param _tid TID编号
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                private:

                    /**
                     * 订单编号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * TID编号
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_BURNTIDNOTIFYREQUEST_H_
