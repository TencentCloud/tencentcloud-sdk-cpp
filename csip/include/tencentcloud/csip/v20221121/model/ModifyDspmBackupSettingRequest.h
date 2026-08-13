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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * 获取<p>备份日志保留时长</p>
                     * @return BackupLogSaveTime <p>备份日志保留时长</p>
                     * 
                     */
                    int64_t GetBackupLogSaveTime() const;

                    /**
                     * 设置<p>备份日志保留时长</p>
                     * @param _backupLogSaveTime <p>备份日志保留时长</p>
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
                     * 获取<p>恢复日志保留时长</p>
                     * @return RestoreLogSaveTime <p>恢复日志保留时长</p>
                     * 
                     */
                    int64_t GetRestoreLogSaveTime() const;

                    /**
                     * 设置<p>恢复日志保留时长</p>
                     * @param _restoreLogSaveTime <p>恢复日志保留时长</p>
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
                     * 获取<p>日志最大生命周期限制</p>
                     * @return LogMaxSaveTime <p>日志最大生命周期限制</p>
                     * 
                     */
                    int64_t GetLogMaxSaveTime() const;

                    /**
                     * 设置<p>日志最大生命周期限制</p>
                     * @param _logMaxSaveTime <p>日志最大生命周期限制</p>
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
                     * 获取<p>在线日志最大天数限制</p>
                     * @return OnlineLogMaxSaveTime <p>在线日志最大天数限制</p>
                     * 
                     */
                    int64_t GetOnlineLogMaxSaveTime() const;

                    /**
                     * 设置<p>在线日志最大天数限制</p>
                     * @param _onlineLogMaxSaveTime <p>在线日志最大天数限制</p>
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
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>备份日志保留时长</p>
                     */
                    int64_t m_backupLogSaveTime;
                    bool m_backupLogSaveTimeHasBeenSet;

                    /**
                     * <p>恢复日志保留时长</p>
                     */
                    int64_t m_restoreLogSaveTime;
                    bool m_restoreLogSaveTimeHasBeenSet;

                    /**
                     * <p>日志最大生命周期限制</p>
                     */
                    int64_t m_logMaxSaveTime;
                    bool m_logMaxSaveTimeHasBeenSet;

                    /**
                     * <p>在线日志最大天数限制</p>
                     */
                    int64_t m_onlineLogMaxSaveTime;
                    bool m_onlineLogMaxSaveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_
