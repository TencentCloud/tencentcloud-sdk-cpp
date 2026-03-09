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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMEMBER_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd集群成员信息
                */
                class EtcdMember : public AbstractModel
                {
                public:
                    EtcdMember();
                    ~EtcdMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名字
                     * @return Name 节点名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名字
                     * @param _name 节点名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取节点当前版本
                     * @return Version 节点当前版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置节点当前版本
                     * @param _version 节点当前版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取所属可用区
                     * @return Zone 所属可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置所属可用区
                     * @param _zone 所属可用区
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
                     * 获取节点状态
                     * @return Status 节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态
                     * @param _status 节点状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 节点名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点当前版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 所属可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMEMBER_H_
