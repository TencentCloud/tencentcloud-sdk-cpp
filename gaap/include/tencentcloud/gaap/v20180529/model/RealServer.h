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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 查询监听器或者规则相关的源站信息，不包括tag信息
                */
                class RealServer : public AbstractModel
                {
                public:
                    RealServer();
                    ~RealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站的IP或域名
                     * @return RealServerIP 源站的IP或域名
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站的IP或域名
                     * @param RealServerIP 源站的IP或域名
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param RealServerId 源站ID
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取源站名称
                     * @return RealServerName 源站名称
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置源站名称
                     * @param RealServerName 源站名称
                     */
                    void SetRealServerName(const std::string& _realServerName);

                    /**
                     * 判断参数 RealServerName 是否已赋值
                     * @return RealServerName 是否已赋值
                     */
                    bool RealServerNameHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * @return InBanBlacklist 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     */
                    int64_t GetInBanBlacklist() const;

                    /**
                     * 设置是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * @param InBanBlacklist 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     */
                    void SetInBanBlacklist(const int64_t& _inBanBlacklist);

                    /**
                     * 判断参数 InBanBlacklist 是否已赋值
                     * @return InBanBlacklist 是否已赋值
                     */
                    bool InBanBlacklistHasBeenSet() const;

                private:

                    /**
                     * 源站的IP或域名
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * 源站ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 源站名称
                     */
                    std::string m_realServerName;
                    bool m_realServerNameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     */
                    int64_t m_inBanBlacklist;
                    bool m_inBanBlacklistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVER_H_
