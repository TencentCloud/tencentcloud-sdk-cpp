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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CMDCOSTGROUP_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CMDCOSTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * redis延迟分布区间详情
                */
                class CmdCostGroup : public AbstractModel
                {
                public:
                    CmdCostGroup();
                    ~CmdCostGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该延迟区间内命令数占总命令数百分比
                     * @return Percent 该延迟区间内命令数占总命令数百分比
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置该延迟区间内命令数占总命令数百分比
                     * @param _percent 该延迟区间内命令数占总命令数百分比
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取延迟区间上界，单位ms
                     * @return CostUpperLimit 延迟区间上界，单位ms
                     * 
                     */
                    std::string GetCostUpperLimit() const;

                    /**
                     * 设置延迟区间上界，单位ms
                     * @param _costUpperLimit 延迟区间上界，单位ms
                     * 
                     */
                    void SetCostUpperLimit(const std::string& _costUpperLimit);

                    /**
                     * 判断参数 CostUpperLimit 是否已赋值
                     * @return CostUpperLimit 是否已赋值
                     * 
                     */
                    bool CostUpperLimitHasBeenSet() const;

                    /**
                     * 获取延迟区间下界，单位ms
                     * @return CostLowerLimit 延迟区间下界，单位ms
                     * 
                     */
                    std::string GetCostLowerLimit() const;

                    /**
                     * 设置延迟区间下界，单位ms
                     * @param _costLowerLimit 延迟区间下界，单位ms
                     * 
                     */
                    void SetCostLowerLimit(const std::string& _costLowerLimit);

                    /**
                     * 判断参数 CostLowerLimit 是否已赋值
                     * @return CostLowerLimit 是否已赋值
                     * 
                     */
                    bool CostLowerLimitHasBeenSet() const;

                    /**
                     * 获取该延迟区间内命令次数
                     * @return Count 该延迟区间内命令次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该延迟区间内命令次数
                     * @param _count 该延迟区间内命令次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 该延迟区间内命令数占总命令数百分比
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 延迟区间上界，单位ms
                     */
                    std::string m_costUpperLimit;
                    bool m_costUpperLimitHasBeenSet;

                    /**
                     * 延迟区间下界，单位ms
                     */
                    std::string m_costLowerLimit;
                    bool m_costLowerLimitHasBeenSet;

                    /**
                     * 该延迟区间内命令次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CMDCOSTGROUP_H_
