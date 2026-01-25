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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEWORKMODEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEWORKMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupWorkModeInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZoneWorkMode请求参数结构体
                */
                class ModifyZoneWorkModeRequest : public AbstractModel
                {
                public:
                    ModifyZoneWorkModeRequest();
                    ~ModifyZoneWorkModeRequest() = default;
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
                     * 获取版本管理配置组工作模式。站点各配置模块可按照配置组维度开启「版本管理模式」或「即时生效模式」，详情请参考 [版本管理](https://cloud.tencent.com/document/product/1552/113690)。
                     * @return WorkModeInfos 版本管理配置组工作模式。站点各配置模块可按照配置组维度开启「版本管理模式」或「即时生效模式」，详情请参考 [版本管理](https://cloud.tencent.com/document/product/1552/113690)。
                     * 
                     */
                    std::vector<ConfigGroupWorkModeInfo> GetWorkModeInfos() const;

                    /**
                     * 设置版本管理配置组工作模式。站点各配置模块可按照配置组维度开启「版本管理模式」或「即时生效模式」，详情请参考 [版本管理](https://cloud.tencent.com/document/product/1552/113690)。
                     * @param _workModeInfos 版本管理配置组工作模式。站点各配置模块可按照配置组维度开启「版本管理模式」或「即时生效模式」，详情请参考 [版本管理](https://cloud.tencent.com/document/product/1552/113690)。
                     * 
                     */
                    void SetWorkModeInfos(const std::vector<ConfigGroupWorkModeInfo>& _workModeInfos);

                    /**
                     * 判断参数 WorkModeInfos 是否已赋值
                     * @return WorkModeInfos 是否已赋值
                     * 
                     */
                    bool WorkModeInfosHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 版本管理配置组工作模式。站点各配置模块可按照配置组维度开启「版本管理模式」或「即时生效模式」，详情请参考 [版本管理](https://cloud.tencent.com/document/product/1552/113690)。
                     */
                    std::vector<ConfigGroupWorkModeInfo> m_workModeInfos;
                    bool m_workModeInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONEWORKMODEREQUEST_H_
