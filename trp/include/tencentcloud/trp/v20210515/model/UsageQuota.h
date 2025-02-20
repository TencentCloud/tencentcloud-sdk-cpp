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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_USAGEQUOTA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_USAGEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 付费信息使用量
                */
                class UsageQuota : public AbstractModel
                {
                public:
                    UsageQuota();
                    ~UsageQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取商户配额
                     * @return FactoryCnt 商户配额
                     * 
                     */
                    int64_t GetFactoryCnt() const;

                    /**
                     * 设置商户配额
                     * @param _factoryCnt 商户配额
                     * 
                     */
                    void SetFactoryCnt(const int64_t& _factoryCnt);

                    /**
                     * 判断参数 FactoryCnt 是否已赋值
                     * @return FactoryCnt 是否已赋值
                     * 
                     */
                    bool FactoryCntHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return ItemCnt 商品数量
                     * 
                     */
                    int64_t GetItemCnt() const;

                    /**
                     * 设置商品数量
                     * @param _itemCnt 商品数量
                     * 
                     */
                    void SetItemCnt(const int64_t& _itemCnt);

                    /**
                     * 判断参数 ItemCnt 是否已赋值
                     * @return ItemCnt 是否已赋值
                     * 
                     */
                    bool ItemCntHasBeenSet() const;

                    /**
                     * 获取溯源码量
                     * @return TrackCnt 溯源码量
                     * 
                     */
                    int64_t GetTrackCnt() const;

                    /**
                     * 设置溯源码量
                     * @param _trackCnt 溯源码量
                     * 
                     */
                    void SetTrackCnt(const int64_t& _trackCnt);

                    /**
                     * 判断参数 TrackCnt 是否已赋值
                     * @return TrackCnt 是否已赋值
                     * 
                     */
                    bool TrackCntHasBeenSet() const;

                    /**
                     * 获取营销码额度
                     * @return SaleCnt 营销码额度
                     * 
                     */
                    int64_t GetSaleCnt() const;

                    /**
                     * 设置营销码额度
                     * @param _saleCnt 营销码额度
                     * 
                     */
                    void SetSaleCnt(const int64_t& _saleCnt);

                    /**
                     * 判断参数 SaleCnt 是否已赋值
                     * @return SaleCnt 是否已赋值
                     * 
                     */
                    bool SaleCntHasBeenSet() const;

                    /**
                     * 获取区块链上链次数
                     * @return ChainCnt 区块链上链次数
                     * 
                     */
                    int64_t GetChainCnt() const;

                    /**
                     * 设置区块链上链次数
                     * @param _chainCnt 区块链上链次数
                     * 
                     */
                    void SetChainCnt(const int64_t& _chainCnt);

                    /**
                     * 判断参数 ChainCnt 是否已赋值
                     * @return ChainCnt 是否已赋值
                     * 
                     */
                    bool ChainCntHasBeenSet() const;

                    /**
                     * 获取风险检测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCnt 风险检测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetRiskCnt() const;

                    /**
                     * 设置风险检测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCnt 风险检测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRiskCnt(const int64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * @deprecated
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return UpdateTime 时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置时间
                     * @param _updateTime 时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户配额
                     */
                    int64_t m_factoryCnt;
                    bool m_factoryCntHasBeenSet;

                    /**
                     * 商品数量
                     */
                    int64_t m_itemCnt;
                    bool m_itemCntHasBeenSet;

                    /**
                     * 溯源码量
                     */
                    int64_t m_trackCnt;
                    bool m_trackCntHasBeenSet;

                    /**
                     * 营销码额度
                     */
                    int64_t m_saleCnt;
                    bool m_saleCntHasBeenSet;

                    /**
                     * 区块链上链次数
                     */
                    int64_t m_chainCnt;
                    bool m_chainCntHasBeenSet;

                    /**
                     * 风险检测次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_USAGEQUOTA_H_
