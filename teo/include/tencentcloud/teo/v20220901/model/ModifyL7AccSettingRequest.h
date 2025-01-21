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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyL7AccSetting请求参数结构体
                */
                class ModifyL7AccSettingRequest : public AbstractModel
                {
                public:
                    ModifyL7AccSettingRequest();
                    ~ModifyL7AccSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点加速全局配置，该参数中的配置会对站点下的所有域名生效。您只需直接修改所需的配置，未传入的其他配置将保持原有状态。


                     * @return ZoneConfig 站点加速全局配置，该参数中的配置会对站点下的所有域名生效。您只需直接修改所需的配置，未传入的其他配置将保持原有状态。


                     * 
                     */
                    ZoneConfig GetZoneConfig() const;

                    /**
                     * 设置站点加速全局配置，该参数中的配置会对站点下的所有域名生效。您只需直接修改所需的配置，未传入的其他配置将保持原有状态。


                     * @param _zoneConfig 站点加速全局配置，该参数中的配置会对站点下的所有域名生效。您只需直接修改所需的配置，未传入的其他配置将保持原有状态。


                     * 
                     */
                    void SetZoneConfig(const ZoneConfig& _zoneConfig);

                    /**
                     * 判断参数 ZoneConfig 是否已赋值
                     * @return ZoneConfig 是否已赋值
                     * 
                     */
                    bool ZoneConfigHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点加速全局配置，该参数中的配置会对站点下的所有域名生效。您只需直接修改所需的配置，未传入的其他配置将保持原有状态。


                     */
                    ZoneConfig m_zoneConfig;
                    bool m_zoneConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCSETTINGREQUEST_H_
