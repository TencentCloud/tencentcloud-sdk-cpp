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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 应用防御概览信息
                */
                class RaspEventOverview : public AbstractModel
                {
                public:
                    RaspEventOverview();
                    ~RaspEventOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可防御漏洞数
                     * @return DefenceVuls 可防御漏洞数
                     * 
                     */
                    int64_t GetDefenceVuls() const;

                    /**
                     * 设置可防御漏洞数
                     * @param _defenceVuls 可防御漏洞数
                     * 
                     */
                    void SetDefenceVuls(const int64_t& _defenceVuls);

                    /**
                     * 判断参数 DefenceVuls 是否已赋值
                     * @return DefenceVuls 是否已赋值
                     * 
                     */
                    bool DefenceVulsHasBeenSet() const;

                    /**
                     * 获取可精准防御漏洞数
                     * @return PreciseDefenseVuls 可精准防御漏洞数
                     * 
                     */
                    int64_t GetPreciseDefenseVuls() const;

                    /**
                     * 设置可精准防御漏洞数
                     * @param _preciseDefenseVuls 可精准防御漏洞数
                     * 
                     */
                    void SetPreciseDefenseVuls(const int64_t& _preciseDefenseVuls);

                    /**
                     * 判断参数 PreciseDefenseVuls 是否已赋值
                     * @return PreciseDefenseVuls 是否已赋值
                     * 
                     */
                    bool PreciseDefenseVulsHasBeenSet() const;

                    /**
                     * 获取未处理的应用防御事件数
                     * @return UnhandledRaspEvents 未处理的应用防御事件数
                     * 
                     */
                    int64_t GetUnhandledRaspEvents() const;

                    /**
                     * 设置未处理的应用防御事件数
                     * @param _unhandledRaspEvents 未处理的应用防御事件数
                     * 
                     */
                    void SetUnhandledRaspEvents(const int64_t& _unhandledRaspEvents);

                    /**
                     * 判断参数 UnhandledRaspEvents 是否已赋值
                     * @return UnhandledRaspEvents 是否已赋值
                     * 
                     */
                    bool UnhandledRaspEventsHasBeenSet() const;

                    /**
                     * 获取未处理的内存马扫描事件数
                     * @return UnhandledMemShellScanEvents 未处理的内存马扫描事件数
                     * 
                     */
                    int64_t GetUnhandledMemShellScanEvents() const;

                    /**
                     * 设置未处理的内存马扫描事件数
                     * @param _unhandledMemShellScanEvents 未处理的内存马扫描事件数
                     * 
                     */
                    void SetUnhandledMemShellScanEvents(const int64_t& _unhandledMemShellScanEvents);

                    /**
                     * 判断参数 UnhandledMemShellScanEvents 是否已赋值
                     * @return UnhandledMemShellScanEvents 是否已赋值
                     * 
                     */
                    bool UnhandledMemShellScanEventsHasBeenSet() const;

                    /**
                     * 获取未处理的内存马注入事件数
                     * @return UnhandledMemShellInjectEvents 未处理的内存马注入事件数
                     * 
                     */
                    int64_t GetUnhandledMemShellInjectEvents() const;

                    /**
                     * 设置未处理的内存马注入事件数
                     * @param _unhandledMemShellInjectEvents 未处理的内存马注入事件数
                     * 
                     */
                    void SetUnhandledMemShellInjectEvents(const int64_t& _unhandledMemShellInjectEvents);

                    /**
                     * 判断参数 UnhandledMemShellInjectEvents 是否已赋值
                     * @return UnhandledMemShellInjectEvents 是否已赋值
                     * 
                     */
                    bool UnhandledMemShellInjectEventsHasBeenSet() const;

                    /**
                     * 获取每日未处理事件趋势
                     * @return UnHandledEvents 每日未处理事件趋势
                     * 
                     */
                    std::vector<int64_t> GetUnHandledEvents() const;

                    /**
                     * 设置每日未处理事件趋势
                     * @param _unHandledEvents 每日未处理事件趋势
                     * 
                     */
                    void SetUnHandledEvents(const std::vector<int64_t>& _unHandledEvents);

                    /**
                     * 判断参数 UnHandledEvents 是否已赋值
                     * @return UnHandledEvents 是否已赋值
                     * 
                     */
                    bool UnHandledEventsHasBeenSet() const;

                    /**
                     * 获取每日漏洞检测事件趋势
                     * @return RaspAttackCounts 每日漏洞检测事件趋势
                     * 
                     */
                    std::vector<int64_t> GetRaspAttackCounts() const;

                    /**
                     * 设置每日漏洞检测事件趋势
                     * @param _raspAttackCounts 每日漏洞检测事件趋势
                     * 
                     */
                    void SetRaspAttackCounts(const std::vector<int64_t>& _raspAttackCounts);

                    /**
                     * 判断参数 RaspAttackCounts 是否已赋值
                     * @return RaspAttackCounts 是否已赋值
                     * 
                     */
                    bool RaspAttackCountsHasBeenSet() const;

                    /**
                     * 获取每日漏洞防御事件趋势
                     * @return RaspDefendCounts 每日漏洞防御事件趋势
                     * 
                     */
                    std::vector<int64_t> GetRaspDefendCounts() const;

                    /**
                     * 设置每日漏洞防御事件趋势
                     * @param _raspDefendCounts 每日漏洞防御事件趋势
                     * 
                     */
                    void SetRaspDefendCounts(const std::vector<int64_t>& _raspDefendCounts);

                    /**
                     * 判断参数 RaspDefendCounts 是否已赋值
                     * @return RaspDefendCounts 是否已赋值
                     * 
                     */
                    bool RaspDefendCountsHasBeenSet() const;

                    /**
                     * 获取每日内存马检测事件趋势
                     * @return MemShellAttackCounts 每日内存马检测事件趋势
                     * 
                     */
                    std::vector<int64_t> GetMemShellAttackCounts() const;

                    /**
                     * 设置每日内存马检测事件趋势
                     * @param _memShellAttackCounts 每日内存马检测事件趋势
                     * 
                     */
                    void SetMemShellAttackCounts(const std::vector<int64_t>& _memShellAttackCounts);

                    /**
                     * 判断参数 MemShellAttackCounts 是否已赋值
                     * @return MemShellAttackCounts 是否已赋值
                     * 
                     */
                    bool MemShellAttackCountsHasBeenSet() const;

                    /**
                     * 获取每日内存马防御事件趋势
                     * @return MemShellDefendCounts 每日内存马防御事件趋势
                     * 
                     */
                    std::vector<int64_t> GetMemShellDefendCounts() const;

                    /**
                     * 设置每日内存马防御事件趋势
                     * @param _memShellDefendCounts 每日内存马防御事件趋势
                     * 
                     */
                    void SetMemShellDefendCounts(const std::vector<int64_t>& _memShellDefendCounts);

                    /**
                     * 判断参数 MemShellDefendCounts 是否已赋值
                     * @return MemShellDefendCounts 是否已赋值
                     * 
                     */
                    bool MemShellDefendCountsHasBeenSet() const;

                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::vector<std::string> GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::vector<std::string>& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取开通RASP防护开关资产数
                     * @return ProtectAssetOpenCount 开通RASP防护开关资产数
                     * 
                     */
                    uint64_t GetProtectAssetOpenCount() const;

                    /**
                     * 设置开通RASP防护开关资产数
                     * @param _protectAssetOpenCount 开通RASP防护开关资产数
                     * 
                     */
                    void SetProtectAssetOpenCount(const uint64_t& _protectAssetOpenCount);

                    /**
                     * 判断参数 ProtectAssetOpenCount 是否已赋值
                     * @return ProtectAssetOpenCount 是否已赋值
                     * 
                     */
                    bool ProtectAssetOpenCountHasBeenSet() const;

                    /**
                     * 获取全部资产数
                     * @return ProtectAssetCount 全部资产数
                     * 
                     */
                    uint64_t GetProtectAssetCount() const;

                    /**
                     * 设置全部资产数
                     * @param _protectAssetCount 全部资产数
                     * 
                     */
                    void SetProtectAssetCount(const uint64_t& _protectAssetCount);

                    /**
                     * 判断参数 ProtectAssetCount 是否已赋值
                     * @return ProtectAssetCount 是否已赋值
                     * 
                     */
                    bool ProtectAssetCountHasBeenSet() const;

                    /**
                     * 获取绑定了旗舰版的资产防护数
                     * @return UltimateAssetCount 绑定了旗舰版的资产防护数
                     * 
                     */
                    uint64_t GetUltimateAssetCount() const;

                    /**
                     * 设置绑定了旗舰版的资产防护数
                     * @param _ultimateAssetCount 绑定了旗舰版的资产防护数
                     * 
                     */
                    void SetUltimateAssetCount(const uint64_t& _ultimateAssetCount);

                    /**
                     * 判断参数 UltimateAssetCount 是否已赋值
                     * @return UltimateAssetCount 是否已赋值
                     * 
                     */
                    bool UltimateAssetCountHasBeenSet() const;

                    /**
                     * 获取绑定了重保防护包的资产数
                     * @return RaspAssetCount 绑定了重保防护包的资产数
                     * 
                     */
                    uint64_t GetRaspAssetCount() const;

                    /**
                     * 设置绑定了重保防护包的资产数
                     * @param _raspAssetCount 绑定了重保防护包的资产数
                     * 
                     */
                    void SetRaspAssetCount(const uint64_t& _raspAssetCount);

                    /**
                     * 判断参数 RaspAssetCount 是否已赋值
                     * @return RaspAssetCount 是否已赋值
                     * 
                     */
                    bool RaspAssetCountHasBeenSet() const;

                    /**
                     * 获取未授权的资产数
                     * @return NotProtectAssetCount 未授权的资产数
                     * 
                     */
                    uint64_t GetNotProtectAssetCount() const;

                    /**
                     * 设置未授权的资产数
                     * @param _notProtectAssetCount 未授权的资产数
                     * 
                     */
                    void SetNotProtectAssetCount(const uint64_t& _notProtectAssetCount);

                    /**
                     * 判断参数 NotProtectAssetCount 是否已赋值
                     * @return NotProtectAssetCount 是否已赋值
                     * 
                     */
                    bool NotProtectAssetCountHasBeenSet() const;

                    /**
                     * 获取近7天未处理事件数
                     * @return RecentUnhandledEvents 近7天未处理事件数
                     * 
                     */
                    int64_t GetRecentUnhandledEvents() const;

                    /**
                     * 设置近7天未处理事件数
                     * @param _recentUnhandledEvents 近7天未处理事件数
                     * 
                     */
                    void SetRecentUnhandledEvents(const int64_t& _recentUnhandledEvents);

                    /**
                     * 判断参数 RecentUnhandledEvents 是否已赋值
                     * @return RecentUnhandledEvents 是否已赋值
                     * 
                     */
                    bool RecentUnhandledEventsHasBeenSet() const;

                    /**
                     * 获取防御成功的总次数
                     * @return RaspDefendCount 防御成功的总次数
                     * 
                     */
                    int64_t GetRaspDefendCount() const;

                    /**
                     * 设置防御成功的总次数
                     * @param _raspDefendCount 防御成功的总次数
                     * 
                     */
                    void SetRaspDefendCount(const int64_t& _raspDefendCount);

                    /**
                     * 判断参数 RaspDefendCount 是否已赋值
                     * @return RaspDefendCount 是否已赋值
                     * 
                     */
                    bool RaspDefendCountHasBeenSet() const;

                private:

                    /**
                     * 可防御漏洞数
                     */
                    int64_t m_defenceVuls;
                    bool m_defenceVulsHasBeenSet;

                    /**
                     * 可精准防御漏洞数
                     */
                    int64_t m_preciseDefenseVuls;
                    bool m_preciseDefenseVulsHasBeenSet;

                    /**
                     * 未处理的应用防御事件数
                     */
                    int64_t m_unhandledRaspEvents;
                    bool m_unhandledRaspEventsHasBeenSet;

                    /**
                     * 未处理的内存马扫描事件数
                     */
                    int64_t m_unhandledMemShellScanEvents;
                    bool m_unhandledMemShellScanEventsHasBeenSet;

                    /**
                     * 未处理的内存马注入事件数
                     */
                    int64_t m_unhandledMemShellInjectEvents;
                    bool m_unhandledMemShellInjectEventsHasBeenSet;

                    /**
                     * 每日未处理事件趋势
                     */
                    std::vector<int64_t> m_unHandledEvents;
                    bool m_unHandledEventsHasBeenSet;

                    /**
                     * 每日漏洞检测事件趋势
                     */
                    std::vector<int64_t> m_raspAttackCounts;
                    bool m_raspAttackCountsHasBeenSet;

                    /**
                     * 每日漏洞防御事件趋势
                     */
                    std::vector<int64_t> m_raspDefendCounts;
                    bool m_raspDefendCountsHasBeenSet;

                    /**
                     * 每日内存马检测事件趋势
                     */
                    std::vector<int64_t> m_memShellAttackCounts;
                    bool m_memShellAttackCountsHasBeenSet;

                    /**
                     * 每日内存马防御事件趋势
                     */
                    std::vector<int64_t> m_memShellDefendCounts;
                    bool m_memShellDefendCountsHasBeenSet;

                    /**
                     * 日期
                     */
                    std::vector<std::string> m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 开通RASP防护开关资产数
                     */
                    uint64_t m_protectAssetOpenCount;
                    bool m_protectAssetOpenCountHasBeenSet;

                    /**
                     * 全部资产数
                     */
                    uint64_t m_protectAssetCount;
                    bool m_protectAssetCountHasBeenSet;

                    /**
                     * 绑定了旗舰版的资产防护数
                     */
                    uint64_t m_ultimateAssetCount;
                    bool m_ultimateAssetCountHasBeenSet;

                    /**
                     * 绑定了重保防护包的资产数
                     */
                    uint64_t m_raspAssetCount;
                    bool m_raspAssetCountHasBeenSet;

                    /**
                     * 未授权的资产数
                     */
                    uint64_t m_notProtectAssetCount;
                    bool m_notProtectAssetCountHasBeenSet;

                    /**
                     * 近7天未处理事件数
                     */
                    int64_t m_recentUnhandledEvents;
                    bool m_recentUnhandledEventsHasBeenSet;

                    /**
                     * 防御成功的总次数
                     */
                    int64_t m_raspDefendCount;
                    bool m_raspDefendCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_
