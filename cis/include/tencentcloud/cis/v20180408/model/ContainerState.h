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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERSTATE_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 容器状态
                */
                class ContainerState : public AbstractModel
                {
                public:
                    ContainerState();
                    ~ContainerState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器运行开始时间
                     * @return StartTime 容器运行开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置容器运行开始时间
                     * @param _startTime 容器运行开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取容器状态
                     * @return State 容器状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置容器状态
                     * @param _state 容器状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取状态详情
                     * @return Reason 状态详情
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置状态详情
                     * @param _reason 状态详情
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取容器运行结束时间
                     * @return FinishTime 容器运行结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置容器运行结束时间
                     * @param _finishTime 容器运行结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取容器运行退出码
                     * @return ExitCode 容器运行退出码
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置容器运行退出码
                     * @param _exitCode 容器运行退出码
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                private:

                    /**
                     * 容器运行开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 容器状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 状态详情
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 容器运行结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 容器运行退出码
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERSTATE_H_
