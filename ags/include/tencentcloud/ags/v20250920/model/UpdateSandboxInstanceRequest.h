/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXINSTANCEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/MetadataVar.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * UpdateSandboxInstance请求参数结构体
                */
                class UpdateSandboxInstanceRequest : public AbstractModel
                {
                public:
                    UpdateSandboxInstanceRequest();
                    ~UpdateSandboxInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>沙箱实例ID</p>
                     * @return InstanceId <p>沙箱实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>沙箱实例ID</p>
                     * @param _instanceId <p>沙箱实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取手动设置实例还需运行多久，如 5m、300s、1h。未传入时保持原设置；传入后从本次设置开始重新计时。仅正在运行、且未设置为永久运行的实例可修改。修改时不会缩短已获得的自动续期时间。
                     * @return Timeout 手动设置实例还需运行多久，如 5m、300s、1h。未传入时保持原设置；传入后从本次设置开始重新计时。仅正在运行、且未设置为永久运行的实例可修改。修改时不会缩短已获得的自动续期时间。
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置手动设置实例还需运行多久，如 5m、300s、1h。未传入时保持原设置；传入后从本次设置开始重新计时。仅正在运行、且未设置为永久运行的实例可修改。修改时不会缩短已获得的自动续期时间。
                     * @param _timeout 手动设置实例还需运行多久，如 5m、300s、1h。未传入时保持原设置；传入后从本次设置开始重新计时。仅正在运行、且未设置为永久运行的实例可修改。修改时不会缩短已获得的自动续期时间。
                     * 
                     */
                    void SetTimeout(const std::string& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取实例元数据。
                     * @return Metadata 实例元数据。
                     * 
                     */
                    std::vector<MetadataVar> GetMetadata() const;

                    /**
                     * 设置实例元数据。
                     * @param _metadata 实例元数据。
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataVar>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 手动设置实例还需运行多久，如 5m、300s、1h。未传入时保持原设置；传入后从本次设置开始重新计时。仅正在运行、且未设置为永久运行的实例可修改。修改时不会缩短已获得的自动续期时间。
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 实例元数据。
                     */
                    std::vector<MetadataVar> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXINSTANCEREQUEST_H_
