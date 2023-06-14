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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEWITHDOMAINREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEWITHDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NewModeItems.h>
#include <tencentcloud/cfw/v20190904/model/FwCidrInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateNatFwInstanceWithDomain请求参数结构体
                */
                class CreateNatFwInstanceWithDomainRequest : public AbstractModel
                {
                public:
                    CreateNatFwInstanceWithDomainRequest();
                    ~CreateNatFwInstanceWithDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙实例名称
                     * @return Name 防火墙实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置防火墙实例名称
                     * @param _name 防火墙实例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return Width 带宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置带宽
                     * @param _width 带宽
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
                     * 获取模式 1：接入模式；0：新增模式
                     * @return Mode 模式 1：接入模式；0：新增模式
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置模式 1：接入模式；0：新增模式
                     * @param _mode 模式 1：接入模式；0：新增模式
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。
                     * @return NewModeItems 新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。
                     * 
                     */
                    NewModeItems GetNewModeItems() const;

                    /**
                     * 设置新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。
                     * @param _newModeItems 新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。
                     * 
                     */
                    void SetNewModeItems(const NewModeItems& _newModeItems);

                    /**
                     * 判断参数 NewModeItems 是否已赋值
                     * @return NewModeItems 是否已赋值
                     * 
                     */
                    bool NewModeItemsHasBeenSet() const;

                    /**
                     * 获取接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。
                     * @return NatGwList 接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。
                     * 
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。
                     * @param _natGwList 接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。
                     * 
                     */
                    void SetNatGwList(const std::vector<std::string>& _natGwList);

                    /**
                     * 判断参数 NatGwList 是否已赋值
                     * @return NatGwList 是否已赋值
                     * 
                     */
                    bool NatGwListHasBeenSet() const;

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
                     * 获取0不创建域名,1创建域名
                     * @return IsCreateDomain 0不创建域名,1创建域名
                     * 
                     */
                    int64_t GetIsCreateDomain() const;

                    /**
                     * 设置0不创建域名,1创建域名
                     * @param _isCreateDomain 0不创建域名,1创建域名
                     * 
                     */
                    void SetIsCreateDomain(const int64_t& _isCreateDomain);

                    /**
                     * 判断参数 IsCreateDomain 是否已赋值
                     * @return IsCreateDomain 是否已赋值
                     * 
                     */
                    bool IsCreateDomainHasBeenSet() const;

                    /**
                     * 获取如果要创建域名则必填
                     * @return Domain 如果要创建域名则必填
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置如果要创建域名则必填
                     * @param _domain 如果要创建域名则必填
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
                     * 获取指定防火墙使用网段信息
                     * @return FwCidrInfo 指定防火墙使用网段信息
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置指定防火墙使用网段信息
                     * @param _fwCidrInfo 指定防火墙使用网段信息
                     * 
                     */
                    void SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo);

                    /**
                     * 判断参数 FwCidrInfo 是否已赋值
                     * @return FwCidrInfo 是否已赋值
                     * 
                     */
                    bool FwCidrInfoHasBeenSet() const;

                private:

                    /**
                     * 防火墙实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 带宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 模式 1：接入模式；0：新增模式
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。
                     */
                    NewModeItems m_newModeItems;
                    bool m_newModeItemsHasBeenSet;

                    /**
                     * 接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

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
                     * 异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备
                     */
                    int64_t m_crossAZone;
                    bool m_crossAZoneHasBeenSet;

                    /**
                     * 0不创建域名,1创建域名
                     */
                    int64_t m_isCreateDomain;
                    bool m_isCreateDomainHasBeenSet;

                    /**
                     * 如果要创建域名则必填
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 指定防火墙使用网段信息
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEWITHDOMAINREQUEST_H_
