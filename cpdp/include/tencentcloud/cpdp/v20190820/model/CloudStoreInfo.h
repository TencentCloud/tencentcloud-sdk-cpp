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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSTOREINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSTOREINFO_H_

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
                * 门店信息
                */
                class CloudStoreInfo : public AbstractModel
                {
                public:
                    CloudStoreInfo();
                    ~CloudStoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取门店ID。
                     * @return StoreId 门店ID。
                     * 
                     */
                    std::string GetStoreId() const;

                    /**
                     * 设置门店ID。
                     * @param _storeId 门店ID。
                     * 
                     */
                    void SetStoreId(const std::string& _storeId);

                    /**
                     * 判断参数 StoreId 是否已赋值
                     * @return StoreId 是否已赋值
                     * 
                     */
                    bool StoreIdHasBeenSet() const;

                    /**
                     * 获取门店名称。
                     * @return StoreName 门店名称。
                     * 
                     */
                    std::string GetStoreName() const;

                    /**
                     * 设置门店名称。
                     * @param _storeName 门店名称。
                     * 
                     */
                    void SetStoreName(const std::string& _storeName);

                    /**
                     * 判断参数 StoreName 是否已赋值
                     * @return StoreName 是否已赋值
                     * 
                     */
                    bool StoreNameHasBeenSet() const;

                    /**
                     * 获取门店地址。
                     * @return StoreAddress 门店地址。
                     * 
                     */
                    std::string GetStoreAddress() const;

                    /**
                     * 设置门店地址。
                     * @param _storeAddress 门店地址。
                     * 
                     */
                    void SetStoreAddress(const std::string& _storeAddress);

                    /**
                     * 判断参数 StoreAddress 是否已赋值
                     * @return StoreAddress 是否已赋值
                     * 
                     */
                    bool StoreAddressHasBeenSet() const;

                    /**
                     * 获取门店地区代码。
                     * @return StoreAreaCode 门店地区代码。
                     * 
                     */
                    std::string GetStoreAreaCode() const;

                    /**
                     * 设置门店地区代码。
                     * @param _storeAreaCode 门店地区代码。
                     * 
                     */
                    void SetStoreAreaCode(const std::string& _storeAreaCode);

                    /**
                     * 判断参数 StoreAreaCode 是否已赋值
                     * @return StoreAreaCode 是否已赋值
                     * 
                     */
                    bool StoreAreaCodeHasBeenSet() const;

                    /**
                     * 获取设备ID。
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * @return StoreDeviceId 设备ID。
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * 
                     */
                    std::string GetStoreDeviceId() const;

                    /**
                     * 设置设备ID。
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * @param _storeDeviceId 设备ID。
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     * 
                     */
                    void SetStoreDeviceId(const std::string& _storeDeviceId);

                    /**
                     * 判断参数 StoreDeviceId 是否已赋值
                     * @return StoreDeviceId 是否已赋值
                     * 
                     */
                    bool StoreDeviceIdHasBeenSet() const;

                private:

                    /**
                     * 门店ID。
                     */
                    std::string m_storeId;
                    bool m_storeIdHasBeenSet;

                    /**
                     * 门店名称。
                     */
                    std::string m_storeName;
                    bool m_storeNameHasBeenSet;

                    /**
                     * 门店地址。
                     */
                    std::string m_storeAddress;
                    bool m_storeAddressHasBeenSet;

                    /**
                     * 门店地区代码。
                     */
                    std::string m_storeAreaCode;
                    bool m_storeAreaCodeHasBeenSet;

                    /**
                     * 设备ID。
wechat_ecommerce渠道 - h5支付方式，此字段必填。
                     */
                    std::string m_storeDeviceId;
                    bool m_storeDeviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSTOREINFO_H_
