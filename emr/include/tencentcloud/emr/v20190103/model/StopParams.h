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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 停止服务时的参数
                */
                class StopParams : public AbstractModel
                {
                public:
                    StopParams();
                    ~StopParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全模式：safe
默认模式：default
                     * @return StopPolicy 安全模式：safe
默认模式：default
                     * 
                     */
                    std::string GetStopPolicy() const;

                    /**
                     * 设置安全模式：safe
默认模式：default
                     * @param _stopPolicy 安全模式：safe
默认模式：default
                     * 
                     */
                    void SetStopPolicy(const std::string& _stopPolicy);

                    /**
                     * 判断参数 StopPolicy 是否已赋值
                     * @return StopPolicy 是否已赋值
                     * 
                     */
                    bool StopPolicyHasBeenSet() const;

                    /**
                     * 获取线程数
                     * @return ThreadCount 线程数
                     * 
                     */
                    int64_t GetThreadCount() const;

                    /**
                     * 设置线程数
                     * @param _threadCount 线程数
                     * 
                     */
                    void SetThreadCount(const int64_t& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                private:

                    /**
                     * 安全模式：safe
默认模式：default
                     */
                    std::string m_stopPolicy;
                    bool m_stopPolicyHasBeenSet;

                    /**
                     * 线程数
                     */
                    int64_t m_threadCount;
                    bool m_threadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_
