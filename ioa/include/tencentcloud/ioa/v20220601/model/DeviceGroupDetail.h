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
                     * 获取<p>设备组id</p>
                     * @return Id <p>设备组id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>设备组id</p>
                     * @param _id <p>设备组id</p>
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
                     * 获取<p>设备组名称</p>
                     * @return Name <p>设备组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>设备组名称</p>
                     * @param _name <p>设备组名称</p>
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
                     * 获取<p>设备组描述</p>
                     * @return Description <p>设备组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>设备组描述</p>
                     * @param _description <p>设备组描述</p>
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
                     * 获取<p>父节点id</p>
                     * @return ParentId <p>父节点id</p>
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置<p>父节点id</p>
                     * @param _parentId <p>父节点id</p>
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
                     * 获取<p>基于id的节点路径</p>
                     * @return IdPath <p>基于id的节点路径</p>
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置<p>基于id的节点路径</p>
                     * @param _idPath <p>基于id的节点路径</p>
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
                     * 获取<p>基于名称的节点路径</p>
                     * @return NamePath <p>基于名称的节点路径</p>
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置<p>基于名称的节点路径</p>
                     * @param _namePath <p>基于名称的节点路径</p>
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
                     * 获取<p>分组锁定状态</p>
                     * @return Locked <p>分组锁定状态</p>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置<p>分组锁定状态</p>
                     * @param _locked <p>分组锁定状态</p>
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
                     * 获取<p>系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）</p>
                     * @return OsType <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）</p>
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置<p>系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）</p>
                     * @param _osType <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）</p>
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
                     * 获取<p>排序</p>
                     * @return Sort <p>排序</p>
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置<p>排序</p>
                     * @param _sort <p>排序</p>
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
                     * 获取<p>是否自动调整</p>
                     * @return FromAuto <p>是否自动调整</p>
                     * 
                     */
                    int64_t GetFromAuto() const;

                    /**
                     * 设置<p>是否自动调整</p>
                     * @param _fromAuto <p>是否自动调整</p>
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
                     * 获取<p>子节点数量</p>
                     * @return Count <p>子节点数量</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>子节点数量</p>
                     * @param _count <p>子节点数量</p>
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
                     * 获取<p>图标</p>
                     * @return Icon <p>图标</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>图标</p>
                     * @param _icon <p>图标</p>
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
                     * 获取<p>是否有ip</p>
                     * @return WithIp <p>是否有ip</p>
                     * 
                     */
                    int64_t GetWithIp() const;

                    /**
                     * 设置<p>是否有ip</p>
                     * @param _withIp <p>是否有ip</p>
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
                     * 获取<p>是否有组ip</p>
                     * @return HasIp <p>是否有组ip</p>
                     * 
                     */
                    bool GetHasIp() const;

                    /**
                     * 设置<p>是否有组ip</p>
                     * @param _hasIp <p>是否有组ip</p>
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
                     * 获取<p>是否是叶子节点</p>
                     * @return IsLeaf <p>是否是叶子节点</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>是否是叶子节点</p>
                     * @param _isLeaf <p>是否是叶子节点</p>
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
                     * 获取<p>是否只读</p>
                     * @return ReadOnly <p>是否只读</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>是否只读</p>
                     * @param _readOnly <p>是否只读</p>
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
                     * 获取<p>对应绑定的账号id</p>
                     * @return BindAccount <p>对应绑定的账号id</p>
                     * 
                     */
                    int64_t GetBindAccount() const;

                    /**
                     * 设置<p>对应绑定的账号id</p>
                     * @param _bindAccount <p>对应绑定的账号id</p>
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
                     * 获取<p>绑定账号的用户名</p>
                     * @return BindAccountName <p>绑定账号的用户名</p>
                     * 
                     */
                    std::string GetBindAccountName() const;

                    /**
                     * 设置<p>绑定账号的用户名</p>
                     * @param _bindAccountName <p>绑定账号的用户名</p>
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
                     * <p>设备组id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>设备组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设备组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>父节点id</p>
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * <p>基于id的节点路径</p>
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * <p>基于名称的节点路径</p>
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * <p>分组锁定状态</p>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>系统类型（0: win，1：linux，2: mac，4：android，5：ios   ）</p>
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>排序</p>
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>是否自动调整</p>
                     */
                    int64_t m_fromAuto;
                    bool m_fromAutoHasBeenSet;

                    /**
                     * <p>子节点数量</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>图标</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>是否有ip</p>
                     */
                    int64_t m_withIp;
                    bool m_withIpHasBeenSet;

                    /**
                     * <p>是否有组ip</p>
                     */
                    bool m_hasIp;
                    bool m_hasIpHasBeenSet;

                    /**
                     * <p>是否是叶子节点</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>是否只读</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>对应绑定的账号id</p>
                     */
                    int64_t m_bindAccount;
                    bool m_bindAccountHasBeenSet;

                    /**
                     * <p>绑定账号的用户名</p>
                     */
                    std::string m_bindAccountName;
                    bool m_bindAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEGROUPDETAIL_H_
