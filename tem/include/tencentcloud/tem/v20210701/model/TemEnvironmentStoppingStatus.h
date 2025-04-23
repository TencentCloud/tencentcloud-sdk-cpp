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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTOPPINGSTATUS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTOPPINGSTATUS_H_

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
                * 环境停止进程（只统计由环境停止操作触发的应用数量）
                */
                class TemEnvironmentStoppingStatus : public AbstractModel
                {
                public:
                    TemEnvironmentStoppingStatus();
                    ~TemEnvironmentStoppingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要停止的应用数量
                     * @return ApplicationNumNeedToStop 需要停止的应用数量
                     * 
                     */
                    int64_t GetApplicationNumNeedToStop() const;

                    /**
                     * 设置需要停止的应用数量
                     * @param _applicationNumNeedToStop 需要停止的应用数量
                     * 
                     */
                    void SetApplicationNumNeedToStop(const int64_t& _applicationNumNeedToStop);

                    /**
                     * 判断参数 ApplicationNumNeedToStop 是否已赋值
                     * @return ApplicationNumNeedToStop 是否已赋值
                     * 
                     */
                    bool ApplicationNumNeedToStopHasBeenSet() const;

                    /**
                     * 获取已经停止的应用数量
                     * @return StoppedApplicationNum 已经停止的应用数量
                     * 
                     */
                    int64_t GetStoppedApplicationNum() const;

                    /**
                     * 设置已经停止的应用数量
                     * @param _stoppedApplicationNum 已经停止的应用数量
                     * 
                     */
                    void SetStoppedApplicationNum(const int64_t& _stoppedApplicationNum);

                    /**
                     * 判断参数 StoppedApplicationNum 是否已赋值
                     * @return StoppedApplicationNum 是否已赋值
                     * 
                     */
                    bool StoppedApplicationNumHasBeenSet() const;

                    /**
                     * 获取停止失败的应用数量
                     * @return StopFailedApplicationNum 停止失败的应用数量
                     * 
                     */
                    int64_t GetStopFailedApplicationNum() const;

                    /**
                     * 设置停止失败的应用数量
                     * @param _stopFailedApplicationNum 停止失败的应用数量
                     * 
                     */
                    void SetStopFailedApplicationNum(const int64_t& _stopFailedApplicationNum);

                    /**
                     * 判断参数 StopFailedApplicationNum 是否已赋值
                     * @return StopFailedApplicationNum 是否已赋值
                     * 
                     */
                    bool StopFailedApplicationNumHasBeenSet() const;

                private:

                    /**
                     * 需要停止的应用数量
                     */
                    int64_t m_applicationNumNeedToStop;
                    bool m_applicationNumNeedToStopHasBeenSet;

                    /**
                     * 已经停止的应用数量
                     */
                    int64_t m_stoppedApplicationNum;
                    bool m_stoppedApplicationNumHasBeenSet;

                    /**
                     * 停止失败的应用数量
                     */
                    int64_t m_stopFailedApplicationNum;
                    bool m_stopFailedApplicationNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTOPPINGSTATUS_H_
