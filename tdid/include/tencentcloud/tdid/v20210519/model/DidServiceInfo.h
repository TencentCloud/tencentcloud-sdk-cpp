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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_

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
                * DID服务基本信息
                */
                class DidServiceInfo : public AbstractModel
                {
                public:
                    DidServiceInfo();
                    ~DidServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DID服务索引
                     * @return Id DID服务索引
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置DID服务索引
                     * @param _id DID服务索引
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
                     * 获取应用ID
                     * @return Appid 应用ID
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置应用ID
                     * @param _appid 应用ID
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取账号唯一标识
                     * @return Uin 账号唯一标识
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号唯一标识
                     * @param _uin 账号唯一标识
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取联盟id
                     * @return ConsortiumId 联盟id
                     * 
                     */
                    int64_t GetConsortiumId() const;

                    /**
                     * 设置联盟id
                     * @param _consortiumId 联盟id
                     * 
                     */
                    void SetConsortiumId(const int64_t& _consortiumId);

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     * 
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取联盟名称
                     * @return ConsortiumName 联盟名称
                     * 
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置联盟名称
                     * @param _consortiumName 联盟名称
                     * 
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     * 
                     */
                    bool ConsortiumNameHasBeenSet() const;

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
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取链ID
                     * @return ChainId 链ID
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置链ID
                     * @param _chainId 链ID
                     * 
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取1为盟主，0为非盟主
                     * @return RoleType 1为盟主，0为非盟主
                     * 
                     */
                    uint64_t GetRoleType() const;

                    /**
                     * 设置1为盟主，0为非盟主
                     * @param _roleType 1为盟主，0为非盟主
                     * 
                     */
                    void SetRoleType(const uint64_t& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取机构DID
                     * @return AgencyDid 机构DID
                     * 
                     */
                    std::string GetAgencyDid() const;

                    /**
                     * 设置机构DID
                     * @param _agencyDid 机构DID
                     * 
                     */
                    void SetAgencyDid(const std::string& _agencyDid);

                    /**
                     * 判断参数 AgencyDid 是否已赋值
                     * @return AgencyDid 是否已赋值
                     * 
                     */
                    bool AgencyDidHasBeenSet() const;

                    /**
                     * 获取机构名称
                     * @return CreateOrg 机构名称
                     * 
                     */
                    std::string GetCreateOrg() const;

                    /**
                     * 设置机构名称
                     * @param _createOrg 机构名称
                     * 
                     */
                    void SetCreateOrg(const std::string& _createOrg);

                    /**
                     * 判断参数 CreateOrg 是否已赋值
                     * @return CreateOrg 是否已赋值
                     * 
                     */
                    bool CreateOrgHasBeenSet() const;

                    /**
                     * 获取端点
                     * @return Endpoint 端点
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置端点
                     * @param _endpoint 端点
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

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
                     * 获取群组名称
                     * @return GroupName 群组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置群组名称
                     * @param _groupName 群组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * DID服务索引
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 账号唯一标识
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 联盟id
                     */
                    int64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * 联盟名称
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 链ID
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * 1为盟主，0为非盟主
                     */
                    uint64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 机构DID
                     */
                    std::string m_agencyDid;
                    bool m_agencyDidHasBeenSet;

                    /**
                     * 机构名称
                     */
                    std::string m_createOrg;
                    bool m_createOrgHasBeenSet;

                    /**
                     * 端点
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

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
                     * 群组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_
