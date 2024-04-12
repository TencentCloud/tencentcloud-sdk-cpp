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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例地址信息
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地址的资源id标识。
                     * @return ResourceId 地址的资源id标识。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置地址的资源id标识。
                     * @param _resourceId 地址的资源id标识。
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
                     * 获取地址所在的vpc。
                     * @return UniqVpcId 地址所在的vpc。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置地址所在的vpc。
                     * @param _uniqVpcId 地址所在的vpc。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取地址所在的子网。
                     * @return UniqSubnetId 地址所在的子网。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置地址所在的子网。
                     * @param _uniqSubnetId 地址所在的子网。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取地址的vip。
                     * @return Vip 地址的vip。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置地址的vip。
                     * @param _vip 地址的vip。
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
                     * 获取地址的端口。
                     * @return VPort 地址的端口。
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置地址的端口。
                     * @param _vPort 地址的端口。
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取外网地址域名。
                     * @return WanDomain 外网地址域名。
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置外网地址域名。
                     * @param _wanDomain 外网地址域名。
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取外网地址端口。
                     * @return WanPort 外网地址端口。
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置外网地址端口。
                     * @param _wanPort 外网地址端口。
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                private:

                    /**
                     * 地址的资源id标识。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 地址所在的vpc。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 地址所在的子网。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 地址的vip。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 地址的端口。
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 外网地址域名。
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 外网地址端口。
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_
