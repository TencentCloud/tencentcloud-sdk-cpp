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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEAVAILABLELIBCOUNTRESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEAVAILABLELIBCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DescribeAvailableLibCount返回参数结构体
                */
                class DescribeAvailableLibCountResponse : public AbstractModel
                {
                public:
                    DescribeAvailableLibCountResponse();
                    ~DescribeAvailableLibCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可空发的白盒密钥数量
                     * @return Quantity 可空发的白盒密钥数量
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                private:

                    /**
                     * 可空发的白盒密钥数量
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEAVAILABLELIBCOUNTRESPONSE_H_
