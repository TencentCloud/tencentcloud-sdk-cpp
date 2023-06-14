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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDidService请求参数结构体
                */
                class CreateDidServiceRequest : public AbstractModel
                {
                public:
                    CreateDidServiceRequest();
                    ~CreateDidServiceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取联盟ID
                     * @return ConsortiumId 联盟ID
                     * 
                     */
                    int64_t GetConsortiumId() const;

                    /**
                     * 设置联盟ID
                     * @param _consortiumId 联盟ID
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
                     * 获取机构名称
                     * @return AgencyName 机构名称
                     * 
                     */
                    std::string GetAgencyName() const;

                    /**
                     * 设置机构名称
                     * @param _agencyName 机构名称
                     * 
                     */
                    void SetAgencyName(const std::string& _agencyName);

                    /**
                     * 判断参数 AgencyName 是否已赋值
                     * @return AgencyName 是否已赋值
                     * 
                     */
                    bool AgencyNameHasBeenSet() const;

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
                     * 联盟名称
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * 联盟ID
                     */
                    int64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 机构名称
                     */
                    std::string m_agencyName;
                    bool m_agencyNameHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

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

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_
