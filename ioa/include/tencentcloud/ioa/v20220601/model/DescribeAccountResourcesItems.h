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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTRESOURCESITEMS_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTRESOURCESITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 资源对象
                */
                class DescribeAccountResourcesItems : public AbstractModel
                {
                public:
                    DescribeAccountResourcesItems();
                    ~DescribeAccountResourcesItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaId 资源组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAreaId() const;

                    /**
                     * 设置资源组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaId 资源组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaId(const uint64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取资源类型(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置资源id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取一般同id字段相同(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromSourceId 一般同id字段相同(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFromSourceId() const;

                    /**
                     * 设置一般同id字段相同(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromSourceId 一般同id字段相同(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromSourceId(const uint64_t& _fromSourceId);

                    /**
                     * 判断参数 FromSourceId 是否已赋值
                     * @return FromSourceId 是否已赋值
                     * 
                     */
                    bool FromSourceIdHasBeenSet() const;

                    /**
                     * 获取是否继承过来的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInherited 是否继承过来的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsInherited() const;

                    /**
                     * 设置是否继承过来的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInherited 是否继承过来的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInherited(const bool& _isInherited);

                    /**
                     * 判断参数 IsInherited 是否已赋值
                     * @return IsInherited 是否已赋值
                     * 
                     */
                    bool IsInheritedHasBeenSet() const;

                    /**
                     * 获取资源过期时间(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 资源过期时间(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置资源过期时间(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 资源过期时间(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取账户组的namepath
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamePath 账户组的namepath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置账户组的namepath
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namePath 账户组的namepath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamePath(const std::string& _namePath);

                    /**
                     * 判断参数 NamePath 是否已赋值
                     * @return NamePath 是否已赋值
                     * 
                     */
                    bool NamePathHasBeenSet() const;

                    /**
                     * 获取访问类型:0-NGN 1-web(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 访问类型:0-NGN 1-web(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问类型:0-NGN 1-web(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType 访问类型:0-NGN 1-web(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取继承开关状态(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInheritedSwitch 继承开关状态(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsInheritedSwitch() const;

                    /**
                     * 设置继承开关状态(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInheritedSwitch 继承开关状态(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInheritedSwitch(const uint64_t& _isInheritedSwitch);

                    /**
                     * 判断参数 IsInheritedSwitch 是否已赋值
                     * @return IsInheritedSwitch 是否已赋值
                     * 
                     */
                    bool IsInheritedSwitchHasBeenSet() const;

                    /**
                     * 获取关系id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 关系id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置关系id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 关系id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                private:

                    /**
                     * 资源组id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 资源类型(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 一般同id字段相同(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fromSourceId;
                    bool m_fromSourceIdHasBeenSet;

                    /**
                     * 是否继承过来的资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isInherited;
                    bool m_isInheritedHasBeenSet;

                    /**
                     * 资源过期时间(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 账户组的namepath
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 访问类型:0-NGN 1-web(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 继承开关状态(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isInheritedSwitch;
                    bool m_isInheritedSwitchHasBeenSet;

                    /**
                     * 关系id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTRESOURCESITEMS_H_
