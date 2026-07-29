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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPGROUPREFERENCESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPGROUPREFERENCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeIPGroupReferences请求参数结构体
                */
                class DescribeIPGroupReferencesRequest : public AbstractModel
                {
                public:
                    DescribeIPGroupReferencesRequest();
                    ~DescribeIPGroupReferencesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>IP 组 ID。</p>
                     * @return GroupId <p>IP 组 ID。</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>IP 组 ID。</p>
                     * @param _groupId <p>IP 组 ID。</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量。</p><p>默认值：0</p>
                     * @return Offset <p>分页偏移量。</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。</p><p>默认值：0</p>
                     * @param _offset <p>分页偏移量。</p><p>默认值：0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页查询引用 IP 组的配置条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @return Limit <p>分页查询引用 IP 组的配置条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询引用 IP 组的配置条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * @param _limit <p>分页查询引用 IP 组的配置条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>IP 组 ID。</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>分页偏移量。</p><p>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页查询引用 IP 组的配置条数。</p><p>取值范围：[1, 200]</p><p>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPGROUPREFERENCESREQUEST_H_
