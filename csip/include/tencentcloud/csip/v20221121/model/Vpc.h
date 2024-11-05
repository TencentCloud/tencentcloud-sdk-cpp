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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * vpc列表数据
                */
                class Vpc : public AbstractModel
                {
                public:
                    Vpc();
                    ~Vpc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网(只支持32位)
                     * @return Subnet 子网(只支持32位)
                     * 
                     */
                    uint64_t GetSubnet() const;

                    /**
                     * 设置子网(只支持32位)
                     * @param _subnet 子网(只支持32位)
                     * 
                     */
                    void SetSubnet(const uint64_t& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取互通vpc(只支持32位)
                     * @return ConnectedVpc 互通vpc(只支持32位)
                     * 
                     */
                    uint64_t GetConnectedVpc() const;

                    /**
                     * 设置互通vpc(只支持32位)
                     * @param _connectedVpc 互通vpc(只支持32位)
                     * 
                     */
                    void SetConnectedVpc(const uint64_t& _connectedVpc);

                    /**
                     * 判断参数 ConnectedVpc 是否已赋值
                     * @return ConnectedVpc 是否已赋值
                     * 
                     */
                    bool ConnectedVpcHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取region区域
                     * @return Region region区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置region区域
                     * @param _region region区域
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
                     * 获取云服务器(只支持32位)
                     * @return CVM 云服务器(只支持32位)
                     * 
                     */
                    uint64_t GetCVM() const;

                    /**
                     * 设置云服务器(只支持32位)
                     * @param _cVM 云服务器(只支持32位)
                     * 
                     */
                    void SetCVM(const uint64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取dns域名
                     * @return DNS dns域名
                     * 
                     */
                    std::vector<std::string> GetDNS() const;

                    /**
                     * 设置dns域名
                     * @param _dNS dns域名
                     * 
                     */
                    void SetDNS(const std::vector<std::string>& _dNS);

                    /**
                     * 判断参数 DNS 是否已赋值
                     * @return DNS 是否已赋值
                     * 
                     */
                    bool DNSHasBeenSet() const;

                    /**
                     * 获取资产名称
                     * @return AssetName 资产名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
                     * @param _assetName 资产名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取cidr网段
                     * @return CIDR cidr网段
                     * 
                     */
                    std::string GetCIDR() const;

                    /**
                     * 设置cidr网段
                     * @param _cIDR cidr网段
                     * 
                     */
                    void SetCIDR(const std::string& _cIDR);

                    /**
                     * 判断参数 CIDR 是否已赋值
                     * @return CIDR 是否已赋值
                     * 
                     */
                    bool CIDRHasBeenSet() const;

                    /**
                     * 获取资产创建时间
                     * @return CreateTime 资产创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资产创建时间
                     * @param _createTime 资产创建时间
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
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取uin
                     * @return Uin uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置uin
                     * @param _uin uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return Nick 昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置昵称
                     * @param _nick 昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取是否新资产 1新
                     * @return IsNewAsset 是否新资产 1新
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置是否新资产 1新
                     * @param _isNewAsset 是否新资产 1新
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取是否核心资产1是 2不是
                     * @return IsCore 是否核心资产1是 2不是
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心资产1是 2不是
                     * @param _isCore 是否核心资产1是 2不是
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                private:

                    /**
                     * 子网(只支持32位)
                     */
                    uint64_t m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * 互通vpc(只支持32位)
                     */
                    uint64_t m_connectedVpc;
                    bool m_connectedVpcHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * region区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 云服务器(只支持32位)
                     */
                    uint64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * dns域名
                     */
                    std::vector<std::string> m_dNS;
                    bool m_dNSHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * cidr网段
                     */
                    std::string m_cIDR;
                    bool m_cIDRHasBeenSet;

                    /**
                     * 资产创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 是否新资产 1新
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 是否核心资产1是 2不是
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_
