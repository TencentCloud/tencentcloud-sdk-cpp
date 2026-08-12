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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_WALLET_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_WALLET_H_

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
                * 数字钱包
                */
                class Wallet : public AbstractModel
                {
                public:
                    Wallet();
                    ~Wallet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>钱包类型</p><p>枚举值：</p><ul><li>crypto： 加密货币</li><li>digital： 数字货币</li><li>fiat： 法币</li></ul>
                     * @return WalletType <p>钱包类型</p><p>枚举值：</p><ul><li>crypto： 加密货币</li><li>digital： 数字货币</li><li>fiat： 法币</li></ul>
                     * 
                     */
                    std::string GetWalletType() const;

                    /**
                     * 设置<p>钱包类型</p><p>枚举值：</p><ul><li>crypto： 加密货币</li><li>digital： 数字货币</li><li>fiat： 法币</li></ul>
                     * @param _walletType <p>钱包类型</p><p>枚举值：</p><ul><li>crypto： 加密货币</li><li>digital： 数字货币</li><li>fiat： 法币</li></ul>
                     * 
                     */
                    void SetWalletType(const std::string& _walletType);

                    /**
                     * 判断参数 WalletType 是否已赋值
                     * @return WalletType 是否已赋值
                     * 
                     */
                    bool WalletTypeHasBeenSet() const;

                    /**
                     * 获取<p>钱包地址，通常为钱包的唯一标识</p>
                     * @return WalletAddress <p>钱包地址，通常为钱包的唯一标识</p>
                     * 
                     */
                    std::string GetWalletAddress() const;

                    /**
                     * 设置<p>钱包地址，通常为钱包的唯一标识</p>
                     * @param _walletAddress <p>钱包地址，通常为钱包的唯一标识</p>
                     * 
                     */
                    void SetWalletAddress(const std::string& _walletAddress);

                    /**
                     * 判断参数 WalletAddress 是否已赋值
                     * @return WalletAddress 是否已赋值
                     * 
                     */
                    bool WalletAddressHasBeenSet() const;

                    /**
                     * 获取<p>钱包归属人姓名</p>
                     * @return WalletHolderName <p>钱包归属人姓名</p>
                     * 
                     */
                    std::string GetWalletHolderName() const;

                    /**
                     * 设置<p>钱包归属人姓名</p>
                     * @param _walletHolderName <p>钱包归属人姓名</p>
                     * 
                     */
                    void SetWalletHolderName(const std::string& _walletHolderName);

                    /**
                     * 判断参数 WalletHolderName 是否已赋值
                     * @return WalletHolderName 是否已赋值
                     * 
                     */
                    bool WalletHolderNameHasBeenSet() const;

                    /**
                     * 获取<p>钱包供应商，wechat、alipay、paypal等</p>
                     * @return WalletProvider <p>钱包供应商，wechat、alipay、paypal等</p>
                     * 
                     */
                    std::string GetWalletProvider() const;

                    /**
                     * 设置<p>钱包供应商，wechat、alipay、paypal等</p>
                     * @param _walletProvider <p>钱包供应商，wechat、alipay、paypal等</p>
                     * 
                     */
                    void SetWalletProvider(const std::string& _walletProvider);

                    /**
                     * 判断参数 WalletProvider 是否已赋值
                     * @return WalletProvider 是否已赋值
                     * 
                     */
                    bool WalletProviderHasBeenSet() const;

                private:

                    /**
                     * <p>钱包类型</p><p>枚举值：</p><ul><li>crypto： 加密货币</li><li>digital： 数字货币</li><li>fiat： 法币</li></ul>
                     */
                    std::string m_walletType;
                    bool m_walletTypeHasBeenSet;

                    /**
                     * <p>钱包地址，通常为钱包的唯一标识</p>
                     */
                    std::string m_walletAddress;
                    bool m_walletAddressHasBeenSet;

                    /**
                     * <p>钱包归属人姓名</p>
                     */
                    std::string m_walletHolderName;
                    bool m_walletHolderNameHasBeenSet;

                    /**
                     * <p>钱包供应商，wechat、alipay、paypal等</p>
                     */
                    std::string m_walletProvider;
                    bool m_walletProviderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_WALLET_H_
