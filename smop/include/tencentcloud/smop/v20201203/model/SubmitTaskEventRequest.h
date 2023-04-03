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

#ifndef TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTREQUEST_H_
#define TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smop
    {
        namespace V20201203
        {
            namespace Model
            {
                /**
                * SubmitTaskEvent请求参数结构体
                */
                class SubmitTaskEventRequest : public AbstractModel
                {
                public:
                    SubmitTaskEventRequest();
                    ~SubmitTaskEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户ID
                     * @return AccountId 用户ID
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置用户ID
                     * @param AccountId 用户ID
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param DeviceId 设备ID
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param OrderId 订单ID
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取任务事件Code
                     * @return Code 任务事件Code
                     */
                    std::string GetCode() const;

                    /**
                     * 设置任务事件Code
                     * @param Code 任务事件Code
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取同步异步方式：0为同步、1位异步
                     * @return Async 同步异步方式：0为同步、1位异步
                     */
                    int64_t GetAsync() const;

                    /**
                     * 设置同步异步方式：0为同步、1位异步
                     * @param Async 同步异步方式：0为同步、1位异步
                     */
                    void SetAsync(const int64_t& _async);

                    /**
                     * 判断参数 Async 是否已赋值
                     * @return Async 是否已赋值
                     */
                    bool AsyncHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return NotifyURL 回调地址
                     */
                    std::string GetNotifyURL() const;

                    /**
                     * 设置回调地址
                     * @param NotifyURL 回调地址
                     */
                    void SetNotifyURL(const std::string& _notifyURL);

                    /**
                     * 判断参数 NotifyURL 是否已赋值
                     * @return NotifyURL 是否已赋值
                     */
                    bool NotifyURLHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 任务事件Code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 同步异步方式：0为同步、1位异步
                     */
                    int64_t m_async;
                    bool m_asyncHasBeenSet;

                    /**
                     * 产品ID
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_notifyURL;
                    bool m_notifyURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTREQUEST_H_
