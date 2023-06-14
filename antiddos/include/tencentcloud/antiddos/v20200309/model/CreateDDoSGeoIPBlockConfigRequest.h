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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSGEOIPBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSGEOIPBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateDDoSGeoIPBlockConfig请求参数结构体
                */
                class CreateDDoSGeoIPBlockConfigRequest : public AbstractModel
                {
                public:
                    CreateDDoSGeoIPBlockConfigRequest();
                    ~CreateDDoSGeoIPBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取DDoS区域封禁配置，填写参数时配置ID请为空
                     * @return DDoSGeoIPBlockConfig DDoS区域封禁配置，填写参数时配置ID请为空
                     * 
                     */
                    DDoSGeoIPBlockConfig GetDDoSGeoIPBlockConfig() const;

                    /**
                     * 设置DDoS区域封禁配置，填写参数时配置ID请为空
                     * @param _dDoSGeoIPBlockConfig DDoS区域封禁配置，填写参数时配置ID请为空
                     * 
                     */
                    void SetDDoSGeoIPBlockConfig(const DDoSGeoIPBlockConfig& _dDoSGeoIPBlockConfig);

                    /**
                     * 判断参数 DDoSGeoIPBlockConfig 是否已赋值
                     * @return DDoSGeoIPBlockConfig 是否已赋值
                     * 
                     */
                    bool DDoSGeoIPBlockConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * DDoS区域封禁配置，填写参数时配置ID请为空
                     */
                    DDoSGeoIPBlockConfig m_dDoSGeoIPBlockConfig;
                    bool m_dDoSGeoIPBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSGEOIPBLOCKCONFIGREQUEST_H_
