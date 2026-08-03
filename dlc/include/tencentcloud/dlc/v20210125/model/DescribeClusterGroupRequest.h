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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClusterGroup请求参数结构体
                */
                class DescribeClusterGroupRequest : public AbstractModel
                {
                public:
                    DescribeClusterGroupRequest();
                    ~DescribeClusterGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群组 ID</p>
                     * @return Id <p>集群组 ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>集群组 ID</p>
                     * @param _id <p>集群组 ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>是否包含已软删除的记录（默认 false，仅返回活跃记录；true 时允许返回 deleted=1 的记录，用于悬挂 cluster 回显场景）</p>
                     * @return IncludeDeleted <p>是否包含已软删除的记录（默认 false，仅返回活跃记录；true 时允许返回 deleted=1 的记录，用于悬挂 cluster 回显场景）</p>
                     * 
                     */
                    bool GetIncludeDeleted() const;

                    /**
                     * 设置<p>是否包含已软删除的记录（默认 false，仅返回活跃记录；true 时允许返回 deleted=1 的记录，用于悬挂 cluster 回显场景）</p>
                     * @param _includeDeleted <p>是否包含已软删除的记录（默认 false，仅返回活跃记录；true 时允许返回 deleted=1 的记录，用于悬挂 cluster 回显场景）</p>
                     * 
                     */
                    void SetIncludeDeleted(const bool& _includeDeleted);

                    /**
                     * 判断参数 IncludeDeleted 是否已赋值
                     * @return IncludeDeleted 是否已赋值
                     * 
                     */
                    bool IncludeDeletedHasBeenSet() const;

                private:

                    /**
                     * <p>集群组 ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否包含已软删除的记录（默认 false，仅返回活跃记录；true 时允许返回 deleted=1 的记录，用于悬挂 cluster 回显场景）</p>
                     */
                    bool m_includeDeleted;
                    bool m_includeDeletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPREQUEST_H_
