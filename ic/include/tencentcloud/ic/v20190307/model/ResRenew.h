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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_RESRENEW_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_RESRENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 云api 卡片续费
                */
                class ResRenew : public AbstractModel
                {
                public:
                    ResRenew();
                    ~ResRenew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每一张续费卡片的订单ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderIds 每一张续费卡片的订单ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOrderIds() const;

                    /**
                     * 设置每一张续费卡片的订单ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderIds 每一张续费卡片的订单ID数组
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 每一张续费卡片的订单ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_orderIds;
                    bool m_orderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_RESRENEW_H_
