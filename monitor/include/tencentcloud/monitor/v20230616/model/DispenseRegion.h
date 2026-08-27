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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEREGION_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEREGION_H_

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
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 转发地域信息
                */
                class DispenseRegion : public AbstractModel
                {
                public:
                    DispenseRegion();
                    ~DispenseRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域缩写
                     * @return Region 地域缩写
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域缩写
                     * @param _region 地域缩写
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
                     * 获取地域中文名
                     * @return RegionCnName 地域中文名
                     * 
                     */
                    std::string GetRegionCnName() const;

                    /**
                     * 设置地域中文名
                     * @param _regionCnName 地域中文名
                     * 
                     */
                    void SetRegionCnName(const std::string& _regionCnName);

                    /**
                     * 判断参数 RegionCnName 是否已赋值
                     * @return RegionCnName 是否已赋值
                     * 
                     */
                    bool RegionCnNameHasBeenSet() const;

                    /**
                     * 获取地域英文名
                     * @return RegionEnName 地域英文名
                     * 
                     */
                    std::string GetRegionEnName() const;

                    /**
                     * 设置地域英文名
                     * @param _regionEnName 地域英文名
                     * 
                     */
                    void SetRegionEnName(const std::string& _regionEnName);

                    /**
                     * 判断参数 RegionEnName 是否已赋值
                     * @return RegionEnName 是否已赋值
                     * 
                     */
                    bool RegionEnNameHasBeenSet() const;

                    /**
                     * 获取规则数量
                     * @return RuleNumber 规则数量
                     * 
                     */
                    int64_t GetRuleNumber() const;

                    /**
                     * 设置规则数量
                     * @param _ruleNumber 规则数量
                     * 
                     */
                    void SetRuleNumber(const int64_t& _ruleNumber);

                    /**
                     * 判断参数 RuleNumber 是否已赋值
                     * @return RuleNumber 是否已赋值
                     * 
                     */
                    bool RuleNumberHasBeenSet() const;

                private:

                    /**
                     * 地域缩写
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域中文名
                     */
                    std::string m_regionCnName;
                    bool m_regionCnNameHasBeenSet;

                    /**
                     * 地域英文名
                     */
                    std::string m_regionEnName;
                    bool m_regionEnNameHasBeenSet;

                    /**
                     * 规则数量
                     */
                    int64_t m_ruleNumber;
                    bool m_ruleNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEREGION_H_
