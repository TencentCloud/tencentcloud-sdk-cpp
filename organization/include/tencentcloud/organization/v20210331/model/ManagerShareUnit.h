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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 我的共享单元列表详情
                */
                class ManagerShareUnit : public AbstractModel
                {
                public:
                    ManagerShareUnit();
                    ~ManagerShareUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>共享单元ID。</p>
                     * @return UnitId <p>共享单元ID。</p>
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置<p>共享单元ID。</p>
                     * @param _unitId <p>共享单元ID。</p>
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取<p>共享单元名称。</p>
                     * @return Name <p>共享单元名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>共享单元名称。</p>
                     * @param _name <p>共享单元名称。</p>
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
                     * 获取<p>共享单元管理员Uin。</p>
                     * @return Uin <p>共享单元管理员Uin。</p>
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>共享单元管理员Uin。</p>
                     * @param _uin <p>共享单元管理员Uin。</p>
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>共享单元管理员OwnerUin。</p>
                     * @return OwnerUin <p>共享单元管理员OwnerUin。</p>
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置<p>共享单元管理员OwnerUin。</p>
                     * @param _ownerUin <p>共享单元管理员OwnerUin。</p>
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>共享单元地域。</p>
                     * @return Area <p>共享单元地域。</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>共享单元地域。</p>
                     * @param _area <p>共享单元地域。</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>描述。</p>
                     * @return Description <p>描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述。</p>
                     * @param _description <p>描述。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>共享单元资源数。</p>
                     * @return ShareResourceNum <p>共享单元资源数。</p>
                     * 
                     */
                    int64_t GetShareResourceNum() const;

                    /**
                     * 设置<p>共享单元资源数。</p>
                     * @param _shareResourceNum <p>共享单元资源数。</p>
                     * 
                     */
                    void SetShareResourceNum(const int64_t& _shareResourceNum);

                    /**
                     * 判断参数 ShareResourceNum 是否已赋值
                     * @return ShareResourceNum 是否已赋值
                     * 
                     */
                    bool ShareResourceNumHasBeenSet() const;

                    /**
                     * 获取<p>共享单元成员数。</p>
                     * @return ShareMemberNum <p>共享单元成员数。</p>
                     * 
                     */
                    int64_t GetShareMemberNum() const;

                    /**
                     * 设置<p>共享单元成员数。</p>
                     * @param _shareMemberNum <p>共享单元成员数。</p>
                     * 
                     */
                    void SetShareMemberNum(const int64_t& _shareMemberNum);

                    /**
                     * 判断参数 ShareMemberNum 是否已赋值
                     * @return ShareMemberNum 是否已赋值
                     * 
                     */
                    bool ShareMemberNumHasBeenSet() const;

                    /**
                     * 获取<p>共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号</p>
                     * @return ShareScope <p>共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号</p>
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置<p>共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号</p>
                     * @param _shareScope <p>共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号</p>
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                    /**
                     * 获取<p>共享单元部门数。</p>
                     * @return ShareNodeNum <p>共享单元部门数。</p>
                     * 
                     */
                    int64_t GetShareNodeNum() const;

                    /**
                     * 设置<p>共享单元部门数。</p>
                     * @param _shareNodeNum <p>共享单元部门数。</p>
                     * 
                     */
                    void SetShareNodeNum(const int64_t& _shareNodeNum);

                    /**
                     * 判断参数 ShareNodeNum 是否已赋值
                     * @return ShareNodeNum 是否已赋值
                     * 
                     */
                    bool ShareNodeNumHasBeenSet() const;

                private:

                    /**
                     * <p>共享单元ID。</p>
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * <p>共享单元名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>共享单元管理员Uin。</p>
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>共享单元管理员OwnerUin。</p>
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>共享单元地域。</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>共享单元资源数。</p>
                     */
                    int64_t m_shareResourceNum;
                    bool m_shareResourceNumHasBeenSet;

                    /**
                     * <p>共享单元成员数。</p>
                     */
                    int64_t m_shareMemberNum;
                    bool m_shareMemberNumHasBeenSet;

                    /**
                     * <p>共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号</p>
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                    /**
                     * <p>共享单元部门数。</p>
                     */
                    int64_t m_shareNodeNum;
                    bool m_shareNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
