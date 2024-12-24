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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_RECOMMENDEDUSAGE_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_RECOMMENDEDUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 推荐用法
                */
                class RecommendedUsage : public AbstractModel
                {
                public:
                    RecommendedUsage();
                    ~RecommendedUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取给药途径
                     * @return UsageRoute 给药途径
                     * 
                     */
                    std::string GetUsageRoute() const;

                    /**
                     * 设置给药途径
                     * @param _usageRoute 给药途径
                     * 
                     */
                    void SetUsageRoute(const std::string& _usageRoute);

                    /**
                     * 判断参数 UsageRoute 是否已赋值
                     * @return UsageRoute 是否已赋值
                     * 
                     */
                    bool UsageRouteHasBeenSet() const;

                    /**
                     * 获取给药频率 格式为“最小频次,最大频次,频次单位,频次周期”，如"1,2,次,2"， 表示2天内最少给药1次，最大给药2次。
                     * @return Frequency 给药频率 格式为“最小频次,最大频次,频次单位,频次周期”，如"1,2,次,2"， 表示2天内最少给药1次，最大给药2次。
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置给药频率 格式为“最小频次,最大频次,频次单位,频次周期”，如"1,2,次,2"， 表示2天内最少给药1次，最大给药2次。
                     * @param _frequency 给药频率 格式为“最小频次,最大频次,频次单位,频次周期”，如"1,2,次,2"， 表示2天内最少给药1次，最大给药2次。
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取给药剂量 格式为"最小剂量,最大剂量,剂量单位"，如"10,10,ml"，<br>表示每次最大给药量为10ml，最小给药量为10ml。
                     * @return SingleDose 给药剂量 格式为"最小剂量,最大剂量,剂量单位"，如"10,10,ml"，<br>表示每次最大给药量为10ml，最小给药量为10ml。
                     * 
                     */
                    std::string GetSingleDose() const;

                    /**
                     * 设置给药剂量 格式为"最小剂量,最大剂量,剂量单位"，如"10,10,ml"，<br>表示每次最大给药量为10ml，最小给药量为10ml。
                     * @param _singleDose 给药剂量 格式为"最小剂量,最大剂量,剂量单位"，如"10,10,ml"，<br>表示每次最大给药量为10ml，最小给药量为10ml。
                     * 
                     */
                    void SetSingleDose(const std::string& _singleDose);

                    /**
                     * 判断参数 SingleDose 是否已赋值
                     * @return SingleDose 是否已赋值
                     * 
                     */
                    bool SingleDoseHasBeenSet() const;

                private:

                    /**
                     * 给药途径
                     */
                    std::string m_usageRoute;
                    bool m_usageRouteHasBeenSet;

                    /**
                     * 给药频率 格式为“最小频次,最大频次,频次单位,频次周期”，如"1,2,次,2"， 表示2天内最少给药1次，最大给药2次。
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 给药剂量 格式为"最小剂量,最大剂量,剂量单位"，如"10,10,ml"，<br>表示每次最大给药量为10ml，最小给药量为10ml。
                     */
                    std::string m_singleDose;
                    bool m_singleDoseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_RECOMMENDEDUSAGE_H_
