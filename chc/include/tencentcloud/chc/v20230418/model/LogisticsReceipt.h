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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_LOGISTICSRECEIPT_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_LOGISTICSRECEIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 物流上门收货信息
                */
                class LogisticsReceipt : public AbstractModel
                {
                public:
                    LogisticsReceipt();
                    ~LogisticsReceipt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取物流预计上门时间
                     * @return LogisticsArrivalTime 物流预计上门时间
                     * 
                     */
                    std::string GetLogisticsArrivalTime() const;

                    /**
                     * 设置物流预计上门时间
                     * @param _logisticsArrivalTime 物流预计上门时间
                     * 
                     */
                    void SetLogisticsArrivalTime(const std::string& _logisticsArrivalTime);

                    /**
                     * 判断参数 LogisticsArrivalTime 是否已赋值
                     * @return LogisticsArrivalTime 是否已赋值
                     * 
                     */
                    bool LogisticsArrivalTimeHasBeenSet() const;

                    /**
                     * 获取物流公司名称
                     * @return LogisticsCompany 物流公司名称
                     * 
                     */
                    std::string GetLogisticsCompany() const;

                    /**
                     * 设置物流公司名称
                     * @param _logisticsCompany 物流公司名称
                     * 
                     */
                    void SetLogisticsCompany(const std::string& _logisticsCompany);

                    /**
                     * 判断参数 LogisticsCompany 是否已赋值
                     * @return LogisticsCompany 是否已赋值
                     * 
                     */
                    bool LogisticsCompanyHasBeenSet() const;

                    /**
                     * 获取物流联系人
                     * @return LogisticsStuff 物流联系人
                     * 
                     */
                    std::string GetLogisticsStuff() const;

                    /**
                     * 设置物流联系人
                     * @param _logisticsStuff 物流联系人
                     * 
                     */
                    void SetLogisticsStuff(const std::string& _logisticsStuff);

                    /**
                     * 判断参数 LogisticsStuff 是否已赋值
                     * @return LogisticsStuff 是否已赋值
                     * 
                     */
                    bool LogisticsStuffHasBeenSet() const;

                    /**
                     * 获取物流电话
                     * @return LogisticsStuffContact 物流电话
                     * 
                     */
                    std::string GetLogisticsStuffContact() const;

                    /**
                     * 设置物流电话
                     * @param _logisticsStuffContact 物流电话
                     * 
                     */
                    void SetLogisticsStuffContact(const std::string& _logisticsStuffContact);

                    /**
                     * 判断参数 LogisticsStuffContact 是否已赋值
                     * @return LogisticsStuffContact 是否已赋值
                     * 
                     */
                    bool LogisticsStuffContactHasBeenSet() const;

                    /**
                     * 获取收货人电话
                     * @return ReceiverContact 收货人电话
                     * 
                     */
                    std::string GetReceiverContact() const;

                    /**
                     * 设置收货人电话
                     * @param _receiverContact 收货人电话
                     * 
                     */
                    void SetReceiverContact(const std::string& _receiverContact);

                    /**
                     * 判断参数 ReceiverContact 是否已赋值
                     * @return ReceiverContact 是否已赋值
                     * 
                     */
                    bool ReceiverContactHasBeenSet() const;

                    /**
                     * 获取收货人姓名
                     * @return ReceiverName 收货人姓名
                     * 
                     */
                    std::string GetReceiverName() const;

                    /**
                     * 设置收货人姓名
                     * @param _receiverName 收货人姓名
                     * 
                     */
                    void SetReceiverName(const std::string& _receiverName);

                    /**
                     * 判断参数 ReceiverName 是否已赋值
                     * @return ReceiverName 是否已赋值
                     * 
                     */
                    bool ReceiverNameHasBeenSet() const;

                    /**
                     * 获取收货地址
                     * @return ShippingAddress 收货地址
                     * 
                     */
                    std::string GetShippingAddress() const;

                    /**
                     * 设置收货地址
                     * @param _shippingAddress 收货地址
                     * 
                     */
                    void SetShippingAddress(const std::string& _shippingAddress);

                    /**
                     * 判断参数 ShippingAddress 是否已赋值
                     * @return ShippingAddress 是否已赋值
                     * 
                     */
                    bool ShippingAddressHasBeenSet() const;

                private:

                    /**
                     * 物流预计上门时间
                     */
                    std::string m_logisticsArrivalTime;
                    bool m_logisticsArrivalTimeHasBeenSet;

                    /**
                     * 物流公司名称
                     */
                    std::string m_logisticsCompany;
                    bool m_logisticsCompanyHasBeenSet;

                    /**
                     * 物流联系人
                     */
                    std::string m_logisticsStuff;
                    bool m_logisticsStuffHasBeenSet;

                    /**
                     * 物流电话
                     */
                    std::string m_logisticsStuffContact;
                    bool m_logisticsStuffContactHasBeenSet;

                    /**
                     * 收货人电话
                     */
                    std::string m_receiverContact;
                    bool m_receiverContactHasBeenSet;

                    /**
                     * 收货人姓名
                     */
                    std::string m_receiverName;
                    bool m_receiverNameHasBeenSet;

                    /**
                     * 收货地址
                     */
                    std::string m_shippingAddress;
                    bool m_shippingAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_LOGISTICSRECEIPT_H_
