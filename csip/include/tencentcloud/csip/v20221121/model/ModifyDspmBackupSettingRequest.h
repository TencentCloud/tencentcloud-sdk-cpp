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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmBackupSetting请求参数结构体
                */
                class ModifyDspmBackupSettingRequest : public AbstractModel
                {
                public:
                    ModifyDspmBackupSettingRequest();
                    ~ModifyDspmBackupSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取备份日志保留时长
                     * @return BackupLogSaveTime 备份日志保留时长
                     * 
                     */
                    int64_t GetBackupLogSaveTime() const;

                    /**
                     * 设置备份日志保留时长
                     * @param _backupLogSaveTime 备份日志保留时长
                     * 
                     */
                    void SetBackupLogSaveTime(const int64_t& _backupLogSaveTime);

                    /**
                     * 判断参数 BackupLogSaveTime 是否已赋值
                     * @return BackupLogSaveTime 是否已赋值
                     * 
                     */
                    bool BackupLogSaveTimeHasBeenSet() const;

                    /**
                     * 获取恢复日志保留时长
                     * @return RestoreLogSaveTime 恢复日志保留时长
                     * 
                     */
                    int64_t GetRestoreLogSaveTime() const;

                    /**
                     * 设置恢复日志保留时长
                     * @param _restoreLogSaveTime 恢复日志保留时长
                     * 
                     */
                    void SetRestoreLogSaveTime(const int64_t& _restoreLogSaveTime);

                    /**
                     * 判断参数 RestoreLogSaveTime 是否已赋值
                     * @return RestoreLogSaveTime 是否已赋值
                     * 
                     */
                    bool RestoreLogSaveTimeHasBeenSet() const;

                    /**
                     * 获取日志最大生命周期限制
                     * @return LogMaxSaveTime 日志最大生命周期限制
                     * 
                     */
                    int64_t GetLogMaxSaveTime() const;

                    /**
                     * 设置日志最大生命周期限制
                     * @param _logMaxSaveTime 日志最大生命周期限制
                     * 
                     */
                    void SetLogMaxSaveTime(const int64_t& _logMaxSaveTime);

                    /**
                     * 判断参数 LogMaxSaveTime 是否已赋值
                     * @return LogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool LogMaxSaveTimeHasBeenSet() const;

                    /**
                     * 获取在线日志最大天数限制
                     * @return OnlineLogMaxSaveTime 在线日志最大天数限制
                     * 
                     */
                    int64_t GetOnlineLogMaxSaveTime() const;

                    /**
                     * 设置在线日志最大天数限制
                     * @param _onlineLogMaxSaveTime 在线日志最大天数限制
                     * 
                     */
                    void SetOnlineLogMaxSaveTime(const int64_t& _onlineLogMaxSaveTime);

                    /**
                     * 判断参数 OnlineLogMaxSaveTime 是否已赋值
                     * @return OnlineLogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool OnlineLogMaxSaveTimeHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 备份日志保留时长
                     */
                    int64_t m_backupLogSaveTime;
                    bool m_backupLogSaveTimeHasBeenSet;

                    /**
                     * 恢复日志保留时长
                     */
                    int64_t m_restoreLogSaveTime;
                    bool m_restoreLogSaveTimeHasBeenSet;

                    /**
                     * 日志最大生命周期限制
                     */
                    int64_t m_logMaxSaveTime;
                    bool m_logMaxSaveTimeHasBeenSet;

                    /**
                     * 在线日志最大天数限制
                     */
                    int64_t m_onlineLogMaxSaveTime;
                    bool m_onlineLogMaxSaveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_
