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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CREATEUSERDIRECTORYREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CREATEUSERDIRECTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/UserOrg.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateUserDirectory请求参数结构体
                */
                class CreateUserDirectoryRequest : public AbstractModel
                {
                public:
                    CreateUserDirectoryRequest();
                    ~CreateUserDirectoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目录id
                     * @return DirId 目录id
                     * 
                     */
                    uint64_t GetDirId() const;

                    /**
                     * 设置目录id
                     * @param _dirId 目录id
                     * 
                     */
                    void SetDirId(const uint64_t& _dirId);

                    /**
                     * 判断参数 DirId 是否已赋值
                     * @return DirId 是否已赋值
                     * 
                     */
                    bool DirIdHasBeenSet() const;

                    /**
                     * 获取目录名称
                     * @return DirName 目录名称
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置目录名称
                     * @param _dirName 目录名称
                     * 
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     * 
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取ioa分组信息
                     * @return UserOrgSet ioa分组信息
                     * 
                     */
                    std::vector<UserOrg> GetUserOrgSet() const;

                    /**
                     * 设置ioa分组信息
                     * @param _userOrgSet ioa分组信息
                     * 
                     */
                    void SetUserOrgSet(const std::vector<UserOrg>& _userOrgSet);

                    /**
                     * 判断参数 UserOrgSet 是否已赋值
                     * @return UserOrgSet 是否已赋值
                     * 
                     */
                    bool UserOrgSetHasBeenSet() const;

                    /**
                     * 获取ioa关联用户源类型
                     * @return Source ioa关联用户源类型
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置ioa关联用户源类型
                     * @param _source ioa关联用户源类型
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取ioa关联用户源名称
                     * @return SourceName ioa关联用户源名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置ioa关联用户源名称
                     * @param _sourceName ioa关联用户源名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取目录包含用户数
                     * @return UserCount 目录包含用户数
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置目录包含用户数
                     * @param _userCount 目录包含用户数
                     * 
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                private:

                    /**
                     * 目录id
                     */
                    uint64_t m_dirId;
                    bool m_dirIdHasBeenSet;

                    /**
                     * 目录名称
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * ioa分组信息
                     */
                    std::vector<UserOrg> m_userOrgSet;
                    bool m_userOrgSetHasBeenSet;

                    /**
                     * ioa关联用户源类型
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * ioa关联用户源名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 目录包含用户数
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATEUSERDIRECTORYREQUEST_H_
