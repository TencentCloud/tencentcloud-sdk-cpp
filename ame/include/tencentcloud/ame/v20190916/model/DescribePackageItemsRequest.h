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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPACKAGEITEMSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPACKAGEITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribePackageItems请求参数结构体
                */
                class DescribePackageItemsRequest : public AbstractModel
                {
                public:
                    DescribePackageItemsRequest();
                    ~DescribePackageItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单id，从获取已购曲库包列表中获取
                     * @return OrderId 订单id，从获取已购曲库包列表中获取
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id，从获取已购曲库包列表中获取
                     * @param _orderId 订单id，从获取已购曲库包列表中获取
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取默认0，Offset=Offset+Length
                     * @return Offset 默认0，Offset=Offset+Length
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置默认0，Offset=Offset+Length
                     * @param _offset 默认0，Offset=Offset+Length
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取默认20
                     * @return Length 默认20
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置默认20
                     * @param _length 默认20
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * 订单id，从获取已购曲库包列表中获取
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 默认0，Offset=Offset+Length
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 默认20
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEPACKAGEITEMSREQUEST_H_
