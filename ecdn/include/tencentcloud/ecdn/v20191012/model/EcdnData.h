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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/TimestampData.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 访问明细数据类型
                */
                class EcdnData : public AbstractModel
                {
                public:
                    EcdnData();
                    ~EcdnData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询指定的指标名称：Bandwidth，Flux，Request，Delay，状态码，LogBandwidth，LogFlux，LogRequest
                     * @return Metrics 查询指定的指标名称：Bandwidth，Flux，Request，Delay，状态码，LogBandwidth，LogFlux，LogRequest
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置查询指定的指标名称：Bandwidth，Flux，Request，Delay，状态码，LogBandwidth，LogFlux，LogRequest
                     * @param _metrics 查询指定的指标名称：Bandwidth，Flux，Request，Delay，状态码，LogBandwidth，LogFlux，LogRequest
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取明细数据组合
                     * @return DetailData 明细数据组合
                     * 
                     */
                    std::vector<TimestampData> GetDetailData() const;

                    /**
                     * 设置明细数据组合
                     * @param _detailData 明细数据组合
                     * 
                     */
                    void SetDetailData(const std::vector<TimestampData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * 查询指定的指标名称：Bandwidth，Flux，Request，Delay，状态码，LogBandwidth，LogFlux，LogRequest
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 明细数据组合
                     */
                    std::vector<TimestampData> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_
