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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONEHOSTSINFO_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONEHOSTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * CDZ的母机和子机的对应关系
                */
                class CloudDedicatedZoneHostsInfo : public AbstractModel
                {
                public:
                    CloudDedicatedZoneHostsInfo();
                    ~CloudDedicatedZoneHostsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host的唯一标识uuid
                     * @return HostUuid Host的唯一标识uuid
                     * 
                     */
                    std::string GetHostUuid() const;

                    /**
                     * 设置Host的唯一标识uuid
                     * @param _hostUuid Host的唯一标识uuid
                     * 
                     */
                    void SetHostUuid(const std::string& _hostUuid);

                    /**
                     * 判断参数 HostUuid 是否已赋值
                     * @return HostUuid 是否已赋值
                     * 
                     */
                    bool HostUuidHasBeenSet() const;

                    /**
                     * 获取实例名称数组
                     * @return InstancesInfo 实例名称数组
                     * 
                     */
                    std::vector<std::string> GetInstancesInfo() const;

                    /**
                     * 设置实例名称数组
                     * @param _instancesInfo 实例名称数组
                     * 
                     */
                    void SetInstancesInfo(const std::vector<std::string>& _instancesInfo);

                    /**
                     * 判断参数 InstancesInfo 是否已赋值
                     * @return InstancesInfo 是否已赋值
                     * 
                     */
                    bool InstancesInfoHasBeenSet() const;

                private:

                    /**
                     * Host的唯一标识uuid
                     */
                    std::string m_hostUuid;
                    bool m_hostUuidHasBeenSet;

                    /**
                     * 实例名称数组
                     */
                    std::vector<std::string> m_instancesInfo;
                    bool m_instancesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONEHOSTSINFO_H_
