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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETESHIPPERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETESHIPPERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteShipper请求参数结构体
                */
                class DeleteShipperRequest : public AbstractModel
                {
                public:
                    DeleteShipperRequest();
                    ~DeleteShipperRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递规则ID
                     * @return ShipperId 投递规则ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递规则ID
                     * @param _shipperId 投递规则ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                private:

                    /**
                     * 投递规则ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETESHIPPERREQUEST_H_
