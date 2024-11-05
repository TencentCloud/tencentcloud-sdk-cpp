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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_

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
                * db资产详情
                */
                class DbAssetInfo : public AbstractModel
                {
                public:
                    DbAssetInfo();
                    ~DbAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云防状态
                     * @return CFWStatus 云防状态
                     * 
                     */
                    uint64_t GetCFWStatus() const;

                    /**
                     * 设置云防状态
                     * @param _cFWStatus 云防状态
                     * 
                     */
                    void SetCFWStatus(const uint64_t& _cFWStatus);

                    /**
                     * 判断参数 CFWStatus 是否已赋值
                     * @return CFWStatus 是否已赋值
                     * 
                     */
                    bool CFWStatusHasBeenSet() const;

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
                     * 获取vpc信息
                     * @return VpcName vpc信息
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc信息
                     * @param _vpcName vpc信息
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取私网ip
                     * @return PrivateIp 私网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置私网ip
                     * @param _privateIp 私网ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

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
                     * 获取vpc信息
                     * @return VpcId vpc信息
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc信息
                     * @param _vpcId vpc信息
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
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
                     * 获取云防保护版本
                     * @return CFWProtectLevel 云防保护版本
                     * 
                     */
                    uint64_t GetCFWProtectLevel() const;

                    /**
                     * 设置云防保护版本
                     * @param _cFWProtectLevel 云防保护版本
                     * 
                     */
                    void SetCFWProtectLevel(const uint64_t& _cFWProtectLevel);

                    /**
                     * 判断参数 CFWProtectLevel 是否已赋值
                     * @return CFWProtectLevel 是否已赋值
                     * 
                     */
                    bool CFWProtectLevelHasBeenSet() const;

                    /**
                     * 获取tag信息
                     * @return Tag tag信息
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置tag信息
                     * @param _tag tag信息
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 云防状态
                     */
                    uint64_t m_cFWStatus;
                    bool m_cFWStatusHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * vpc信息
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 私网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpc信息
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 云防保护版本
                     */
                    uint64_t m_cFWProtectLevel;
                    bool m_cFWProtectLevelHasBeenSet;

                    /**
                     * tag信息
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_
