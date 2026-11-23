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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_

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
                * CreateCustomGroup请求参数结构体
                */
                class CreateCustomGroupRequest : public AbstractModel
                {
                public:
                    CreateCustomGroupRequest();
                    ~CreateCustomGroupRequest() = default;
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
                     * 获取<p>自定义组类型。创建后不可修改，不同类型的自定义组支持的条目类型不同。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组，支持 JA3、JA4 类型的条目</li><li>UA： UA 组，支持 UA 类型的条目</li><li>Referer： Referer 组，支持 Referer 类型的条目</li></ul>
                     * @return GroupType <p>自定义组类型。创建后不可修改，不同类型的自定义组支持的条目类型不同。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组，支持 JA3、JA4 类型的条目</li><li>UA： UA 组，支持 UA 类型的条目</li><li>Referer： Referer 组，支持 Referer 类型的条目</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>自定义组类型。创建后不可修改，不同类型的自定义组支持的条目类型不同。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组，支持 JA3、JA4 类型的条目</li><li>UA： UA 组，支持 UA 类型的条目</li><li>Referer： Referer 组，支持 Referer 类型的条目</li></ul>
                     * @param _groupType <p>自定义组类型。创建后不可修改，不同类型的自定义组支持的条目类型不同。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组，支持 JA3、JA4 类型的条目</li><li>UA： UA 组，支持 UA 类型的条目</li><li>Referer： Referer 组，支持 Referer 类型的条目</li></ul>
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

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>自定义组名称。</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>自定义组类型。创建后不可修改，不同类型的自定义组支持的条目类型不同。</p><p>枚举值：</p><ul><li>TLSFingerprint： TLS 指纹组，支持 JA3、JA4 类型的条目</li><li>UA： UA 组，支持 UA 类型的条目</li><li>Referer： Referer 组，支持 Referer 类型的条目</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>自定义组条目列表。</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_
