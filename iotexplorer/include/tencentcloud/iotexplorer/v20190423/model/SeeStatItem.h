/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESTATITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESTATITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 统计数据点
                */
                class SeeStatItem : public AbstractModel
                {
                public:
                    SeeStatItem();
                    ~SeeStatItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间</p>
                     * @return Time <p>时间</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>时间</p>
                     * @param _time <p>时间</p>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>任务数量</p>
                     * @return Count <p>任务数量</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>任务数量</p>
                     * @param _count <p>任务数量</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>基础能力后付费用量</p>
                     * @return CostBasic <p>基础能力后付费用量</p>
                     * 
                     */
                    int64_t GetCostBasic() const;

                    /**
                     * 设置<p>基础能力后付费用量</p>
                     * @param _costBasic <p>基础能力后付费用量</p>
                     * 
                     */
                    void SetCostBasic(const int64_t& _costBasic);

                    /**
                     * 判断参数 CostBasic 是否已赋值
                     * @return CostBasic 是否已赋值
                     * 
                     */
                    bool CostBasicHasBeenSet() const;

                    /**
                     * 获取<p>高级能力后付费用量</p>
                     * @return CostAdvanced <p>高级能力后付费用量</p>
                     * 
                     */
                    int64_t GetCostAdvanced() const;

                    /**
                     * 设置<p>高级能力后付费用量</p>
                     * @param _costAdvanced <p>高级能力后付费用量</p>
                     * 
                     */
                    void SetCostAdvanced(const int64_t& _costAdvanced);

                    /**
                     * 判断参数 CostAdvanced 是否已赋值
                     * @return CostAdvanced 是否已赋值
                     * 
                     */
                    bool CostAdvancedHasBeenSet() const;

                    /**
                     * 获取<p>预付费额度用量</p>
                     * @return CostCredits <p>预付费额度用量</p>
                     * 
                     */
                    double GetCostCredits() const;

                    /**
                     * 设置<p>预付费额度用量</p>
                     * @param _costCredits <p>预付费额度用量</p>
                     * 
                     */
                    void SetCostCredits(const double& _costCredits);

                    /**
                     * 判断参数 CostCredits 是否已赋值
                     * @return CostCredits 是否已赋值
                     * 
                     */
                    bool CostCreditsHasBeenSet() const;

                private:

                    /**
                     * <p>时间</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>任务数量</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>基础能力后付费用量</p>
                     */
                    int64_t m_costBasic;
                    bool m_costBasicHasBeenSet;

                    /**
                     * <p>高级能力后付费用量</p>
                     */
                    int64_t m_costAdvanced;
                    bool m_costAdvancedHasBeenSet;

                    /**
                     * <p>预付费额度用量</p>
                     */
                    double m_costCredits;
                    bool m_costCreditsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEESTATITEM_H_
