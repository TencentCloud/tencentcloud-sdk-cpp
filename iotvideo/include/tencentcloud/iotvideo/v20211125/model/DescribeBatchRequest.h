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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBATCHREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeBatch请求参数结构体
                */
                class DescribeBatchRequest : public AbstractModel
                {
                public:
                    DescribeBatchRequest();
                    ~DescribeBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    uint64_t GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const uint64_t& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    uint64_t m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBATCHREQUEST_H_
