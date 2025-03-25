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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTICOVERVIEW_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTICOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateCatalogue.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检诊断概览
                */
                class KubeJarvisStateDiagnosticOverview : public AbstractModel
                {
                public:
                    KubeJarvisStateDiagnosticOverview();
                    ~KubeJarvisStateDiagnosticOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断目录
                     * @return Catalogues 诊断目录
                     * 
                     */
                    std::vector<KubeJarvisStateCatalogue> GetCatalogues() const;

                    /**
                     * 设置诊断目录
                     * @param _catalogues 诊断目录
                     * 
                     */
                    void SetCatalogues(const std::vector<KubeJarvisStateCatalogue>& _catalogues);

                    /**
                     * 判断参数 Catalogues 是否已赋值
                     * @return Catalogues 是否已赋值
                     * 
                     */
                    bool CataloguesHasBeenSet() const;

                    /**
                     * 获取诊断结果统计
                     * @return Statistics 诊断结果统计
                     * 
                     */
                    std::vector<KubeJarvisStateStatistic> GetStatistics() const;

                    /**
                     * 设置诊断结果统计
                     * @param _statistics 诊断结果统计
                     * 
                     */
                    void SetStatistics(const std::vector<KubeJarvisStateStatistic>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * 诊断目录
                     */
                    std::vector<KubeJarvisStateCatalogue> m_catalogues;
                    bool m_cataloguesHasBeenSet;

                    /**
                     * 诊断结果统计
                     */
                    std::vector<KubeJarvisStateStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEDIAGNOSTICOVERVIEW_H_
