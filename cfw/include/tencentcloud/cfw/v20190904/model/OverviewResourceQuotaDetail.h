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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OverviewNorthSouthDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewEastWestDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewNDRDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewQuotaDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewLogStorageDetail.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览资源与配额详情字段
                */
                class OverviewResourceQuotaDetail : public AbstractModel
                {
                public:
                    OverviewResourceQuotaDetail();
                    ~OverviewResourceQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>南北向带宽与流量详情数据。</p>
                     * @return NorthSouthDetail <p>南北向带宽与流量详情数据。</p>
                     * 
                     */
                    OverviewNorthSouthDetail GetNorthSouthDetail() const;

                    /**
                     * 设置<p>南北向带宽与流量详情数据。</p>
                     * @param _northSouthDetail <p>南北向带宽与流量详情数据。</p>
                     * 
                     */
                    void SetNorthSouthDetail(const OverviewNorthSouthDetail& _northSouthDetail);

                    /**
                     * 判断参数 NorthSouthDetail 是否已赋值
                     * @return NorthSouthDetail 是否已赋值
                     * 
                     */
                    bool NorthSouthDetailHasBeenSet() const;

                    /**
                     * 获取<p>东西向带宽与流量详情数据。</p>
                     * @return EastWestDetail <p>东西向带宽与流量详情数据。</p>
                     * 
                     */
                    OverviewEastWestDetail GetEastWestDetail() const;

                    /**
                     * 设置<p>东西向带宽与流量详情数据。</p>
                     * @param _eastWestDetail <p>东西向带宽与流量详情数据。</p>
                     * 
                     */
                    void SetEastWestDetail(const OverviewEastWestDetail& _eastWestDetail);

                    /**
                     * 判断参数 EastWestDetail 是否已赋值
                     * @return EastWestDetail 是否已赋值
                     * 
                     */
                    bool EastWestDetailHasBeenSet() const;

                    /**
                     * 获取<p>NDR 带宽与流量详情数据。</p>
                     * @return NDRDetail <p>NDR 带宽与流量详情数据。</p>
                     * 
                     */
                    OverviewNDRDetail GetNDRDetail() const;

                    /**
                     * 设置<p>NDR 带宽与流量详情数据。</p>
                     * @param _nDRDetail <p>NDR 带宽与流量详情数据。</p>
                     * 
                     */
                    void SetNDRDetail(const OverviewNDRDetail& _nDRDetail);

                    /**
                     * 判断参数 NDRDetail 是否已赋值
                     * @return NDRDetail 是否已赋值
                     * 
                     */
                    bool NDRDetailHasBeenSet() const;

                    /**
                     * 获取<p>账号下资源、实例、规则和扩容配额详情数据。</p>
                     * @return QuotaDetail <p>账号下资源、实例、规则和扩容配额详情数据。</p>
                     * 
                     */
                    OverviewQuotaDetail GetQuotaDetail() const;

                    /**
                     * 设置<p>账号下资源、实例、规则和扩容配额详情数据。</p>
                     * @param _quotaDetail <p>账号下资源、实例、规则和扩容配额详情数据。</p>
                     * 
                     */
                    void SetQuotaDetail(const OverviewQuotaDetail& _quotaDetail);

                    /**
                     * 判断参数 QuotaDetail 是否已赋值
                     * @return QuotaDetail 是否已赋值
                     * 
                     */
                    bool QuotaDetailHasBeenSet() const;

                    /**
                     * 获取<p>日志存储使用量、保留天数和各类日志容量详情数据。</p>
                     * @return LogStorageDetail <p>日志存储使用量、保留天数和各类日志容量详情数据。</p>
                     * 
                     */
                    OverviewLogStorageDetail GetLogStorageDetail() const;

                    /**
                     * 设置<p>日志存储使用量、保留天数和各类日志容量详情数据。</p>
                     * @param _logStorageDetail <p>日志存储使用量、保留天数和各类日志容量详情数据。</p>
                     * 
                     */
                    void SetLogStorageDetail(const OverviewLogStorageDetail& _logStorageDetail);

                    /**
                     * 判断参数 LogStorageDetail 是否已赋值
                     * @return LogStorageDetail 是否已赋值
                     * 
                     */
                    bool LogStorageDetailHasBeenSet() const;

                private:

                    /**
                     * <p>南北向带宽与流量详情数据。</p>
                     */
                    OverviewNorthSouthDetail m_northSouthDetail;
                    bool m_northSouthDetailHasBeenSet;

                    /**
                     * <p>东西向带宽与流量详情数据。</p>
                     */
                    OverviewEastWestDetail m_eastWestDetail;
                    bool m_eastWestDetailHasBeenSet;

                    /**
                     * <p>NDR 带宽与流量详情数据。</p>
                     */
                    OverviewNDRDetail m_nDRDetail;
                    bool m_nDRDetailHasBeenSet;

                    /**
                     * <p>账号下资源、实例、规则和扩容配额详情数据。</p>
                     */
                    OverviewQuotaDetail m_quotaDetail;
                    bool m_quotaDetailHasBeenSet;

                    /**
                     * <p>日志存储使用量、保留天数和各类日志容量详情数据。</p>
                     */
                    OverviewLogStorageDetail m_logStorageDetail;
                    bool m_logStorageDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWRESOURCEQUOTADETAIL_H_
