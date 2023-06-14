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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCERESPONSE_H_

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
                * DeployCertificateInstance返回参数结构体
                */
                class DeployCertificateInstanceResponse : public AbstractModel
                {
                public:
                    DeployCertificateInstanceResponse();
                    ~DeployCertificateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云资源部署任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployRecordId 云资源部署任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeployRecordId() const;

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取部署状态，1表示部署成功，0表示部署失败
                     * @return DeployStatus 部署状态，1表示部署成功，0表示部署失败
                     * 
                     */
                    int64_t GetDeployStatus() const;

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                private:

                    /**
                     * 云资源部署任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * 部署状态，1表示部署成功，0表示部署失败
                     */
                    int64_t m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATEINSTANCERESPONSE_H_
