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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库配置信息
                */
                class DbNormalDetail : public AbstractModel
                {
                public:
                    DbNormalDetail();
                    ~DbNormalDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已订阅 0：否 1：是
                     * @return IsSubscribed 是否已订阅 0：否 1：是
                     * 
                     */
                    std::string GetIsSubscribed() const;

                    /**
                     * 设置是否已订阅 0：否 1：是
                     * @param _isSubscribed 是否已订阅 0：否 1：是
                     * 
                     */
                    void SetIsSubscribed(const std::string& _isSubscribed);

                    /**
                     * 判断参数 IsSubscribed 是否已赋值
                     * @return IsSubscribed 是否已赋值
                     * 
                     */
                    bool IsSubscribedHasBeenSet() const;

                    /**
                     * 获取数据库排序规则
                     * @return CollationName 数据库排序规则
                     * 
                     */
                    std::string GetCollationName() const;

                    /**
                     * 设置数据库排序规则
                     * @param _collationName 数据库排序规则
                     * 
                     */
                    void SetCollationName(const std::string& _collationName);

                    /**
                     * 判断参数 CollationName 是否已赋值
                     * @return CollationName 是否已赋值
                     * 
                     */
                    bool CollationNameHasBeenSet() const;

                    /**
                     * 获取开启CT之后是否自动清理 0：否 1：是
                     * @return IsAutoCleanupOn 开启CT之后是否自动清理 0：否 1：是
                     * 
                     */
                    std::string GetIsAutoCleanupOn() const;

                    /**
                     * 设置开启CT之后是否自动清理 0：否 1：是
                     * @param _isAutoCleanupOn 开启CT之后是否自动清理 0：否 1：是
                     * 
                     */
                    void SetIsAutoCleanupOn(const std::string& _isAutoCleanupOn);

                    /**
                     * 判断参数 IsAutoCleanupOn 是否已赋值
                     * @return IsAutoCleanupOn 是否已赋值
                     * 
                     */
                    bool IsAutoCleanupOnHasBeenSet() const;

                    /**
                     * 获取是否已启用代理  0：否 1：是
                     * @return IsBrokerEnabled 是否已启用代理  0：否 1：是
                     * 
                     */
                    std::string GetIsBrokerEnabled() const;

                    /**
                     * 设置是否已启用代理  0：否 1：是
                     * @param _isBrokerEnabled 是否已启用代理  0：否 1：是
                     * 
                     */
                    void SetIsBrokerEnabled(const std::string& _isBrokerEnabled);

                    /**
                     * 判断参数 IsBrokerEnabled 是否已赋值
                     * @return IsBrokerEnabled 是否已赋值
                     * 
                     */
                    bool IsBrokerEnabledHasBeenSet() const;

                    /**
                     * 获取是否已开启/关闭CDC 0：关闭 1：开启
                     * @return IsCdcEnabled 是否已开启/关闭CDC 0：关闭 1：开启
                     * 
                     */
                    std::string GetIsCdcEnabled() const;

                    /**
                     * 设置是否已开启/关闭CDC 0：关闭 1：开启
                     * @param _isCdcEnabled 是否已开启/关闭CDC 0：关闭 1：开启
                     * 
                     */
                    void SetIsCdcEnabled(const std::string& _isCdcEnabled);

                    /**
                     * 判断参数 IsCdcEnabled 是否已赋值
                     * @return IsCdcEnabled 是否已赋值
                     * 
                     */
                    bool IsCdcEnabledHasBeenSet() const;

                    /**
                     * 获取是否已启用/ 禁用CT 0：禁用 1：启用
                     * @return IsDbChainingOn 是否已启用/ 禁用CT 0：禁用 1：启用
                     * 
                     */
                    std::string GetIsDbChainingOn() const;

                    /**
                     * 设置是否已启用/ 禁用CT 0：禁用 1：启用
                     * @param _isDbChainingOn 是否已启用/ 禁用CT 0：禁用 1：启用
                     * 
                     */
                    void SetIsDbChainingOn(const std::string& _isDbChainingOn);

                    /**
                     * 判断参数 IsDbChainingOn 是否已赋值
                     * @return IsDbChainingOn 是否已赋值
                     * 
                     */
                    bool IsDbChainingOnHasBeenSet() const;

                    /**
                     * 获取是否加密 0：否 1：是
                     * @return IsEncrypted 是否加密 0：否 1：是
                     * 
                     */
                    std::string GetIsEncrypted() const;

                    /**
                     * 设置是否加密 0：否 1：是
                     * @param _isEncrypted 是否加密 0：否 1：是
                     * 
                     */
                    void SetIsEncrypted(const std::string& _isEncrypted);

                    /**
                     * 判断参数 IsEncrypted 是否已赋值
                     * @return IsEncrypted 是否已赋值
                     * 
                     */
                    bool IsEncryptedHasBeenSet() const;

                    /**
                     * 获取是否全文启用 0：否 1：是
                     * @return IsFulltextEnabled 是否全文启用 0：否 1：是
                     * @deprecated
                     */
                    std::string GetIsFulltextEnabled() const;

                    /**
                     * 设置是否全文启用 0：否 1：是
                     * @param _isFulltextEnabled 是否全文启用 0：否 1：是
                     * @deprecated
                     */
                    void SetIsFulltextEnabled(const std::string& _isFulltextEnabled);

                    /**
                     * 判断参数 IsFulltextEnabled 是否已赋值
                     * @return IsFulltextEnabled 是否已赋值
                     * @deprecated
                     */
                    bool IsFulltextEnabledHasBeenSet() const;

                    /**
                     * 获取是否是镜像 0：否 1：是
                     * @return IsMirroring 是否是镜像 0：否 1：是
                     * 
                     */
                    std::string GetIsMirroring() const;

                    /**
                     * 设置是否是镜像 0：否 1：是
                     * @param _isMirroring 是否是镜像 0：否 1：是
                     * 
                     */
                    void SetIsMirroring(const std::string& _isMirroring);

                    /**
                     * 判断参数 IsMirroring 是否已赋值
                     * @return IsMirroring 是否已赋值
                     * 
                     */
                    bool IsMirroringHasBeenSet() const;

                    /**
                     * 获取是否已发布 0：否 1：是
                     * @return IsPublished 是否已发布 0：否 1：是
                     * 
                     */
                    std::string GetIsPublished() const;

                    /**
                     * 设置是否已发布 0：否 1：是
                     * @param _isPublished 是否已发布 0：否 1：是
                     * 
                     */
                    void SetIsPublished(const std::string& _isPublished);

                    /**
                     * 判断参数 IsPublished 是否已赋值
                     * @return IsPublished 是否已赋值
                     * 
                     */
                    bool IsPublishedHasBeenSet() const;

                    /**
                     * 获取是否开启快照 0：否 1：是
                     * @return IsReadCommittedSnapshotOn 是否开启快照 0：否 1：是
                     * 
                     */
                    std::string GetIsReadCommittedSnapshotOn() const;

                    /**
                     * 设置是否开启快照 0：否 1：是
                     * @param _isReadCommittedSnapshotOn 是否开启快照 0：否 1：是
                     * 
                     */
                    void SetIsReadCommittedSnapshotOn(const std::string& _isReadCommittedSnapshotOn);

                    /**
                     * 判断参数 IsReadCommittedSnapshotOn 是否已赋值
                     * @return IsReadCommittedSnapshotOn 是否已赋值
                     * 
                     */
                    bool IsReadCommittedSnapshotOnHasBeenSet() const;

                    /**
                     * 获取是否可信任 0：否 1：是
                     * @return IsTrustworthyOn 是否可信任 0：否 1：是
                     * 
                     */
                    std::string GetIsTrustworthyOn() const;

                    /**
                     * 设置是否可信任 0：否 1：是
                     * @param _isTrustworthyOn 是否可信任 0：否 1：是
                     * 
                     */
                    void SetIsTrustworthyOn(const std::string& _isTrustworthyOn);

                    /**
                     * 判断参数 IsTrustworthyOn 是否已赋值
                     * @return IsTrustworthyOn 是否已赋值
                     * 
                     */
                    bool IsTrustworthyOnHasBeenSet() const;

                    /**
                     * 获取镜像状态
                     * @return MirroringState 镜像状态
                     * 
                     */
                    std::string GetMirroringState() const;

                    /**
                     * 设置镜像状态
                     * @param _mirroringState 镜像状态
                     * 
                     */
                    void SetMirroringState(const std::string& _mirroringState);

                    /**
                     * 判断参数 MirroringState 是否已赋值
                     * @return MirroringState 是否已赋值
                     * 
                     */
                    bool MirroringStateHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名称
                     * @param _name 数据库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取恢复模式
                     * @return RecoveryModelDesc 恢复模式
                     * 
                     */
                    std::string GetRecoveryModelDesc() const;

                    /**
                     * 设置恢复模式
                     * @param _recoveryModelDesc 恢复模式
                     * 
                     */
                    void SetRecoveryModelDesc(const std::string& _recoveryModelDesc);

                    /**
                     * 判断参数 RecoveryModelDesc 是否已赋值
                     * @return RecoveryModelDesc 是否已赋值
                     * 
                     */
                    bool RecoveryModelDescHasBeenSet() const;

                    /**
                     * 获取保留天数
                     * @return RetentionPeriod 保留天数
                     * 
                     */
                    std::string GetRetentionPeriod() const;

                    /**
                     * 设置保留天数
                     * @param _retentionPeriod 保留天数
                     * 
                     */
                    void SetRetentionPeriod(const std::string& _retentionPeriod);

                    /**
                     * 判断参数 RetentionPeriod 是否已赋值
                     * @return RetentionPeriod 是否已赋值
                     * 
                     */
                    bool RetentionPeriodHasBeenSet() const;

                    /**
                     * 获取数据库状态
                     * @return StateDesc 数据库状态
                     * 
                     */
                    std::string GetStateDesc() const;

                    /**
                     * 设置数据库状态
                     * @param _stateDesc 数据库状态
                     * 
                     */
                    void SetStateDesc(const std::string& _stateDesc);

                    /**
                     * 判断参数 StateDesc 是否已赋值
                     * @return StateDesc 是否已赋值
                     * 
                     */
                    bool StateDescHasBeenSet() const;

                    /**
                     * 获取用户类型
                     * @return UserAccessDesc 用户类型
                     * 
                     */
                    std::string GetUserAccessDesc() const;

                    /**
                     * 设置用户类型
                     * @param _userAccessDesc 用户类型
                     * 
                     */
                    void SetUserAccessDesc(const std::string& _userAccessDesc);

                    /**
                     * 判断参数 UserAccessDesc 是否已赋值
                     * @return UserAccessDesc 是否已赋值
                     * 
                     */
                    bool UserAccessDescHasBeenSet() const;

                    /**
                     * 获取数据库创建时间
                     * @return CreateTime 数据库创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据库创建时间
                     * @param _createTime 数据库创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否全文启用 0：否 1：是
                     * @return IsFullTextEnabled 是否全文启用 0：否 1：是
                     * 
                     */
                    std::string GetIsFullTextEnabled() const;

                    /**
                     * 设置是否全文启用 0：否 1：是
                     * @param _isFullTextEnabled 是否全文启用 0：否 1：是
                     * 
                     */
                    void SetIsFullTextEnabled(const std::string& _isFullTextEnabled);

                    /**
                     * 判断参数 IsFullTextEnabled 是否已赋值
                     * @return IsFullTextEnabled 是否已赋值
                     * 
                     */
                    bool IsFullTextEnabledHasBeenSet() const;

                private:

                    /**
                     * 是否已订阅 0：否 1：是
                     */
                    std::string m_isSubscribed;
                    bool m_isSubscribedHasBeenSet;

                    /**
                     * 数据库排序规则
                     */
                    std::string m_collationName;
                    bool m_collationNameHasBeenSet;

                    /**
                     * 开启CT之后是否自动清理 0：否 1：是
                     */
                    std::string m_isAutoCleanupOn;
                    bool m_isAutoCleanupOnHasBeenSet;

                    /**
                     * 是否已启用代理  0：否 1：是
                     */
                    std::string m_isBrokerEnabled;
                    bool m_isBrokerEnabledHasBeenSet;

                    /**
                     * 是否已开启/关闭CDC 0：关闭 1：开启
                     */
                    std::string m_isCdcEnabled;
                    bool m_isCdcEnabledHasBeenSet;

                    /**
                     * 是否已启用/ 禁用CT 0：禁用 1：启用
                     */
                    std::string m_isDbChainingOn;
                    bool m_isDbChainingOnHasBeenSet;

                    /**
                     * 是否加密 0：否 1：是
                     */
                    std::string m_isEncrypted;
                    bool m_isEncryptedHasBeenSet;

                    /**
                     * 是否全文启用 0：否 1：是
                     */
                    std::string m_isFulltextEnabled;
                    bool m_isFulltextEnabledHasBeenSet;

                    /**
                     * 是否是镜像 0：否 1：是
                     */
                    std::string m_isMirroring;
                    bool m_isMirroringHasBeenSet;

                    /**
                     * 是否已发布 0：否 1：是
                     */
                    std::string m_isPublished;
                    bool m_isPublishedHasBeenSet;

                    /**
                     * 是否开启快照 0：否 1：是
                     */
                    std::string m_isReadCommittedSnapshotOn;
                    bool m_isReadCommittedSnapshotOnHasBeenSet;

                    /**
                     * 是否可信任 0：否 1：是
                     */
                    std::string m_isTrustworthyOn;
                    bool m_isTrustworthyOnHasBeenSet;

                    /**
                     * 镜像状态
                     */
                    std::string m_mirroringState;
                    bool m_mirroringStateHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 恢复模式
                     */
                    std::string m_recoveryModelDesc;
                    bool m_recoveryModelDescHasBeenSet;

                    /**
                     * 保留天数
                     */
                    std::string m_retentionPeriod;
                    bool m_retentionPeriodHasBeenSet;

                    /**
                     * 数据库状态
                     */
                    std::string m_stateDesc;
                    bool m_stateDescHasBeenSet;

                    /**
                     * 用户类型
                     */
                    std::string m_userAccessDesc;
                    bool m_userAccessDescHasBeenSet;

                    /**
                     * 数据库创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否全文启用 0：否 1：是
                     */
                    std::string m_isFullTextEnabled;
                    bool m_isFullTextEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_
