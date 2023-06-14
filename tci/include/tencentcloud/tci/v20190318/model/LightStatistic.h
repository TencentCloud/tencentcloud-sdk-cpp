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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/LightDistributionStatistic.h>
#include <tencentcloud/tci/v20190318/model/LightLevelRatioStatistic.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 光照统计结果
                */
                class LightStatistic : public AbstractModel
                {
                public:
                    LightStatistic();
                    ~LightStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取各个时间点的光线值
                     * @return LightDistribution 各个时间点的光线值
                     * 
                     */
                    std::vector<LightDistributionStatistic> GetLightDistribution() const;

                    /**
                     * 设置各个时间点的光线值
                     * @param _lightDistribution 各个时间点的光线值
                     * 
                     */
                    void SetLightDistribution(const std::vector<LightDistributionStatistic>& _lightDistribution);

                    /**
                     * 判断参数 LightDistribution 是否已赋值
                     * @return LightDistribution 是否已赋值
                     * 
                     */
                    bool LightDistributionHasBeenSet() const;

                    /**
                     * 获取光照程度比例统计结果
                     * @return LightLevelRatio 光照程度比例统计结果
                     * 
                     */
                    std::vector<LightLevelRatioStatistic> GetLightLevelRatio() const;

                    /**
                     * 设置光照程度比例统计结果
                     * @param _lightLevelRatio 光照程度比例统计结果
                     * 
                     */
                    void SetLightLevelRatio(const std::vector<LightLevelRatioStatistic>& _lightLevelRatio);

                    /**
                     * 判断参数 LightLevelRatio 是否已赋值
                     * @return LightLevelRatio 是否已赋值
                     * 
                     */
                    bool LightLevelRatioHasBeenSet() const;

                private:

                    /**
                     * 各个时间点的光线值
                     */
                    std::vector<LightDistributionStatistic> m_lightDistribution;
                    bool m_lightDistributionHasBeenSet;

                    /**
                     * 光照程度比例统计结果
                     */
                    std::vector<LightLevelRatioStatistic> m_lightLevelRatio;
                    bool m_lightLevelRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTSTATISTIC_H_
