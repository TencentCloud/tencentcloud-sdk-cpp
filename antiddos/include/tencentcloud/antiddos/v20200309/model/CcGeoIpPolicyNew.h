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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CC地域封禁列表详情
                */
                class CcGeoIpPolicyNew : public AbstractModel
                {
                public:
                    CcGeoIpPolicyNew();
                    ~CcGeoIpPolicyNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取协议，可取值HTTP，HTTPS
                     * @return Protocol 协议，可取值HTTP，HTTPS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，可取值HTTP，HTTPS
                     * @param _protocol 协议，可取值HTTP，HTTPS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取用户动作，drop或alg
                     * @return Action 用户动作，drop或alg
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置用户动作，drop或alg
                     * @param _action 用户动作，drop或alg
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取地域类型，分为china, oversea与customized
                     * @return RegionType 地域类型，分为china, oversea与customized
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置地域类型，分为china, oversea与customized
                     * @param _regionType 地域类型，分为china, oversea与customized
                     * 
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取用户选择封禁的地域ID列表
                     * @return AreaList 用户选择封禁的地域ID列表
                     * 
                     */
                    std::vector<uint64_t> GetAreaList() const;

                    /**
                     * 设置用户选择封禁的地域ID列表
                     * @param _areaList 用户选择封禁的地域ID列表
                     * 
                     */
                    void SetAreaList(const std::vector<uint64_t>& _areaList);

                    /**
                     * 判断参数 AreaList 是否已赋值
                     * @return AreaList 是否已赋值
                     * 
                     */
                    bool AreaListHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议，可取值HTTP，HTTPS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 用户动作，drop或alg
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 地域类型，分为china, oversea与customized
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * 用户选择封禁的地域ID列表
                     */
                    std::vector<uint64_t> m_areaList;
                    bool m_areaListHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_
