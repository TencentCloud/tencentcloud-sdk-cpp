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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/DBInstancePrice.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * InquirePriceModifyDBInstanceSpec返回参数结构体
                */
                class InquirePriceModifyDBInstanceSpecResponse : public AbstractModel
                {
                public:
                    InquirePriceModifyDBInstanceSpecResponse();
                    ~InquirePriceModifyDBInstanceSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取价格。
                     * @return Price 价格。
                     * 
                     */
                    DBInstancePrice GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * 价格。
                     */
                    DBInstancePrice m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECRESPONSE_H_
