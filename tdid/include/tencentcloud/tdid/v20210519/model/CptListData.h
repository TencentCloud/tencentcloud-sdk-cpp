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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_

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
                * cpt集合数据
                */
                class CptListData : public AbstractModel
                {
                public:
                    CptListData();
                    ~CptListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID信息
                     * @return Id ID信息
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID信息
                     * @param _id ID信息
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
                     * 获取模版名称
                     * @return Name 模版名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模版名称
                     * @param _name 模版名称
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
                     * 获取模板类型，1: 系统模板，2: 用户模板，3:普通模板
                     * @return CptType 模板类型，1: 系统模板，2: 用户模板，3:普通模板
                     * 
                     */
                    uint64_t GetCptType() const;

                    /**
                     * 设置模板类型，1: 系统模板，2: 用户模板，3:普通模板
                     * @param _cptType 模板类型，1: 系统模板，2: 用户模板，3:普通模板
                     * 
                     */
                    void SetCptType(const uint64_t& _cptType);

                    /**
                     * 判断参数 CptType 是否已赋值
                     * @return CptType 是否已赋值
                     * 
                     */
                    bool CptTypeHasBeenSet() const;

                    /**
                     * 获取凭证模版描述
                     * @return Description 凭证模版描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置凭证模版描述
                     * @param _description 凭证模版描述
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
                     * 获取凭证模板Json
                     * @return CptJson 凭证模板Json
                     * 
                     */
                    std::string GetCptJson() const;

                    /**
                     * 设置凭证模板Json
                     * @param _cptJson 凭证模板Json
                     * 
                     */
                    void SetCptJson(const std::string& _cptJson);

                    /**
                     * 判断参数 CptJson 是否已赋值
                     * @return CptJson 是否已赋值
                     * 
                     */
                    bool CptJsonHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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

                private:

                    /**
                     * ID信息
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模版名称
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
                     * 凭证模板ID
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * 模板类型，1: 系统模板，2: 用户模板，3:普通模板
                     */
                    uint64_t m_cptType;
                    bool m_cptTypeHasBeenSet;

                    /**
                     * 凭证模版描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 凭证模板Json
                     */
                    std::string m_cptJson;
                    bool m_cptJsonHasBeenSet;

                    /**
                     * 创建时间
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_
