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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 环境启动进程（只统计由环境启动操作触发的应用数量）
                */
                class TemEnvironmentStartingStatus : public AbstractModel
                {
                public:
                    TemEnvironmentStartingStatus();
                    ~TemEnvironmentStartingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要启动的应用数量
                     * @return ApplicationNumNeedToStart 需要启动的应用数量
                     * 
                     */
                    int64_t GetApplicationNumNeedToStart() const;

                    /**
                     * 设置需要启动的应用数量
                     * @param _applicationNumNeedToStart 需要启动的应用数量
                     * 
                     */
                    void SetApplicationNumNeedToStart(const int64_t& _applicationNumNeedToStart);

                    /**
                     * 判断参数 ApplicationNumNeedToStart 是否已赋值
                     * @return ApplicationNumNeedToStart 是否已赋值
                     * 
                     */
                    bool ApplicationNumNeedToStartHasBeenSet() const;

                    /**
                     * 获取已经启动的应用数量
                     * @return StartedApplicationNum 已经启动的应用数量
                     * 
                     */
                    int64_t GetStartedApplicationNum() const;

                    /**
                     * 设置已经启动的应用数量
                     * @param _startedApplicationNum 已经启动的应用数量
                     * 
                     */
                    void SetStartedApplicationNum(const int64_t& _startedApplicationNum);

                    /**
                     * 判断参数 StartedApplicationNum 是否已赋值
                     * @return StartedApplicationNum 是否已赋值
                     * 
                     */
                    bool StartedApplicationNumHasBeenSet() const;

                    /**
                     * 获取启动失败的应用数量
                     * @return StartFailedApplicationNum 启动失败的应用数量
                     * 
                     */
                    int64_t GetStartFailedApplicationNum() const;

                    /**
                     * 设置启动失败的应用数量
                     * @param _startFailedApplicationNum 启动失败的应用数量
                     * 
                     */
                    void SetStartFailedApplicationNum(const int64_t& _startFailedApplicationNum);

                    /**
                     * 判断参数 StartFailedApplicationNum 是否已赋值
                     * @return StartFailedApplicationNum 是否已赋值
                     * 
                     */
                    bool StartFailedApplicationNumHasBeenSet() const;

                private:

                    /**
                     * 需要启动的应用数量
                     */
                    int64_t m_applicationNumNeedToStart;
                    bool m_applicationNumNeedToStartHasBeenSet;

                    /**
                     * 已经启动的应用数量
                     */
                    int64_t m_startedApplicationNum;
                    bool m_startedApplicationNumHasBeenSet;

                    /**
                     * 启动失败的应用数量
                     */
                    int64_t m_startFailedApplicationNum;
                    bool m_startFailedApplicationNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_
