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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_

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
                * 定时启停策略信息
                */
                class CrontabResumeSuspendStrategy : public AbstractModel
                {
                public:
                    CrontabResumeSuspendStrategy();
                    ~CrontabResumeSuspendStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时拉起时间：如：周一&周三8点
                     * @return ResumeTime 定时拉起时间：如：周一&周三8点
                     * 
                     */
                    std::string GetResumeTime() const;

                    /**
                     * 设置定时拉起时间：如：周一&周三8点
                     * @param _resumeTime 定时拉起时间：如：周一&周三8点
                     * 
                     */
                    void SetResumeTime(const std::string& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     * 
                     */
                    bool ResumeTimeHasBeenSet() const;

                    /**
                     * 获取定时挂起时间：如：周一&周三20点
                     * @return SuspendTime 定时挂起时间：如：周一&周三20点
                     * 
                     */
                    std::string GetSuspendTime() const;

                    /**
                     * 设置定时挂起时间：如：周一&周三20点
                     * @param _suspendTime 定时挂起时间：如：周一&周三20点
                     * 
                     */
                    void SetSuspendTime(const std::string& _suspendTime);

                    /**
                     * 判断参数 SuspendTime 是否已赋值
                     * @return SuspendTime 是否已赋值
                     * 
                     */
                    bool SuspendTimeHasBeenSet() const;

                    /**
                     * 获取挂起配置：0（默认）：等待任务结束后挂起、1：强制挂起
                     * @return SuspendStrategy 挂起配置：0（默认）：等待任务结束后挂起、1：强制挂起
                     * 
                     */
                    int64_t GetSuspendStrategy() const;

                    /**
                     * 设置挂起配置：0（默认）：等待任务结束后挂起、1：强制挂起
                     * @param _suspendStrategy 挂起配置：0（默认）：等待任务结束后挂起、1：强制挂起
                     * 
                     */
                    void SetSuspendStrategy(const int64_t& _suspendStrategy);

                    /**
                     * 判断参数 SuspendStrategy 是否已赋值
                     * @return SuspendStrategy 是否已赋值
                     * 
                     */
                    bool SuspendStrategyHasBeenSet() const;

                private:

                    /**
                     * 定时拉起时间：如：周一&周三8点
                     */
                    std::string m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                    /**
                     * 定时挂起时间：如：周一&周三20点
                     */
                    std::string m_suspendTime;
                    bool m_suspendTimeHasBeenSet;

                    /**
                     * 挂起配置：0（默认）：等待任务结束后挂起、1：强制挂起
                     */
                    int64_t m_suspendStrategy;
                    bool m_suspendStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_
