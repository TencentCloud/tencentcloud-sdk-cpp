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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 安全自定义组用于集中管理一组可复用的安全匹配条目，例如可以将多个 JA3/JA4 TLS 指纹保存为一个 TLS 指纹组，并在安全规则中直接引用该组，从而避免在多条规则中重复维护相同的指纹列表。
                */
                class CustomGroup : public AbstractModel
                {
                public:
                    CustomGroup();
                    ~CustomGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义组的唯一标识 ID。</p>
                     * @return GroupId <p>自定义组的唯一标识 ID。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>自定义组的唯一标识 ID。</p>
                     * @param _groupId <p>自定义组的唯一标识 ID。</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

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
                     * 设置<p>自定义组名称。</p>
                     * @param _groupName <p>自定义组名称。</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

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
                     * 设置<p>自定义组类型。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组</li><li>UA： UA 组</li><li>Referer： Referer 组</li></ul>
                     * @param _groupType <p>自定义组类型。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组</li><li>UA： UA 组</li><li>Referer： Referer 组</li></ul>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

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
                     * 设置<p>自定义组条目列表。</p>
                     * @param _groupItems <p>自定义组条目列表。</p>
                     * 
                     */
                    void SetGroupItems(const std::vector<CustomGroupItem>& _groupItems);

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
                     * 设置<p>自定义组条目总数量。</p>
                     * @param _groupItemTotalCount <p>自定义组条目总数量。</p>
                     * 
                     */
                    void SetGroupItemTotalCount(const int64_t& _groupItemTotalCount);

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
                     * 设置<p>自定义组被引用的次数。</p>
                     * @param _refCount <p>自定义组被引用的次数。</p>
                     * 
                     */
                    void SetRefCount(const int64_t& _refCount);

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                private:

                    /**
                     * <p>自定义组的唯一标识 ID。</p>
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_
