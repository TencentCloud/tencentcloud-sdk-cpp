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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * {
    "Region": "ap-guangzhou",
    "ProtectIpCount": 1,
    "BasicProtectBandwidth": 300,
    "Bandwidth": 100,
    "ElasticProtectBandwidth": 0,
    "ElasticBandwidthFlag": true
}
                */
                class EnterprisePackageConfig : public AbstractModel
                {
                public:
                    EnterprisePackageConfig();
                    ~EnterprisePackageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购买高防包所属地域
                     * @return Region 购买高防包所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置购买高防包所属地域
                     * @param _region 购买高防包所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取防护IP数
                     * @return ProtectIpCount 防护IP数
                     * 
                     */
                    uint64_t GetProtectIpCount() const;

                    /**
                     * 设置防护IP数
                     * @param _protectIpCount 防护IP数
                     * 
                     */
                    void SetProtectIpCount(const uint64_t& _protectIpCount);

                    /**
                     * 判断参数 ProtectIpCount 是否已赋值
                     * @return ProtectIpCount 是否已赋值
                     * 
                     */
                    bool ProtectIpCountHasBeenSet() const;

                    /**
                     * 获取保底防护带宽
                     * @return BasicProtectBandwidth 保底防护带宽
                     * 
                     */
                    uint64_t GetBasicProtectBandwidth() const;

                    /**
                     * 设置保底防护带宽
                     * @param _basicProtectBandwidth 保底防护带宽
                     * 
                     */
                    void SetBasicProtectBandwidth(const uint64_t& _basicProtectBandwidth);

                    /**
                     * 判断参数 BasicProtectBandwidth 是否已赋值
                     * @return BasicProtectBandwidth 是否已赋值
                     * 
                     */
                    bool BasicProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取业务带宽规模
                     * @return Bandwidth 业务带宽规模
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置业务带宽规模
                     * @param _bandwidth 业务带宽规模
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取弹性带宽 Gbps，可选择的弹性带宽[0,400,500,600,800,1000]
默认为0
                     * @return ElasticProtectBandwidth 弹性带宽 Gbps，可选择的弹性带宽[0,400,500,600,800,1000]
默认为0
                     * 
                     */
                    uint64_t GetElasticProtectBandwidth() const;

                    /**
                     * 设置弹性带宽 Gbps，可选择的弹性带宽[0,400,500,600,800,1000]
默认为0
                     * @param _elasticProtectBandwidth 弹性带宽 Gbps，可选择的弹性带宽[0,400,500,600,800,1000]
默认为0
                     * 
                     */
                    void SetElasticProtectBandwidth(const uint64_t& _elasticProtectBandwidth);

                    /**
                     * 判断参数 ElasticProtectBandwidth 是否已赋值
                     * @return ElasticProtectBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取是否开启弹性业务带宽
默认为false
                     * @return ElasticBandwidthFlag 是否开启弹性业务带宽
默认为false
                     * 
                     */
                    bool GetElasticBandwidthFlag() const;

                    /**
                     * 设置是否开启弹性业务带宽
默认为false
                     * @param _elasticBandwidthFlag 是否开启弹性业务带宽
默认为false
                     * 
                     */
                    void SetElasticBandwidthFlag(const bool& _elasticBandwidthFlag);

                    /**
                     * 判断参数 ElasticBandwidthFlag 是否已赋值
                     * @return ElasticBandwidthFlag 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthFlagHasBeenSet() const;

                private:

                    /**
                     * 购买高防包所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 防护IP数
                     */
                    uint64_t m_protectIpCount;
                    bool m_protectIpCountHasBeenSet;

                    /**
                     * 保底防护带宽
                     */
                    uint64_t m_basicProtectBandwidth;
                    bool m_basicProtectBandwidthHasBeenSet;

                    /**
                     * 业务带宽规模
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 弹性带宽 Gbps，可选择的弹性带宽[0,400,500,600,800,1000]
默认为0
                     */
                    uint64_t m_elasticProtectBandwidth;
                    bool m_elasticProtectBandwidthHasBeenSet;

                    /**
                     * 是否开启弹性业务带宽
默认为false
                     */
                    bool m_elasticBandwidthFlag;
                    bool m_elasticBandwidthFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ENTERPRISEPACKAGECONFIG_H_
