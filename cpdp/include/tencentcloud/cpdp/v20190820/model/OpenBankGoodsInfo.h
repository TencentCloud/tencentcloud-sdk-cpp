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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_

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
                * 云企付-商品信息
                */
                class OpenBankGoodsInfo : public AbstractModel
                {
                public:
                    OpenBankGoodsInfo();
                    ~OpenBankGoodsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品名称，默认值“商品支付”
                     * @return GoodsName 商品名称，默认值“商品支付”
                     */
                    std::string GetGoodsName() const;

                    /**
                     * 设置商品名称，默认值“商品支付”
                     * @param GoodsName 商品名称，默认值“商品支付”
                     */
                    void SetGoodsName(const std::string& _goodsName);

                    /**
                     * 判断参数 GoodsName 是否已赋值
                     * @return GoodsName 是否已赋值
                     */
                    bool GoodsNameHasBeenSet() const;

                    /**
                     * 获取商品详细描述（商品列表）
                     * @return GoodsDetail 商品详细描述（商品列表）
                     */
                    std::string GetGoodsDetail() const;

                    /**
                     * 设置商品详细描述（商品列表）
                     * @param GoodsDetail 商品详细描述（商品列表）
                     */
                    void SetGoodsDetail(const std::string& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取商品简单描述。需传入应用市场上的 APP 名字-实际商品名称，例如：天天爱消除-游戏充值
                     * @return GoodsDescription 商品简单描述。需传入应用市场上的 APP 名字-实际商品名称，例如：天天爱消除-游戏充值
                     */
                    std::string GetGoodsDescription() const;

                    /**
                     * 设置商品简单描述。需传入应用市场上的 APP 名字-实际商品名称，例如：天天爱消除-游戏充值
                     * @param GoodsDescription 商品简单描述。需传入应用市场上的 APP 名字-实际商品名称，例如：天天爱消除-游戏充值
                     */
                    void SetGoodsDescription(const std::string& _goodsDescription);

                    /**
                     * 判断参数 GoodsDescription 是否已赋值
                     * @return GoodsDescription 是否已赋值
                     */
                    bool GoodsDescriptionHasBeenSet() const;

                private:

                    /**
                     * 商品名称，默认值“商品支付”
                     */
                    std::string m_goodsName;
                    bool m_goodsNameHasBeenSet;

                    /**
                     * 商品详细描述（商品列表）
                     */
                    std::string m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 商品简单描述。需传入应用市场上的 APP 名字-实际商品名称，例如：天天爱消除-游戏充值
                     */
                    std::string m_goodsDescription;
                    bool m_goodsDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_
