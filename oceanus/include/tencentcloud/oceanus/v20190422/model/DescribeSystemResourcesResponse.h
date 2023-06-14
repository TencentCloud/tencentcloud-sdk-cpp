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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/SystemResourceItem.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeSystemResources返回参数结构体
                */
                class DescribeSystemResourcesResponse : public AbstractModel
                {
                public:
                    DescribeSystemResourcesResponse();
                    ~DescribeSystemResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源详细信息集合
                     * @return ResourceSet 资源详细信息集合
                     * 
                     */
                    std::vector<SystemResourceItem> GetResourceSet() const;

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
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
                     * 资源详细信息集合
                     */
                    std::vector<SystemResourceItem> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * 总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESRESPONSE_H_
