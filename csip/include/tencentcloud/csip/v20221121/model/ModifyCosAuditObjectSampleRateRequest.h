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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_

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
                * ModifyCosAuditObjectSampleRate请求参数结构体
                */
                class ModifyCosAuditObjectSampleRateRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditObjectSampleRateRequest();
                    ~ModifyCosAuditObjectSampleRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储桶资产id集合</p>
                     * @return BucketIdSet <p>存储桶资产id集合</p>
                     * 
                     */
                    std::vector<uint64_t> GetBucketIdSet() const;

                    /**
                     * 设置<p>存储桶资产id集合</p>
                     * @param _bucketIdSet <p>存储桶资产id集合</p>
                     * 
                     */
                    void SetBucketIdSet(const std::vector<uint64_t>& _bucketIdSet);

                    /**
                     * 判断参数 BucketIdSet 是否已赋值
                     * @return BucketIdSet 是否已赋值
                     * 
                     */
                    bool BucketIdSetHasBeenSet() const;

                    /**
                     * 获取<p>采样率集合</p>
                     * @return SampleRateSet <p>采样率集合</p>
                     * 
                     */
                    std::vector<double> GetSampleRateSet() const;

                    /**
                     * 设置<p>采样率集合</p>
                     * @param _sampleRateSet <p>采样率集合</p>
                     * 
                     */
                    void SetSampleRateSet(const std::vector<double>& _sampleRateSet);

                    /**
                     * 判断参数 SampleRateSet 是否已赋值
                     * @return SampleRateSet 是否已赋值
                     * 
                     */
                    bool SampleRateSetHasBeenSet() const;

                private:

                    /**
                     * <p>存储桶资产id集合</p>
                     */
                    std::vector<uint64_t> m_bucketIdSet;
                    bool m_bucketIdSetHasBeenSet;

                    /**
                     * <p>采样率集合</p>
                     */
                    std::vector<double> m_sampleRateSet;
                    bool m_sampleRateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_
