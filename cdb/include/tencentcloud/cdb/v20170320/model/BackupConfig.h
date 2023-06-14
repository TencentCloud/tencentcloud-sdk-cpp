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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ECDB第二个从库的配置信息，只有ECDB实例才有这个字段
                */
                class BackupConfig : public AbstractModel
                {
                public:
                    BackupConfig();
                    ~BackupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第二个从库复制方式，可能的返回值：async-异步，semisync-半同步
                     * @return ReplicationMode 第二个从库复制方式，可能的返回值：async-异步，semisync-半同步
                     * 
                     */
                    std::string GetReplicationMode() const;

                    /**
                     * 设置第二个从库复制方式，可能的返回值：async-异步，semisync-半同步
                     * @param _replicationMode 第二个从库复制方式，可能的返回值：async-异步，semisync-半同步
                     * 
                     */
                    void SetReplicationMode(const std::string& _replicationMode);

                    /**
                     * 判断参数 ReplicationMode 是否已赋值
                     * @return ReplicationMode 是否已赋值
                     * 
                     */
                    bool ReplicationModeHasBeenSet() const;

                    /**
                     * 获取第二个从库可用区的正式名称，如ap-shanghai-1
                     * @return Zone 第二个从库可用区的正式名称，如ap-shanghai-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置第二个从库可用区的正式名称，如ap-shanghai-1
                     * @param _zone 第二个从库可用区的正式名称，如ap-shanghai-1
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
                     * 获取第二个从库内网IP地址
                     * @return Vip 第二个从库内网IP地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置第二个从库内网IP地址
                     * @param _vip 第二个从库内网IP地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取第二个从库访问端口
                     * @return Vport 第二个从库访问端口
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置第二个从库访问端口
                     * @param _vport 第二个从库访问端口
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 第二个从库复制方式，可能的返回值：async-异步，semisync-半同步
                     */
                    std::string m_replicationMode;
                    bool m_replicationModeHasBeenSet;

                    /**
                     * 第二个从库可用区的正式名称，如ap-shanghai-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 第二个从库内网IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 第二个从库访问端口
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_
