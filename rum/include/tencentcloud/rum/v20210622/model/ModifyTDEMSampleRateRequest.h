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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMSAMPLERATEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMSAMPLERATEREQUEST_H_

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
                * ModifyTDEMSampleRate请求参数结构体
                */
                class ModifyTDEMSampleRateRequest : public AbstractModel
                {
                public:
                    ModifyTDEMSampleRateRequest();
                    ~ModifyTDEMSampleRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>采集采样率 0-100（必填）</p>
                     * @return SampleRate <p>采集采样率 0-100（必填）</p>
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置<p>采集采样率 0-100（必填）</p>
                     * @param _sampleRate <p>采集采样率 0-100（必填）</p>
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
                     * 获取<p>会话回放采样率 0-100（可选）</p>
                     * @return ReplaySampleRate <p>会话回放采样率 0-100（可选）</p>
                     * 
                     */
                    double GetReplaySampleRate() const;

                    /**
                     * 设置<p>会话回放采样率 0-100（可选）</p>
                     * @param _replaySampleRate <p>会话回放采样率 0-100（可选）</p>
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
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>采集采样率 0-100（必填）</p>
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>会话回放采样率 0-100（可选）</p>
                     */
                    double m_replaySampleRate;
                    bool m_replaySampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMSAMPLERATEREQUEST_H_
