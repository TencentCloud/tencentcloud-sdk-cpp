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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CcGeoIPBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DeleteCcGeoIPBlockConfig请求参数结构体
                */
                class DeleteCcGeoIPBlockConfigRequest : public AbstractModel
                {
                public:
                    DeleteCcGeoIPBlockConfigRequest();
                    ~DeleteCcGeoIPBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param InstanceId 资源实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CC区域封禁配置，填写参数时配置ID不能为空
                     * @return CcGeoIPBlockConfig CC区域封禁配置，填写参数时配置ID不能为空
                     */
                    CcGeoIPBlockConfig GetCcGeoIPBlockConfig() const;

                    /**
                     * 设置CC区域封禁配置，填写参数时配置ID不能为空
                     * @param CcGeoIPBlockConfig CC区域封禁配置，填写参数时配置ID不能为空
                     */
                    void SetCcGeoIPBlockConfig(const CcGeoIPBlockConfig& _ccGeoIPBlockConfig);

                    /**
                     * 判断参数 CcGeoIPBlockConfig 是否已赋值
                     * @return CcGeoIPBlockConfig 是否已赋值
                     */
                    bool CcGeoIPBlockConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CC区域封禁配置，填写参数时配置ID不能为空
                     */
                    CcGeoIPBlockConfig m_ccGeoIPBlockConfig;
                    bool m_ccGeoIPBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DELETECCGEOIPBLOCKCONFIGREQUEST_H_
