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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListDevices请求参数结构体
                */
                class ListDevicesRequest : public AbstractModel
                {
                public:
                    ListDevicesRequest();
                    ~ListDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织ID
                     * @return OrganizationId 组织ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置组织ID
                     * @param _organizationId 组织ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取是否获取当前层级及子层级的设备列表，默认false
                     * @return IsContainSubLevel 是否获取当前层级及子层级的设备列表，默认false
                     * 
                     */
                    bool GetIsContainSubLevel() const;

                    /**
                     * 设置是否获取当前层级及子层级的设备列表，默认false
                     * @param _isContainSubLevel 是否获取当前层级及子层级的设备列表，默认false
                     * 
                     */
                    void SetIsContainSubLevel(const bool& _isContainSubLevel);

                    /**
                     * 判断参数 IsContainSubLevel 是否已赋值
                     * @return IsContainSubLevel 是否已赋值
                     * 
                     */
                    bool IsContainSubLevelHasBeenSet() const;

                    /**
                     * 获取是否包含当前用户已关联的设备，默认false
                     * @return IsContainUser 是否包含当前用户已关联的设备，默认false
                     * 
                     */
                    bool GetIsContainUser() const;

                    /**
                     * 设置是否包含当前用户已关联的设备，默认false
                     * @param _isContainUser 是否包含当前用户已关联的设备，默认false
                     * 
                     */
                    void SetIsContainUser(const bool& _isContainUser);

                    /**
                     * 判断参数 IsContainUser 是否已赋值
                     * @return IsContainUser 是否已赋值
                     * 
                     */
                    bool IsContainUserHasBeenSet() const;

                    /**
                     * 获取设备接入协议。1:RTMP，2:GB，3:GW，4:IVCP(私有协议)
                     * @return AccessProtocol 设备接入协议。1:RTMP，2:GB，3:GW，4:IVCP(私有协议)
                     * 
                     */
                    uint64_t GetAccessProtocol() const;

                    /**
                     * 设置设备接入协议。1:RTMP，2:GB，3:GW，4:IVCP(私有协议)
                     * @param _accessProtocol 设备接入协议。1:RTMP，2:GB，3:GW，4:IVCP(私有协议)
                     * 
                     */
                    void SetAccessProtocol(const uint64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取设备类型。1:IPC，2:NVR
                     * @return Type 设备类型。1:IPC，2:NVR
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置设备类型。1:IPC，2:NVR
                     * @param _type 设备类型。1:IPC，2:NVR
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取设备状态。0:未注册，1:在线，2:离线，3:禁用	
                     * @return Status 设备状态。0:未注册，1:在线，2:离线，3:禁用	
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置设备状态。0:未注册，1:在线，2:离线，3:禁用	
                     * @param _status 设备状态。0:未注册，1:在线，2:离线，3:禁用	
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务节点ID
                     * @return ClusterId 服务节点ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置服务节点ID
                     * @param _clusterId 服务节点ID
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
                     * 获取模糊搜索设备的关键字
                     * @return Keyword 模糊搜索设备的关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊搜索设备的关键字
                     * @param _keyword 模糊搜索设备的关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取当前用户Uin
                     * @return CurrentUin 当前用户Uin
                     * 
                     */
                    uint64_t GetCurrentUin() const;

                    /**
                     * 设置当前用户Uin
                     * @param _currentUin 当前用户Uin
                     * 
                     */
                    void SetCurrentUin(const uint64_t& _currentUin);

                    /**
                     * 判断参数 CurrentUin 是否已赋值
                     * @return CurrentUin 是否已赋值
                     * 
                     */
                    bool CurrentUinHasBeenSet() const;

                    /**
                     * 获取页码，默认为1。
                     * @return PageNumber 页码，默认为1。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认为1。
                     * @param _pageNumber 页码，默认为1。
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量，默认为20，单页最大10000条
                     * @return PageSize 每页数量，默认为20，单页最大10000条
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量，默认为20，单页最大10000条
                     * @param _pageSize 每页数量，默认为20，单页最大10000条
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 组织ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 是否获取当前层级及子层级的设备列表，默认false
                     */
                    bool m_isContainSubLevel;
                    bool m_isContainSubLevelHasBeenSet;

                    /**
                     * 是否包含当前用户已关联的设备，默认false
                     */
                    bool m_isContainUser;
                    bool m_isContainUserHasBeenSet;

                    /**
                     * 设备接入协议。1:RTMP，2:GB，3:GW，4:IVCP(私有协议)
                     */
                    uint64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * 设备类型。1:IPC，2:NVR
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设备状态。0:未注册，1:在线，2:离线，3:禁用	
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务节点ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 模糊搜索设备的关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 当前用户Uin
                     */
                    uint64_t m_currentUin;
                    bool m_currentUinHasBeenSet;

                    /**
                     * 页码，默认为1。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量，默认为20，单页最大10000条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESREQUEST_H_
