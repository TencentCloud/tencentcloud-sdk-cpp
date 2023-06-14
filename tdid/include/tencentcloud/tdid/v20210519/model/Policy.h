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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_POLICY_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_POLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 策略管理
                */
                class Policy : public AbstractModel
                {
                public:
                    Policy();
                    ~Policy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取披露策略索引
                     * @return Id 披露策略索引
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置披露策略索引
                     * @param _id 披露策略索引
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取披露策略名称
                     * @return Name 披露策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置披露策略名称
                     * @param _name 披露策略名称
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
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param _clusterId 网络ID
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
                     * 获取群组ID
                     * @return GroupId 群组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取合约应用ID
                     * @return ContractAppId 合约应用ID
                     * 
                     */
                    uint64_t GetContractAppId() const;

                    /**
                     * 设置合约应用ID
                     * @param _contractAppId 合约应用ID
                     * 
                     */
                    void SetContractAppId(const uint64_t& _contractAppId);

                    /**
                     * 判断参数 ContractAppId 是否已赋值
                     * @return ContractAppId 是否已赋值
                     * 
                     */
                    bool ContractAppIdHasBeenSet() const;

                    /**
                     * 获取披露策略ID
                     * @return PolicyId 披露策略ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置披露策略ID
                     * @param _policyId 披露策略ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取凭证模板ID
                     * @return CptId 凭证模板ID
                     * 
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置凭证模板ID
                     * @param _cptId 凭证模板ID
                     * 
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     * 
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取策略Json
                     * @return PolicyJson 策略Json
                     * 
                     */
                    std::string GetPolicyJson() const;

                    /**
                     * 设置策略Json
                     * @param _policyJson 策略Json
                     * 
                     */
                    void SetPolicyJson(const std::string& _policyJson);

                    /**
                     * 判断参数 PolicyJson 是否已赋值
                     * @return PolicyJson 是否已赋值
                     * 
                     */
                    bool PolicyJsonHasBeenSet() const;

                    /**
                     * 获取生成时间
                     * @return CreateTime 生成时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置生成时间
                     * @param _createTime 生成时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建者DID
                     * @return CreatorDid 创建者DID
                     * 
                     */
                    std::string GetCreatorDid() const;

                    /**
                     * 设置创建者DID
                     * @param _creatorDid 创建者DID
                     * 
                     */
                    void SetCreatorDid(const std::string& _creatorDid);

                    /**
                     * 判断参数 CreatorDid 是否已赋值
                     * @return CreatorDid 是否已赋值
                     * 
                     */
                    bool CreatorDidHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param _appName 应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取模板索引
                     * @return CptIndex 模板索引
                     * 
                     */
                    uint64_t GetCptIndex() const;

                    /**
                     * 设置模板索引
                     * @param _cptIndex 模板索引
                     * 
                     */
                    void SetCptIndex(const uint64_t& _cptIndex);

                    /**
                     * 判断参数 CptIndex 是否已赋值
                     * @return CptIndex 是否已赋值
                     * 
                     */
                    bool CptIndexHasBeenSet() const;

                private:

                    /**
                     * 披露策略索引
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 披露策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 服务ID
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 合约应用ID
                     */
                    uint64_t m_contractAppId;
                    bool m_contractAppIdHasBeenSet;

                    /**
                     * 披露策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 凭证模板ID
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * 策略Json
                     */
                    std::string m_policyJson;
                    bool m_policyJsonHasBeenSet;

                    /**
                     * 生成时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建者DID
                     */
                    std::string m_creatorDid;
                    bool m_creatorDidHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 模板索引
                     */
                    uint64_t m_cptIndex;
                    bool m_cptIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_POLICY_H_
