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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditObjectSampleRate返回参数结构体
                */
                class ModifyCosAuditObjectSampleRateResponse : public AbstractModel
                {
                public:
                    ModifyCosAuditObjectSampleRateResponse();
                    ~ModifyCosAuditObjectSampleRateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本次是否实际提交了默认采样率</p>
                     * @return DefaultSampleRateUpdated <p>本次是否实际提交了默认采样率</p>
                     * 
                     */
                    bool GetDefaultSampleRateUpdated() const;

                    /**
                     * 判断参数 DefaultSampleRateUpdated 是否已赋值
                     * @return DefaultSampleRateUpdated 是否已赋值
                     * 
                     */
                    bool DefaultSampleRateUpdatedHasBeenSet() const;

                    /**
                     * 获取<p>DefaultSampleRateUpdated=true 时返回修改后的值</p>
                     * @return DefaultSampleRate <p>DefaultSampleRateUpdated=true 时返回修改后的值</p>
                     * 
                     */
                    double GetDefaultSampleRate() const;

                    /**
                     * 判断参数 DefaultSampleRate 是否已赋值
                     * @return DefaultSampleRate 是否已赋值
                     * 
                     */
                    bool DefaultSampleRateHasBeenSet() const;

                    /**
                     * 获取<p>本次成功提交的已有桶数量</p>
                     * @return UpdatedBucketCount <p>本次成功提交的已有桶数量</p>
                     * 
                     */
                    uint64_t GetUpdatedBucketCount() const;

                    /**
                     * 判断参数 UpdatedBucketCount 是否已赋值
                     * @return UpdatedBucketCount 是否已赋值
                     * 
                     */
                    bool UpdatedBucketCountHasBeenSet() const;

                private:

                    /**
                     * <p>本次是否实际提交了默认采样率</p>
                     */
                    bool m_defaultSampleRateUpdated;
                    bool m_defaultSampleRateUpdatedHasBeenSet;

                    /**
                     * <p>DefaultSampleRateUpdated=true 时返回修改后的值</p>
                     */
                    double m_defaultSampleRate;
                    bool m_defaultSampleRateHasBeenSet;

                    /**
                     * <p>本次成功提交的已有桶数量</p>
                     */
                    uint64_t m_updatedBucketCount;
                    bool m_updatedBucketCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATERESPONSE_H_
