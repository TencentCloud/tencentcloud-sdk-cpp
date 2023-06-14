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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DownloadUserCert请求参数结构体
                */
                class DownloadUserCertRequest : public AbstractModel
                {
                public:
                    DownloadUserCertRequest();
                    ~DownloadUserCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：cert_mng
                     * @return Module 模块名，固定字段：cert_mng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：cert_mng
                     * @param _module 模块名，固定字段：cert_mng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，固定字段：cert_download_for_user
                     * @return Operation 操作名，固定字段：cert_download_for_user
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：cert_download_for_user
                     * @param _operation 操作名，固定字段：cert_download_for_user
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取证书ID，可以在证书详情页面获取
                     * @return CertId 证书ID，可以在证书详情页面获取
                     * 
                     */
                    uint64_t GetCertId() const;

                    /**
                     * 设置证书ID，可以在证书详情页面获取
                     * @param _certId 证书ID，可以在证书详情页面获取
                     * 
                     */
                    void SetCertId(const uint64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书DN，可以在证书详情页面获取
                     * @return CertDn 证书DN，可以在证书详情页面获取
                     * 
                     */
                    std::string GetCertDn() const;

                    /**
                     * 设置证书DN，可以在证书详情页面获取
                     * @param _certDn 证书DN，可以在证书详情页面获取
                     * 
                     */
                    void SetCertDn(const std::string& _certDn);

                    /**
                     * 判断参数 CertDn 是否已赋值
                     * @return CertDn 是否已赋值
                     * 
                     */
                    bool CertDnHasBeenSet() const;

                    /**
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 区块链网络ID，可在区块链网络详情或列表中获取
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
                     * 获取下载证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 下载证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置下载证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param _groupName 下载证书的组织名称，可以在组织管理列表中获取当前组织的名称
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
                     * 模块名，固定字段：cert_mng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：cert_download_for_user
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 证书ID，可以在证书详情页面获取
                     */
                    uint64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书DN，可以在证书详情页面获取
                     */
                    std::string m_certDn;
                    bool m_certDnHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 下载证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTREQUEST_H_
