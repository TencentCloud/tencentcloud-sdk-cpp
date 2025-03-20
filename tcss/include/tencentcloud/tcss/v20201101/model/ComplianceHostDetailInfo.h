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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEHOSTDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEHOSTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示主机资产专属的详情。
                */
                class ComplianceHostDetailInfo : public AbstractModel
                {
                public:
                    ComplianceHostDetailInfo();
                    ~ComplianceHostDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机上的Docker版本。
                     * @return DockerVersion 主机上的Docker版本。
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置主机上的Docker版本。
                     * @param _dockerVersion 主机上的Docker版本。
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取主机上的K8S的版本。
                     * @return K8SVersion 主机上的K8S的版本。
                     * 
                     */
                    std::string GetK8SVersion() const;

                    /**
                     * 设置主机上的K8S的版本。
                     * @param _k8SVersion 主机上的K8S的版本。
                     * 
                     */
                    void SetK8SVersion(const std::string& _k8SVersion);

                    /**
                     * 判断参数 K8SVersion 是否已赋值
                     * @return K8SVersion 是否已赋值
                     * 
                     */
                    bool K8SVersionHasBeenSet() const;

                    /**
                     * 获取主机上Containerd版本
                     * @return ContainerdVersion 主机上Containerd版本
                     * 
                     */
                    std::string GetContainerdVersion() const;

                    /**
                     * 设置主机上Containerd版本
                     * @param _containerdVersion 主机上Containerd版本
                     * 
                     */
                    void SetContainerdVersion(const std::string& _containerdVersion);

                    /**
                     * 判断参数 ContainerdVersion 是否已赋值
                     * @return ContainerdVersion 是否已赋值
                     * 
                     */
                    bool ContainerdVersionHasBeenSet() const;

                private:

                    /**
                     * 主机上的Docker版本。
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * 主机上的K8S的版本。
                     */
                    std::string m_k8SVersion;
                    bool m_k8SVersionHasBeenSet;

                    /**
                     * 主机上Containerd版本
                     */
                    std::string m_containerdVersion;
                    bool m_containerdVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEHOSTDETAILINFO_H_
