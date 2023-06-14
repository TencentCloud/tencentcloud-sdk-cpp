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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20221115/model/FakeURLData.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * DescribeBPFakeURLs返回参数结构体
                */
                class DescribeBPFakeURLsResponse : public AbstractModel
                {
                public:
                    DescribeBPFakeURLsResponse();
                    ~DescribeBPFakeURLsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取仿冒网址列表
                     * @return FakeURLs 仿冒网址列表
                     * 
                     */
                    std::vector<FakeURLData> GetFakeURLs() const;

                    /**
                     * 判断参数 FakeURLs 是否已赋值
                     * @return FakeURLs 是否已赋值
                     * 
                     */
                    bool FakeURLsHasBeenSet() const;

                    /**
                     * 获取仿冒网址总数
                     * @return TotalCount 仿冒网址总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址列表
                     */
                    std::vector<FakeURLData> m_fakeURLs;
                    bool m_fakeURLsHasBeenSet;

                    /**
                     * 仿冒网址总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_DESCRIBEBPFAKEURLSRESPONSE_H_
