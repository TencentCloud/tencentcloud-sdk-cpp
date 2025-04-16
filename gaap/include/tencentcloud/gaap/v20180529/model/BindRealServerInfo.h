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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVERINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 添加源站的源站信息返回值
                */
                class BindRealServerInfo : public AbstractModel
                {
                public:
                    BindRealServerInfo();
                    ~BindRealServerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站的IP或域名
                     * @return RealServerIP 源站的IP或域名
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站的IP或域名
                     * @param _realServerIP 源站的IP或域名
                     * 
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param _realServerId 源站ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取源站名称
                     * @return RealServerName 源站名称
                     * 
                     */
                    std::string GetRealServerName() const;

                    /**
                     * 设置源站名称
                     * @param _realServerName 源站名称
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagSet 标签列表
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param _tagSet 标签列表
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
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVERINFO_H_
