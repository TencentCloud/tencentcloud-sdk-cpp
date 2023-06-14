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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * ModifyCertificateProject请求参数结构体
                */
                class ModifyCertificateProjectRequest : public AbstractModel
                {
                public:
                    ModifyCertificateProjectRequest();
                    ~ModifyCertificateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改所属项目的证书 ID 集合，最多100个证书。
                     * @return CertificateIdList 需要修改所属项目的证书 ID 集合，最多100个证书。
                     * 
                     */
                    std::vector<std::string> GetCertificateIdList() const;

                    /**
                     * 设置需要修改所属项目的证书 ID 集合，最多100个证书。
                     * @param _certificateIdList 需要修改所属项目的证书 ID 集合，最多100个证书。
                     * 
                     */
                    void SetCertificateIdList(const std::vector<std::string>& _certificateIdList);

                    /**
                     * 判断参数 CertificateIdList 是否已赋值
                     * @return CertificateIdList 是否已赋值
                     * 
                     */
                    bool CertificateIdListHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 需要修改所属项目的证书 ID 集合，最多100个证书。
                     */
                    std::vector<std::string> m_certificateIdList;
                    bool m_certificateIdListHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_
