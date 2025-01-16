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
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
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
                     * 获取同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比) 
                     * @return Compares 同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比) 
                     * 
                     */
                    std::vector<std::string> GetCompares() const;

                    /**
                     * 设置同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比) 
                     * @param _compares 同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比) 
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
                     * 获取同比，已弃用，不建议使用
                     * @return Compare 同比，已弃用，不建议使用
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置同比，已弃用，不建议使用
                     * @param _compare 同比，已弃用，不建议使用
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
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 同比，现支持 CompareByYesterday (与昨天相比)和CompareByLastWeek (与上周相比) 
                     */
                    std::vector<std::string> m_compares;
                    bool m_comparesHasBeenSet;

                    /**
                     * 同比，已弃用，不建议使用
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_
