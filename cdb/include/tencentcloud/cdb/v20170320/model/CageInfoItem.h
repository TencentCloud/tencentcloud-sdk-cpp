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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CAGEINFOITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CAGEINFOITEM_H_

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
                * 金融围拢、独享集群详情
                */
                class CageInfoItem : public AbstractModel
                {
                public:
                    CageInfoItem();
                    ~CageInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>金融围拢ID、独享集群ID</p>
                     * @return CageId <p>金融围拢ID、独享集群ID</p>
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置<p>金融围拢ID、独享集群ID</p>
                     * @param _cageId <p>金融围拢ID、独享集群ID</p>
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区ID</p>
                     * @return ZoneId <p>可用区ID</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区ID</p>
                     * @param _zoneId <p>可用区ID</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>金融围拢名称/独享集群名称</p>
                     * @return CageName <p>金融围拢名称/独享集群名称</p>
                     * 
                     */
                    std::string GetCageName() const;

                    /**
                     * 设置<p>金融围拢名称/独享集群名称</p>
                     * @param _cageName <p>金融围拢名称/独享集群名称</p>
                     * 
                     */
                    void SetCageName(const std::string& _cageName);

                    /**
                     * 判断参数 CageName 是否已赋值
                     * @return CageName 是否已赋值
                     * 
                     */
                    bool CageNameHasBeenSet() const;

                    /**
                     * 获取<p>是否对外售卖</p>
                     * @return Status <p>是否对外售卖</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>是否对外售卖</p>
                     * @param _status <p>是否对外售卖</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>后端支持围拢发货的设备类型，normal/common</p>
                     * @return DeviceType <p>后端支持围拢发货的设备类型，normal/common</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>后端支持围拢发货的设备类型，normal/common</p>
                     * @param _deviceType <p>后端支持围拢发货的设备类型，normal/common</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>支持独享集群的可用区</p>
                     * @return ZoneIds <p>支持独享集群的可用区</p>
                     * 
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置<p>支持独享集群的可用区</p>
                     * @param _zoneIds <p>支持独享集群的可用区</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<uint64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * <p>金融围拢ID、独享集群ID</p>
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * <p>可用区ID</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>金融围拢名称/独享集群名称</p>
                     */
                    std::string m_cageName;
                    bool m_cageNameHasBeenSet;

                    /**
                     * <p>是否对外售卖</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>后端支持围拢发货的设备类型，normal/common</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>支持独享集群的可用区</p>
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CAGEINFOITEM_H_
