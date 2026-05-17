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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSRISKSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSRISKSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosRiskScanTask请求参数结构体
                */
                class DescribeCosRiskScanTaskRequest : public AbstractModel
                {
                public:
                    DescribeCosRiskScanTaskRequest();
                    ~DescribeCosRiskScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查看的存储桶详情
                     * @return BucketInfoSet 需要查看的存储桶详情
                     * 
                     */
                    std::vector<CosBucketInfo> GetBucketInfoSet() const;

                    /**
                     * 设置需要查看的存储桶详情
                     * @param _bucketInfoSet 需要查看的存储桶详情
                     * 
                     */
                    void SetBucketInfoSet(const std::vector<CosBucketInfo>& _bucketInfoSet);

                    /**
                     * 判断参数 BucketInfoSet 是否已赋值
                     * @return BucketInfoSet 是否已赋值
                     * 
                     */
                    bool BucketInfoSetHasBeenSet() const;

                private:

                    /**
                     * 需要查看的存储桶详情
                     */
                    std::vector<CosBucketInfo> m_bucketInfoSet;
                    bool m_bucketInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSRISKSCANTASKREQUEST_H_
