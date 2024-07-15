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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * 专属可用区资源统计项数据详情，对应一个具体的垂直产品的资源统计项。
                */
                class CloudDedicatedZoneResourceStatisticsInfo : public AbstractModel
                {
                public:
                    CloudDedicatedZoneResourceStatisticsInfo();
                    ~CloudDedicatedZoneResourceStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源统计项名称
                     * @return Item 资源统计项名称
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置资源统计项名称
                     * @param _item 资源统计项名称
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取资源统计项单位
                     * @return Unit 资源统计项单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置资源统计项单位
                     * @param _unit 资源统计项单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取资源总量
                     * @return Total 资源总量
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置资源总量
                     * @param _total 资源总量
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已用资源
                     * @return Usage 已用资源
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置已用资源
                     * @param _usage 已用资源
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取已用资源占比
                     * @return UsageRate 已用资源占比
                     * 
                     */
                    std::string GetUsageRate() const;

                    /**
                     * 设置已用资源占比
                     * @param _usageRate 已用资源占比
                     * 
                     */
                    void SetUsageRate(const std::string& _usageRate);

                    /**
                     * 判断参数 UsageRate 是否已赋值
                     * @return UsageRate 是否已赋值
                     * 
                     */
                    bool UsageRateHasBeenSet() const;

                    /**
                     * 获取剩余资源
                     * @return Remain 剩余资源
                     * 
                     */
                    std::string GetRemain() const;

                    /**
                     * 设置剩余资源
                     * @param _remain 剩余资源
                     * 
                     */
                    void SetRemain(const std::string& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取剩余资源占比
                     * @return RemainRate 剩余资源占比
                     * 
                     */
                    std::string GetRemainRate() const;

                    /**
                     * 设置剩余资源占比
                     * @param _remainRate 剩余资源占比
                     * 
                     */
                    void SetRemainRate(const std::string& _remainRate);

                    /**
                     * 判断参数 RemainRate 是否已赋值
                     * @return RemainRate 是否已赋值
                     * 
                     */
                    bool RemainRateHasBeenSet() const;

                    /**
                     * 获取本周一零点资源使用率
                     * @return ThisMondayUsageRate 本周一零点资源使用率
                     * 
                     */
                    std::string GetThisMondayUsageRate() const;

                    /**
                     * 设置本周一零点资源使用率
                     * @param _thisMondayUsageRate 本周一零点资源使用率
                     * 
                     */
                    void SetThisMondayUsageRate(const std::string& _thisMondayUsageRate);

                    /**
                     * 判断参数 ThisMondayUsageRate 是否已赋值
                     * @return ThisMondayUsageRate 是否已赋值
                     * 
                     */
                    bool ThisMondayUsageRateHasBeenSet() const;

                    /**
                     * 获取本周资源增长比例
                     * @return ThisMondayUsageGrowthRate 本周资源增长比例
                     * 
                     */
                    std::string GetThisMondayUsageGrowthRate() const;

                    /**
                     * 设置本周资源增长比例
                     * @param _thisMondayUsageGrowthRate 本周资源增长比例
                     * 
                     */
                    void SetThisMondayUsageGrowthRate(const std::string& _thisMondayUsageGrowthRate);

                    /**
                     * 判断参数 ThisMondayUsageGrowthRate 是否已赋值
                     * @return ThisMondayUsageGrowthRate 是否已赋值
                     * 
                     */
                    bool ThisMondayUsageGrowthRateHasBeenSet() const;

                    /**
                     * 获取上周资源增长比例
                     * @return LastMondayUsageGrowthRate 上周资源增长比例
                     * 
                     */
                    std::string GetLastMondayUsageGrowthRate() const;

                    /**
                     * 设置上周资源增长比例
                     * @param _lastMondayUsageGrowthRate 上周资源增长比例
                     * 
                     */
                    void SetLastMondayUsageGrowthRate(const std::string& _lastMondayUsageGrowthRate);

                    /**
                     * 判断参数 LastMondayUsageGrowthRate 是否已赋值
                     * @return LastMondayUsageGrowthRate 是否已赋值
                     * 
                     */
                    bool LastMondayUsageGrowthRateHasBeenSet() const;

                private:

                    /**
                     * 资源统计项名称
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 资源统计项单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 资源总量
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已用资源
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 已用资源占比
                     */
                    std::string m_usageRate;
                    bool m_usageRateHasBeenSet;

                    /**
                     * 剩余资源
                     */
                    std::string m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * 剩余资源占比
                     */
                    std::string m_remainRate;
                    bool m_remainRateHasBeenSet;

                    /**
                     * 本周一零点资源使用率
                     */
                    std::string m_thisMondayUsageRate;
                    bool m_thisMondayUsageRateHasBeenSet;

                    /**
                     * 本周资源增长比例
                     */
                    std::string m_thisMondayUsageGrowthRate;
                    bool m_thisMondayUsageGrowthRateHasBeenSet;

                    /**
                     * 上周资源增长比例
                     */
                    std::string m_lastMondayUsageGrowthRate;
                    bool m_lastMondayUsageGrowthRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_
