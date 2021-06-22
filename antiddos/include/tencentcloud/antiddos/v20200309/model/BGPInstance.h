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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceSpecification.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceUsages.h>
#include <tencentcloud/antiddos/v20200309/model/RegionInfo.h>
#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>
#include <tencentcloud/antiddos/v20200309/model/EipProductInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防包资产实例信息
                */
                class BGPInstance : public AbstractModel
                {
                public:
                    BGPInstance();
                    ~BGPInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产实例的详细信息
                     * @return InstanceDetail 资产实例的详细信息
                     */
                    InstanceRelation GetInstanceDetail() const;

                    /**
                     * 设置资产实例的详细信息
                     * @param InstanceDetail 资产实例的详细信息
                     */
                    void SetInstanceDetail(const InstanceRelation& _instanceDetail);

                    /**
                     * 判断参数 InstanceDetail 是否已赋值
                     * @return InstanceDetail 是否已赋值
                     */
                    bool InstanceDetailHasBeenSet() const;

                    /**
                     * 获取资产实例的规格信息
                     * @return SpecificationLimit 资产实例的规格信息
                     */
                    BGPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置资产实例的规格信息
                     * @param SpecificationLimit 资产实例的规格信息
                     */
                    void SetSpecificationLimit(const BGPInstanceSpecification& _specificationLimit);

                    /**
                     * 判断参数 SpecificationLimit 是否已赋值
                     * @return SpecificationLimit 是否已赋值
                     */
                    bool SpecificationLimitHasBeenSet() const;

                    /**
                     * 获取资产实例的使用统计信息
                     * @return Usage 资产实例的使用统计信息
                     */
                    BGPInstanceUsages GetUsage() const;

                    /**
                     * 设置资产实例的使用统计信息
                     * @param Usage 资产实例的使用统计信息
                     */
                    void SetUsage(const BGPInstanceUsages& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取资产实例所在的地域
                     * @return Region 资产实例所在的地域
                     */
                    RegionInfo GetRegion() const;

                    /**
                     * 设置资产实例所在的地域
                     * @param Region 资产实例所在的地域
                     */
                    void SetRegion(const RegionInfo& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * @return Status 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     * @param Status 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取购买时间
                     * @return CreatedTime 购买时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置购买时间
                     * @param CreatedTime 购买时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpiredTime 到期时间
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间
                     * @param ExpiredTime 到期时间
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取资产实例的名称
                     * @return Name 资产实例的名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产实例的名称
                     * @param Name 资产实例的名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackInfo 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PackInfo GetPackInfo() const;

                    /**
                     * 设置资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackInfo 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackInfo(const PackInfo& _packInfo);

                    /**
                     * 判断参数 PackInfo 是否已赋值
                     * @return PackInfo 是否已赋值
                     */
                    bool PackInfoHasBeenSet() const;

                    /**
                     * 获取高防包绑定的EIP属于的云产品信息
                     * @return EipProductInfos 高防包绑定的EIP属于的云产品信息
                     */
                    std::vector<EipProductInfo> GetEipProductInfos() const;

                    /**
                     * 设置高防包绑定的EIP属于的云产品信息
                     * @param EipProductInfos 高防包绑定的EIP属于的云产品信息
                     */
                    void SetEipProductInfos(const std::vector<EipProductInfo>& _eipProductInfos);

                    /**
                     * 判断参数 EipProductInfos 是否已赋值
                     * @return EipProductInfos 是否已赋值
                     */
                    bool EipProductInfosHasBeenSet() const;

                    /**
                     * 获取高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * @return BoundStatus 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     */
                    std::string GetBoundStatus() const;

                    /**
                     * 设置高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     * @param BoundStatus 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     */
                    void SetBoundStatus(const std::string& _boundStatus);

                    /**
                     * 判断参数 BoundStatus 是否已赋值
                     * @return BoundStatus 是否已赋值
                     */
                    bool BoundStatusHasBeenSet() const;

                    /**
                     * 获取四层防护严格级别
                     * @return DDoSLevel 四层防护严格级别
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置四层防护严格级别
                     * @param DDoSLevel 四层防护严格级别
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取CC防护开关
                     * @return CCEnable CC防护开关
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置CC防护开关
                     * @param CCEnable CC防护开关
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                private:

                    /**
                     * 资产实例的详细信息
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * 资产实例的规格信息
                     */
                    BGPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * 资产实例的使用统计信息
                     */
                    BGPInstanceUsages m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 资产实例所在的地域
                     */
                    RegionInfo m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产实例的防护状态，状态码如下：
"idle"：正常状态(无攻击)
"attacking"：攻击中
"blocking"：封堵中
"creating"：创建中
"deblocking"：解封中
"isolate"：回收隔离中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 购买时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 资产实例的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资产实例所属的套餐包信息，
注意：当资产实例不是套餐包的实例时，此字段为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PackInfo m_packInfo;
                    bool m_packInfoHasBeenSet;

                    /**
                     * 高防包绑定的EIP属于的云产品信息
                     */
                    std::vector<EipProductInfo> m_eipProductInfos;
                    bool m_eipProductInfosHasBeenSet;

                    /**
                     * 高防包绑定状态，取值[
"idle"：绑定已完成
 "bounding"：正在绑定中
"failed"：绑定失败
]
                     */
                    std::string m_boundStatus;
                    bool m_boundStatusHasBeenSet;

                    /**
                     * 四层防护严格级别
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * CC防护开关
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_
