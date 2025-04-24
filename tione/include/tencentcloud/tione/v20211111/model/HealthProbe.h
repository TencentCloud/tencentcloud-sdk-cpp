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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_HEALTHPROBE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_HEALTHPROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Probe.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 健康探针
                */
                class HealthProbe : public AbstractModel
                {
                public:
                    HealthProbe();
                    ~HealthProbe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存活探针
                     * @return LivenessProbe 存活探针
                     * 
                     */
                    Probe GetLivenessProbe() const;

                    /**
                     * 设置存活探针
                     * @param _livenessProbe 存活探针
                     * 
                     */
                    void SetLivenessProbe(const Probe& _livenessProbe);

                    /**
                     * 判断参数 LivenessProbe 是否已赋值
                     * @return LivenessProbe 是否已赋值
                     * 
                     */
                    bool LivenessProbeHasBeenSet() const;

                    /**
                     * 获取就绪探针
                     * @return ReadinessProbe 就绪探针
                     * 
                     */
                    Probe GetReadinessProbe() const;

                    /**
                     * 设置就绪探针
                     * @param _readinessProbe 就绪探针
                     * 
                     */
                    void SetReadinessProbe(const Probe& _readinessProbe);

                    /**
                     * 判断参数 ReadinessProbe 是否已赋值
                     * @return ReadinessProbe 是否已赋值
                     * 
                     */
                    bool ReadinessProbeHasBeenSet() const;

                    /**
                     * 获取启动探针
                     * @return StartupProbe 启动探针
                     * 
                     */
                    Probe GetStartupProbe() const;

                    /**
                     * 设置启动探针
                     * @param _startupProbe 启动探针
                     * 
                     */
                    void SetStartupProbe(const Probe& _startupProbe);

                    /**
                     * 判断参数 StartupProbe 是否已赋值
                     * @return StartupProbe 是否已赋值
                     * 
                     */
                    bool StartupProbeHasBeenSet() const;

                private:

                    /**
                     * 存活探针
                     */
                    Probe m_livenessProbe;
                    bool m_livenessProbeHasBeenSet;

                    /**
                     * 就绪探针
                     */
                    Probe m_readinessProbe;
                    bool m_readinessProbeHasBeenSet;

                    /**
                     * 启动探针
                     */
                    Probe m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_HEALTHPROBE_H_
