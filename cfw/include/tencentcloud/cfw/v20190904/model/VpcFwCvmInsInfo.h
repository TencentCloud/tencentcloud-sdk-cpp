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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWCVMINSINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWCVMINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙实例的CVM信息
                */
                class VpcFwCvmInsInfo : public AbstractModel
                {
                public:
                    VpcFwCvmInsInfo();
                    ~VpcFwCvmInsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC防火墙实例ID
                     * @return FwInsId VPC防火墙实例ID
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置VPC防火墙实例ID
                     * @param _fwInsId VPC防火墙实例ID
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取CVM所在地域
                     * @return Region CVM所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置CVM所在地域
                     * @param _region CVM所在地域
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
                     * 获取CVM所在地域中文
                     * @return RegionZh CVM所在地域中文
                     * 
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置CVM所在地域中文
                     * @param _regionZh CVM所在地域中文
                     * 
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     * 
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取CVM所在地域详情
                     * @return RegionDetail CVM所在地域详情
                     * 
                     */
                    std::string GetRegionDetail() const;

                    /**
                     * 设置CVM所在地域详情
                     * @param _regionDetail CVM所在地域详情
                     * 
                     */
                    void SetRegionDetail(const std::string& _regionDetail);

                    /**
                     * 判断参数 RegionDetail 是否已赋值
                     * @return RegionDetail 是否已赋值
                     * 
                     */
                    bool RegionDetailHasBeenSet() const;

                    /**
                     * 获取主机所在可用区
                     * @return ZoneZh 主机所在可用区
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置主机所在可用区
                     * @param _zoneZh 主机所在可用区
                     * 
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     * 
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取备机所在可用区
                     * @return ZoneZhBack 备机所在可用区
                     * 
                     */
                    std::string GetZoneZhBack() const;

                    /**
                     * 设置备机所在可用区
                     * @param _zoneZhBack 备机所在可用区
                     * 
                     */
                    void SetZoneZhBack(const std::string& _zoneZhBack);

                    /**
                     * 判断参数 ZoneZhBack 是否已赋值
                     * @return ZoneZhBack 是否已赋值
                     * 
                     */
                    bool ZoneZhBackHasBeenSet() const;

                    /**
                     * 获取防火墙CVM带宽值
                     * @return BandWidth 防火墙CVM带宽值
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置防火墙CVM带宽值
                     * @param _bandWidth 防火墙CVM带宽值
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取实例主机所在可用区
                     * @return Zone 实例主机所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例主机所在可用区
                     * @param _zone 实例主机所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例备机所在可用区
                     * @return ZoneBak 实例备机所在可用区
                     * 
                     */
                    std::string GetZoneBak() const;

                    /**
                     * 设置实例备机所在可用区
                     * @param _zoneBak 实例备机所在可用区
                     * 
                     */
                    void SetZoneBak(const std::string& _zoneBak);

                    /**
                     * 判断参数 ZoneBak 是否已赋值
                     * @return ZoneBak 是否已赋值
                     * 
                     */
                    bool ZoneBakHasBeenSet() const;

                private:

                    /**
                     * VPC防火墙实例ID
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * CVM所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CVM所在地域中文
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * CVM所在地域详情
                     */
                    std::string m_regionDetail;
                    bool m_regionDetailHasBeenSet;

                    /**
                     * 主机所在可用区
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * 备机所在可用区
                     */
                    std::string m_zoneZhBack;
                    bool m_zoneZhBackHasBeenSet;

                    /**
                     * 防火墙CVM带宽值
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 实例主机所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例备机所在可用区
                     */
                    std::string m_zoneBak;
                    bool m_zoneBakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWCVMINSINFO_H_
