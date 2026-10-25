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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSAMPLERATERESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSAMPLERATERESPONSE_H_

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
                * DescribeTDEMSampleRate返回参数结构体
                */
                class DescribeTDEMSampleRateResponse : public AbstractModel
                {
                public:
                    DescribeTDEMSampleRateResponse();
                    ~DescribeTDEMSampleRateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>采集采样率 0-100</p>
                     * @return SampleRate <p>采集采样率 0-100</p>
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取<p>会话回放采样率 0-100；未配置时为 1</p>
                     * @return ReplaySampleRate <p>会话回放采样率 0-100；未配置时为 1</p>
                     * 
                     */
                    double GetReplaySampleRate() const;

                    /**
                     * 判断参数 ReplaySampleRate 是否已赋值
                     * @return ReplaySampleRate 是否已赋值
                     * 
                     */
                    bool ReplaySampleRateHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>采集采样率 0-100</p>
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>会话回放采样率 0-100；未配置时为 1</p>
                     */
                    double m_replaySampleRate;
                    bool m_replaySampleRateHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSAMPLERATERESPONSE_H_
