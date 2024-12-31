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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Dps.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * HDFS文件存储详情
                */
                class StorageSummaryDistribution : public AbstractModel
                {
                public:
                    StorageSummaryDistribution();
                    ~StorageSummaryDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据项
                     * @return MetricItem 数据项
                     * 
                     */
                    std::string GetMetricItem() const;

                    /**
                     * 设置数据项
                     * @param _metricItem 数据项
                     * 
                     */
                    void SetMetricItem(const std::string& _metricItem);

                    /**
                     * 判断参数 MetricItem 是否已赋值
                     * @return MetricItem 是否已赋值
                     * 
                     */
                    bool MetricItemHasBeenSet() const;

                    /**
                     * 获取数据项描述
                     * @return MetricName 数据项描述
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置数据项描述
                     * @param _metricName 数据项描述
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
                     * 获取采样值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dps 采样值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Dps> GetDps() const;

                    /**
                     * 设置采样值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dps 采样值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDps(const std::vector<Dps>& _dps);

                    /**
                     * 判断参数 Dps 是否已赋值
                     * @return Dps 是否已赋值
                     * 
                     */
                    bool DpsHasBeenSet() const;

                private:

                    /**
                     * 数据项
                     */
                    std::string m_metricItem;
                    bool m_metricItemHasBeenSet;

                    /**
                     * 数据项描述
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 采样值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Dps> m_dps;
                    bool m_dpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_
