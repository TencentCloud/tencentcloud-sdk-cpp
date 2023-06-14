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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTDEVICESPOSITIONITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTDEVICESPOSITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DevicePositionItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 产品设备位置信息
                */
                class ProductDevicesPositionItem : public AbstractModel
                {
                public:
                    ProductDevicesPositionItem();
                    ~ProductDevicesPositionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备位置列表
                     * @return Items 设备位置列表
                     * 
                     */
                    std::vector<DevicePositionItem> GetItems() const;

                    /**
                     * 设置设备位置列表
                     * @param _items 设备位置列表
                     * 
                     */
                    void SetItems(const std::vector<DevicePositionItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取产品标识
                     * @return ProductId 产品标识
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品标识
                     * @param _productId 产品标识
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备位置数量
                     * @return Total 设备位置数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置设备位置数量
                     * @param _total 设备位置数量
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 设备位置列表
                     */
                    std::vector<DevicePositionItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 产品标识
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备位置数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PRODUCTDEVICESPOSITIONITEM_H_
