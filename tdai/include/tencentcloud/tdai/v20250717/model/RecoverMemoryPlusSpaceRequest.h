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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_RECOVERMEMORYPLUSSPACEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_RECOVERMEMORYPLUSSPACEREQUEST_H_

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
                * RecoverMemoryPlusSpace请求参数结构体
                */
                class RecoverMemoryPlusSpaceRequest : public AbstractModel
                {
                public:
                    RecoverMemoryPlusSpaceRequest();
                    ~RecoverMemoryPlusSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定需要恢复的 Memory 实例 ID 列表。</p>
                     * @return SpaceIds <p>指定需要恢复的 Memory 实例 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置<p>指定需要恢复的 Memory 实例 ID 列表。</p>
                     * @param _spaceIds <p>指定需要恢复的 Memory 实例 ID 列表。</p>
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>指定需要恢复的 Memory 实例 ID 列表。</p>
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_RECOVERMEMORYPLUSSPACEREQUEST_H_
