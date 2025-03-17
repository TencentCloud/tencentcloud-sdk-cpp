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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 专用集群列表
                */
                class DedicatedCluster : public AbstractModel
                {
                public:
                    DedicatedCluster();
                    ~DedicatedCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用集群id。如"cluster-xxxxx"。
                     * @return DedicatedClusterId 专用集群id。如"cluster-xxxxx"。
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专用集群id。如"cluster-xxxxx"。
                     * @param _dedicatedClusterId 专用集群id。如"cluster-xxxxx"。
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
                     * 获取专用集群所属可用区名称。
                     * @return Zone 专用集群所属可用区名称。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置专用集群所属可用区名称。
                     * @param _zone 专用集群所属可用区名称。
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
                     * 获取专用集群的描述。
                     * @return Description 专用集群的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置专用集群的描述。
                     * @param _description 专用集群的描述。
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
                     * 获取专用集群的名称。
                     * @return Name 专用集群的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置专用集群的名称。
                     * @param _name 专用集群的名称。
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
                     * 获取专用集群的生命周期。如"PENDING"。
                     * @return LifecycleStatus 专用集群的生命周期。如"PENDING"。
                     * 
                     */
                    std::string GetLifecycleStatus() const;

                    /**
                     * 设置专用集群的生命周期。如"PENDING"。
                     * @param _lifecycleStatus 专用集群的生命周期。如"PENDING"。
                     * 
                     */
                    void SetLifecycleStatus(const std::string& _lifecycleStatus);

                    /**
                     * 判断参数 LifecycleStatus 是否已赋值
                     * @return LifecycleStatus 是否已赋值
                     * 
                     */
                    bool LifecycleStatusHasBeenSet() const;

                    /**
                     * 获取专用集群的创建时间。
                     * @return CreateTime 专用集群的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置专用集群的创建时间。
                     * @param _createTime 专用集群的创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取专用集群所属的站点id。
                     * @return SiteId 专用集群所属的站点id。
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置专用集群所属的站点id。
                     * @param _siteId 专用集群所属的站点id。
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
                     * 获取专用集群的运营状态
                     * @return RunningStatus 专用集群的运营状态
                     * 
                     */
                    std::string GetRunningStatus() const;

                    /**
                     * 设置专用集群的运营状态
                     * @param _runningStatus 专用集群的运营状态
                     * 
                     */
                    void SetRunningStatus(const std::string& _runningStatus);

                    /**
                     * 判断参数 RunningStatus 是否已赋值
                     * @return RunningStatus 是否已赋值
                     * 
                     */
                    bool RunningStatusHasBeenSet() const;

                private:

                    /**
                     * 专用集群id。如"cluster-xxxxx"。
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * 专用集群所属可用区名称。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 专用集群的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 专用集群的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 专用集群的生命周期。如"PENDING"。
                     */
                    std::string m_lifecycleStatus;
                    bool m_lifecycleStatusHasBeenSet;

                    /**
                     * 专用集群的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 专用集群所属的站点id。
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 专用集群的运营状态
                     */
                    std::string m_runningStatus;
                    bool m_runningStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_
