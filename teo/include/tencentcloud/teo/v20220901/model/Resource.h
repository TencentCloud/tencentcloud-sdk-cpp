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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Sv.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 计费资源
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID。
                     * @return Id 资源 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源 ID。
                     * @param _id 资源 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取付费模式，取值有：
<li>0：后付费。</li>
                     * @return PayMode 付费模式，取值有：
<li>0：后付费。</li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式，取值有：
<li>0：后付费。</li>
                     * @param _payMode 付费模式，取值有：
<li>0：后付费。</li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

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
                     * 获取生效时间。
                     * @return EnableTime 生效时间。
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置生效时间。
                     * @param _enableTime 生效时间。
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取失效时间。
                     * @return ExpireTime 失效时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置失效时间。
                     * @param _expireTime 失效时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取套餐状态，取值有：
<li>normal：正常；</li>
<li>isolated：隔离；</li>
<li>destroyed：销毁。</li>
                     * @return Status 套餐状态，取值有：
<li>normal：正常；</li>
<li>isolated：隔离；</li>
<li>destroyed：销毁。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置套餐状态，取值有：
<li>normal：正常；</li>
<li>isolated：隔离；</li>
<li>destroyed：销毁。</li>
                     * @param _status 套餐状态，取值有：
<li>normal：正常；</li>
<li>isolated：隔离；</li>
<li>destroyed：销毁。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取询价参数。
                     * @return Sv 询价参数。
                     * 
                     */
                    std::vector<Sv> GetSv() const;

                    /**
                     * 设置询价参数。
                     * @param _sv 询价参数。
                     * 
                     */
                    void SetSv(const std::vector<Sv>& _sv);

                    /**
                     * 判断参数 Sv 是否已赋值
                     * @return Sv 是否已赋值
                     * 
                     */
                    bool SvHasBeenSet() const;

                    /**
                     * 获取是否自动续费，取值有：
<li>0：默认状态；</li>
<li>1：自动续费；</li>
<li>2：不自动续费。</li>
                     * @return AutoRenewFlag 是否自动续费，取值有：
<li>0：默认状态；</li>
<li>1：自动续费；</li>
<li>2：不自动续费。</li>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费，取值有：
<li>0：默认状态；</li>
<li>1：自动续费；</li>
<li>2：不自动续费。</li>
                     * @param _autoRenewFlag 是否自动续费，取值有：
<li>0：默认状态；</li>
<li>1：自动续费；</li>
<li>2：不自动续费。</li>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取套餐关联资源 ID。
                     * @return PlanId 套餐关联资源 ID。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐关联资源 ID。
                     * @param _planId 套餐关联资源 ID。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取地域，取值有：
<li>mainland：国内；</li>
<li>overseas：海外。</li>
<li>global：全球。</li>
                     * @return Area 地域，取值有：
<li>mainland：国内；</li>
<li>overseas：海外。</li>
<li>global：全球。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域，取值有：
<li>mainland：国内；</li>
<li>overseas：海外。</li>
<li>global：全球。</li>
                     * @param _area 地域，取值有：
<li>mainland：国内；</li>
<li>overseas：海外。</li>
<li>global：全球。</li>
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
                     * 获取资源类型，取值有：
<li>plan：套餐类型；</li>
<li>pay-as-you-go：后付费类型。</li>
<li>value-added：增值服务类型。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 资源类型，取值有：
<li>plan：套餐类型；</li>
<li>pay-as-you-go：后付费类型。</li>
<li>value-added：增值服务类型。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置资源类型，取值有：
<li>plan：套餐类型；</li>
<li>pay-as-you-go：后付费类型。</li>
<li>value-added：增值服务类型。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 资源类型，取值有：
<li>plan：套餐类型；</li>
<li>pay-as-you-go：后付费类型。</li>
<li>value-added：增值服务类型。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取当前资源绑定的站点数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneNumber 当前资源绑定的站点数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneNumber() const;

                    /**
                     * 设置当前资源绑定的站点数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneNumber 当前资源绑定的站点数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneNumber(const int64_t& _zoneNumber);

                    /**
                     * 判断参数 ZoneNumber 是否已赋值
                     * @return ZoneNumber 是否已赋值
                     * 
                     */
                    bool ZoneNumberHasBeenSet() const;

                    /**
                     * 获取资源标记类型，取值有：
<li>vodeo：vodeo资源。</li>
                     * @return Type 资源标记类型，取值有：
<li>vodeo：vodeo资源。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源标记类型，取值有：
<li>vodeo：vodeo资源。</li>
                     * @param _type 资源标记类型，取值有：
<li>vodeo：vodeo资源。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 资源 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 付费模式，取值有：
<li>0：后付费。</li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生效时间。
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * 失效时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 套餐状态，取值有：
<li>normal：正常；</li>
<li>isolated：隔离；</li>
<li>destroyed：销毁。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 询价参数。
                     */
                    std::vector<Sv> m_sv;
                    bool m_svHasBeenSet;

                    /**
                     * 是否自动续费，取值有：
<li>0：默认状态；</li>
<li>1：自动续费；</li>
<li>2：不自动续费。</li>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 套餐关联资源 ID。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 地域，取值有：
<li>mainland：国内；</li>
<li>overseas：海外。</li>
<li>global：全球。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 资源类型，取值有：
<li>plan：套餐类型；</li>
<li>pay-as-you-go：后付费类型。</li>
<li>value-added：增值服务类型。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 当前资源绑定的站点数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneNumber;
                    bool m_zoneNumberHasBeenSet;

                    /**
                     * 资源标记类型，取值有：
<li>vodeo：vodeo资源。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_
