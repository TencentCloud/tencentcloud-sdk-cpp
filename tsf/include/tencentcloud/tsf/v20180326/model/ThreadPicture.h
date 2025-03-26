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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_THREADPICTURE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_THREADPICTURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CurvePoint.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * jvm监控数据线程数据封装
                */
                class ThreadPicture : public AbstractModel
                {
                public:
                    ThreadPicture();
                    ~ThreadPicture() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总线程数
                     * @return ThreadCount 总线程数
                     * 
                     */
                    std::vector<CurvePoint> GetThreadCount() const;

                    /**
                     * 设置总线程数
                     * @param _threadCount 总线程数
                     * 
                     */
                    void SetThreadCount(const std::vector<CurvePoint>& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                    /**
                     * 获取活跃线程数
                     * @return ThreadActive 活跃线程数
                     * 
                     */
                    std::vector<CurvePoint> GetThreadActive() const;

                    /**
                     * 设置活跃线程数
                     * @param _threadActive 活跃线程数
                     * 
                     */
                    void SetThreadActive(const std::vector<CurvePoint>& _threadActive);

                    /**
                     * 判断参数 ThreadActive 是否已赋值
                     * @return ThreadActive 是否已赋值
                     * 
                     */
                    bool ThreadActiveHasBeenSet() const;

                    /**
                     * 获取守护线程数 拼写错误，废弃
                     * @return DeamonThreadCount 守护线程数 拼写错误，废弃
                     * 
                     */
                    std::vector<CurvePoint> GetDeamonThreadCount() const;

                    /**
                     * 设置守护线程数 拼写错误，废弃
                     * @param _deamonThreadCount 守护线程数 拼写错误，废弃
                     * 
                     */
                    void SetDeamonThreadCount(const std::vector<CurvePoint>& _deamonThreadCount);

                    /**
                     * 判断参数 DeamonThreadCount 是否已赋值
                     * @return DeamonThreadCount 是否已赋值
                     * 
                     */
                    bool DeamonThreadCountHasBeenSet() const;

                    /**
                     * 获取守护线程数
                     * @return DaemonThreadCount 守护线程数
                     * 
                     */
                    std::vector<CurvePoint> GetDaemonThreadCount() const;

                    /**
                     * 设置守护线程数
                     * @param _daemonThreadCount 守护线程数
                     * 
                     */
                    void SetDaemonThreadCount(const std::vector<CurvePoint>& _daemonThreadCount);

                    /**
                     * 判断参数 DaemonThreadCount 是否已赋值
                     * @return DaemonThreadCount 是否已赋值
                     * 
                     */
                    bool DaemonThreadCountHasBeenSet() const;

                private:

                    /**
                     * 总线程数
                     */
                    std::vector<CurvePoint> m_threadCount;
                    bool m_threadCountHasBeenSet;

                    /**
                     * 活跃线程数
                     */
                    std::vector<CurvePoint> m_threadActive;
                    bool m_threadActiveHasBeenSet;

                    /**
                     * 守护线程数 拼写错误，废弃
                     */
                    std::vector<CurvePoint> m_deamonThreadCount;
                    bool m_deamonThreadCountHasBeenSet;

                    /**
                     * 守护线程数
                     */
                    std::vector<CurvePoint> m_daemonThreadCount;
                    bool m_daemonThreadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_THREADPICTURE_H_
