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
                     * 获取<p>目录id</p>
                     * @return DirId <p>目录id</p>
                     * 
                     */
                    uint64_t GetDirId() const;

                    /**
                     * 设置<p>目录id</p>
                     * @param _dirId <p>目录id</p>
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
                     * 获取<p>目录名称</p>
                     * @return DirName <p>目录名称</p>
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置<p>目录名称</p>
                     * @param _dirName <p>目录名称</p>
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
                     * 获取<p>ioa分组信息</p>
                     * @return UserOrgSet <p>ioa分组信息</p>
                     * 
                     */
                    std::vector<UserOrg> GetUserOrgSet() const;

                    /**
                     * 设置<p>ioa分组信息</p>
                     * @param _userOrgSet <p>ioa分组信息</p>
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
                     * 获取<p>ioa关联用户源类型</p>
                     * @return Source <p>ioa关联用户源类型</p>
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置<p>ioa关联用户源类型</p>
                     * @param _source <p>ioa关联用户源类型</p>
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
                     * 获取<p>ioa关联用户源名称</p>
                     * @return SourceName <p>ioa关联用户源名称</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>ioa关联用户源名称</p>
                     * @param _sourceName <p>ioa关联用户源名称</p>
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
                     * 获取<p>目录包含用户数</p>
                     * @return UserCount <p>目录包含用户数</p>
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置<p>目录包含用户数</p>
                     * @param _userCount <p>目录包含用户数</p>
                     * 
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动同步</p>
                     * @return AutoSync <p>是否开启自动同步</p>
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置<p>是否开启自动同步</p>
                     * @param _autoSync <p>是否开启自动同步</p>
                     * 
                     */
                    void SetAutoSync(const bool& _autoSync);

                    /**
                     * 判断参数 AutoSync 是否已赋值
                     * @return AutoSync 是否已赋值
                     * 
                     */
                    bool AutoSyncHasBeenSet() const;

                    /**
                     * 获取<p>同步周期（5段式 crontab 表达式）</p>
                     * @return SyncCron <p>同步周期（5段式 crontab 表达式）</p>
                     * 
                     */
                    std::string GetSyncCron() const;

                    /**
                     * 设置<p>同步周期（5段式 crontab 表达式）</p>
                     * @param _syncCron <p>同步周期（5段式 crontab 表达式）</p>
                     * 
                     */
                    void SetSyncCron(const std::string& _syncCron);

                    /**
                     * 判断参数 SyncCron 是否已赋值
                     * @return SyncCron 是否已赋值
                     * 
                     */
                    bool SyncCronHasBeenSet() const;

                private:

                    /**
                     * <p>目录id</p>
                     */
                    uint64_t m_dirId;
                    bool m_dirIdHasBeenSet;

                    /**
                     * <p>目录名称</p>
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * <p>ioa分组信息</p>
                     */
                    std::vector<UserOrg> m_userOrgSet;
                    bool m_userOrgSetHasBeenSet;

                    /**
                     * <p>ioa关联用户源类型</p>
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>ioa关联用户源名称</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>目录包含用户数</p>
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * <p>是否开启自动同步</p>
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                    /**
                     * <p>同步周期（5段式 crontab 表达式）</p>
                     */
                    std::string m_syncCron;
                    bool m_syncCronHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATEUSERDIRECTORYREQUEST_H_
