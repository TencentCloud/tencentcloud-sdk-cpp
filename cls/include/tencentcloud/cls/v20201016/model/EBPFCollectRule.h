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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTRULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EBPFCollectFilters.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * eBPF 采集规则
                */
                class EBPFCollectRule : public AbstractModel
                {
                public:
                    EBPFCollectRule();
                    ~EBPFCollectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>采集规则名称</p>
                     * @return RuleName <p>采集规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>采集规则名称</p>
                     * @param _ruleName <p>采集规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>采集对象</p><p>枚举值：</p><ul><li>1： 所有进程</li></ul>
                     * @return TrackTarget <p>采集对象</p><p>枚举值：</p><ul><li>1： 所有进程</li></ul>
                     * 
                     */
                    int64_t GetTrackTarget() const;

                    /**
                     * 设置<p>采集对象</p><p>枚举值：</p><ul><li>1： 所有进程</li></ul>
                     * @param _trackTarget <p>采集对象</p><p>枚举值：</p><ul><li>1： 所有进程</li></ul>
                     * 
                     */
                    void SetTrackTarget(const int64_t& _trackTarget);

                    /**
                     * 判断参数 TrackTarget 是否已赋值
                     * @return TrackTarget 是否已赋值
                     * 
                     */
                    bool TrackTargetHasBeenSet() const;

                    /**
                     * 获取<p>三维过滤器</p>
                     * @return Filters <p>三维过滤器</p>
                     * 
                     */
                    EBPFCollectFilters GetFilters() const;

                    /**
                     * 设置<p>三维过滤器</p>
                     * @param _filters <p>三维过滤器</p>
                     * 
                     */
                    void SetFilters(const EBPFCollectFilters& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>采集规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>采集对象</p><p>枚举值：</p><ul><li>1： 所有进程</li></ul>
                     */
                    int64_t m_trackTarget;
                    bool m_trackTargetHasBeenSet;

                    /**
                     * <p>三维过滤器</p>
                     */
                    EBPFCollectFilters m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTRULE_H_
