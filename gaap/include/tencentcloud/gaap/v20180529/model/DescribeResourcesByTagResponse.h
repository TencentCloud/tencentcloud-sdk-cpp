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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagResourceInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeResourcesByTag返回参数结构体
                */
                class DescribeResourcesByTagResponse : public AbstractModel
                {
                public:
                    DescribeResourcesByTagResponse();
                    ~DescribeResourcesByTagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源总数
                     * @return TotalCount 资源总数
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
                     * 获取标签对应的资源列表
                     * @return ResourceSet 标签对应的资源列表
                     * 
                     */
                    std::vector<TagResourceInfo> GetResourceSet() const;

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                private:

                    /**
                     * 资源总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 标签对应的资源列表
                     */
                    std::vector<TagResourceInfo> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGRESPONSE_H_
