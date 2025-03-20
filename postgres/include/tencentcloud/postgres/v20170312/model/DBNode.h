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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例节点信息，包括节点类型、节点所在可用区、节点所在专属集群。
                */
                class DBNode : public AbstractModel
                {
                public:
                    DBNode();
                    ~DBNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型，值可以为：
Primary，代表主节点；
Standby，代表备节点。
                     * @return Role 节点类型，值可以为：
Primary，代表主节点；
Standby，代表备节点。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点类型，值可以为：
Primary，代表主节点；
Standby，代表备节点。
                     * @param _role 节点类型，值可以为：
Primary，代表主节点；
Standby，代表备节点。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取节点所在可用区，例如 ap-guangzhou-1。
                     * @return Zone 节点所在可用区，例如 ap-guangzhou-1。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区，例如 ap-guangzhou-1。
                     * @param _zone 节点所在可用区，例如 ap-guangzhou-1。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取专属集群ID
                     * @return DedicatedClusterId 专属集群ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专属集群ID
                     * @param _dedicatedClusterId 专属集群ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 节点类型，值可以为：
Primary，代表主节点；
Standby，代表备节点。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点所在可用区，例如 ap-guangzhou-1。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 专属集群ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_
