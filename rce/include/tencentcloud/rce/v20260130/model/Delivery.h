/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Address.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 物流信息
                */
                class Delivery : public AbstractModel
                {
                public:
                    Delivery();
                    ~Delivery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>物流方式</p><ul><li>physical：物理投送</li><li>electonic：电子投送</li></ul>
                     * @return DeliveryMethod <p>物流方式</p><ul><li>physical：物理投送</li><li>electonic：电子投送</li></ul>
                     * 
                     */
                    std::string GetDeliveryMethod() const;

                    /**
                     * 设置<p>物流方式</p><ul><li>physical：物理投送</li><li>electonic：电子投送</li></ul>
                     * @param _deliveryMethod <p>物流方式</p><ul><li>physical：物理投送</li><li>electonic：电子投送</li></ul>
                     * 
                     */
                    void SetDeliveryMethod(const std::string& _deliveryMethod);

                    /**
                     * 判断参数 DeliveryMethod 是否已赋值
                     * @return DeliveryMethod 是否已赋值
                     * 
                     */
                    bool DeliveryMethodHasBeenSet() const;

                    /**
                     * 获取<p>物流费用</p>
                     * @return DeliveryAmount <p>物流费用</p>
                     * 
                     */
                    Amount GetDeliveryAmount() const;

                    /**
                     * 设置<p>物流费用</p>
                     * @param _deliveryAmount <p>物流费用</p>
                     * 
                     */
                    void SetDeliveryAmount(const Amount& _deliveryAmount);

                    /**
                     * 判断参数 DeliveryAmount 是否已赋值
                     * @return DeliveryAmount 是否已赋值
                     * 
                     */
                    bool DeliveryAmountHasBeenSet() const;

                    /**
                     * 获取<p>收货地址</p>
                     * @return DeliveryAddress <p>收货地址</p>
                     * 
                     */
                    Address GetDeliveryAddress() const;

                    /**
                     * 设置<p>收货地址</p>
                     * @param _deliveryAddress <p>收货地址</p>
                     * 
                     */
                    void SetDeliveryAddress(const Address& _deliveryAddress);

                    /**
                     * 判断参数 DeliveryAddress 是否已赋值
                     * @return DeliveryAddress 是否已赋值
                     * 
                     */
                    bool DeliveryAddressHasBeenSet() const;

                    /**
                     * 获取<p>收货人电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return ConsigneePhone <p>收货人电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetConsigneePhone() const;

                    /**
                     * 设置<p>收货人电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _consigneePhone <p>收货人电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    void SetConsigneePhone(const std::string& _consigneePhone);

                    /**
                     * 判断参数 ConsigneePhone 是否已赋值
                     * @return ConsigneePhone 是否已赋值
                     * 
                     */
                    bool ConsigneePhoneHasBeenSet() const;

                    /**
                     * 获取<p>收货人邮箱</p>
                     * @return ConsigneeEmail <p>收货人邮箱</p>
                     * 
                     */
                    std::string GetConsigneeEmail() const;

                    /**
                     * 设置<p>收货人邮箱</p>
                     * @param _consigneeEmail <p>收货人邮箱</p>
                     * 
                     */
                    void SetConsigneeEmail(const std::string& _consigneeEmail);

                    /**
                     * 判断参数 ConsigneeEmail 是否已赋值
                     * @return ConsigneeEmail 是否已赋值
                     * 
                     */
                    bool ConsigneeEmailHasBeenSet() const;

                    /**
                     * 获取<p>收货人姓名</p>
                     * @return ConsigneeName <p>收货人姓名</p>
                     * 
                     */
                    std::string GetConsigneeName() const;

                    /**
                     * 设置<p>收货人姓名</p>
                     * @param _consigneeName <p>收货人姓名</p>
                     * 
                     */
                    void SetConsigneeName(const std::string& _consigneeName);

                    /**
                     * 判断参数 ConsigneeName 是否已赋值
                     * @return ConsigneeName 是否已赋值
                     * 
                     */
                    bool ConsigneeNameHasBeenSet() const;

                    /**
                     * 获取<p>是否加急</p>
                     * @return Expedited <p>是否加急</p>
                     * 
                     */
                    bool GetExpedited() const;

                    /**
                     * 设置<p>是否加急</p>
                     * @param _expedited <p>是否加急</p>
                     * 
                     */
                    void SetExpedited(const bool& _expedited);

                    /**
                     * 判断参数 Expedited 是否已赋值
                     * @return Expedited 是否已赋值
                     * 
                     */
                    bool ExpeditedHasBeenSet() const;

                    /**
                     * 获取<p>物流厂商，一般是物流的公司</p>
                     * @return DeliveryCarrier <p>物流厂商，一般是物流的公司</p>
                     * 
                     */
                    std::string GetDeliveryCarrier() const;

                    /**
                     * 设置<p>物流厂商，一般是物流的公司</p>
                     * @param _deliveryCarrier <p>物流厂商，一般是物流的公司</p>
                     * 
                     */
                    void SetDeliveryCarrier(const std::string& _deliveryCarrier);

                    /**
                     * 判断参数 DeliveryCarrier 是否已赋值
                     * @return DeliveryCarrier 是否已赋值
                     * 
                     */
                    bool DeliveryCarrierHasBeenSet() const;

                    /**
                     * 获取<p>物流追踪单号</p>
                     * @return DeliveryTracking <p>物流追踪单号</p>
                     * 
                     */
                    std::string GetDeliveryTracking() const;

                    /**
                     * 设置<p>物流追踪单号</p>
                     * @param _deliveryTracking <p>物流追踪单号</p>
                     * 
                     */
                    void SetDeliveryTracking(const std::string& _deliveryTracking);

                    /**
                     * 判断参数 DeliveryTracking 是否已赋值
                     * @return DeliveryTracking 是否已赋值
                     * 
                     */
                    bool DeliveryTrackingHasBeenSet() const;

                private:

                    /**
                     * <p>物流方式</p><ul><li>physical：物理投送</li><li>electonic：电子投送</li></ul>
                     */
                    std::string m_deliveryMethod;
                    bool m_deliveryMethodHasBeenSet;

                    /**
                     * <p>物流费用</p>
                     */
                    Amount m_deliveryAmount;
                    bool m_deliveryAmountHasBeenSet;

                    /**
                     * <p>收货地址</p>
                     */
                    Address m_deliveryAddress;
                    bool m_deliveryAddressHasBeenSet;

                    /**
                     * <p>收货人电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_consigneePhone;
                    bool m_consigneePhoneHasBeenSet;

                    /**
                     * <p>收货人邮箱</p>
                     */
                    std::string m_consigneeEmail;
                    bool m_consigneeEmailHasBeenSet;

                    /**
                     * <p>收货人姓名</p>
                     */
                    std::string m_consigneeName;
                    bool m_consigneeNameHasBeenSet;

                    /**
                     * <p>是否加急</p>
                     */
                    bool m_expedited;
                    bool m_expeditedHasBeenSet;

                    /**
                     * <p>物流厂商，一般是物流的公司</p>
                     */
                    std::string m_deliveryCarrier;
                    bool m_deliveryCarrierHasBeenSet;

                    /**
                     * <p>物流追踪单号</p>
                     */
                    std::string m_deliveryTracking;
                    bool m_deliveryTrackingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_
