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
                     * 获取用户唯一标识，最大长度为64
                     * @return AccountId 用户唯一标识，最大长度为64
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置用户唯一标识，最大长度为64
                     * @param _accountId 用户唯一标识，最大长度为64
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取用户设备ID，最大长度为64
                     * @return DeviceId 用户设备ID，最大长度为64
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置用户设备ID，最大长度为64
                     * @param _deviceId 用户设备ID，最大长度为64
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取任务的唯一订单号，只能是数字、大小写字母，且在同一个产品ID下唯一，最大长度为64
                     * @return OrderId 任务的唯一订单号，只能是数字、大小写字母，且在同一个产品ID下唯一，最大长度为64
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置任务的唯一订单号，只能是数字、大小写字母，且在同一个产品ID下唯一，最大长度为64
                     * @param _orderId 任务的唯一订单号，只能是数字、大小写字母，且在同一个产品ID下唯一，最大长度为64
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
                     * 获取任务事件Code，在腾讯安心用户运营平台下的任务事件列表中设置并获取
                     * @return Code 任务事件Code，在腾讯安心用户运营平台下的任务事件列表中设置并获取
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置任务事件Code，在腾讯安心用户运营平台下的任务事件列表中设置并获取
                     * @param _code 任务事件Code，在腾讯安心用户运营平台下的任务事件列表中设置并获取
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取任务结果是否异步通知。0表示任务结果在返回信息中同步返回；1表示任务结果通过回调结果异步通知。
                     * @return Async 任务结果是否异步通知。0表示任务结果在返回信息中同步返回；1表示任务结果通过回调结果异步通知。
                     * 
                     */
                    int64_t GetAsync() const;

                    /**
                     * 设置任务结果是否异步通知。0表示任务结果在返回信息中同步返回；1表示任务结果通过回调结果异步通知。
                     * @param _async 任务结果是否异步通知。0表示任务结果在返回信息中同步返回；1表示任务结果通过回调结果异步通知。
                     * 
                     */
                    void SetAsync(const int64_t& _async);

                    /**
                     * 判断参数 Async 是否已赋值
                     * @return Async 是否已赋值
                     * 
                     */
                    bool AsyncHasBeenSet() const;

                    /**
                     * 获取产品ID，可在腾讯安心用户运营平台的企业管理中获取
                     * @return ProductId 产品ID，可在腾讯安心用户运营平台的企业管理中获取
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品ID，可在腾讯安心用户运营平台的企业管理中获取
                     * @param _productId 产品ID，可在腾讯安心用户运营平台的企业管理中获取
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取异步接收任务结果通知的回调地址。在Async为1的时候，会将任务结果通过该回调地址进行通知。
                     * @return NotifyURL 异步接收任务结果通知的回调地址。在Async为1的时候，会将任务结果通过该回调地址进行通知。
                     * 
                     */
                    std::string GetNotifyURL() const;

                    /**
                     * 设置异步接收任务结果通知的回调地址。在Async为1的时候，会将任务结果通过该回调地址进行通知。
                     * @param _notifyURL 异步接收任务结果通知的回调地址。在Async为1的时候，会将任务结果通过该回调地址进行通知。
                     * 
                     */
                    void SetNotifyURL(const std::string& _notifyURL);

                    /**
                     * 判断参数 NotifyURL 是否已赋值
                     * @return NotifyURL 是否已赋值
                     * 
                     */
                    bool NotifyURLHasBeenSet() const;

                private:

                    /**
                     * 用户唯一标识，最大长度为64
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 用户设备ID，最大长度为64
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 任务的唯一订单号，只能是数字、大小写字母，且在同一个产品ID下唯一，最大长度为64
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 任务事件Code，在腾讯安心用户运营平台下的任务事件列表中设置并获取
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 任务结果是否异步通知。0表示任务结果在返回信息中同步返回；1表示任务结果通过回调结果异步通知。
                     */
                    int64_t m_async;
                    bool m_asyncHasBeenSet;

                    /**
                     * 产品ID，可在腾讯安心用户运营平台的企业管理中获取
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 异步接收任务结果通知的回调地址。在Async为1的时候，会将任务结果通过该回调地址进行通知。
                     */
                    std::string m_notifyURL;
                    bool m_notifyURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTREQUEST_H_
