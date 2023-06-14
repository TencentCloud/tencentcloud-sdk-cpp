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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SINGLETYPEVALUE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SINGLETYPEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 单值指标数据
                */
                class SingleTypeValue : public AbstractModel
                {
                public:
                    SingleTypeValue();
                    ~SingleTypeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名。
                     * @return MetricName 指标名。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名。
                     * @param _metricName 指标名。
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
                     * 获取指标值。
                     * @return DetailData 指标值。
                     * 
                     */
                    int64_t GetDetailData() const;

                    /**
                     * 设置指标值。
                     * @param _detailData 指标值。
                     * 
                     */
                    void SetDetailData(const int64_t& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * 指标名。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标值。
                     */
                    int64_t m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SINGLETYPEVALUE_H_
