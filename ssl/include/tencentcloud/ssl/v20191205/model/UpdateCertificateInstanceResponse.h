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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgress.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UpdateCertificateInstance返回参数结构体
                */
                class UpdateCertificateInstanceResponse : public AbstractModel
                {
                public:
                    UpdateCertificateInstanceResponse();
                    ~UpdateCertificateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云资源更新任务ID， DeployRecordId为0表示任务进行中， 重复请求这个接口， 当返回DeployRecordId大于0则表示任务创建成功。 未创建成功则会抛出异常
                     * @return DeployRecordId 云资源更新任务ID， DeployRecordId为0表示任务进行中， 重复请求这个接口， 当返回DeployRecordId大于0则表示任务创建成功。 未创建成功则会抛出异常
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
                     * 获取更新任务创建状态；1表示创建成功； 0表示当前存在更新中的任务，未创建新的更新任务；返回值DeployRecordId为更新中的任务ID
                     * @return DeployStatus 更新任务创建状态；1表示创建成功； 0表示当前存在更新中的任务，未创建新的更新任务；返回值DeployRecordId为更新中的任务ID
                     * 
                     */
                    int64_t GetDeployStatus() const;

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                    /**
                     * 获取更新异步创建任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateSyncProgress 更新异步创建任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UpdateSyncProgress> GetUpdateSyncProgress() const;

                    /**
                     * 判断参数 UpdateSyncProgress 是否已赋值
                     * @return UpdateSyncProgress 是否已赋值
                     * 
                     */
                    bool UpdateSyncProgressHasBeenSet() const;

                private:

                    /**
                     * 云资源更新任务ID， DeployRecordId为0表示任务进行中， 重复请求这个接口， 当返回DeployRecordId大于0则表示任务创建成功。 未创建成功则会抛出异常
                     */
                    uint64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * 更新任务创建状态；1表示创建成功； 0表示当前存在更新中的任务，未创建新的更新任务；返回值DeployRecordId为更新中的任务ID
                     */
                    int64_t m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * 更新异步创建任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UpdateSyncProgress> m_updateSyncProgress;
                    bool m_updateSyncProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_
