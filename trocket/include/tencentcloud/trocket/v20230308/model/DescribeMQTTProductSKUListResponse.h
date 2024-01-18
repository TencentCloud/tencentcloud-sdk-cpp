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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTPRODUCTSKULISTRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTPRODUCTSKULISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/MQTTProductSkuItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMQTTProductSKUList返回参数结构体
                */
                class DescribeMQTTProductSKUListResponse : public AbstractModel
                {
                public:
                    DescribeMQTTProductSKUListResponse();
                    ~DescribeMQTTProductSKUListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取mqtt商品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MQTTProductSkuList mqtt商品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MQTTProductSkuItem> GetMQTTProductSkuList() const;

                    /**
                     * 判断参数 MQTTProductSkuList 是否已赋值
                     * @return MQTTProductSkuList 是否已赋值
                     * 
                     */
                    bool MQTTProductSkuListHasBeenSet() const;

                private:

                    /**
                     * 查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * mqtt商品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MQTTProductSkuItem> m_mQTTProductSkuList;
                    bool m_mQTTProductSkuListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTPRODUCTSKULISTRESPONSE_H_
