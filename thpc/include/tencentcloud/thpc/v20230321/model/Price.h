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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_PRICE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 价格
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间价格
                     * @return SpacePrice 工作空间价格
                     * 
                     */
                    ItemPrice GetSpacePrice() const;

                    /**
                     * 设置工作空间价格
                     * @param _spacePrice 工作空间价格
                     * 
                     */
                    void SetSpacePrice(const ItemPrice& _spacePrice);

                    /**
                     * 判断参数 SpacePrice 是否已赋值
                     * @return SpacePrice 是否已赋值
                     * 
                     */
                    bool SpacePriceHasBeenSet() const;

                    /**
                     * 获取网络价格
                     * @return BandwidthPrice 网络价格
                     * 
                     */
                    ItemPrice GetBandwidthPrice() const;

                    /**
                     * 设置网络价格
                     * @param _bandwidthPrice 网络价格
                     * 
                     */
                    void SetBandwidthPrice(const ItemPrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                private:

                    /**
                     * 工作空间价格
                     */
                    ItemPrice m_spacePrice;
                    bool m_spacePriceHasBeenSet;

                    /**
                     * 网络价格
                     */
                    ItemPrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_PRICE_H_
