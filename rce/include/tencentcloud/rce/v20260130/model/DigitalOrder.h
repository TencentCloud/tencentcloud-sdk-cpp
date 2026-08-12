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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 数字订单
                */
                class DigitalOrder : public AbstractModel
                {
                public:
                    DigitalOrder();
                    ~DigitalOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数字资产</p>
                     * @return DigitalAsset <p>数字资产</p>
                     * 
                     */
                    std::string GetDigitalAsset() const;

                    /**
                     * 设置<p>数字资产</p>
                     * @param _digitalAsset <p>数字资产</p>
                     * 
                     */
                    void SetDigitalAsset(const std::string& _digitalAsset);

                    /**
                     * 判断参数 DigitalAsset 是否已赋值
                     * @return DigitalAsset 是否已赋值
                     * 
                     */
                    bool DigitalAssetHasBeenSet() const;

                    /**
                     * 获取<p>数字资产类型</p><p>枚举值：</p><ul><li>coin： 代币</li><li>commodity： 大宗商品</li><li>crypto： 加密货币</li><li>fiat： 法币</li><li>token： 通证</li><li>stock： 股票</li><li>bond： 债券</li></ul>
                     * @return AssetType <p>数字资产类型</p><p>枚举值：</p><ul><li>coin： 代币</li><li>commodity： 大宗商品</li><li>crypto： 加密货币</li><li>fiat： 法币</li><li>token： 通证</li><li>stock： 股票</li><li>bond： 债券</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>数字资产类型</p><p>枚举值：</p><ul><li>coin： 代币</li><li>commodity： 大宗商品</li><li>crypto： 加密货币</li><li>fiat： 法币</li><li>token： 通证</li><li>stock： 股票</li><li>bond： 债券</li></ul>
                     * @param _assetType <p>数字资产类型</p><p>枚举值：</p><ul><li>coin： 代币</li><li>commodity： 大宗商品</li><li>crypto： 加密货币</li><li>fiat： 法币</li><li>token： 通证</li><li>stock： 股票</li><li>bond： 债券</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>订单类型</p><p>枚举值：</p><ul><li>limit： 限价单</li><li>market： 市价单</li><li>stop_limit： 止损限价单</li><li>stop_loss： 止损单</li><li>take_profit： 止盈单</li><li>take_profit_limit： 止盈限价单</li></ul>
                     * @return OrderType <p>订单类型</p><p>枚举值：</p><ul><li>limit： 限价单</li><li>market： 市价单</li><li>stop_limit： 止损限价单</li><li>stop_loss： 止损单</li><li>take_profit： 止盈单</li><li>take_profit_limit： 止盈限价单</li></ul>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>订单类型</p><p>枚举值：</p><ul><li>limit： 限价单</li><li>market： 市价单</li><li>stop_limit： 止损限价单</li><li>stop_loss： 止损单</li><li>take_profit： 止盈单</li><li>take_profit_limit： 止盈限价单</li></ul>
                     * @param _orderType <p>订单类型</p><p>枚举值：</p><ul><li>limit： 限价单</li><li>market： 市价单</li><li>stop_limit： 止损限价单</li><li>stop_loss： 止损单</li><li>take_profit： 止盈单</li><li>take_profit_limit： 止盈限价单</li></ul>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>数字资产的数量</p>
                     * @return Volume <p>数字资产的数量</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>数字资产的数量</p>
                     * @param _volume <p>数字资产的数量</p>
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * <p>数字资产</p>
                     */
                    std::string m_digitalAsset;
                    bool m_digitalAssetHasBeenSet;

                    /**
                     * <p>数字资产类型</p><p>枚举值：</p><ul><li>coin： 代币</li><li>commodity： 大宗商品</li><li>crypto： 加密货币</li><li>fiat： 法币</li><li>token： 通证</li><li>stock： 股票</li><li>bond： 债券</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>订单类型</p><p>枚举值：</p><ul><li>limit： 限价单</li><li>market： 市价单</li><li>stop_limit： 止损限价单</li><li>stop_loss： 止损单</li><li>take_profit： 止盈单</li><li>take_profit_limit： 止盈限价单</li></ul>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>数字资产的数量</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_
