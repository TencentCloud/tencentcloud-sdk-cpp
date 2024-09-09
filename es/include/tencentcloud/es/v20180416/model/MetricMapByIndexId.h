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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_METRICMAPBYINDEXID_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_METRICMAPBYINDEXID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/MetricAllData.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 指标数据map
                */
                class MetricMapByIndexId : public AbstractModel
                {
                public:
                    MetricMapByIndexId();
                    ~MetricMapByIndexId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return IndexId 实例id
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置实例id
                     * @param _indexId 实例id
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取指标数据
                     * @return MetricAllData 指标数据
                     * 
                     */
                    MetricAllData GetMetricAllData() const;

                    /**
                     * 设置指标数据
                     * @param _metricAllData 指标数据
                     * 
                     */
                    void SetMetricAllData(const MetricAllData& _metricAllData);

                    /**
                     * 判断参数 MetricAllData 是否已赋值
                     * @return MetricAllData 是否已赋值
                     * 
                     */
                    bool MetricAllDataHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * 指标数据
                     */
                    MetricAllData m_metricAllData;
                    bool m_metricAllDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_METRICMAPBYINDEXID_H_
