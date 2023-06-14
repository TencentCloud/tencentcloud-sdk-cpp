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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_APOLLOENVPARAM_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_APOLLOENVPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Apollo 环境配置参数
                */
                class ApolloEnvParam : public AbstractModel
                {
                public:
                    ApolloEnvParam();
                    ~ApolloEnvParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名称
                     * @return Name 环境名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置环境名称
                     * @param _name 环境名称
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
                     * 获取环境内引擎的节点规格 ID
-1C2G
-2C4G
兼容原spec-xxxxxx形式的规格ID
                     * @return EngineResourceSpec 环境内引擎的节点规格 ID
-1C2G
-2C4G
兼容原spec-xxxxxx形式的规格ID
                     * 
                     */
                    std::string GetEngineResourceSpec() const;

                    /**
                     * 设置环境内引擎的节点规格 ID
-1C2G
-2C4G
兼容原spec-xxxxxx形式的规格ID
                     * @param _engineResourceSpec 环境内引擎的节点规格 ID
-1C2G
-2C4G
兼容原spec-xxxxxx形式的规格ID
                     * 
                     */
                    void SetEngineResourceSpec(const std::string& _engineResourceSpec);

                    /**
                     * 判断参数 EngineResourceSpec 是否已赋值
                     * @return EngineResourceSpec 是否已赋值
                     * 
                     */
                    bool EngineResourceSpecHasBeenSet() const;

                    /**
                     * 获取环境内引擎的节点数量
                     * @return EngineNodeNum 环境内引擎的节点数量
                     * 
                     */
                    int64_t GetEngineNodeNum() const;

                    /**
                     * 设置环境内引擎的节点数量
                     * @param _engineNodeNum 环境内引擎的节点数量
                     * 
                     */
                    void SetEngineNodeNum(const int64_t& _engineNodeNum);

                    /**
                     * 判断参数 EngineNodeNum 是否已赋值
                     * @return EngineNodeNum 是否已赋值
                     * 
                     */
                    bool EngineNodeNumHasBeenSet() const;

                    /**
                     * 获取配置存储空间大小，以GB为单位
                     * @return StorageCapacity 配置存储空间大小，以GB为单位
                     * 
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置配置存储空间大小，以GB为单位
                     * @param _storageCapacity 配置存储空间大小，以GB为单位
                     * 
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     * 
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取VPC ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * @return VpcId VPC ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * @param _vpcId VPC ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网 ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * @return SubnetId 子网 ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * @param _subnetId 子网 ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取环境描述
                     * @return EnvDesc 环境描述
                     * 
                     */
                    std::string GetEnvDesc() const;

                    /**
                     * 设置环境描述
                     * @param _envDesc 环境描述
                     * 
                     */
                    void SetEnvDesc(const std::string& _envDesc);

                    /**
                     * 判断参数 EnvDesc 是否已赋值
                     * @return EnvDesc 是否已赋值
                     * 
                     */
                    bool EnvDescHasBeenSet() const;

                private:

                    /**
                     * 环境名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境内引擎的节点规格 ID
-1C2G
-2C4G
兼容原spec-xxxxxx形式的规格ID
                     */
                    std::string m_engineResourceSpec;
                    bool m_engineResourceSpecHasBeenSet;

                    /**
                     * 环境内引擎的节点数量
                     */
                    int64_t m_engineNodeNum;
                    bool m_engineNodeNumHasBeenSet;

                    /**
                     * 配置存储空间大小，以GB为单位
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * VPC ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID。在 VPC 的子网内分配一个 IP 作为 ConfigServer 的访问地址
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 环境描述
                     */
                    std::string m_envDesc;
                    bool m_envDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_APOLLOENVPARAM_H_
