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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALCHANNELDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALCHANNELDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 第三方渠道数据信息
                */
                class CloudExternalChannelData : public AbstractModel
                {
                public:
                    CloudExternalChannelData();
                    ~CloudExternalChannelData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道数据名。
PAYMENT_ORDER_EXTERNAL_REQUEST_DATA: 支付下单请求数据
PAYMENT_ORDER_EXTERNAL_RETURN_DATA: 支付下单返回数据
PAYMENT_ORDER_EXTERNAL_NOTIFY_DATA: 支付通知数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalChannelDataName 第三方渠道数据名。
PAYMENT_ORDER_EXTERNAL_REQUEST_DATA: 支付下单请求数据
PAYMENT_ORDER_EXTERNAL_RETURN_DATA: 支付下单返回数据
PAYMENT_ORDER_EXTERNAL_NOTIFY_DATA: 支付通知数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalChannelDataName() const;

                    /**
                     * 设置第三方渠道数据名。
PAYMENT_ORDER_EXTERNAL_REQUEST_DATA: 支付下单请求数据
PAYMENT_ORDER_EXTERNAL_RETURN_DATA: 支付下单返回数据
PAYMENT_ORDER_EXTERNAL_NOTIFY_DATA: 支付通知数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalChannelDataName 第三方渠道数据名。
PAYMENT_ORDER_EXTERNAL_REQUEST_DATA: 支付下单请求数据
PAYMENT_ORDER_EXTERNAL_RETURN_DATA: 支付下单返回数据
PAYMENT_ORDER_EXTERNAL_NOTIFY_DATA: 支付通知数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalChannelDataName(const std::string& _externalChannelDataName);

                    /**
                     * 判断参数 ExternalChannelDataName 是否已赋值
                     * @return ExternalChannelDataName 是否已赋值
                     * 
                     */
                    bool ExternalChannelDataNameHasBeenSet() const;

                    /**
                     * 获取第三方渠道数据值。
当ExternalChannelDataType=PAYMENT时，反序列化格式请参考[ExternalChannelPaymentDataValue](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/external-channel-data/QueryExternalChannelData.html#externalchannelpaymentdatavalue)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalChannelDataValue 第三方渠道数据值。
当ExternalChannelDataType=PAYMENT时，反序列化格式请参考[ExternalChannelPaymentDataValue](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/external-channel-data/QueryExternalChannelData.html#externalchannelpaymentdatavalue)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalChannelDataValue() const;

                    /**
                     * 设置第三方渠道数据值。
当ExternalChannelDataType=PAYMENT时，反序列化格式请参考[ExternalChannelPaymentDataValue](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/external-channel-data/QueryExternalChannelData.html#externalchannelpaymentdatavalue)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalChannelDataValue 第三方渠道数据值。
当ExternalChannelDataType=PAYMENT时，反序列化格式请参考[ExternalChannelPaymentDataValue](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/external-channel-data/QueryExternalChannelData.html#externalchannelpaymentdatavalue)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalChannelDataValue(const std::string& _externalChannelDataValue);

                    /**
                     * 判断参数 ExternalChannelDataValue 是否已赋值
                     * @return ExternalChannelDataValue 是否已赋值
                     * 
                     */
                    bool ExternalChannelDataValueHasBeenSet() const;

                private:

                    /**
                     * 第三方渠道数据名。
PAYMENT_ORDER_EXTERNAL_REQUEST_DATA: 支付下单请求数据
PAYMENT_ORDER_EXTERNAL_RETURN_DATA: 支付下单返回数据
PAYMENT_ORDER_EXTERNAL_NOTIFY_DATA: 支付通知数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalChannelDataName;
                    bool m_externalChannelDataNameHasBeenSet;

                    /**
                     * 第三方渠道数据值。
当ExternalChannelDataType=PAYMENT时，反序列化格式请参考[ExternalChannelPaymentDataValue](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/external-channel-data/QueryExternalChannelData.html#externalchannelpaymentdatavalue)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalChannelDataValue;
                    bool m_externalChannelDataValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALCHANNELDATA_H_
