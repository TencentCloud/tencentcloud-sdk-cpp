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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEGROUPDETAIL_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEGROUPDETAIL_H_

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
                * 返回的数组列表
                */
                class DeviceGroupDetail : public AbstractModel
                {
                public:
                    DeviceGroupDetail();
                    ~DeviceGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备组id
                     * @return Id 设备组id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置设备组id
                     * @param _id 设备组id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备组名称
                     * @return Name 设备组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备组名称
                     * @param _name 设备组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取设备组描述
                     * @return Description 设备组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备组描述
                     * @param _description 设备组描述
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
                     * 获取父节点id
                     * @return ParentId 父节点id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父节点id
                     * @param _parentId 父节点id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取基于id的节点路径
                     * @return IdPath 基于id的节点路径
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置基于id的节点路径
                     * @param _idPath 基于id的节点路径
                     * 
                     */
                    void SetIdPath(const std::string& _idPath);

                    /**
                     * 判断参数 IdPath 是否已赋值
                     * @return IdPath 是否已赋值
                     * 
                     */
                    bool IdPathHasBeenSet() const;

                    /**
                     * 获取基于名称的节点路径
                     * @return NamePath 基于名称的节点路径
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置基于名称的节点路径
                     * @param _namePath 基于名称的节点路径
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
                     * 获取分组锁定状态
                     * @return Locked 分组锁定状态
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置分组锁定状态
                     * @param _locked 分组锁定状态
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）
                     * @return OsType 系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）
                     * @param _osType 系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取排序
                     * @return Sort 排序
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置排序
                     * @param _sort 排序
                     * 
                     */
                    void SetSort(const int64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取是否自动调整
                     * @return FromAuto 是否自动调整
                     * 
                     */
                    int64_t GetFromAuto() const;

                    /**
                     * 设置是否自动调整
                     * @param _fromAuto 是否自动调整
                     * 
                     */
                    void SetFromAuto(const int64_t& _fromAuto);

                    /**
                     * 判断参数 FromAuto 是否已赋值
                     * @return FromAuto 是否已赋值
                     * 
                     */
                    bool FromAutoHasBeenSet() const;

                    /**
                     * 获取子节点数量
                     * @return Count 子节点数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置子节点数量
                     * @param _count 子节点数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取图标
                     * @return Icon 图标
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置图标
                     * @param _icon 图标
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取是否有ip
                     * @return WithIp 是否有ip
                     * 
                     */
                    int64_t GetWithIp() const;

                    /**
                     * 设置是否有ip
                     * @param _withIp 是否有ip
                     * 
                     */
                    void SetWithIp(const int64_t& _withIp);

                    /**
                     * 判断参数 WithIp 是否已赋值
                     * @return WithIp 是否已赋值
                     * 
                     */
                    bool WithIpHasBeenSet() const;

                    /**
                     * 获取是否有组ip
                     * @return HasIp 是否有组ip
                     * 
                     */
                    bool GetHasIp() const;

                    /**
                     * 设置是否有组ip
                     * @param _hasIp 是否有组ip
                     * 
                     */
                    void SetHasIp(const bool& _hasIp);

                    /**
                     * 判断参数 HasIp 是否已赋值
                     * @return HasIp 是否已赋值
                     * 
                     */
                    bool HasIpHasBeenSet() const;

                    /**
                     * 获取是否是叶子节点
                     * @return IsLeaf 是否是叶子节点
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否是叶子节点
                     * @param _isLeaf 是否是叶子节点
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取是否只读
                     * @return ReadOnly 是否只读
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读
                     * @param _readOnly 是否只读
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取对应绑定的账号id
                     * @return BindAccount 对应绑定的账号id
                     * 
                     */
                    int64_t GetBindAccount() const;

                    /**
                     * 设置对应绑定的账号id
                     * @param _bindAccount 对应绑定的账号id
                     * 
                     */
                    void SetBindAccount(const int64_t& _bindAccount);

                    /**
                     * 判断参数 BindAccount 是否已赋值
                     * @return BindAccount 是否已赋值
                     * 
                     */
                    bool BindAccountHasBeenSet() const;

                    /**
                     * 获取绑定账号的用户名
                     * @return BindAccountName 绑定账号的用户名
                     * 
                     */
                    std::string GetBindAccountName() const;

                    /**
                     * 设置绑定账号的用户名
                     * @param _bindAccountName 绑定账号的用户名
                     * 
                     */
                    void SetBindAccountName(const std::string& _bindAccountName);

                    /**
                     * 判断参数 BindAccountName 是否已赋值
                     * @return BindAccountName 是否已赋值
                     * 
                     */
                    bool BindAccountNameHasBeenSet() const;

                private:

                    /**
                     * 设备组id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 父节点id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 基于id的节点路径
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * 基于名称的节点路径
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 分组锁定状态
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 排序
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 是否自动调整
                     */
                    int64_t m_fromAuto;
                    bool m_fromAutoHasBeenSet;

                    /**
                     * 子节点数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 是否有ip
                     */
                    int64_t m_withIp;
                    bool m_withIpHasBeenSet;

                    /**
                     * 是否有组ip
                     */
                    bool m_hasIp;
                    bool m_hasIpHasBeenSet;

                    /**
                     * 是否是叶子节点
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 是否只读
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 对应绑定的账号id
                     */
                    int64_t m_bindAccount;
                    bool m_bindAccountHasBeenSet;

                    /**
                     * 绑定账号的用户名
                     */
                    std::string m_bindAccountName;
                    bool m_bindAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEGROUPDETAIL_H_
