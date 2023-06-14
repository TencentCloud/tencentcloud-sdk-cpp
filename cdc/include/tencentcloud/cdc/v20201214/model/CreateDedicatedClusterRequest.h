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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_

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
                * CreateDedicatedCluster请求参数结构体
                */
                class CreateDedicatedClusterRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterRequest();
                    ~CreateDedicatedClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专用集群所属的SiteId
                     * @return SiteId 专用集群所属的SiteId
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置专用集群所属的SiteId
                     * @param _siteId 专用集群所属的SiteId
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取专用集群的名称
                     * @return Name 专用集群的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置专用集群的名称
                     * @param _name 专用集群的名称
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
                     * 获取专用集群所属的可用区
                     * @return Zone 专用集群所属的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置专用集群所属的可用区
                     * @param _zone 专用集群所属的可用区
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
                     * 获取专用集群的描述
                     * @return Description 专用集群的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置专用集群的描述
                     * @param _description 专用集群的描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 专用集群所属的SiteId
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 专用集群的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 专用集群所属的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 专用集群的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERREQUEST_H_
