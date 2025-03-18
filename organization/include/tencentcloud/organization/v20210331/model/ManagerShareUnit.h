/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取共享单元ID。
                     * @return UnitId 共享单元ID。
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置共享单元ID。
                     * @param _unitId 共享单元ID。
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
                     * 获取共享单元名称。
                     * @return Name 共享单元名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置共享单元名称。
                     * @param _name 共享单元名称。
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
                     * 获取共享单元管理员Uin。
                     * @return Uin 共享单元管理员Uin。
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置共享单元管理员Uin。
                     * @param _uin 共享单元管理员Uin。
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
                     * 获取共享单元管理员OwnerUin。
                     * @return OwnerUin 共享单元管理员OwnerUin。
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置共享单元管理员OwnerUin。
                     * @param _ownerUin 共享单元管理员OwnerUin。
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
                     * 获取共享单元地域。
                     * @return Area 共享单元地域。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置共享单元地域。
                     * @param _area 共享单元地域。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取共享单元资源数。
                     * @return ShareResourceNum 共享单元资源数。
                     * 
                     */
                    int64_t GetShareResourceNum() const;

                    /**
                     * 设置共享单元资源数。
                     * @param _shareResourceNum 共享单元资源数。
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
                     * 获取共享单元成员数。
                     * @return ShareMemberNum 共享单元成员数。
                     * 
                     */
                    int64_t GetShareMemberNum() const;

                    /**
                     * 设置共享单元成员数。
                     * @param _shareMemberNum 共享单元成员数。
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
                     * 获取共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号
                     * @return ShareScope 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号
                     * @param _shareScope 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                private:

                    /**
                     * 共享单元ID。
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * 共享单元名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 共享单元管理员Uin。
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 共享单元管理员OwnerUin。
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 共享单元地域。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 共享单元资源数。
                     */
                    int64_t m_shareResourceNum;
                    bool m_shareResourceNumHasBeenSet;

                    /**
                     * 共享单元成员数。
                     */
                    int64_t m_shareMemberNum;
                    bool m_shareMemberNumHasBeenSet;

                    /**
                     * 共享范围。取值：1-仅允许集团组织内共享 2-允许共享给任意账号
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
