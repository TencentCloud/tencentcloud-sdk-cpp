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

#ifndef TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTRESPONSE_H_
#define TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tourism/v20230215/model/ResourceDrawListType.h>


namespace TencentCloud
{
    namespace Tourism
    {
        namespace V20230215
        {
            namespace Model
            {
                /**
                * DescribeDrawResourceList返回参数结构体
                */
                class DescribeDrawResourceListResponse : public AbstractModel
                {
                public:
                    DescribeDrawResourceListResponse();
                    ~DescribeDrawResourceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数据条数
                     * @return TotalCount 返回数据条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回数据数组
                     * @return ResourceDrawList 返回数据数组
                     * 
                     */
                    std::vector<ResourceDrawListType> GetResourceDrawList() const;

                    /**
                     * 判断参数 ResourceDrawList 是否已赋值
                     * @return ResourceDrawList 是否已赋值
                     * 
                     */
                    bool ResourceDrawListHasBeenSet() const;

                private:

                    /**
                     * 返回数据条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回数据数组
                     */
                    std::vector<ResourceDrawListType> m_resourceDrawList;
                    bool m_resourceDrawListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOURISM_V20230215_MODEL_DESCRIBEDRAWRESOURCELISTRESPONSE_H_
