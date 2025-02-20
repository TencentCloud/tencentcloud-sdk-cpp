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
                     * @return StartTime 服务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置服务开始时间
                     * @param _startTime 服务开始时间
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
                     * @return EndTime 服务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置服务结束时间
                     * @param _endTime 服务结束时间
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
                     * @return QuotaId 配额ID
                     * 
                     */
                    uint64_t GetQuotaId() const;

                    /**
                     * 设置配额ID
                     * @param _quotaId 配额ID
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
                     * 获取开通服务
                     * @return Services 开通服务
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置开通服务
                     * @param _services 开通服务
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
                     * @return FactoryQuota 商户配额
                     * 
                     */
                    int64_t GetFactoryQuota() const;

                    /**
                     * 设置商户配额
                     * @param _factoryQuota 商户配额
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
                     * @return ItemQuota 商品配额
                     * 
                     */
                    int64_t GetItemQuota() const;

                    /**
                     * 设置商品配额
                     * @param _itemQuota 商品配额
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
                     * @return TrackQuota 溯源码配额
                     * 
                     */
                    int64_t GetTrackQuota() const;

                    /**
                     * 设置溯源码配额
                     * @param _trackQuota 溯源码配额
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
                     * @return SaleQuota 销售码配额
                     * 
                     */
                    int64_t GetSaleQuota() const;

                    /**
                     * 设置销售码配额
                     * @param _saleQuota 销售码配额
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
                     * @return ChainQuota 上链配额
                     * 
                     */
                    int64_t GetChainQuota() const;

                    /**
                     * 设置上链配额
                     * @param _chainQuota 上链配额
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
                     * @return RiskQuota 风控配额
                     * 
                     */
                    int64_t GetRiskQuota() const;

                    /**
                     * 设置风控配额
                     * @param _riskQuota 风控配额
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
                     * 获取AI文字数量
                     * @return AigcTextQuota AI文字数量
                     * 
                     */
                    int64_t GetAigcTextQuota() const;

                    /**
                     * 设置AI文字数量
                     * @param _aigcTextQuota AI文字数量
                     * 
                     */
                    void SetAigcTextQuota(const int64_t& _aigcTextQuota);

                    /**
                     * 判断参数 AigcTextQuota 是否已赋值
                     * @return AigcTextQuota 是否已赋值
                     * 
                     */
                    bool AigcTextQuotaHasBeenSet() const;

                    /**
                     * 获取AI图片数量
                     * @return AigcImageQuota AI图片数量
                     * 
                     */
                    int64_t GetAigcImageQuota() const;

                    /**
                     * 设置AI图片数量
                     * @param _aigcImageQuota AI图片数量
                     * 
                     */
                    void SetAigcImageQuota(const int64_t& _aigcImageQuota);

                    /**
                     * 判断参数 AigcImageQuota 是否已赋值
                     * @return AigcImageQuota 是否已赋值
                     * 
                     */
                    bool AigcImageQuotaHasBeenSet() const;

                    /**
                     * 获取溯源类型
                     * @return TrackType 溯源类型
                     * 
                     */
                    int64_t GetTrackType() const;

                    /**
                     * 设置溯源类型
                     * @param _trackType 溯源类型
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
                     * @return Version 开通版本 lite:轻量版, basic:基础版, standard:标准版
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置开通版本 lite:轻量版, basic:基础版, standard:标准版
                     * @param _version 开通版本 lite:轻量版, basic:基础版, standard:标准版
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取是否开启企业认证
                     * @return ProductCertify 是否开启企业认证
                     * 
                     */
                    uint64_t GetProductCertify() const;

                    /**
                     * 设置是否开启企业认证
                     * @param _productCertify 是否开启企业认证
                     * 
                     */
                    void SetProductCertify(const uint64_t& _productCertify);

                    /**
                     * 判断参数 ProductCertify 是否已赋值
                     * @return ProductCertify 是否已赋值
                     * 
                     */
                    bool ProductCertifyHasBeenSet() const;

                private:

                    /**
                     * 服务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 服务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 配额ID
                     */
                    uint64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 开通服务
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 商户配额
                     */
                    int64_t m_factoryQuota;
                    bool m_factoryQuotaHasBeenSet;

                    /**
                     * 商品配额
                     */
                    int64_t m_itemQuota;
                    bool m_itemQuotaHasBeenSet;

                    /**
                     * 溯源码配额
                     */
                    int64_t m_trackQuota;
                    bool m_trackQuotaHasBeenSet;

                    /**
                     * 销售码配额
                     */
                    int64_t m_saleQuota;
                    bool m_saleQuotaHasBeenSet;

                    /**
                     * 上链配额
                     */
                    int64_t m_chainQuota;
                    bool m_chainQuotaHasBeenSet;

                    /**
                     * 风控配额
                     */
                    int64_t m_riskQuota;
                    bool m_riskQuotaHasBeenSet;

                    /**
                     * AI文字数量
                     */
                    int64_t m_aigcTextQuota;
                    bool m_aigcTextQuotaHasBeenSet;

                    /**
                     * AI图片数量
                     */
                    int64_t m_aigcImageQuota;
                    bool m_aigcImageQuotaHasBeenSet;

                    /**
                     * 溯源类型
                     */
                    int64_t m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * 开通版本 lite:轻量版, basic:基础版, standard:标准版
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 是否开启企业认证
                     */
                    uint64_t m_productCertify;
                    bool m_productCertifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_QUOTA_H_
