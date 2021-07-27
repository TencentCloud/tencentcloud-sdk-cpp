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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFOREQUEST_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/market/v20191010/model/WeChatUserInfo.h>
#include <tencentcloud/market/v20191010/model/WeChatOrderInfo.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * SyncUserAndOrderInfo请求参数结构体
                */
                class SyncUserAndOrderInfoRequest : public AbstractModel
                {
                public:
                    SyncUserAndOrderInfoRequest();
                    ~SyncUserAndOrderInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业微信用户信息
                     * @return UserInfo 企业微信用户信息
                     */
                    WeChatUserInfo GetUserInfo() const;

                    /**
                     * 设置企业微信用户信息
                     * @param UserInfo 企业微信用户信息
                     */
                    void SetUserInfo(const WeChatUserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取企业微信订单信息
                     * @return OrderInfo 企业微信订单信息
                     */
                    WeChatOrderInfo GetOrderInfo() const;

                    /**
                     * 设置企业微信订单信息
                     * @param OrderInfo 企业微信订单信息
                     */
                    void SetOrderInfo(const WeChatOrderInfo& _orderInfo);

                    /**
                     * 判断参数 OrderInfo 是否已赋值
                     * @return OrderInfo 是否已赋值
                     */
                    bool OrderInfoHasBeenSet() const;

                private:

                    /**
                     * 企业微信用户信息
                     */
                    WeChatUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 企业微信订单信息
                     */
                    WeChatOrderInfo m_orderInfo;
                    bool m_orderInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFOREQUEST_H_
