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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSgSnapshotFileContent请求参数结构体
                */
                class DescribeSgSnapshotFileContentRequest : public AbstractModel
                {
                public:
                    DescribeSgSnapshotFileContentRequest();
                    ~DescribeSgSnapshotFileContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyId 快照策略Id。
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置快照策略Id。
                     * @param _snapshotPolicyId 快照策略Id。
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取快照文件Id。
                     * @return SnapshotFileId 快照文件Id。
                     * 
                     */
                    std::string GetSnapshotFileId() const;

                    /**
                     * 设置快照文件Id。
                     * @param _snapshotFileId 快照文件Id。
                     * 
                     */
                    void SetSnapshotFileId(const std::string& _snapshotFileId);

                    /**
                     * 判断参数 SnapshotFileId 是否已赋值
                     * @return SnapshotFileId 是否已赋值
                     * 
                     */
                    bool SnapshotFileIdHasBeenSet() const;

                    /**
                     * 获取安全组Id。
                     * @return SecurityGroupId 安全组Id。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组Id。
                     * @param _securityGroupId 安全组Id。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 快照文件Id。
                     */
                    std::string m_snapshotFileId;
                    bool m_snapshotFileIdHasBeenSet;

                    /**
                     * 安全组Id。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESGSNAPSHOTFILECONTENTREQUEST_H_
