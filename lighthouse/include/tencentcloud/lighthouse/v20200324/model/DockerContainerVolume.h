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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERVOLUME_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Docker容器挂载卷
                */
                class DockerContainerVolume : public AbstractModel
                {
                public:
                    DockerContainerVolume();
                    ~DockerContainerVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器路径
                     * @return ContainerPath 容器路径
                     * 
                     */
                    std::string GetContainerPath() const;

                    /**
                     * 设置容器路径
                     * @param _containerPath 容器路径
                     * 
                     */
                    void SetContainerPath(const std::string& _containerPath);

                    /**
                     * 判断参数 ContainerPath 是否已赋值
                     * @return ContainerPath 是否已赋值
                     * 
                     */
                    bool ContainerPathHasBeenSet() const;

                    /**
                     * 获取主机路径
                     * @return HostPath 主机路径
                     * 
                     */
                    std::string GetHostPath() const;

                    /**
                     * 设置主机路径
                     * @param _hostPath 主机路径
                     * 
                     */
                    void SetHostPath(const std::string& _hostPath);

                    /**
                     * 判断参数 HostPath 是否已赋值
                     * @return HostPath 是否已赋值
                     * 
                     */
                    bool HostPathHasBeenSet() const;

                private:

                    /**
                     * 容器路径
                     */
                    std::string m_containerPath;
                    bool m_containerPathHasBeenSet;

                    /**
                     * 主机路径
                     */
                    std::string m_hostPath;
                    bool m_hostPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERVOLUME_H_
