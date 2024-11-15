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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 云资源ID。
                */
                class ResourceIds : public AbstractModel
                {
                public:
                    ResourceIds();
                    ~ResourceIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络ID。
                     * @return VPCId 私有网络ID。
                     * 
                     */
                    std::string GetVPCId() const;

                    /**
                     * 设置私有网络ID。
                     * @param _vPCId 私有网络ID。
                     * 
                     */
                    void SetVPCId(const std::string& _vPCId);

                    /**
                     * 判断参数 VPCId 是否已赋值
                     * @return VPCId 是否已赋值
                     * 
                     */
                    bool VPCIdHasBeenSet() const;

                    /**
                     * 获取子网ID。
                     * @return SubnetId 子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID。
                     * @param _subnetId 子网ID。
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
                     * 获取安全组ID。
                     * @return SecurityGroupId 安全组ID。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID。
                     * @param _securityGroupId 安全组ID。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取TDSQL-C Mysql版数据库ID。
                     * @return TDSQLCId TDSQL-C Mysql版数据库ID。
                     * 
                     */
                    std::string GetTDSQLCId() const;

                    /**
                     * 设置TDSQL-C Mysql版数据库ID。
                     * @param _tDSQLCId TDSQL-C Mysql版数据库ID。
                     * 
                     */
                    void SetTDSQLCId(const std::string& _tDSQLCId);

                    /**
                     * 判断参数 TDSQLCId 是否已赋值
                     * @return TDSQLCId 是否已赋值
                     * 
                     */
                    bool TDSQLCIdHasBeenSet() const;

                    /**
                     * 获取文件存储ID。
                     * @return CFSId 文件存储ID。
                     * 
                     */
                    std::string GetCFSId() const;

                    /**
                     * 设置文件存储ID。
                     * @param _cFSId 文件存储ID。
                     * 
                     */
                    void SetCFSId(const std::string& _cFSId);

                    /**
                     * 判断参数 CFSId 是否已赋值
                     * @return CFSId 是否已赋值
                     * 
                     */
                    bool CFSIdHasBeenSet() const;

                    /**
                     * 获取文件存储类型：取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @return CFSStorageType 文件存储类型：取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * 
                     */
                    std::string GetCFSStorageType() const;

                    /**
                     * 设置文件存储类型：取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @param _cFSStorageType 文件存储类型：取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * 
                     */
                    void SetCFSStorageType(const std::string& _cFSStorageType);

                    /**
                     * 判断参数 CFSStorageType 是否已赋值
                     * @return CFSStorageType 是否已赋值
                     * 
                     */
                    bool CFSStorageTypeHasBeenSet() const;

                    /**
                     * 获取云服务器ID。
                     * @return CVMId 云服务器ID。
                     * 
                     */
                    std::string GetCVMId() const;

                    /**
                     * 设置云服务器ID。
                     * @param _cVMId 云服务器ID。
                     * 
                     */
                    void SetCVMId(const std::string& _cVMId);

                    /**
                     * 判断参数 CVMId 是否已赋值
                     * @return CVMId 是否已赋值
                     * 
                     */
                    bool CVMIdHasBeenSet() const;

                    /**
                     * 获取弹性容器集群ID。
                     * @return EKSId 弹性容器集群ID。
                     * 
                     */
                    std::string GetEKSId() const;

                    /**
                     * 设置弹性容器集群ID。
                     * @param _eKSId 弹性容器集群ID。
                     * 
                     */
                    void SetEKSId(const std::string& _eKSId);

                    /**
                     * 判断参数 EKSId 是否已赋值
                     * @return EKSId 是否已赋值
                     * 
                     */
                    bool EKSIdHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID。
                     */
                    std::string m_vPCId;
                    bool m_vPCIdHasBeenSet;

                    /**
                     * 子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 安全组ID。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * TDSQL-C Mysql版数据库ID。
                     */
                    std::string m_tDSQLCId;
                    bool m_tDSQLCIdHasBeenSet;

                    /**
                     * 文件存储ID。
                     */
                    std::string m_cFSId;
                    bool m_cFSIdHasBeenSet;

                    /**
                     * 文件存储类型：取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     */
                    std::string m_cFSStorageType;
                    bool m_cFSStorageTypeHasBeenSet;

                    /**
                     * 云服务器ID。
                     */
                    std::string m_cVMId;
                    bool m_cVMIdHasBeenSet;

                    /**
                     * 弹性容器集群ID。
                     */
                    std::string m_eKSId;
                    bool m_eKSIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_
