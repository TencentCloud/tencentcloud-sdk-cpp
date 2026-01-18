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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * AddRealServers请求参数结构体
                */
                class AddRealServersRequest : public AbstractModel
                {
                public:
                    AddRealServersRequest();
                    ~AddRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>源站对应的项目ID</p>
                     * @return ProjectId <p>源站对应的项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>源站对应的项目ID</p>
                     * @param _projectId <p>源站对应的项目ID</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>源站对应的IP或域名</p>
                     * @return RealServerIP <p>源站对应的IP或域名</p>
                     * 
                     */
                    std::vector<std::string> GetRealServerIP() const;

                    /**
                     * 设置<p>源站对应的IP或域名</p>
                     * @param _realServerIP <p>源站对应的IP或域名</p>
                     * 
                     */
                    void SetRealServerIP(const std::vector<std::string>& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取<p>源站名称</p>
                     * @return RealServerName <p>源站名称</p>
                     * 
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置<p>源站名称</p>
                     * @param _realServerName <p>源站名称</p>
                     * 
                     */
                    void SetRealServerName(const std::string& _realServerName);

                    /**
                     * 判断参数 RealServerName 是否已赋值
                     * @return RealServerName 是否已赋值
                     * 
                     */
                    bool RealServerNameHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return TagSet <p>标签列表</p>
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagSet <p>标签列表</p>
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>源站对应的项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>源站对应的IP或域名</p>
                     */
                    std::vector<std::string> m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * <p>源站名称</p>
                     */
                    std::string m_realServerName;
                    bool m_realServerNameHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ADDREALSERVERSREQUEST_H_
