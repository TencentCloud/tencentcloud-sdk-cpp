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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSREGIONITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSREGIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusRegions 响应结构体
                */
                class PrometheusRegionItem : public AbstractModel
                {
                public:
                    PrometheusRegionItem();
                    ~PrometheusRegionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
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
                     * 获取区域 ID
                     * @return RegionId 区域 ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置区域 ID
                     * @param _regionId 区域 ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域状态( 0: 不可用；1: 可用)
                     * @return RegionState 区域状态( 0: 不可用；1: 可用)
                     * 
                     */
                    int64_t GetRegionState() const;

                    /**
                     * 设置区域状态( 0: 不可用；1: 可用)
                     * @param _regionState 区域状态( 0: 不可用；1: 可用)
                     * 
                     */
                    void SetRegionState(const int64_t& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取区域名(中文)
                     * @return RegionName 区域名(中文)
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名(中文)
                     * @param _regionName 区域名(中文)
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取区域名(英文缩写)
                     * @return RegionShortName 区域名(英文缩写)
                     * 
                     */
                    std::string GetRegionShortName() const;

                    /**
                     * 设置区域名(英文缩写)
                     * @param _regionShortName 区域名(英文缩写)
                     * 
                     */
                    void SetRegionShortName(const std::string& _regionShortName);

                    /**
                     * 判断参数 RegionShortName 是否已赋值
                     * @return RegionShortName 是否已赋值
                     * 
                     */
                    bool RegionShortNameHasBeenSet() const;

                    /**
                     * 获取区域所在大区名
                     * @return Area 区域所在大区名
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置区域所在大区名
                     * @param _area 区域所在大区名
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取1-仅支持预付费，2-仅支持后付费，3-支持两种计费模式实例
                     * @return RegionPayMode 1-仅支持预付费，2-仅支持后付费，3-支持两种计费模式实例
                     * 
                     */
                    int64_t GetRegionPayMode() const;

                    /**
                     * 设置1-仅支持预付费，2-仅支持后付费，3-支持两种计费模式实例
                     * @param _regionPayMode 1-仅支持预付费，2-仅支持后付费，3-支持两种计费模式实例
                     * 
                     */
                    void SetRegionPayMode(const int64_t& _regionPayMode);

                    /**
                     * 判断参数 RegionPayMode 是否已赋值
                     * @return RegionPayMode 是否已赋值
                     * 
                     */
                    bool RegionPayModeHasBeenSet() const;

                private:

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域 ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域状态( 0: 不可用；1: 可用)
                     */
                    int64_t m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 区域名(中文)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 区域名(英文缩写)
                     */
                    std::string m_regionShortName;
                    bool m_regionShortNameHasBeenSet;

                    /**
                     * 区域所在大区名
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 1-仅支持预付费，2-仅支持后付费，3-支持两种计费模式实例
                     */
                    int64_t m_regionPayMode;
                    bool m_regionPayModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSREGIONITEM_H_
