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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifyDedicatedClusterInfo请求参数结构体
                */
                class ModifyDedicatedClusterInfoRequest : public AbstractModel
                {
                public:
                    ModifyDedicatedClusterInfoRequest();
                    ~ModifyDedicatedClusterInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地专用集群ID
                     * @return DedicatedClusterId 本地专用集群ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置本地专用集群ID
                     * @param _dedicatedClusterId 本地专用集群ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取集群的新名称
                     * @return Name 集群的新名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群的新名称
                     * @param _name 集群的新名称
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
                     * 获取集群的新可用区
                     * @return Zone 集群的新可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置集群的新可用区
                     * @param _zone 集群的新可用区
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
                     * 获取集群的新描述信息
                     * @return Description 集群的新描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集群的新描述信息
                     * @param _description 集群的新描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取集群所在站点
                     * @return SiteId 集群所在站点
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置集群所在站点
                     * @param _siteId 集群所在站点
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                private:

                    /**
                     * 本地专用集群ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 集群的新名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群的新可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群的新描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 集群所在站点
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYDEDICATEDCLUSTERINFOREQUEST_H_
