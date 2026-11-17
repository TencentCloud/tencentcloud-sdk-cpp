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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceMajorVersion请求参数结构体
                */
                class UpgradeDBInstanceMajorVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceMajorVersionRequest();
                    ~UpgradeDBInstanceMajorVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>目标内核版本号，可以通过API <a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取可以升级的目标内核版本号。</p>
                     * @return TargetDBKernelVersion <p>目标内核版本号，可以通过API <a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取可以升级的目标内核版本号。</p>
                     * 
                     */
                    std::string GetTargetDBKernelVersion() const;

                    /**
                     * 设置<p>目标内核版本号，可以通过API <a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取可以升级的目标内核版本号。</p>
                     * @param _targetDBKernelVersion <p>目标内核版本号，可以通过API <a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取可以升级的目标内核版本号。</p>
                     * 
                     */
                    void SetTargetDBKernelVersion(const std::string& _targetDBKernelVersion);

                    /**
                     * 判断参数 TargetDBKernelVersion 是否已赋值
                     * @return TargetDBKernelVersion 是否已赋值
                     * 
                     */
                    bool TargetDBKernelVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否为校验模式，若UpgradeCheck为True，表示仅进行内核版本兼容性检查，不会进行实质性的升级操作，对原实例无影响。检查结果可以通过升级日志查看。</p>
                     * @return UpgradeCheck <p>是否为校验模式，若UpgradeCheck为True，表示仅进行内核版本兼容性检查，不会进行实质性的升级操作，对原实例无影响。检查结果可以通过升级日志查看。</p>
                     * 
                     */
                    bool GetUpgradeCheck() const;

                    /**
                     * 设置<p>是否为校验模式，若UpgradeCheck为True，表示仅进行内核版本兼容性检查，不会进行实质性的升级操作，对原实例无影响。检查结果可以通过升级日志查看。</p>
                     * @param _upgradeCheck <p>是否为校验模式，若UpgradeCheck为True，表示仅进行内核版本兼容性检查，不会进行实质性的升级操作，对原实例无影响。检查结果可以通过升级日志查看。</p>
                     * 
                     */
                    void SetUpgradeCheck(const bool& _upgradeCheck);

                    /**
                     * 判断参数 UpgradeCheck 是否已赋值
                     * @return UpgradeCheck 是否已赋值
                     * 
                     */
                    bool UpgradeCheckHasBeenSet() const;

                    /**
                     * 获取<p>升级前备份选项。True，表示升级前需要创建全量备份，False，表示升级前不需要创建全量备份。当实例已有备份集可以恢复到升级前的状态时，可选择False，否则需要指定为True。UpgradeCheck为True时，此参数无效。</p>
                     * @return BackupBeforeUpgrade <p>升级前备份选项。True，表示升级前需要创建全量备份，False，表示升级前不需要创建全量备份。当实例已有备份集可以恢复到升级前的状态时，可选择False，否则需要指定为True。UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    bool GetBackupBeforeUpgrade() const;

                    /**
                     * 设置<p>升级前备份选项。True，表示升级前需要创建全量备份，False，表示升级前不需要创建全量备份。当实例已有备份集可以恢复到升级前的状态时，可选择False，否则需要指定为True。UpgradeCheck为True时，此参数无效。</p>
                     * @param _backupBeforeUpgrade <p>升级前备份选项。True，表示升级前需要创建全量备份，False，表示升级前不需要创建全量备份。当实例已有备份集可以恢复到升级前的状态时，可选择False，否则需要指定为True。UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetBackupBeforeUpgrade(const bool& _backupBeforeUpgrade);

                    /**
                     * 判断参数 BackupBeforeUpgrade 是否已赋值
                     * @return BackupBeforeUpgrade 是否已赋值
                     * 
                     */
                    bool BackupBeforeUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>统计信息收集选项，对主例运行 ANALYZE 以在升级后更新系统统计信息。可选值包括，<br>0：不需要收集统计信息；<br>1：实例恢复写之前收集统计信息；<br>3：实例恢复写之后收集统计信息。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @return StatisticsRefreshOption <p>统计信息收集选项，对主例运行 ANALYZE 以在升级后更新系统统计信息。可选值包括，<br>0：不需要收集统计信息；<br>1：实例恢复写之前收集统计信息；<br>3：实例恢复写之后收集统计信息。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    int64_t GetStatisticsRefreshOption() const;

                    /**
                     * 设置<p>统计信息收集选项，对主例运行 ANALYZE 以在升级后更新系统统计信息。可选值包括，<br>0：不需要收集统计信息；<br>1：实例恢复写之前收集统计信息；<br>3：实例恢复写之后收集统计信息。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @param _statisticsRefreshOption <p>统计信息收集选项，对主例运行 ANALYZE 以在升级后更新系统统计信息。可选值包括，<br>0：不需要收集统计信息；<br>1：实例恢复写之前收集统计信息；<br>3：实例恢复写之后收集统计信息。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetStatisticsRefreshOption(const int64_t& _statisticsRefreshOption);

                    /**
                     * 判断参数 StatisticsRefreshOption 是否已赋值
                     * @return StatisticsRefreshOption 是否已赋值
                     * 
                     */
                    bool StatisticsRefreshOptionHasBeenSet() const;

                    /**
                     * 获取<p>插件升级选项，pg_upgrade不会升级任何插件，需要在升级完成后在创建过插件的库上执行&quot;ALTER EXTENSION UPDATE&quot;。发起升级实例大版本时可以指定在实例恢复写前/后是否需要升级任务自动升级插件版本。可选值包括：<br>0：不需要自动升级插件；<br>1：恢复写之前升级插件；<br>2：恢复写之后升级插件。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @return ExtensionUpgradeOption <p>插件升级选项，pg_upgrade不会升级任何插件，需要在升级完成后在创建过插件的库上执行&quot;ALTER EXTENSION UPDATE&quot;。发起升级实例大版本时可以指定在实例恢复写前/后是否需要升级任务自动升级插件版本。可选值包括：<br>0：不需要自动升级插件；<br>1：恢复写之前升级插件；<br>2：恢复写之后升级插件。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    int64_t GetExtensionUpgradeOption() const;

                    /**
                     * 设置<p>插件升级选项，pg_upgrade不会升级任何插件，需要在升级完成后在创建过插件的库上执行&quot;ALTER EXTENSION UPDATE&quot;。发起升级实例大版本时可以指定在实例恢复写前/后是否需要升级任务自动升级插件版本。可选值包括：<br>0：不需要自动升级插件；<br>1：恢复写之前升级插件；<br>2：恢复写之后升级插件。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @param _extensionUpgradeOption <p>插件升级选项，pg_upgrade不会升级任何插件，需要在升级完成后在创建过插件的库上执行&quot;ALTER EXTENSION UPDATE&quot;。发起升级实例大版本时可以指定在实例恢复写前/后是否需要升级任务自动升级插件版本。可选值包括：<br>0：不需要自动升级插件；<br>1：恢复写之前升级插件；<br>2：恢复写之后升级插件。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetExtensionUpgradeOption(const int64_t& _extensionUpgradeOption);

                    /**
                     * 判断参数 ExtensionUpgradeOption 是否已赋值
                     * @return ExtensionUpgradeOption 是否已赋值
                     * 
                     */
                    bool ExtensionUpgradeOptionHasBeenSet() const;

                    /**
                     * 获取<p>升级时间选项，升级过程中会有一段时间实例只读，并会有一次秒级闪断，发起升级时需要选择这段影响的时间窗。可选值包括：<br>0：自动执行，不需要指定时间窗；<br>1：指定本次升级任务的时间窗，通过参数UpgradeTimeBegin和UpgradeTimeEnd设置；<br>2：在实例运维时间窗内执行。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @return UpgradeTimeOption <p>升级时间选项，升级过程中会有一段时间实例只读，并会有一次秒级闪断，发起升级时需要选择这段影响的时间窗。可选值包括：<br>0：自动执行，不需要指定时间窗；<br>1：指定本次升级任务的时间窗，通过参数UpgradeTimeBegin和UpgradeTimeEnd设置；<br>2：在实例运维时间窗内执行。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    int64_t GetUpgradeTimeOption() const;

                    /**
                     * 设置<p>升级时间选项，升级过程中会有一段时间实例只读，并会有一次秒级闪断，发起升级时需要选择这段影响的时间窗。可选值包括：<br>0：自动执行，不需要指定时间窗；<br>1：指定本次升级任务的时间窗，通过参数UpgradeTimeBegin和UpgradeTimeEnd设置；<br>2：在实例运维时间窗内执行。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @param _upgradeTimeOption <p>升级时间选项，升级过程中会有一段时间实例只读，并会有一次秒级闪断，发起升级时需要选择这段影响的时间窗。可选值包括：<br>0：自动执行，不需要指定时间窗；<br>1：指定本次升级任务的时间窗，通过参数UpgradeTimeBegin和UpgradeTimeEnd设置；<br>2：在实例运维时间窗内执行。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetUpgradeTimeOption(const int64_t& _upgradeTimeOption);

                    /**
                     * 判断参数 UpgradeTimeOption 是否已赋值
                     * @return UpgradeTimeOption 是否已赋值
                     * 
                     */
                    bool UpgradeTimeOptionHasBeenSet() const;

                    /**
                     * 获取<p>升级时间窗开始时间，时间格式：HH:MM:SS，例如：01:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @return UpgradeTimeBegin <p>升级时间窗开始时间，时间格式：HH:MM:SS，例如：01:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    std::string GetUpgradeTimeBegin() const;

                    /**
                     * 设置<p>升级时间窗开始时间，时间格式：HH:MM:SS，例如：01:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @param _upgradeTimeBegin <p>升级时间窗开始时间，时间格式：HH:MM:SS，例如：01:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetUpgradeTimeBegin(const std::string& _upgradeTimeBegin);

                    /**
                     * 判断参数 UpgradeTimeBegin 是否已赋值
                     * @return UpgradeTimeBegin 是否已赋值
                     * 
                     */
                    bool UpgradeTimeBeginHasBeenSet() const;

                    /**
                     * 获取<p>升级时间窗截止时间，时间格式：HH:MM:SS，例如：02:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @return UpgradeTimeEnd <p>升级时间窗截止时间，时间格式：HH:MM:SS，例如：02:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    std::string GetUpgradeTimeEnd() const;

                    /**
                     * 设置<p>升级时间窗截止时间，时间格式：HH:MM:SS，例如：02:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * @param _upgradeTimeEnd <p>升级时间窗截止时间，时间格式：HH:MM:SS，例如：02:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     * 
                     */
                    void SetUpgradeTimeEnd(const std::string& _upgradeTimeEnd);

                    /**
                     * 判断参数 UpgradeTimeEnd 是否已赋值
                     * @return UpgradeTimeEnd 是否已赋值
                     * 
                     */
                    bool UpgradeTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>升级时是否携带RO。开启时在RO重建过程中会存在RO数据延迟现象。</p><p>默认值：false</p>
                     * @return UpgradeReadOnlyInstance <p>升级时是否携带RO。开启时在RO重建过程中会存在RO数据延迟现象。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetUpgradeReadOnlyInstance() const;

                    /**
                     * 设置<p>升级时是否携带RO。开启时在RO重建过程中会存在RO数据延迟现象。</p><p>默认值：false</p>
                     * @param _upgradeReadOnlyInstance <p>升级时是否携带RO。开启时在RO重建过程中会存在RO数据延迟现象。</p><p>默认值：false</p>
                     * 
                     */
                    void SetUpgradeReadOnlyInstance(const bool& _upgradeReadOnlyInstance);

                    /**
                     * 判断参数 UpgradeReadOnlyInstance 是否已赋值
                     * @return UpgradeReadOnlyInstance 是否已赋值
                     * 
                     */
                    bool UpgradeReadOnlyInstanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>目标内核版本号，可以通过API <a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取可以升级的目标内核版本号。</p>
                     */
                    std::string m_targetDBKernelVersion;
                    bool m_targetDBKernelVersionHasBeenSet;

                    /**
                     * <p>是否为校验模式，若UpgradeCheck为True，表示仅进行内核版本兼容性检查，不会进行实质性的升级操作，对原实例无影响。检查结果可以通过升级日志查看。</p>
                     */
                    bool m_upgradeCheck;
                    bool m_upgradeCheckHasBeenSet;

                    /**
                     * <p>升级前备份选项。True，表示升级前需要创建全量备份，False，表示升级前不需要创建全量备份。当实例已有备份集可以恢复到升级前的状态时，可选择False，否则需要指定为True。UpgradeCheck为True时，此参数无效。</p>
                     */
                    bool m_backupBeforeUpgrade;
                    bool m_backupBeforeUpgradeHasBeenSet;

                    /**
                     * <p>统计信息收集选项，对主例运行 ANALYZE 以在升级后更新系统统计信息。可选值包括，<br>0：不需要收集统计信息；<br>1：实例恢复写之前收集统计信息；<br>3：实例恢复写之后收集统计信息。<br>UpgradeCheck为True时，此参数无效。</p>
                     */
                    int64_t m_statisticsRefreshOption;
                    bool m_statisticsRefreshOptionHasBeenSet;

                    /**
                     * <p>插件升级选项，pg_upgrade不会升级任何插件，需要在升级完成后在创建过插件的库上执行&quot;ALTER EXTENSION UPDATE&quot;。发起升级实例大版本时可以指定在实例恢复写前/后是否需要升级任务自动升级插件版本。可选值包括：<br>0：不需要自动升级插件；<br>1：恢复写之前升级插件；<br>2：恢复写之后升级插件。<br>UpgradeCheck为True时，此参数无效。</p>
                     */
                    int64_t m_extensionUpgradeOption;
                    bool m_extensionUpgradeOptionHasBeenSet;

                    /**
                     * <p>升级时间选项，升级过程中会有一段时间实例只读，并会有一次秒级闪断，发起升级时需要选择这段影响的时间窗。可选值包括：<br>0：自动执行，不需要指定时间窗；<br>1：指定本次升级任务的时间窗，通过参数UpgradeTimeBegin和UpgradeTimeEnd设置；<br>2：在实例运维时间窗内执行。<br>UpgradeCheck为True时，此参数无效。</p>
                     */
                    int64_t m_upgradeTimeOption;
                    bool m_upgradeTimeOptionHasBeenSet;

                    /**
                     * <p>升级时间窗开始时间，时间格式：HH:MM:SS，例如：01:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     */
                    std::string m_upgradeTimeBegin;
                    bool m_upgradeTimeBeginHasBeenSet;

                    /**
                     * <p>升级时间窗截止时间，时间格式：HH:MM:SS，例如：02:00:00。当UpgradeTimeOption为1时，该参数有效。<br>UpgradeCheck为True时，此参数无效。</p>
                     */
                    std::string m_upgradeTimeEnd;
                    bool m_upgradeTimeEndHasBeenSet;

                    /**
                     * <p>升级时是否携带RO。开启时在RO重建过程中会存在RO数据延迟现象。</p><p>默认值：false</p>
                     */
                    bool m_upgradeReadOnlyInstance;
                    bool m_upgradeReadOnlyInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
