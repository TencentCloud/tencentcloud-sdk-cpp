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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALESTRATEGIESRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALESTRATEGIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoadAutoScaleStrategy.h>
#include <tencentcloud/emr/v20190103/model/TimeAutoScaleStrategy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleStrategies返回参数结构体
                */
                class DescribeAutoScaleStrategiesResponse : public AbstractModel
                {
                public:
                    DescribeAutoScaleStrategiesResponse();
                    ~DescribeAutoScaleStrategiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按负载伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadAutoScaleStrategies 按负载伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LoadAutoScaleStrategy> GetLoadAutoScaleStrategies() const;

                    /**
                     * 判断参数 LoadAutoScaleStrategies 是否已赋值
                     * @return LoadAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool LoadAutoScaleStrategiesHasBeenSet() const;

                    /**
                     * 获取按时间伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeBasedAutoScaleStrategies 按时间伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeAutoScaleStrategy> GetTimeBasedAutoScaleStrategies() const;

                    /**
                     * 判断参数 TimeBasedAutoScaleStrategies 是否已赋值
                     * @return TimeBasedAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool TimeBasedAutoScaleStrategiesHasBeenSet() const;

                private:

                    /**
                     * 按负载伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LoadAutoScaleStrategy> m_loadAutoScaleStrategies;
                    bool m_loadAutoScaleStrategiesHasBeenSet;

                    /**
                     * 按时间伸缩规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeAutoScaleStrategy> m_timeBasedAutoScaleStrategies;
                    bool m_timeBasedAutoScaleStrategiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALESTRATEGIESRESPONSE_H_
