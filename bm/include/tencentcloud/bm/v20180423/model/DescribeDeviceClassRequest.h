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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDeviceClass请求参数结构体
                */
                class DescribeDeviceClassRequest : public AbstractModel
                {
                public:
                    DescribeDeviceClassRequest();
                    ~DescribeDeviceClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否仅查询在售标准机型配置信息。取值0：查询所有机型；1：查询在售机型。默认为1
                     * @return OnSale 是否仅查询在售标准机型配置信息。取值0：查询所有机型；1：查询在售机型。默认为1
                     * 
                     */
                    uint64_t GetOnSale() const;

                    /**
                     * 设置是否仅查询在售标准机型配置信息。取值0：查询所有机型；1：查询在售机型。默认为1
                     * @param _onSale 是否仅查询在售标准机型配置信息。取值0：查询所有机型；1：查询在售机型。默认为1
                     * 
                     */
                    void SetOnSale(const uint64_t& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                    /**
                     * 获取是否返回价格信息。取值0：不返回价格信息，接口返回速度更快；1：返回价格信息。默认为1
                     * @return NeedPriceInfo 是否返回价格信息。取值0：不返回价格信息，接口返回速度更快；1：返回价格信息。默认为1
                     * 
                     */
                    uint64_t GetNeedPriceInfo() const;

                    /**
                     * 设置是否返回价格信息。取值0：不返回价格信息，接口返回速度更快；1：返回价格信息。默认为1
                     * @param _needPriceInfo 是否返回价格信息。取值0：不返回价格信息，接口返回速度更快；1：返回价格信息。默认为1
                     * 
                     */
                    void SetNeedPriceInfo(const uint64_t& _needPriceInfo);

                    /**
                     * 判断参数 NeedPriceInfo 是否已赋值
                     * @return NeedPriceInfo 是否已赋值
                     * 
                     */
                    bool NeedPriceInfoHasBeenSet() const;

                private:

                    /**
                     * 是否仅查询在售标准机型配置信息。取值0：查询所有机型；1：查询在售机型。默认为1
                     */
                    uint64_t m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * 是否返回价格信息。取值0：不返回价格信息，接口返回速度更快；1：返回价格信息。默认为1
                     */
                    uint64_t m_needPriceInfo;
                    bool m_needPriceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSREQUEST_H_
