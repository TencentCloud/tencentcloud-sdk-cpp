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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_

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
                * ModifyCustomGroup请求参数结构体
                */
                class ModifyCustomGroupRequest : public AbstractModel
                {
                public:
                    ModifyCustomGroupRequest();
                    ~ModifyCustomGroupRequest() = default;
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
                     * 获取<p>自定义组唯一标识 ID。</p>
                     * @return GroupId <p>自定义组唯一标识 ID。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>自定义组唯一标识 ID。</p>
                     * @param _groupId <p>自定义组唯一标识 ID。</p>
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
                     * 获取<p>自定义组名称。该字段不填时则保留原值。</p>
                     * @return GroupName <p>自定义组名称。该字段不填时则保留原值。</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>自定义组名称。该字段不填时则保留原值。</p>
                     * @param _groupName <p>自定义组名称。该字段不填时则保留原值。</p>
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
                     * 获取<p>指定本次对 GroupItems 的更新方式。</p><p>枚举值：</p><ul><li>Replace： 使用 GroupItems 全量替换原有条目列表</li><li>Append： 追加 GroupItems 到组条目列表中</li><li>Remove： 从原有条目列表中移除与 GroupItems 中 Content 和 ItemType 均相同的条目。若指定条目不存在，则忽略该条目</li></ul><p>默认值：Replace</p>
                     * @return GroupItemOperation <p>指定本次对 GroupItems 的更新方式。</p><p>枚举值：</p><ul><li>Replace： 使用 GroupItems 全量替换原有条目列表</li><li>Append： 追加 GroupItems 到组条目列表中</li><li>Remove： 从原有条目列表中移除与 GroupItems 中 Content 和 ItemType 均相同的条目。若指定条目不存在，则忽略该条目</li></ul><p>默认值：Replace</p>
                     * 
                     */
                    std::string GetGroupItemOperation() const;

                    /**
                     * 设置<p>指定本次对 GroupItems 的更新方式。</p><p>枚举值：</p><ul><li>Replace： 使用 GroupItems 全量替换原有条目列表</li><li>Append： 追加 GroupItems 到组条目列表中</li><li>Remove： 从原有条目列表中移除与 GroupItems 中 Content 和 ItemType 均相同的条目。若指定条目不存在，则忽略该条目</li></ul><p>默认值：Replace</p>
                     * @param _groupItemOperation <p>指定本次对 GroupItems 的更新方式。</p><p>枚举值：</p><ul><li>Replace： 使用 GroupItems 全量替换原有条目列表</li><li>Append： 追加 GroupItems 到组条目列表中</li><li>Remove： 从原有条目列表中移除与 GroupItems 中 Content 和 ItemType 均相同的条目。若指定条目不存在，则忽略该条目</li></ul><p>默认值：Replace</p>
                     * 
                     */
                    void SetGroupItemOperation(const std::string& _groupItemOperation);

                    /**
                     * 判断参数 GroupItemOperation 是否已赋值
                     * @return GroupItemOperation 是否已赋值
                     * 
                     */
                    bool GroupItemOperationHasBeenSet() const;

                    /**
                     * 获取<p>自定义组条目列表。该字段不填时则保留原值。</p>
                     * @return GroupItems <p>自定义组条目列表。该字段不填时则保留原值。</p>
                     * 
                     */
                    std::vector<CustomGroupItem> GetGroupItems() const;

                    /**
                     * 设置<p>自定义组条目列表。该字段不填时则保留原值。</p>
                     * @param _groupItems <p>自定义组条目列表。该字段不填时则保留原值。</p>
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
                     * <p>自定义组唯一标识 ID。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>自定义组名称。该字段不填时则保留原值。</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>指定本次对 GroupItems 的更新方式。</p><p>枚举值：</p><ul><li>Replace： 使用 GroupItems 全量替换原有条目列表</li><li>Append： 追加 GroupItems 到组条目列表中</li><li>Remove： 从原有条目列表中移除与 GroupItems 中 Content 和 ItemType 均相同的条目。若指定条目不存在，则忽略该条目</li></ul><p>默认值：Replace</p>
                     */
                    std::string m_groupItemOperation;
                    bool m_groupItemOperationHasBeenSet;

                    /**
                     * <p>自定义组条目列表。该字段不填时则保留原值。</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_
