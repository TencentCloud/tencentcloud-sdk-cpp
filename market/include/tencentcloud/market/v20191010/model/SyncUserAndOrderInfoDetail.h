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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFODETAIL_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * 同步用户信息订单信息详情
                */
                class SyncUserAndOrderInfoDetail : public AbstractModel
                {
                public:
                    SyncUserAndOrderInfoDetail();
                    ~SyncUserAndOrderInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云订单总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 腾讯云订单总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置腾讯云订单总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCount 腾讯云订单总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取腾讯云订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarketOrders 腾讯云订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetMarketOrders() const;

                    /**
                     * 设置腾讯云订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MarketOrders 腾讯云订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMarketOrders(const std::vector<std::string>& _marketOrders);

                    /**
                     * 判断参数 MarketOrders 是否已赋值
                     * @return MarketOrders 是否已赋值
                     */
                    bool MarketOrdersHasBeenSet() const;

                    /**
                     * 获取腾讯云用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 腾讯云用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置腾讯云用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerUin 腾讯云用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 腾讯云订单总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 腾讯云订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_marketOrders;
                    bool m_marketOrdersHasBeenSet;

                    /**
                     * 腾讯云用户Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFODETAIL_H_
