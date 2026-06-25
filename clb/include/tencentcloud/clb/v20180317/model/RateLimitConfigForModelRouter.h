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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RATELIMITCONFIGFORMODELROUTER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RATELIMITCONFIGFORMODELROUTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 限速配置
                */
                class RateLimitConfigForModelRouter : public AbstractModel
                {
                public:
                    RateLimitConfigForModelRouter();
                    ~RateLimitConfigForModelRouter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每分钟限制的请求数量</p><p>单位：次/分钟</p>
                     * @return RPM <p>每分钟限制的请求数量</p><p>单位：次/分钟</p>
                     * 
                     */
                    uint64_t GetRPM() const;

                    /**
                     * 设置<p>每分钟限制的请求数量</p><p>单位：次/分钟</p>
                     * @param _rPM <p>每分钟限制的请求数量</p><p>单位：次/分钟</p>
                     * 
                     */
                    void SetRPM(const uint64_t& _rPM);

                    /**
                     * 判断参数 RPM 是否已赋值
                     * @return RPM 是否已赋值
                     * 
                     */
                    bool RPMHasBeenSet() const;

                    /**
                     * 获取<p>每分钟限制的Token数量</p><p>单位：个/分钟</p>
                     * @return TPM <p>每分钟限制的Token数量</p><p>单位：个/分钟</p>
                     * 
                     */
                    uint64_t GetTPM() const;

                    /**
                     * 设置<p>每分钟限制的Token数量</p><p>单位：个/分钟</p>
                     * @param _tPM <p>每分钟限制的Token数量</p><p>单位：个/分钟</p>
                     * 
                     */
                    void SetTPM(const uint64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                private:

                    /**
                     * <p>每分钟限制的请求数量</p><p>单位：次/分钟</p>
                     */
                    uint64_t m_rPM;
                    bool m_rPMHasBeenSet;

                    /**
                     * <p>每分钟限制的Token数量</p><p>单位：个/分钟</p>
                     */
                    uint64_t m_tPM;
                    bool m_tPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RATELIMITCONFIGFORMODELROUTER_H_
