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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribePriceCreateCopyPairs请求参数结构体
                */
                class DescribePriceCreateCopyPairsRequest : public AbstractModel
                {
                public:
                    DescribePriceCreateCopyPairsRequest();
                    ~DescribePriceCreateCopyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每个复制对的容量列表，长度 1~10。数组长度即为询价的复制对个数，每个元素对应一个复制对的容量
                     * @return DataCapacities 每个复制对的容量列表，长度 1~10。数组长度即为询价的复制对个数，每个元素对应一个复制对的容量
                     * 
                     */
                    std::vector<int64_t> GetDataCapacities() const;

                    /**
                     * 设置每个复制对的容量列表，长度 1~10。数组长度即为询价的复制对个数，每个元素对应一个复制对的容量
                     * @param _dataCapacities 每个复制对的容量列表，长度 1~10。数组长度即为询价的复制对个数，每个元素对应一个复制对的容量
                     * 
                     */
                    void SetDataCapacities(const std::vector<int64_t>& _dataCapacities);

                    /**
                     * 判断参数 DataCapacities 是否已赋值
                     * @return DataCapacities 是否已赋值
                     * 
                     */
                    bool DataCapacitiesHasBeenSet() const;

                private:

                    /**
                     * 每个复制对的容量列表，长度 1~10。数组长度即为询价的复制对个数，每个元素对应一个复制对的容量
                     */
                    std::vector<int64_t> m_dataCapacities;
                    bool m_dataCapacitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPRICECREATECOPYPAIRSREQUEST_H_
