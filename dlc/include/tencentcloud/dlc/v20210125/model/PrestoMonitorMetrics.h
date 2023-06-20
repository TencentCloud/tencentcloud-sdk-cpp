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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Presto监控指标
                */
                class PrestoMonitorMetrics : public AbstractModel
                {
                public:
                    PrestoMonitorMetrics();
                    ~PrestoMonitorMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取	Alluxio本地缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalCacheHitRate 	Alluxio本地缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLocalCacheHitRate() const;

                    /**
                     * 设置	Alluxio本地缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localCacheHitRate 	Alluxio本地缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalCacheHitRate(const double& _localCacheHitRate);

                    /**
                     * 判断参数 LocalCacheHitRate 是否已赋值
                     * @return LocalCacheHitRate 是否已赋值
                     * 
                     */
                    bool LocalCacheHitRateHasBeenSet() const;

                    /**
                     * 获取Fragment缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragmentCacheHitRate Fragment缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFragmentCacheHitRate() const;

                    /**
                     * 设置Fragment缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fragmentCacheHitRate Fragment缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFragmentCacheHitRate(const double& _fragmentCacheHitRate);

                    /**
                     * 判断参数 FragmentCacheHitRate 是否已赋值
                     * @return FragmentCacheHitRate 是否已赋值
                     * 
                     */
                    bool FragmentCacheHitRateHasBeenSet() const;

                private:

                    /**
                     * 	Alluxio本地缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_localCacheHitRate;
                    bool m_localCacheHitRateHasBeenSet;

                    /**
                     * Fragment缓存命中率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fragmentCacheHitRate;
                    bool m_fragmentCacheHitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PRESTOMONITORMETRICS_H_
