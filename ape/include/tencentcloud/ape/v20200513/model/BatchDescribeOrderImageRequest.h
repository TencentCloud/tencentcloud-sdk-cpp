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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERIMAGEREQUEST_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * BatchDescribeOrderImage请求参数结构体
                */
                class BatchDescribeOrderImageRequest : public AbstractModel
                {
                public:
                    BatchDescribeOrderImageRequest();
                    ~BatchDescribeOrderImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要下载图片的订单id
                     * @return OrderIds 要下载图片的订单id
                     * 
                     */
                    std::vector<std::string> GetOrderIds() const;

                    /**
                     * 设置要下载图片的订单id
                     * @param _orderIds 要下载图片的订单id
                     * 
                     */
                    void SetOrderIds(const std::vector<std::string>& _orderIds);

                    /**
                     * 判断参数 OrderIds 是否已赋值
                     * @return OrderIds 是否已赋值
                     * 
                     */
                    bool OrderIdsHasBeenSet() const;

                private:

                    /**
                     * 要下载图片的订单id
                     */
                    std::vector<std::string> m_orderIds;
                    bool m_orderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERIMAGEREQUEST_H_
