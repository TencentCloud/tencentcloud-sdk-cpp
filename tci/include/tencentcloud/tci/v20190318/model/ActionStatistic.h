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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ActionCountStatistic.h>
#include <tencentcloud/tci/v20190318/model/ActionDurationStatistic.h>
#include <tencentcloud/tci/v20190318/model/ActionDurationRatioStatistic.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 统计结果
                */
                class ActionStatistic : public AbstractModel
                {
                public:
                    ActionStatistic();
                    ~ActionStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数量统计
                     * @return ActionCount 数量统计
                     * 
                     */
                    std::vector<ActionCountStatistic> GetActionCount() const;

                    /**
                     * 设置数量统计
                     * @param _actionCount 数量统计
                     * 
                     */
                    void SetActionCount(const std::vector<ActionCountStatistic>& _actionCount);

                    /**
                     * 判断参数 ActionCount 是否已赋值
                     * @return ActionCount 是否已赋值
                     * 
                     */
                    bool ActionCountHasBeenSet() const;

                    /**
                     * 获取时长统计
                     * @return ActionDuration 时长统计
                     * 
                     */
                    std::vector<ActionDurationStatistic> GetActionDuration() const;

                    /**
                     * 设置时长统计
                     * @param _actionDuration 时长统计
                     * 
                     */
                    void SetActionDuration(const std::vector<ActionDurationStatistic>& _actionDuration);

                    /**
                     * 判断参数 ActionDuration 是否已赋值
                     * @return ActionDuration 是否已赋值
                     * 
                     */
                    bool ActionDurationHasBeenSet() const;

                    /**
                     * 获取时长比例统计
                     * @return ActionDurationRatio 时长比例统计
                     * 
                     */
                    std::vector<ActionDurationRatioStatistic> GetActionDurationRatio() const;

                    /**
                     * 设置时长比例统计
                     * @param _actionDurationRatio 时长比例统计
                     * 
                     */
                    void SetActionDurationRatio(const std::vector<ActionDurationRatioStatistic>& _actionDurationRatio);

                    /**
                     * 判断参数 ActionDurationRatio 是否已赋值
                     * @return ActionDurationRatio 是否已赋值
                     * 
                     */
                    bool ActionDurationRatioHasBeenSet() const;

                private:

                    /**
                     * 数量统计
                     */
                    std::vector<ActionCountStatistic> m_actionCount;
                    bool m_actionCountHasBeenSet;

                    /**
                     * 时长统计
                     */
                    std::vector<ActionDurationStatistic> m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                    /**
                     * 时长比例统计
                     */
                    std::vector<ActionDurationRatioStatistic> m_actionDurationRatio;
                    bool m_actionDurationRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_ACTIONSTATISTIC_H_
