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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportBaselineEffectHostList请求参数结构体
                */
                class ExportBaselineEffectHostListRequest : public AbstractModel
                {
                public:
                    ExportBaselineEffectHostListRequest();
                    ~ExportBaselineEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线id
                     * @return BaselineId 基线id
                     * 
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置基线id
                     * @param _baselineId 基线id
                     * 
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取筛选条件
<li>AliasName- String- 主机别名</li>
                     * @return Filters 筛选条件
<li>AliasName- String- 主机别名</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置筛选条件
<li>AliasName- String- 主机别名</li>
                     * @param _filters 筛选条件
<li>AliasName- String- 主机别名</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取主机uuid数组
                     * @return UuidList 主机uuid数组
                     * 
                     */
                    std::vector<std::string> GetUuidList() const;

                    /**
                     * 设置主机uuid数组
                     * @param _uuidList 主机uuid数组
                     * 
                     */
                    void SetUuidList(const std::vector<std::string>& _uuidList);

                    /**
                     * 判断参数 UuidList 是否已赋值
                     * @return UuidList 是否已赋值
                     * 
                     */
                    bool UuidListHasBeenSet() const;

                    /**
                     * 获取基线名称
                     * @return BaselineName 基线名称
                     * 
                     */
                    std::string GetBaselineName() const;

                    /**
                     * 设置基线名称
                     * @param _baselineName 基线名称
                     * 
                     */
                    void SetBaselineName(const std::string& _baselineName);

                    /**
                     * 判断参数 BaselineName 是否已赋值
                     * @return BaselineName 是否已赋值
                     * 
                     */
                    bool BaselineNameHasBeenSet() const;

                private:

                    /**
                     * 基线id
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 筛选条件
<li>AliasName- String- 主机别名</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 主机uuid数组
                     */
                    std::vector<std::string> m_uuidList;
                    bool m_uuidListHasBeenSet;

                    /**
                     * 基线名称
                     */
                    std::string m_baselineName;
                    bool m_baselineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEEFFECTHOSTLISTREQUEST_H_
