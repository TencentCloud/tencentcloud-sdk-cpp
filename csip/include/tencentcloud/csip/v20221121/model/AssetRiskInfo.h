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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产关联风险信息
                */
                class AssetRiskInfo : public AbstractModel
                {
                public:
                    AssetRiskInfo();
                    ~AssetRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险类型</p>
                     * @return ResultType <p>风险类型</p>
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置<p>风险类型</p>
                     * @param _resultType <p>风险类型</p>
                     * 
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>总风险数量</p>
                     * @return RiskCount <p>总风险数量</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>总风险数量</p>
                     * @param _riskCount <p>总风险数量</p>
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>严重风险数量</p>
                     * @return RiskCritical <p>严重风险数量</p>
                     * 
                     */
                    uint64_t GetRiskCritical() const;

                    /**
                     * 设置<p>严重风险数量</p>
                     * @param _riskCritical <p>严重风险数量</p>
                     * 
                     */
                    void SetRiskCritical(const uint64_t& _riskCritical);

                    /**
                     * 判断参数 RiskCritical 是否已赋值
                     * @return RiskCritical 是否已赋值
                     * 
                     */
                    bool RiskCriticalHasBeenSet() const;

                    /**
                     * 获取<p>高风险数量</p>
                     * @return RiskHigh <p>高风险数量</p>
                     * 
                     */
                    uint64_t GetRiskHigh() const;

                    /**
                     * 设置<p>高风险数量</p>
                     * @param _riskHigh <p>高风险数量</p>
                     * 
                     */
                    void SetRiskHigh(const uint64_t& _riskHigh);

                    /**
                     * 判断参数 RiskHigh 是否已赋值
                     * @return RiskHigh 是否已赋值
                     * 
                     */
                    bool RiskHighHasBeenSet() const;

                    /**
                     * 获取<p>中风险数量</p>
                     * @return RiskMedium <p>中风险数量</p>
                     * 
                     */
                    uint64_t GetRiskMedium() const;

                    /**
                     * 设置<p>中风险数量</p>
                     * @param _riskMedium <p>中风险数量</p>
                     * 
                     */
                    void SetRiskMedium(const uint64_t& _riskMedium);

                    /**
                     * 判断参数 RiskMedium 是否已赋值
                     * @return RiskMedium 是否已赋值
                     * 
                     */
                    bool RiskMediumHasBeenSet() const;

                    /**
                     * 获取<p>低风险数量</p>
                     * @return RiskLow <p>低风险数量</p>
                     * 
                     */
                    uint64_t GetRiskLow() const;

                    /**
                     * 设置<p>低风险数量</p>
                     * @param _riskLow <p>低风险数量</p>
                     * 
                     */
                    void SetRiskLow(const uint64_t& _riskLow);

                    /**
                     * 判断参数 RiskLow 是否已赋值
                     * @return RiskLow 是否已赋值
                     * 
                     */
                    bool RiskLowHasBeenSet() const;

                private:

                    /**
                     * <p>风险类型</p>
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>总风险数量</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>严重风险数量</p>
                     */
                    uint64_t m_riskCritical;
                    bool m_riskCriticalHasBeenSet;

                    /**
                     * <p>高风险数量</p>
                     */
                    uint64_t m_riskHigh;
                    bool m_riskHighHasBeenSet;

                    /**
                     * <p>中风险数量</p>
                     */
                    uint64_t m_riskMedium;
                    bool m_riskMediumHasBeenSet;

                    /**
                     * <p>低风险数量</p>
                     */
                    uint64_t m_riskLow;
                    bool m_riskLowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETRISKINFO_H_
