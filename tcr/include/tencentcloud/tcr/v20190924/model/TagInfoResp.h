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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFORESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Tag列表的返回值
                */
                class TagInfoResp : public AbstractModel
                {
                public:
                    TagInfoResp();
                    ~TagInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag的总数
                     * @return TagCount Tag的总数
                     * 
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置Tag的总数
                     * @param _tagCount Tag的总数
                     * 
                     */
                    void SetTagCount(const int64_t& _tagCount);

                    /**
                     * 判断参数 TagCount 是否已赋值
                     * @return TagCount 是否已赋值
                     * 
                     */
                    bool TagCountHasBeenSet() const;

                    /**
                     * 获取TagInfo列表
                     * @return TagInfo TagInfo列表
                     * 
                     */
                    std::vector<TagInfo> GetTagInfo() const;

                    /**
                     * 设置TagInfo列表
                     * @param _tagInfo TagInfo列表
                     * 
                     */
                    void SetTagInfo(const std::vector<TagInfo>& _tagInfo);

                    /**
                     * 判断参数 TagInfo 是否已赋值
                     * @return TagInfo 是否已赋值
                     * 
                     */
                    bool TagInfoHasBeenSet() const;

                    /**
                     * 获取Server
                     * @return Server Server
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Server
                     * @param _server Server
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                private:

                    /**
                     * Tag的总数
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * TagInfo列表
                     */
                    std::vector<TagInfo> m_tagInfo;
                    bool m_tagInfoHasBeenSet;

                    /**
                     * Server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TAGINFORESP_H_
