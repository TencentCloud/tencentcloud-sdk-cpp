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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWDEPLOY_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWDEPLOY_H_

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
                * 防火墙部署输入参数列表
                */
                class FwDeploy : public AbstractModel
                {
                public:
                    FwDeploy();
                    ~FwDeploy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙部署地域
                     * @return DeployRegion 防火墙部署地域
                     * 
                     */
                    std::string GetDeployRegion() const;

                    /**
                     * 设置防火墙部署地域
                     * @param _deployRegion 防火墙部署地域
                     * 
                     */
                    void SetDeployRegion(const std::string& _deployRegion);

                    /**
                     * 判断参数 DeployRegion 是否已赋值
                     * @return DeployRegion 是否已赋值
                     * 
                     */
                    bool DeployRegionHasBeenSet() const;

                    /**
                     * 获取带宽，单位：Mbps
                     * @return Width 带宽，单位：Mbps
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置带宽，单位：Mbps
                     * @param _width 带宽，单位：Mbps
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     * @return CrossAZone 异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     * 
                     */
                    int64_t GetCrossAZone() const;

                    /**
                     * 设置异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     * @param _crossAZone 异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     * 
                     */
                    void SetCrossAZone(const int64_t& _crossAZone);

                    /**
                     * 判断参数 CrossAZone 是否已赋值
                     * @return CrossAZone 是否已赋值
                     * 
                     */
                    bool CrossAZoneHasBeenSet() const;

                    /**
                     * 获取主可用区，为空则选择默认可用区
                     * @return Zone 主可用区，为空则选择默认可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置主可用区，为空则选择默认可用区
                     * @param _zone 主可用区，为空则选择默认可用区
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
                     * 获取备可用区，为空则选择默认可用区
                     * @return ZoneBak 备可用区，为空则选择默认可用区
                     * 
                     */
                    std::string GetZoneBak() const;

                    /**
                     * 设置备可用区，为空则选择默认可用区
                     * @param _zoneBak 备可用区，为空则选择默认可用区
                     * 
                     */
                    void SetZoneBak(const std::string& _zoneBak);

                    /**
                     * 判断参数 ZoneBak 是否已赋值
                     * @return ZoneBak 是否已赋值
                     * 
                     */
                    bool ZoneBakHasBeenSet() const;

                    /**
                     * 获取若为cdc防火墙时填充该id
                     * @return CdcId 若为cdc防火墙时填充该id
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置若为cdc防火墙时填充该id
                     * @param _cdcId 若为cdc防火墙时填充该id
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙部署地域
                     */
                    std::string m_deployRegion;
                    bool m_deployRegionHasBeenSet;

                    /**
                     * 带宽，单位：Mbps
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     */
                    int64_t m_crossAZone;
                    bool m_crossAZoneHasBeenSet;

                    /**
                     * 主可用区，为空则选择默认可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 备可用区，为空则选择默认可用区
                     */
                    std::string m_zoneBak;
                    bool m_zoneBakHasBeenSet;

                    /**
                     * 若为cdc防火墙时填充该id
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWDEPLOY_H_
