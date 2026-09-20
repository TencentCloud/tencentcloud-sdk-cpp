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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeSessionSpace请求参数结构体
                */
                class DescribeSessionSpaceRequest : public AbstractModel
                {
                public:
                    DescribeSessionSpaceRequest();
                    ~DescribeSessionSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要查询的会话空间唯一标识。</p><p>入参限制：必填，不能为空。</p><p>可通过 CreateSessionSpace 或 DescribeSessionSpaces 获取，不应自行构造。</p>
                     * @return SpaceId <p>需要查询的会话空间唯一标识。</p><p>入参限制：必填，不能为空。</p><p>可通过 CreateSessionSpace 或 DescribeSessionSpaces 获取，不应自行构造。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>需要查询的会话空间唯一标识。</p><p>入参限制：必填，不能为空。</p><p>可通过 CreateSessionSpace 或 DescribeSessionSpaces 获取，不应自行构造。</p>
                     * @param _spaceId <p>需要查询的会话空间唯一标识。</p><p>入参限制：必填，不能为空。</p><p>可通过 CreateSessionSpace 或 DescribeSessionSpaces 获取，不应自行构造。</p>
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
                     * <p>需要查询的会话空间唯一标识。</p><p>入参限制：必填，不能为空。</p><p>可通过 CreateSessionSpace 或 DescribeSessionSpaces 获取，不应自行构造。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESESSIONSPACEREQUEST_H_
