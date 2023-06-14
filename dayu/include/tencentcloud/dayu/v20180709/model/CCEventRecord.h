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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CC攻击事件记录
                */
                class CCEventRecord : public AbstractModel
                {
                public:
                    CCEventRecord();
                    ~CCEventRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
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
                     * 获取资源的IP
                     * @return Vip 资源的IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置资源的IP
                     * @param _vip 资源的IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取攻击开始时间
                     * @return StartTime 攻击开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置攻击开始时间
                     * @param _startTime 攻击开始时间
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
                     * 获取攻击结束时间
                     * @return EndTime 攻击结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置攻击结束时间
                     * @param _endTime 攻击结束时间
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
                     * 获取总请求QPS峰值
                     * @return ReqQps 总请求QPS峰值
                     * 
                     */
                    uint64_t GetReqQps() const;

                    /**
                     * 设置总请求QPS峰值
                     * @param _reqQps 总请求QPS峰值
                     * 
                     */
                    void SetReqQps(const uint64_t& _reqQps);

                    /**
                     * 判断参数 ReqQps 是否已赋值
                     * @return ReqQps 是否已赋值
                     * 
                     */
                    bool ReqQpsHasBeenSet() const;

                    /**
                     * 获取攻击QPS峰值
                     * @return DropQps 攻击QPS峰值
                     * 
                     */
                    uint64_t GetDropQps() const;

                    /**
                     * 设置攻击QPS峰值
                     * @param _dropQps 攻击QPS峰值
                     * 
                     */
                    void SetDropQps(const uint64_t& _dropQps);

                    /**
                     * 判断参数 DropQps 是否已赋值
                     * @return DropQps 是否已赋值
                     * 
                     */
                    bool DropQpsHasBeenSet() const;

                    /**
                     * 获取攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * @return AttackStatus 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * @param _attackStatus 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     * 
                     */
                    void SetAttackStatus(const uint64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

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
                     * 获取域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList 域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainList() const;

                    /**
                     * 设置域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList 域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainList(const std::string& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取uri列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UriList uri列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUriList() const;

                    /**
                     * 设置uri列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uriList uri列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUriList(const std::string& _uriList);

                    /**
                     * 判断参数 UriList 是否已赋值
                     * @return UriList 是否已赋值
                     * 
                     */
                    bool UriListHasBeenSet() const;

                    /**
                     * 获取攻击源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackipList 攻击源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackipList() const;

                    /**
                     * 设置攻击源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackipList 攻击源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackipList(const std::string& _attackipList);

                    /**
                     * 判断参数 AttackipList 是否已赋值
                     * @return AttackipList 是否已赋值
                     * 
                     */
                    bool AttackipListHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版；basic表示DDoS基础防护）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源的IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 攻击开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 攻击结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 总请求QPS峰值
                     */
                    uint64_t m_reqQps;
                    bool m_reqQpsHasBeenSet;

                    /**
                     * 攻击QPS峰值
                     */
                    uint64_t m_dropQps;
                    bool m_dropQpsHasBeenSet;

                    /**
                     * 攻击状态，取值[0（攻击中）, 1（攻击结束）]
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * uri列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uriList;
                    bool m_uriListHasBeenSet;

                    /**
                     * 攻击源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackipList;
                    bool m_attackipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCEVENTRECORD_H_
