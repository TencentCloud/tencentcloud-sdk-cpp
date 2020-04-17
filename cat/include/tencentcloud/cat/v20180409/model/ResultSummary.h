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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_RESULTSUMMARY_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_RESULTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 实时统计数据
                */
                class ResultSummary : public AbstractModel
                {
                public:
                    ResultSummary();
                    ~ResultSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计时间
                     * @return LogTime 统计时间
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置统计时间
                     * @param LogTime 统计时间
                     */
                    void SetLogTime(const std::string& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实时可用率
                     * @return AvailRatio 实时可用率
                     */
                    double GetAvailRatio() const;

                    /**
                     * 设置实时可用率
                     * @param AvailRatio 实时可用率
                     */
                    void SetAvailRatio(const double& _availRatio);

                    /**
                     * 判断参数 AvailRatio 是否已赋值
                     * @return AvailRatio 是否已赋值
                     */
                    bool AvailRatioHasBeenSet() const;

                    /**
                     * 获取实时响应时间
                     * @return ReponseTime 实时响应时间
                     */
                    double GetReponseTime() const;

                    /**
                     * 设置实时响应时间
                     * @param ReponseTime 实时响应时间
                     */
                    void SetReponseTime(const double& _reponseTime);

                    /**
                     * 判断参数 ReponseTime 是否已赋值
                     * @return ReponseTime 是否已赋值
                     */
                    bool ReponseTimeHasBeenSet() const;

                private:

                    /**
                     * 统计时间
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实时可用率
                     */
                    double m_availRatio;
                    bool m_availRatioHasBeenSet;

                    /**
                     * 实时响应时间
                     */
                    double m_reponseTime;
                    bool m_reponseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_RESULTSUMMARY_H_
