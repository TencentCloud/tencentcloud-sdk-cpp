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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_

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
                * ModifyUserDirectory请求参数结构体
                */
                class ModifyUserDirectoryRequest : public AbstractModel
                {
                public:
                    ModifyUserDirectoryRequest();
                    ~ModifyUserDirectoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>目录id</p>
                     * @return Id <p>目录id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>目录id</p>
                     * @param _id <p>目录id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>ioa分组信息</p>
                     */
                    std::vector<UserOrg> m_userOrgSet;
                    bool m_userOrgSetHasBeenSet;

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

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_
