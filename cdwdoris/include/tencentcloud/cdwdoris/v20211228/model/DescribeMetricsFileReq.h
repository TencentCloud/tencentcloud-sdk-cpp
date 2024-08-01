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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEMETRICSFILEREQ_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEMETRICSFILEREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 展示doris监控指标请求入参
                */
                class DescribeMetricsFileReq : public AbstractModel
                {
                public:
                    DescribeMetricsFileReq();
                    ~DescribeMetricsFileReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群类型
                     * @return InstanceType 集群类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置集群类型
                     * @param _instanceType 集群类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取指标类型
                     * @return MetricType 指标类型
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标类型
                     * @param _metricType 指标类型
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取是否关注
                     * @return IfAttention 是否关注
                     * 
                     */
                    int64_t GetIfAttention() const;

                    /**
                     * 设置是否关注
                     * @param _ifAttention 是否关注
                     * 
                     */
                    void SetIfAttention(const int64_t& _ifAttention);

                    /**
                     * 判断参数 IfAttention 是否已赋值
                     * @return IfAttention 是否已赋值
                     * 
                     */
                    bool IfAttentionHasBeenSet() const;

                private:

                    /**
                     * 集群类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 指标类型
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 是否关注
                     */
                    int64_t m_ifAttention;
                    bool m_ifAttentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEMETRICSFILEREQ_H_
