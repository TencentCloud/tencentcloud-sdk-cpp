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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNameWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集成集群proxy地址配置
                */
                class ProxyEndPointConfigInfo : public AbstractModel
                {
                public:
                    ProxyEndPointConfigInfo();
                    ~ProxyEndPointConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属VPC网络ID
                     * @return UniqueVpcId 所属VPC网络ID
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param _uniqueVpcId 所属VPC网络ID
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return UniqueSubnetId 所属子网ID
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param _uniqueSubnetId 所属子网ID
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取安全组id数组
                     * @return SecurityGroupIds 安全组id数组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组id数组
                     * @param _securityGroupIds 安全组id数组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取权重模式： system-系统分配，custom-自定义
                     * @return WeightMode 权重模式： system-系统分配，custom-自定义
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置权重模式： system-系统分配，custom-自定义
                     * @param _weightMode 权重模式： system-系统分配，custom-自定义
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取是否自动添加只读实例，yes-是，no-不自动添加
                     * @return AutoAddRo 是否自动添加只读实例，yes-是，no-不自动添加
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加只读实例，yes-是，no-不自动添加
                     * @param _autoAddRo 是否自动添加只读实例，yes-是，no-不自动添加
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取读写属性： READWRITE,READONLY
                     * @return RwType 读写属性： READWRITE,READONLY
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置读写属性： READWRITE,READONLY
                     * @param _rwType 读写属性： READWRITE,READONLY
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取权重信息
                     * @return InstanceNameWeights 权重信息
                     * 
                     */
                    std::vector<InstanceNameWeight> GetInstanceNameWeights() const;

                    /**
                     * 设置权重信息
                     * @param _instanceNameWeights 权重信息
                     * 
                     */
                    void SetInstanceNameWeights(const std::vector<InstanceNameWeight>& _instanceNameWeights);

                    /**
                     * 判断参数 InstanceNameWeights 是否已赋值
                     * @return InstanceNameWeights 是否已赋值
                     * 
                     */
                    bool InstanceNameWeightsHasBeenSet() const;

                private:

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 安全组id数组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 权重模式： system-系统分配，custom-自定义
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 是否自动添加只读实例，yes-是，no-不自动添加
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * 读写属性： READWRITE,READONLY
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * 权重信息
                     */
                    std::vector<InstanceNameWeight> m_instanceNameWeights;
                    bool m_instanceNameWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_
