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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 查询
                */
                class QueryMetricItem : public AbstractModel
                {
                public:
                    QueryMetricItem();
                    ~QueryMetricItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标名</p>
                     * @return MetricName <p>指标名</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名</p>
                     * @param _metricName <p>指标名</p>
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取<p>同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比)</p>
                     * @return Compares <p>同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比)</p>
                     * 
                     */
                    std::vector<std::string> GetCompares() const;

                    /**
                     * 设置<p>同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比)</p>
                     * @param _compares <p>同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比)</p>
                     * 
                     */
                    void SetCompares(const std::vector<std::string>& _compares);

                    /**
                     * 判断参数 Compares 是否已赋值
                     * @return Compares 是否已赋值
                     * 
                     */
                    bool ComparesHasBeenSet() const;

                    /**
                     * 获取<p>同比，已弃用，不建议使用</p>
                     * @return Compare <p>同比，已弃用，不建议使用</p>
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置<p>同比，已弃用，不建议使用</p>
                     * @param _compare <p>同比，已弃用，不建议使用</p>
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                private:

                    /**
                     * <p>指标名</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比)</p>
                     */
                    std::vector<std::string> m_compares;
                    bool m_comparesHasBeenSet;

                    /**
                     * <p>同比，已弃用，不建议使用</p>
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_
