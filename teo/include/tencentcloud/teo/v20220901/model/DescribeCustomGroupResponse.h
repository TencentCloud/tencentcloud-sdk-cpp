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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomGroupItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeCustomGroup返回参数结构体
                */
                class DescribeCustomGroupResponse : public AbstractModel
                {
                public:
                    DescribeCustomGroupResponse();
                    ~DescribeCustomGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义组唯一标识 ID。</p>
                     * @return GroupId <p>自定义组唯一标识 ID。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义组名称。</p>
                     * @return GroupName <p>自定义组名称。</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>自定义组类型。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组</li><li>UA： UA 组</li><li>Referer： Referer 组</li></ul>
                     * @return GroupType <p>自定义组类型。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组</li><li>UA： UA 组</li><li>Referer： Referer 组</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义组条目列表。</p>
                     * @return GroupItems <p>自定义组条目列表。</p>
                     * 
                     */
                    std::vector<CustomGroupItem> GetGroupItems() const;

                    /**
                     * 判断参数 GroupItems 是否已赋值
                     * @return GroupItems 是否已赋值
                     * 
                     */
                    bool GroupItemsHasBeenSet() const;

                    /**
                     * 获取<p>自定义组条目总数量。</p>
                     * @return GroupItemTotalCount <p>自定义组条目总数量。</p>
                     * 
                     */
                    int64_t GetGroupItemTotalCount() const;

                    /**
                     * 判断参数 GroupItemTotalCount 是否已赋值
                     * @return GroupItemTotalCount 是否已赋值
                     * 
                     */
                    bool GroupItemTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>自定义组被引用的次数。</p>
                     * @return RefCount <p>自定义组被引用的次数。</p>
                     * 
                     */
                    int64_t GetRefCount() const;

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                private:

                    /**
                     * <p>自定义组唯一标识 ID。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>自定义组名称。</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>自定义组类型。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组</li><li>UA： UA 组</li><li>Referer： Referer 组</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>自定义组条目列表。</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                    /**
                     * <p>自定义组条目总数量。</p>
                     */
                    int64_t m_groupItemTotalCount;
                    bool m_groupItemTotalCountHasBeenSet;

                    /**
                     * <p>自定义组被引用的次数。</p>
                     */
                    int64_t m_refCount;
                    bool m_refCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMGROUPRESPONSE_H_
