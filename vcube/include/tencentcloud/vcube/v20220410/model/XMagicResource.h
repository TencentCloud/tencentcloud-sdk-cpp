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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICRESOURCE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 优图美视资源包
                */
                class XMagicResource : public AbstractModel
                {
                public:
                    XMagicResource();
                    ~XMagicResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源Id
                     * @return Id 资源Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置资源Id
                     * @param _id 资源Id
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
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取套餐类别
                     * @return Plan 套餐类别
                     * 
                     */
                    std::string GetPlan() const;

                    /**
                     * 设置套餐类别
                     * @param _plan 套餐类别
                     * 
                     */
                    void SetPlan(const std::string& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                    /**
                     * 获取单位：年
                     * @return Duration 单位：年
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置单位：年
                     * @param _duration 单位：年
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取资源是否已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return XMagic 资源是否已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetXMagic() const;

                    /**
                     * 设置资源是否已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _xMagic 资源是否已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetXMagic(const bool& _xMagic);

                    /**
                     * 判断参数 XMagic 是否已赋值
                     * @return XMagic 是否已赋值
                     * 
                     */
                    bool XMagicHasBeenSet() const;

                    /**
                     * 获取资源开始生效时间
                     * @return StartTime 资源开始生效时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置资源开始生效时间
                     * @param _startTime 资源开始生效时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取资源结束生效时间
                     * @return EndTime 资源结束生效时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置资源结束生效时间
                     * @param _endTime 资源结束生效时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取资源包是否过期
                     * @return Expired 资源包是否过期
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置资源包是否过期
                     * @param _expired 资源包是否过期
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取功能模块名称
                     * @return Name 功能模块名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置功能模块名称
                     * @param _name 功能模块名称
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
                     * 获取single: 原子能力,combined:套餐
                     * @return XMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    std::string GetXMagicType() const;

                    /**
                     * 设置single: 原子能力,combined:套餐
                     * @param _xMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    void SetXMagicType(const std::string& _xMagicType);

                    /**
                     * 判断参数 XMagicType 是否已赋值
                     * @return XMagicType 是否已赋值
                     * 
                     */
                    bool XMagicTypeHasBeenSet() const;

                    /**
                     * 获取xmagic:优图， avatar：虚拟人
                     * @return BizType xmagic:优图， avatar：虚拟人
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置xmagic:优图， avatar：虚拟人
                     * @param _bizType xmagic:优图， avatar：虚拟人
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param _resourceId 资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源是否可以使用
                     * @return IsUse 资源是否可以使用
                     * 
                     */
                    bool GetIsUse() const;

                    /**
                     * 设置资源是否可以使用
                     * @param _isUse 资源是否可以使用
                     * 
                     */
                    void SetIsUse(const bool& _isUse);

                    /**
                     * 判断参数 IsUse 是否已赋值
                     * @return IsUse 是否已赋值
                     * 
                     */
                    bool IsUseHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 套餐类别
                     */
                    std::string m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * 单位：年
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 资源是否已使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_xMagic;
                    bool m_xMagicHasBeenSet;

                    /**
                     * 资源开始生效时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 资源结束生效时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源包是否过期
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 功能模块名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * single: 原子能力,combined:套餐
                     */
                    std::string m_xMagicType;
                    bool m_xMagicTypeHasBeenSet;

                    /**
                     * xmagic:优图， avatar：虚拟人
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源是否可以使用
                     */
                    bool m_isUse;
                    bool m_isUseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICRESOURCE_H_
