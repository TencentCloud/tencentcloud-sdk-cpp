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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 各个可用区的参数信息
                */
                class MultiZoneSetting : public AbstractModel
                {
                public:
                    MultiZoneSetting();
                    ~MultiZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取"master"、"standby"、"third-party"
                     * @return ZoneTag "master"、"standby"、"third-party"
                     * 
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置"master"、"standby"、"third-party"
                     * @param _zoneTag "master"、"standby"、"third-party"
                     * 
                     */
                    void SetZoneTag(const std::string& _zoneTag);

                    /**
                     * 判断参数 ZoneTag 是否已赋值
                     * @return ZoneTag 是否已赋值
                     * 
                     */
                    bool ZoneTagHasBeenSet() const;

                    /**
                     * 获取无
                     * @return VPCSettings 无
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置无
                     * @param _vPCSettings 无
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Placement 无
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置无
                     * @param _placement 无
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ResourceSpec 无
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置无
                     * @param _resourceSpec 无
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                private:

                    /**
                     * "master"、"standby"、"third-party"
                     */
                    std::string m_zoneTag;
                    bool m_zoneTagHasBeenSet;

                    /**
                     * 无
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * 无
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 无
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIZONESETTING_H_
