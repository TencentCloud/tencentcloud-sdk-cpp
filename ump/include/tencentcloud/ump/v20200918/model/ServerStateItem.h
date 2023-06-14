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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_SERVERSTATEITEM_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_SERVERSTATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/DiskInfo.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 服务器监控状态上报项
                */
                class ServerStateItem : public AbstractModel
                {
                public:
                    ServerStateItem();
                    ~ServerStateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器状态
1: 在线
2: 离线
3: 重启
                     * @return ServerState 服务器状态
1: 在线
2: 离线
3: 重启
                     * 
                     */
                    int64_t GetServerState() const;

                    /**
                     * 设置服务器状态
1: 在线
2: 离线
3: 重启
                     * @param _serverState 服务器状态
1: 在线
2: 离线
3: 重启
                     * 
                     */
                    void SetServerState(const int64_t& _serverState);

                    /**
                     * 判断参数 ServerState 是否已赋值
                     * @return ServerState 是否已赋值
                     * 
                     */
                    bool ServerStateHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return ServerIp 服务器IP
                     * 
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置服务器IP
                     * @param _serverIp 服务器IP
                     * 
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     * 
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取硬盘监控信息列表
                     * @return DiskInfos 硬盘监控信息列表
                     * 
                     */
                    std::vector<DiskInfo> GetDiskInfos() const;

                    /**
                     * 设置硬盘监控信息列表
                     * @param _diskInfos 硬盘监控信息列表
                     * 
                     */
                    void SetDiskInfos(const std::vector<DiskInfo>& _diskInfos);

                    /**
                     * 判断参数 DiskInfos 是否已赋值
                     * @return DiskInfos 是否已赋值
                     * 
                     */
                    bool DiskInfosHasBeenSet() const;

                private:

                    /**
                     * 服务器状态
1: 在线
2: 离线
3: 重启
                     */
                    int64_t m_serverState;
                    bool m_serverStateHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 硬盘监控信息列表
                     */
                    std::vector<DiskInfo> m_diskInfos;
                    bool m_diskInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_SERVERSTATEITEM_H_
