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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ServerlessDi.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateServerlessInstance请求参数结构体
                */
                class CreateServerlessInstanceRequest : public AbstractModel
                {
                public:
                    CreateServerlessInstanceRequest();
                    ~CreateServerlessInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取索引名，需以-AppId结尾
                     * @return IndexName 索引名，需以-AppId结尾
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名，需以-AppId结尾
                     * @param _indexName 索引名，需以-AppId结尾
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取创建的索引元数据JSON，如mappings、settings
                     * @return IndexMetaJson 创建的索引元数据JSON，如mappings、settings
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置创建的索引元数据JSON，如mappings、settings
                     * @param _indexMetaJson 创建的索引元数据JSON，如mappings、settings
                     * 
                     */
                    void SetIndexMetaJson(const std::string& _indexMetaJson);

                    /**
                     * 判断参数 IndexMetaJson 是否已赋值
                     * @return IndexMetaJson 是否已赋值
                     * 
                     */
                    bool IndexMetaJsonHasBeenSet() const;

                    /**
                     * 获取创建索引的空间ID
                     * @return SpaceId 创建索引的空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置创建索引的空间ID
                     * @param _spaceId 创建索引的空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取创建索引的用户名
                     * @return Username 创建索引的用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置创建索引的用户名
                     * @param _username 创建索引的用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取创建索引的密码
                     * @return Password 创建索引的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置创建索引的密码
                     * @param _password 创建索引的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取创建数据接入
                     * @return ServerlessDi 创建数据接入
                     * 
                     */
                    ServerlessDi GetServerlessDi() const;

                    /**
                     * 设置创建数据接入
                     * @param _serverlessDi 创建数据接入
                     * 
                     */
                    void SetServerlessDi(const ServerlessDi& _serverlessDi);

                    /**
                     * 判断参数 ServerlessDi 是否已赋值
                     * @return ServerlessDi 是否已赋值
                     * 
                     */
                    bool ServerlessDiHasBeenSet() const;

                    /**
                     * 获取是否自行添加白名单ip
                     * @return AutoGetIp 是否自行添加白名单ip
                     * 
                     */
                    uint64_t GetAutoGetIp() const;

                    /**
                     * 设置是否自行添加白名单ip
                     * @param _autoGetIp 是否自行添加白名单ip
                     * 
                     */
                    void SetAutoGetIp(const uint64_t& _autoGetIp);

                    /**
                     * 判断参数 AutoGetIp 是否已赋值
                     * @return AutoGetIp 是否已赋值
                     * 
                     */
                    bool AutoGetIpHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return TagList 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
                     * @param _tagList 标签信息
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取kibana公网白名单
                     * @return KibanaWhiteIpList kibana公网白名单
                     * 
                     */
                    std::vector<std::string> GetKibanaWhiteIpList() const;

                    /**
                     * 设置kibana公网白名单
                     * @param _kibanaWhiteIpList kibana公网白名单
                     * 
                     */
                    void SetKibanaWhiteIpList(const std::vector<std::string>& _kibanaWhiteIpList);

                    /**
                     * 判断参数 KibanaWhiteIpList 是否已赋值
                     * @return KibanaWhiteIpList 是否已赋值
                     * 
                     */
                    bool KibanaWhiteIpListHasBeenSet() const;

                private:

                    /**
                     * 索引名，需以-AppId结尾
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 创建的索引元数据JSON，如mappings、settings
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * 创建索引的空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 创建索引的用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 创建索引的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 创建数据接入
                     */
                    ServerlessDi m_serverlessDi;
                    bool m_serverlessDiHasBeenSet;

                    /**
                     * 是否自行添加白名单ip
                     */
                    uint64_t m_autoGetIp;
                    bool m_autoGetIpHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * kibana公网白名单
                     */
                    std::vector<std::string> m_kibanaWhiteIpList;
                    bool m_kibanaWhiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATESERVERLESSINSTANCEREQUEST_H_
