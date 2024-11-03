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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_VIPINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_VIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Vip信息
                */
                class VipInfo : public AbstractModel
                {
                public:
                    VipInfo();
                    ~VipInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VIP地址
                     * @return Vip VIP地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP地址
                     * @param _vip VIP地址
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
                     * 获取waf实例id
                     * @return InstanceId waf实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置waf实例id
                     * @param _instanceId waf实例id
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
                     * 获取创建时间
                     * @return InstanceCreateTime 创建时间
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _instanceCreateTime 创建时间
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取ip运营商类型
                     * @return ISP ip运营商类型
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ip运营商类型
                     * @param _iSP ip运营商类型
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取ip类型
                     * @return VipType ip类型
                     * 
                     */
                    std::string GetVipType() const;

                    /**
                     * 设置ip类型
                     * @param _vipType ip类型
                     * 
                     */
                    void SetVipType(const std::string& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取域名信息
                     * @return AddressName 域名信息
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置域名信息
                     * @param _addressName 域名信息
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                private:

                    /**
                     * VIP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * waf实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * ip运营商类型
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * ip类型
                     */
                    std::string m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * 域名信息
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_VIPINFO_H_
