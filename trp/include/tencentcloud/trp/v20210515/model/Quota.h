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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_QUOTA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_QUOTA_H_

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
                * 企业配额信息
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 服务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置服务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 服务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取服务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 服务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置服务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 服务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取配额ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaId 配额ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQuotaId() const;

                    /**
                     * 设置配额ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaId 配额ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaId(const uint64_t& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取开通服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services 开通服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置开通服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _services 开通服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取商户配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FactoryQuota 商户配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFactoryQuota() const;

                    /**
                     * 设置商户配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _factoryQuota 商户配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFactoryQuota(const int64_t& _factoryQuota);

                    /**
                     * 判断参数 FactoryQuota 是否已赋值
                     * @return FactoryQuota 是否已赋值
                     * 
                     */
                    bool FactoryQuotaHasBeenSet() const;

                    /**
                     * 获取商品配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemQuota 商品配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetItemQuota() const;

                    /**
                     * 设置商品配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemQuota 商品配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemQuota(const int64_t& _itemQuota);

                    /**
                     * 判断参数 ItemQuota 是否已赋值
                     * @return ItemQuota 是否已赋值
                     * 
                     */
                    bool ItemQuotaHasBeenSet() const;

                    /**
                     * 获取溯源码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrackQuota 溯源码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTrackQuota() const;

                    /**
                     * 设置溯源码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trackQuota 溯源码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrackQuota(const int64_t& _trackQuota);

                    /**
                     * 判断参数 TrackQuota 是否已赋值
                     * @return TrackQuota 是否已赋值
                     * 
                     */
                    bool TrackQuotaHasBeenSet() const;

                    /**
                     * 获取销售码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SaleQuota 销售码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSaleQuota() const;

                    /**
                     * 设置销售码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _saleQuota 销售码配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSaleQuota(const int64_t& _saleQuota);

                    /**
                     * 判断参数 SaleQuota 是否已赋值
                     * @return SaleQuota 是否已赋值
                     * 
                     */
                    bool SaleQuotaHasBeenSet() const;

                    /**
                     * 获取上链配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChainQuota 上链配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChainQuota() const;

                    /**
                     * 设置上链配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chainQuota 上链配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChainQuota(const int64_t& _chainQuota);

                    /**
                     * 判断参数 ChainQuota 是否已赋值
                     * @return ChainQuota 是否已赋值
                     * 
                     */
                    bool ChainQuotaHasBeenSet() const;

                    /**
                     * 获取风控配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskQuota 风控配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskQuota() const;

                    /**
                     * 设置风控配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskQuota 风控配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskQuota(const int64_t& _riskQuota);

                    /**
                     * 判断参数 RiskQuota 是否已赋值
                     * @return RiskQuota 是否已赋值
                     * 
                     */
                    bool RiskQuotaHasBeenSet() const;

                    /**
                     * 获取溯源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrackType 溯源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTrackType() const;

                    /**
                     * 设置溯源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trackType 溯源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrackType(const int64_t& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取开通版本 lite:轻量版, basic:基础版, standard:标准版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 开通版本 lite:轻量版, basic:基础版, standard:标准版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置开通版本 lite:轻量版, basic:基础版, standard:标准版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 开通版本 lite:轻量版, basic:基础版, standard:标准版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 服务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 服务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 配额ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 开通服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 商户配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_factoryQuota;
                    bool m_factoryQuotaHasBeenSet;

                    /**
                     * 商品配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_itemQuota;
                    bool m_itemQuotaHasBeenSet;

                    /**
                     * 溯源码配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_trackQuota;
                    bool m_trackQuotaHasBeenSet;

                    /**
                     * 销售码配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_saleQuota;
                    bool m_saleQuotaHasBeenSet;

                    /**
                     * 上链配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chainQuota;
                    bool m_chainQuotaHasBeenSet;

                    /**
                     * 风控配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskQuota;
                    bool m_riskQuotaHasBeenSet;

                    /**
                     * 溯源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * 开通版本 lite:轻量版, basic:基础版, standard:标准版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_QUOTA_H_
