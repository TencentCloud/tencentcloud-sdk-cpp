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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePlatforms请求参数结构体
                */
                class DescribePlatformsRequest : public AbstractModel
                {
                public:
                    DescribePlatformsRequest();
                    ~DescribePlatformsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>平台版套餐id列表</p><p>默认值：若不指定，则分页返回当前账号下所有平台版资源</p>
                     * @return PlatformIds <p>平台版套餐id列表</p><p>默认值：若不指定，则分页返回当前账号下所有平台版资源</p>
                     * 
                     */
                    std::vector<std::string> GetPlatformIds() const;

                    /**
                     * 设置<p>平台版套餐id列表</p><p>默认值：若不指定，则分页返回当前账号下所有平台版资源</p>
                     * @param _platformIds <p>平台版套餐id列表</p><p>默认值：若不指定，则分页返回当前账号下所有平台版资源</p>
                     * 
                     */
                    void SetPlatformIds(const std::vector<std::string>& _platformIds);

                    /**
                     * 判断参数 PlatformIds 是否已赋值
                     * @return PlatformIds 是否已赋值
                     * 
                     */
                    bool PlatformIdsHasBeenSet() const;

                    /**
                     * 获取<p>分页限制</p><p>取值范围：[10, 100]</p><p>默认值：10</p>
                     * @return Limit <p>分页限制</p><p>取值范围：[10, 100]</p><p>默认值：10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页限制</p><p>取值范围：[10, 100]</p><p>默认值：10</p>
                     * @param _limit <p>分页限制</p><p>取值范围：[10, 100]</p><p>默认值：10</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量</p><p>默认值：0</p>
                     * @return Offset <p>分页偏移量</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量</p><p>默认值：0</p>
                     * @param _offset <p>分页偏移量</p><p>默认值：0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>平台版套餐id列表</p><p>默认值：若不指定，则分页返回当前账号下所有平台版资源</p>
                     */
                    std::vector<std::string> m_platformIds;
                    bool m_platformIdsHasBeenSet;

                    /**
                     * <p>分页限制</p><p>取值范围：[10, 100]</p><p>默认值：10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量</p><p>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMSREQUEST_H_
