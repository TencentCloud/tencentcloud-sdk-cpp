/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_

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
                * CreateNatFwInstance请求参数结构体
                */
                class CreateNatFwInstanceRequest : public AbstractModel
                {
                public:
                    CreateNatFwInstanceRequest();
                    ~CreateNatFwInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防火墙实例名称</p>
                     * @return Name <p>防火墙实例名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>防火墙实例名称</p>
                     * @param _name <p>防火墙实例名称</p>
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
                     * 获取<p>带宽</p>
                     * @return Width <p>带宽</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>带宽</p>
                     * @param _width <p>带宽</p>
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
                     * 获取<p>模式 1：接入模式；0：新增模式</p>
                     * @return Mode <p>模式 1：接入模式；0：新增模式</p>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>模式 1：接入模式；0：新增模式</p>
                     * @param _mode <p>模式 1：接入模式；0：新增模式</p>
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
                     * 获取<p>新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。</p>
                     * @return NewModeItems <p>新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。</p>
                     * 
                     */
                    NewModeItems GetNewModeItems() const;

                    /**
                     * 设置<p>新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。</p>
                     * @param _newModeItems <p>新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。</p>
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
                     * 获取<p>接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。</p>
                     * @return NatGwList <p>接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。</p>
                     * 
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置<p>接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。</p>
                     * @param _natGwList <p>接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。</p>
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
                     * 获取<p>主可用区，为空则选择默认可用区</p>
                     * @return Zone <p>主可用区，为空则选择默认可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>主可用区，为空则选择默认可用区</p>
                     * @param _zone <p>主可用区，为空则选择默认可用区</p>
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
                     * 获取<p>备可用区，为空则选择默认可用区</p>
                     * @return ZoneBak <p>备可用区，为空则选择默认可用区</p>
                     * 
                     */
                    std::string GetZoneBak() const;

                    /**
                     * 设置<p>备可用区，为空则选择默认可用区</p>
                     * @param _zoneBak <p>备可用区，为空则选择默认可用区</p>
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
                     * 获取<p>异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备</p>
                     * @return CrossAZone <p>异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备</p>
                     * 
                     */
                    int64_t GetCrossAZone() const;

                    /**
                     * 设置<p>异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备</p>
                     * @param _crossAZone <p>异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备</p>
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
                     * 获取<p>指定防火墙使用网段信息</p>
                     * @return FwCidrInfo <p>指定防火墙使用网段信息</p>
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置<p>指定防火墙使用网段信息</p>
                     * @param _fwCidrInfo <p>指定防火墙使用网段信息</p>
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
                     * <p>防火墙实例名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>带宽</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>模式 1：接入模式；0：新增模式</p>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>新增模式传递参数，其中NewModeItems和NatgwList至少传递一种。</p>
                     */
                    NewModeItems m_newModeItems;
                    bool m_newModeItemsHasBeenSet;

                    /**
                     * <p>接入模式接入的nat网关列表，其中NewModeItems和NatgwList至少传递一种。</p>
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

                    /**
                     * <p>主可用区，为空则选择默认可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>备可用区，为空则选择默认可用区</p>
                     */
                    std::string m_zoneBak;
                    bool m_zoneBakHasBeenSet;

                    /**
                     * <p>异地灾备 1：使用异地灾备；0：不使用异地灾备；为空则默认不使用异地灾备</p>
                     */
                    int64_t m_crossAZone;
                    bool m_crossAZoneHasBeenSet;

                    /**
                     * <p>指定防火墙使用网段信息</p>
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_
