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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMPODSCHEDULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMPODSCHEDULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ForceSchedule.h>
#include <tencentcloud/tsf/v20180326/model/TrySchedule.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 自定义Pod调度规则
                */
                class CustomPodSchedule : public AbstractModel
                {
                public:
                    CustomPodSchedule();
                    ~CustomPodSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return ForceSchedule -
                     * 
                     */
                    ForceSchedule GetForceSchedule() const;

                    /**
                     * 设置-
                     * @param _forceSchedule -
                     * 
                     */
                    void SetForceSchedule(const ForceSchedule& _forceSchedule);

                    /**
                     * 判断参数 ForceSchedule 是否已赋值
                     * @return ForceSchedule 是否已赋值
                     * 
                     */
                    bool ForceScheduleHasBeenSet() const;

                    /**
                     * 获取-
                     * @return TrySchedule -
                     * 
                     */
                    TrySchedule GetTrySchedule() const;

                    /**
                     * 设置-
                     * @param _trySchedule -
                     * 
                     */
                    void SetTrySchedule(const TrySchedule& _trySchedule);

                    /**
                     * 判断参数 TrySchedule 是否已赋值
                     * @return TrySchedule 是否已赋值
                     * 
                     */
                    bool TryScheduleHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    ForceSchedule m_forceSchedule;
                    bool m_forceScheduleHasBeenSet;

                    /**
                     * -
                     */
                    TrySchedule m_trySchedule;
                    bool m_tryScheduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMPODSCHEDULE_H_
