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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDPRODUCTITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDPRODUCTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/FenceBindDeviceItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 围栏绑定的产品信息
                */
                class FenceBindProductItem : public AbstractModel
                {
                public:
                    FenceBindProductItem();
                    ~FenceBindProductItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围栏绑定的设备信息
                     * @return Devices 围栏绑定的设备信息
                     * 
                     */
                    std::vector<FenceBindDeviceItem> GetDevices() const;

                    /**
                     * 设置围栏绑定的设备信息
                     * @param _devices 围栏绑定的设备信息
                     * 
                     */
                    void SetDevices(const std::vector<FenceBindDeviceItem>& _devices);

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                    /**
                     * 获取围栏绑定的产品Id
                     * @return ProductId 围栏绑定的产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置围栏绑定的产品Id
                     * @param _productId 围栏绑定的产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * 围栏绑定的设备信息
                     */
                    std::vector<FenceBindDeviceItem> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 围栏绑定的产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDPRODUCTITEM_H_
