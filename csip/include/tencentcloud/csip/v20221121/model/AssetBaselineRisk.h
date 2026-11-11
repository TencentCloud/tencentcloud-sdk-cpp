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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicyBrief.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产基线风险
                */
                class AssetBaselineRisk : public AbstractModel
                {
                public:
                    AssetBaselineRisk();
                    ~AssetBaselineRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险记录唯一标识。</p>
                     * @return RiskID <p>风险记录唯一标识。</p>
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 设置<p>风险记录唯一标识。</p>
                     * @param _riskID <p>风险记录唯一标识。</p>
                     * 
                     */
                    void SetRiskID(const std::string& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取<p>检测项详细信息。</p>
                     * @return Item <p>检测项详细信息。</p>
                     * 
                     */
                    BaselineItem GetItem() const;

                    /**
                     * 设置<p>检测项详细信息。</p>
                     * @param _item <p>检测项详细信息。</p>
                     * 
                     */
                    void SetItem(const BaselineItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取<p>最近一次检测时间（ISO 8601 格式）。</p>
                     * @return LatestCheckTime <p>最近一次检测时间（ISO 8601 格式）。</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>最近一次检测时间（ISO 8601 格式）。</p>
                     * @param _latestCheckTime <p>最近一次检测时间（ISO 8601 格式）。</p>
                     * 
                     */
                    void SetLatestCheckTime(const std::string& _latestCheckTime);

                    /**
                     * 判断参数 LatestCheckTime 是否已赋值
                     * @return LatestCheckTime 是否已赋值
                     * 
                     */
                    bool LatestCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>检测结果状态。取值：</p><ul><li>NOT_PASS：未通过</li><li>PASS：通过</li><li>CHECKING：检测中</li></ul><p></p>
                     * @return ResultStatus <p>检测结果状态。取值：</p><ul><li>NOT_PASS：未通过</li><li>PASS：通过</li><li>CHECKING：检测中</li></ul><p></p>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>检测结果状态。取值：</p><ul><li>NOT_PASS：未通过</li><li>PASS：通过</li><li>CHECKING：检测中</li></ul><p></p>
                     * @param _resultStatus <p>检测结果状态。取值：</p><ul><li>NOT_PASS：未通过</li><li>PASS：通过</li><li>CHECKING：检测中</li></ul><p></p>
                     * 
                     */
                    void SetResultStatus(const std::string& _resultStatus);

                    /**
                     * 判断参数 ResultStatus 是否已赋值
                     * @return ResultStatus 是否已赋值
                     * 
                     */
                    bool ResultStatusHasBeenSet() const;

                    /**
                     * 获取<p>所属基线策略简要信息。</p>
                     * @return PolicyInfo <p>所属基线策略简要信息。</p>
                     * 
                     */
                    BaselinePolicyBrief GetPolicyInfo() const;

                    /**
                     * 设置<p>所属基线策略简要信息。</p>
                     * @param _policyInfo <p>所属基线策略简要信息。</p>
                     * 
                     */
                    void SetPolicyInfo(const BaselinePolicyBrief& _policyInfo);

                    /**
                     * 判断参数 PolicyInfo 是否已赋值
                     * @return PolicyInfo 是否已赋值
                     * 
                     */
                    bool PolicyInfoHasBeenSet() const;

                private:

                    /**
                     * <p>风险记录唯一标识。</p>
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>检测项详细信息。</p>
                     */
                    BaselineItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>最近一次检测时间（ISO 8601 格式）。</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>检测结果状态。取值：</p><ul><li>NOT_PASS：未通过</li><li>PASS：通过</li><li>CHECKING：检测中</li></ul><p></p>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>所属基线策略简要信息。</p>
                     */
                    BaselinePolicyBrief m_policyInfo;
                    bool m_policyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASELINERISK_H_
