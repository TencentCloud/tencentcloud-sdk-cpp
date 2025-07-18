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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关列表返回结果
                */
                class GatewaysData : public AbstractModel
                {
                public:
                    GatewaysData();
                    ~GatewaysData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关索引ID
                     * @return GatewayId 网关索引ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关索引ID
                     * @param _gatewayId 网关索引ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关编码
                     * @return GwId 网关编码
                     * 
                     */
                    std::string GetGwId() const;

                    /**
                     * 设置网关编码
                     * @param _gwId 网关编码
                     * 
                     */
                    void SetGwId(const std::string& _gwId);

                    /**
                     * 判断参数 GwId 是否已赋值
                     * @return GwId 是否已赋值
                     * 
                     */
                    bool GwIdHasBeenSet() const;

                    /**
                     * 获取网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * @return Name 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
                     * @param _name 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
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
                     * 获取网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @return Description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     * @param _description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
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
                     * 获取网关所属服务节点ID
                     * @return ClusterId 网关所属服务节点ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网关所属服务节点ID
                     * @param _clusterId 网关所属服务节点ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取网关所属服务节点名称
                     * @return ClusterName 网关所属服务节点名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置网关所属服务节点名称
                     * @param _clusterName 网关所属服务节点名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取网关所属地域
                     * @return Region 网关所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置网关所属地域
                     * @param _region 网关所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取网关状态，0：离线，1:在线
                     * @return Status 网关状态，0：离线，1:在线
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网关状态，0：离线，1:在线
                     * @param _status 网关状态，0：离线，1:在线
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网关激活时间
                     * @return CreatedAt 网关激活时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置网关激活时间
                     * @param _createdAt 网关激活时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取所属网关设备数量
                     * @return DeviceNum 所属网关设备数量
                     * 
                     */
                    int64_t GetDeviceNum() const;

                    /**
                     * 设置所属网关设备数量
                     * @param _deviceNum 所属网关设备数量
                     * 
                     */
                    void SetDeviceNum(const int64_t& _deviceNum);

                    /**
                     * 判断参数 DeviceNum 是否已赋值
                     * @return DeviceNum 是否已赋值
                     * 
                     */
                    bool DeviceNumHasBeenSet() const;

                private:

                    /**
                     * 网关索引ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关编码
                     */
                    std::string m_gwId;
                    bool m_gwIdHasBeenSet;

                    /**
                     * 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 网关所属服务节点ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 网关所属服务节点名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 网关所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 网关状态，0：离线，1:在线
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网关激活时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 所属网关设备数量
                     */
                    int64_t m_deviceNum;
                    bool m_deviceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_GATEWAYSDATA_H_
