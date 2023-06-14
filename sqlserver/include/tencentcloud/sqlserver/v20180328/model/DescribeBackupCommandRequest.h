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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBackupCommand请求参数结构体
                */
                class DescribeBackupCommandRequest : public AbstractModel
                {
                public:
                    DescribeBackupCommandRequest();
                    ~DescribeBackupCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件类型，FULL-全量备份，FULL_LOG-全量备份需要日志增量，FULL_DIFF-全量备份需要差异增量，LOG-日志备份，DIFF-差异备份
                     * @return BackupFileType 备份文件类型，FULL-全量备份，FULL_LOG-全量备份需要日志增量，FULL_DIFF-全量备份需要差异增量，LOG-日志备份，DIFF-差异备份
                     * 
                     */
                    std::string GetBackupFileType() const;

                    /**
                     * 设置备份文件类型，FULL-全量备份，FULL_LOG-全量备份需要日志增量，FULL_DIFF-全量备份需要差异增量，LOG-日志备份，DIFF-差异备份
                     * @param _backupFileType 备份文件类型，FULL-全量备份，FULL_LOG-全量备份需要日志增量，FULL_DIFF-全量备份需要差异增量，LOG-日志备份，DIFF-差异备份
                     * 
                     */
                    void SetBackupFileType(const std::string& _backupFileType);

                    /**
                     * 判断参数 BackupFileType 是否已赋值
                     * @return BackupFileType 是否已赋值
                     * 
                     */
                    bool BackupFileTypeHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DataBaseName 数据库名称
                     * 
                     */
                    std::string GetDataBaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _dataBaseName 数据库名称
                     * 
                     */
                    void SetDataBaseName(const std::string& _dataBaseName);

                    /**
                     * 判断参数 DataBaseName 是否已赋值
                     * @return DataBaseName 是否已赋值
                     * 
                     */
                    bool DataBaseNameHasBeenSet() const;

                    /**
                     * 获取是否需要恢复，NO-不需要，YES-需要
                     * @return IsRecovery 是否需要恢复，NO-不需要，YES-需要
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置是否需要恢复，NO-不需要，YES-需要
                     * @param _isRecovery 是否需要恢复，NO-不需要，YES-需要
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

                    /**
                     * 获取备份文件保存的路径；如果不填则默认在D:\\
                     * @return LocalPath 备份文件保存的路径；如果不填则默认在D:\\
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置备份文件保存的路径；如果不填则默认在D:\\
                     * @param _localPath 备份文件保存的路径；如果不填则默认在D:\\
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                private:

                    /**
                     * 备份文件类型，FULL-全量备份，FULL_LOG-全量备份需要日志增量，FULL_DIFF-全量备份需要差异增量，LOG-日志备份，DIFF-差异备份
                     */
                    std::string m_backupFileType;
                    bool m_backupFileTypeHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dataBaseName;
                    bool m_dataBaseNameHasBeenSet;

                    /**
                     * 是否需要恢复，NO-不需要，YES-需要
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * 备份文件保存的路径；如果不填则默认在D:\\
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPCOMMANDREQUEST_H_
