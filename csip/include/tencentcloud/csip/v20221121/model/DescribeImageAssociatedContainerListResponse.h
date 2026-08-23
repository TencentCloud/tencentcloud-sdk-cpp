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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDCONTAINERLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDCONTAINERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageAssociatedContainer.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeImageAssociatedContainerList返回参数结构体
                */
                class DescribeImageAssociatedContainerListResponse : public AbstractModel
                {
                public:
                    DescribeImageAssociatedContainerListResponse();
                    ~DescribeImageAssociatedContainerListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像关联容器信息</p>
                     * @return ContainerList <p>镜像关联容器信息</p>
                     * 
                     */
                    std::vector<ImageAssociatedContainer> GetContainerList() const;

                    /**
                     * 判断参数 ContainerList 是否已赋值
                     * @return ContainerList 是否已赋值
                     * 
                     */
                    bool ContainerListHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>镜像关联容器信息</p>
                     */
                    std::vector<ImageAssociatedContainer> m_containerList;
                    bool m_containerListHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEASSOCIATEDCONTAINERLISTRESPONSE_H_
