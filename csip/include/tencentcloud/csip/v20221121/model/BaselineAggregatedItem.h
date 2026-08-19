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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 检测项维度的聚合结果，承载该检测项在资产上的通过/未通过统计。
                */
                class BaselineAggregatedItem : public AbstractModel
                {
                public:
                    BaselineAggregatedItem();
                    ~BaselineAggregatedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测项基础信息（含 ID、名称、风险等级、分类等）。</p>
                     * @return Item <p>检测项基础信息（含 ID、名称、风险等级、分类等）。</p>
                     * 
                     */
                    BaselineItem GetItem() const;

                    /**
                     * 设置<p>检测项基础信息（含 ID、名称、风险等级、分类等）。</p>
                     * @param _item <p>检测项基础信息（含 ID、名称、风险等级、分类等）。</p>
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
                     * 获取<p>该检测项最近一次扫描中结果为 PASS 的资产数量。</p>
                     * @return PassAssetCount <p>该检测项最近一次扫描中结果为 PASS 的资产数量。</p>
                     * 
                     */
                    uint64_t GetPassAssetCount() const;

                    /**
                     * 设置<p>该检测项最近一次扫描中结果为 PASS 的资产数量。</p>
                     * @param _passAssetCount <p>该检测项最近一次扫描中结果为 PASS 的资产数量。</p>
                     * 
                     */
                    void SetPassAssetCount(const uint64_t& _passAssetCount);

                    /**
                     * 判断参数 PassAssetCount 是否已赋值
                     * @return PassAssetCount 是否已赋值
                     * 
                     */
                    bool PassAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>该检测项最近一次扫描中结果为 NOT_PASS 的资产数量。</p>
                     * @return NotPassAssetCount <p>该检测项最近一次扫描中结果为 NOT_PASS 的资产数量。</p>
                     * 
                     */
                    uint64_t GetNotPassAssetCount() const;

                    /**
                     * 设置<p>该检测项最近一次扫描中结果为 NOT_PASS 的资产数量。</p>
                     * @param _notPassAssetCount <p>该检测项最近一次扫描中结果为 NOT_PASS 的资产数量。</p>
                     * 
                     */
                    void SetNotPassAssetCount(const uint64_t& _notPassAssetCount);

                    /**
                     * 判断参数 NotPassAssetCount 是否已赋值
                     * @return NotPassAssetCount 是否已赋值
                     * 
                     */
                    bool NotPassAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>该检测项最近一次扫描中结果为 PASS NOT_PASS 以及 CHECKING 的资产数量。</p>
                     * @return TotalAssetCount <p>该检测项最近一次扫描中结果为 PASS NOT_PASS 以及 CHECKING 的资产数量。</p>
                     * 
                     */
                    uint64_t GetTotalAssetCount() const;

                    /**
                     * 设置<p>该检测项最近一次扫描中结果为 PASS NOT_PASS 以及 CHECKING 的资产数量。</p>
                     * @param _totalAssetCount <p>该检测项最近一次扫描中结果为 PASS NOT_PASS 以及 CHECKING 的资产数量。</p>
                     * 
                     */
                    void SetTotalAssetCount(const uint64_t& _totalAssetCount);

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>该检测项最近一次扫描的资产通过率，单位为百分比（0~100）。</p>
                     * @return PassRate <p>该检测项最近一次扫描的资产通过率，单位为百分比（0~100）。</p>
                     * 
                     */
                    double GetPassRate() const;

                    /**
                     * 设置<p>该检测项最近一次扫描的资产通过率，单位为百分比（0~100）。</p>
                     * @param _passRate <p>该检测项最近一次扫描的资产通过率，单位为百分比（0~100）。</p>
                     * 
                     */
                    void SetPassRate(const double& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>该检测项最近一次完成扫描的时间。</p>
                     * @return LatestCheckTime <p>该检测项最近一次完成扫描的时间。</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>该检测项最近一次完成扫描的时间。</p>
                     * @param _latestCheckTime <p>该检测项最近一次完成扫描的时间。</p>
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
                     * 获取<p>上次扫描结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li></ul>
                     * @return ResultStatus <p>上次扫描结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li></ul>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>上次扫描结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li></ul>
                     * @param _resultStatus <p>上次扫描结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li></ul>
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
                     * 获取<p>该聚合结果涉及的租户 Appid 列表。</p>
                     * @return Appid <p>该聚合结果涉及的租户 Appid 列表。</p>
                     * 
                     */
                    std::vector<uint64_t> GetAppid() const;

                    /**
                     * 设置<p>该聚合结果涉及的租户 Appid 列表。</p>
                     * @param _appid <p>该聚合结果涉及的租户 Appid 列表。</p>
                     * 
                     */
                    void SetAppid(const std::vector<uint64_t>& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>该聚合结果涉及的扫描 JobID 列表。</p>
                     * @return JobID <p>该聚合结果涉及的扫描 JobID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetJobID() const;

                    /**
                     * 设置<p>该聚合结果涉及的扫描 JobID 列表。</p>
                     * @param _jobID <p>该聚合结果涉及的扫描 JobID 列表。</p>
                     * 
                     */
                    void SetJobID(const std::vector<std::string>& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                private:

                    /**
                     * <p>检测项基础信息（含 ID、名称、风险等级、分类等）。</p>
                     */
                    BaselineItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>该检测项最近一次扫描中结果为 PASS 的资产数量。</p>
                     */
                    uint64_t m_passAssetCount;
                    bool m_passAssetCountHasBeenSet;

                    /**
                     * <p>该检测项最近一次扫描中结果为 NOT_PASS 的资产数量。</p>
                     */
                    uint64_t m_notPassAssetCount;
                    bool m_notPassAssetCountHasBeenSet;

                    /**
                     * <p>该检测项最近一次扫描中结果为 PASS NOT_PASS 以及 CHECKING 的资产数量。</p>
                     */
                    uint64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>该检测项最近一次扫描的资产通过率，单位为百分比（0~100）。</p>
                     */
                    double m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>该检测项最近一次完成扫描的时间。</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>上次扫描结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li></ul>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>该聚合结果涉及的租户 Appid 列表。</p>
                     */
                    std::vector<uint64_t> m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>该聚合结果涉及的扫描 JobID 列表。</p>
                     */
                    std::vector<std::string> m_jobID;
                    bool m_jobIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEAGGREGATEDITEM_H_
