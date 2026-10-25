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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYSAMPLERATEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYSAMPLERATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifySampleRate请求参数结构体
                */
                class ModifySampleRateRequest : public AbstractModel
                {
                public:
                    ModifySampleRateRequest();
                    ~ModifySampleRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>会话采样率</p>
                     * @return SampleRate <p>会话采样率</p>
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置<p>会话采样率</p>
                     * @param _sampleRate <p>会话采样率</p>
                     * 
                     */
                    void SetSampleRate(const double& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取<p>录制采样率</p>
                     * @return ReplaySampleRate <p>录制采样率</p>
                     * 
                     */
                    double GetReplaySampleRate() const;

                    /**
                     * 设置<p>录制采样率</p>
                     * @param _replaySampleRate <p>录制采样率</p>
                     * 
                     */
                    void SetReplaySampleRate(const double& _replaySampleRate);

                    /**
                     * 判断参数 ReplaySampleRate 是否已赋值
                     * @return ReplaySampleRate 是否已赋值
                     * 
                     */
                    bool ReplaySampleRateHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>会话采样率</p>
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>录制采样率</p>
                     */
                    double m_replaySampleRate;
                    bool m_replaySampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYSAMPLERATEREQUEST_H_
