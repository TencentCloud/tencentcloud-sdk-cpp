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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PrePaySetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateSLInstance请求参数结构体
                */
                class CreateSLInstanceRequest : public AbstractModel
                {
                public:
                    CreateSLInstanceRequest();
                    ~CreateSLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例计费模式，0表示后付费，即按量计费。
                     * @return PayMode 实例计费模式，0表示后付费，即按量计费。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式，0表示后付费，即按量计费。
                     * @param _payMode 实例计费模式，0表示后付费，即按量计费。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例存储类型，填写CLOUD_HSSD，表示性能云存储。
                     * @return DiskType 实例存储类型，填写CLOUD_HSSD，表示性能云存储。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置实例存储类型，填写CLOUD_HSSD，表示性能云存储。
                     * @param _diskType 实例存储类型，填写CLOUD_HSSD，表示性能云存储。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。
                     * @return DiskSize 实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。
                     * @param _diskSize 实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。
                     * @return NodeType 实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。
                     * @param _nodeType 实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。
                     * @return ZoneSettings 实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。
                     * @param _zoneSettings 实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。
                     * 
                     */
                    void SetZoneSettings(const std::vector<ZoneSetting>& _zoneSettings);

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取实例要绑定的标签列表。
                     * @return Tags 实例要绑定的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置实例要绑定的标签列表。
                     * @param _tags 实例要绑定的标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取预付费参数
                     * @return PrePaySetting 预付费参数
                     * 
                     */
                    PrePaySetting GetPrePaySetting() const;

                    /**
                     * 设置预付费参数
                     * @param _prePaySetting 预付费参数
                     * 
                     */
                    void SetPrePaySetting(const PrePaySetting& _prePaySetting);

                    /**
                     * 判断参数 PrePaySetting 是否已赋值
                     * @return PrePaySetting 是否已赋值
                     * 
                     */
                    bool PrePaySettingHasBeenSet() const;

                    /**
                     * 获取唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * @return ClientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * @param _clientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式，0表示后付费，即按量计费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例存储类型，填写CLOUD_HSSD，表示性能云存储。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 实例单节点磁盘容量，单位GB，单节点磁盘容量需大于等于100，小于等于250*CPU核心数，容量调整步长为100。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 实例节点规格，可填写4C16G、8C32G、16C64G、32C128G，不区分大小写。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 实例可用区详细配置，当前支持多可用区，可用区数量只能为1或3，包含区域名称，VPC信息、节点数量，其中所有区域节点总数需大于等于3，小于等于50。
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * 实例要绑定的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 预付费参数
                     */
                    PrePaySetting m_prePaySetting;
                    bool m_prePaySettingHasBeenSet;

                    /**
                     * 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
