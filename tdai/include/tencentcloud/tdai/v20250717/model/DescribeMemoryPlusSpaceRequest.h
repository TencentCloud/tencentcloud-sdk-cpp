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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeMemoryPlusSpace请求参数结构体
                */
                class DescribeMemoryPlusSpaceRequest : public AbstractModel
                {
                public:
                    DescribeMemoryPlusSpaceRequest();
                    ~DescribeMemoryPlusSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定查询的 Memory 实例 ID。</p>
                     * @return SpaceId <p>指定查询的 Memory 实例 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>指定查询的 Memory 实例 ID。</p>
                     * @param _spaceId <p>指定查询的 Memory 实例 ID。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>指定查询的 Memory 实例 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACEREQUEST_H_
