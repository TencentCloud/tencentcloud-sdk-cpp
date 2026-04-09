/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_PROBEINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_PROBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ProbeConfig.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 探针信息
                */
                class ProbeInfo : public AbstractModel
                {
                public:
                    ProbeInfo();
                    ~ProbeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存活探针</p>
                     * @return LivenessProbe <p>存活探针</p>
                     * 
                     */
                    ProbeConfig GetLivenessProbe() const;

                    /**
                     * 设置<p>存活探针</p>
                     * @param _livenessProbe <p>存活探针</p>
                     * 
                     */
                    void SetLivenessProbe(const ProbeConfig& _livenessProbe);

                    /**
                     * 判断参数 LivenessProbe 是否已赋值
                     * @return LivenessProbe 是否已赋值
                     * 
                     */
                    bool LivenessProbeHasBeenSet() const;

                    /**
                     * 获取<p>就绪探针</p>
                     * @return ReadinessProbe <p>就绪探针</p>
                     * 
                     */
                    ProbeConfig GetReadinessProbe() const;

                    /**
                     * 设置<p>就绪探针</p>
                     * @param _readinessProbe <p>就绪探针</p>
                     * 
                     */
                    void SetReadinessProbe(const ProbeConfig& _readinessProbe);

                    /**
                     * 判断参数 ReadinessProbe 是否已赋值
                     * @return ReadinessProbe 是否已赋值
                     * 
                     */
                    bool ReadinessProbeHasBeenSet() const;

                    /**
                     * 获取<p>启动探针</p>
                     * @return StartupProbe <p>启动探针</p>
                     * 
                     */
                    ProbeConfig GetStartupProbe() const;

                    /**
                     * 设置<p>启动探针</p>
                     * @param _startupProbe <p>启动探针</p>
                     * 
                     */
                    void SetStartupProbe(const ProbeConfig& _startupProbe);

                    /**
                     * 判断参数 StartupProbe 是否已赋值
                     * @return StartupProbe 是否已赋值
                     * 
                     */
                    bool StartupProbeHasBeenSet() const;

                private:

                    /**
                     * <p>存活探针</p>
                     */
                    ProbeConfig m_livenessProbe;
                    bool m_livenessProbeHasBeenSet;

                    /**
                     * <p>就绪探针</p>
                     */
                    ProbeConfig m_readinessProbe;
                    bool m_readinessProbeHasBeenSet;

                    /**
                     * <p>启动探针</p>
                     */
                    ProbeConfig m_startupProbe;
                    bool m_startupProbeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_PROBEINFO_H_
