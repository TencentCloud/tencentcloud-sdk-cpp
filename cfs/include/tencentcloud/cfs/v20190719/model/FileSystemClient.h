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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 文件系统客户端信息
                */
                class FileSystemClient : public AbstractModel
                {
                public:
                    FileSystemClient();
                    ~FileSystemClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统IP地址
                     * @return CfsVip 文件系统IP地址
                     * 
                     */
                    std::string GetCfsVip() const;

                    /**
                     * 设置文件系统IP地址
                     * @param _cfsVip 文件系统IP地址
                     * 
                     */
                    void SetCfsVip(const std::string& _cfsVip);

                    /**
                     * 判断参数 CfsVip 是否已赋值
                     * @return CfsVip 是否已赋值
                     * 
                     */
                    bool CfsVipHasBeenSet() const;

                    /**
                     * 获取客户端IP地址
                     * @return ClientIp 客户端IP地址
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端IP地址
                     * @param _clientIp 客户端IP地址
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取文件系统所属VPCID
                     * @return VpcId 文件系统所属VPCID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置文件系统所属VPCID
                     * @param _vpcId 文件系统所属VPCID
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
                     * 获取可用区名称，例如ap-beijing-1，参考[简介](https://cloud.tencent.com/document/api/582/38144)文档中的地域与可用区列表
                     * @return Zone 可用区名称，例如ap-beijing-1，参考[简介](https://cloud.tencent.com/document/api/582/38144)文档中的地域与可用区列表
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称，例如ap-beijing-1，参考[简介](https://cloud.tencent.com/document/api/582/38144)文档中的地域与可用区列表
                     * @param _zone 可用区名称，例如ap-beijing-1，参考[简介](https://cloud.tencent.com/document/api/582/38144)文档中的地域与可用区列表
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
                     * 获取可用区中文名称
                     * @return ZoneName 可用区中文名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名称
                     * @param _zoneName 可用区中文名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取该文件系统被挂载到客户端上的路径信息
                     * @return MountDirectory 该文件系统被挂载到客户端上的路径信息
                     * 
                     */
                    std::string GetMountDirectory() const;

                    /**
                     * 设置该文件系统被挂载到客户端上的路径信息
                     * @param _mountDirectory 该文件系统被挂载到客户端上的路径信息
                     * 
                     */
                    void SetMountDirectory(const std::string& _mountDirectory);

                    /**
                     * 判断参数 MountDirectory 是否已赋值
                     * @return MountDirectory 是否已赋值
                     * 
                     */
                    bool MountDirectoryHasBeenSet() const;

                private:

                    /**
                     * 文件系统IP地址
                     */
                    std::string m_cfsVip;
                    bool m_cfsVipHasBeenSet;

                    /**
                     * 客户端IP地址
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 文件系统所属VPCID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 可用区名称，例如ap-beijing-1，参考[简介](https://cloud.tencent.com/document/api/582/38144)文档中的地域与可用区列表
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区中文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 该文件系统被挂载到客户端上的路径信息
                     */
                    std::string m_mountDirectory;
                    bool m_mountDirectoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_
