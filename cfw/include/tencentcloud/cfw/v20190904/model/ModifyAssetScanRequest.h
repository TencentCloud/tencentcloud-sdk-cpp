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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAssetScan请求参数结构体
                */
                class ModifyAssetScanRequest : public AbstractModel
                {
                public:
                    ModifyAssetScanRequest();
                    ~ModifyAssetScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扫描范围：1端口, 2端口+漏扫
                     * @return ScanRange 扫描范围：1端口, 2端口+漏扫
                     * 
                     */
                    int64_t GetScanRange() const;

                    /**
                     * 设置扫描范围：1端口, 2端口+漏扫
                     * @param _scanRange 扫描范围：1端口, 2端口+漏扫
                     * 
                     */
                    void SetScanRange(const int64_t& _scanRange);

                    /**
                     * 判断参数 ScanRange 是否已赋值
                     * @return ScanRange 是否已赋值
                     * 
                     */
                    bool ScanRangeHasBeenSet() const;

                    /**
                     * 获取扫描深度：'heavy', 'medium', 'light'
                     * @return ScanDeep 扫描深度：'heavy', 'medium', 'light'
                     * 
                     */
                    std::string GetScanDeep() const;

                    /**
                     * 设置扫描深度：'heavy', 'medium', 'light'
                     * @param _scanDeep 扫描深度：'heavy', 'medium', 'light'
                     * 
                     */
                    void SetScanDeep(const std::string& _scanDeep);

                    /**
                     * 判断参数 ScanDeep 是否已赋值
                     * @return ScanDeep 是否已赋值
                     * 
                     */
                    bool ScanDeepHasBeenSet() const;

                    /**
                     * 获取扫描类型：1立即扫描 2 周期任务
                     * @return RangeType 扫描类型：1立即扫描 2 周期任务
                     * 
                     */
                    int64_t GetRangeType() const;

                    /**
                     * 设置扫描类型：1立即扫描 2 周期任务
                     * @param _rangeType 扫描类型：1立即扫描 2 周期任务
                     * 
                     */
                    void SetRangeType(const int64_t& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取RangeType为2 是必须添加，定时任务时间
                     * @return ScanPeriod RangeType为2 是必须添加，定时任务时间
                     * 
                     */
                    std::string GetScanPeriod() const;

                    /**
                     * 设置RangeType为2 是必须添加，定时任务时间
                     * @param _scanPeriod RangeType为2 是必须添加，定时任务时间
                     * 
                     */
                    void SetScanPeriod(const std::string& _scanPeriod);

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取立即扫描这个字段传过滤的扫描集合
                     * @return ScanFilterIp 立即扫描这个字段传过滤的扫描集合
                     * 
                     */
                    std::vector<std::string> GetScanFilterIp() const;

                    /**
                     * 设置立即扫描这个字段传过滤的扫描集合
                     * @param _scanFilterIp 立即扫描这个字段传过滤的扫描集合
                     * 
                     */
                    void SetScanFilterIp(const std::vector<std::string>& _scanFilterIp);

                    /**
                     * 判断参数 ScanFilterIp 是否已赋值
                     * @return ScanFilterIp 是否已赋值
                     * 
                     */
                    bool ScanFilterIpHasBeenSet() const;

                    /**
                     * 获取1全量2单个
                     * @return ScanType 1全量2单个
                     * 
                     */
                    int64_t GetScanType() const;

                    /**
                     * 设置1全量2单个
                     * @param _scanType 1全量2单个
                     * 
                     */
                    void SetScanType(const int64_t& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * 扫描范围：1端口, 2端口+漏扫
                     */
                    int64_t m_scanRange;
                    bool m_scanRangeHasBeenSet;

                    /**
                     * 扫描深度：'heavy', 'medium', 'light'
                     */
                    std::string m_scanDeep;
                    bool m_scanDeepHasBeenSet;

                    /**
                     * 扫描类型：1立即扫描 2 周期任务
                     */
                    int64_t m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * RangeType为2 是必须添加，定时任务时间
                     */
                    std::string m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * 立即扫描这个字段传过滤的扫描集合
                     */
                    std::vector<std::string> m_scanFilterIp;
                    bool m_scanFilterIpHasBeenSet;

                    /**
                     * 1全量2单个
                     */
                    int64_t m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYASSETSCANREQUEST_H_
