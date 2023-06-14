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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/TradePrice.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceCreate返回参数结构体
                */
                class InquirePriceCreateResponse : public AbstractModel
                {
                public:
                    InquirePriceCreateResponse();
                    ~InquirePriceCreateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例价格
                     * @return InstancePrice 实例价格
                     * 
                     */
                    TradePrice GetInstancePrice() const;

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取存储价格
                     * @return StoragePrice 存储价格
                     * 
                     */
                    TradePrice GetStoragePrice() const;

                    /**
                     * 判断参数 StoragePrice 是否已赋值
                     * @return StoragePrice 是否已赋值
                     * 
                     */
                    bool StoragePriceHasBeenSet() const;

                private:

                    /**
                     * 实例价格
                     */
                    TradePrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * 存储价格
                     */
                    TradePrice m_storagePrice;
                    bool m_storagePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATERESPONSE_H_
