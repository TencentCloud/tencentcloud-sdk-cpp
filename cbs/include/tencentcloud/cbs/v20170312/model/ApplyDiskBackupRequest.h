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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ApplyDiskBackup请求参数结构体
                */
                class ApplyDiskBackupRequest : public AbstractModel
                {
                public:
                    ApplyDiskBackupRequest();
                    ~ApplyDiskBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘备份点ID，可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * @return DiskBackupId 云硬盘备份点ID，可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置云硬盘备份点ID，可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * @param _diskBackupId 云硬盘备份点ID，可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * 
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     * 
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点原云硬盘ID，可以通过[DescribeDisks](/document/product/362/16315)接口查。
                     * @return DiskId 云硬盘备份点原云硬盘ID，可以通过[DescribeDisks](/document/product/362/16315)接口查。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘备份点原云硬盘ID，可以通过[DescribeDisks](/document/product/362/16315)接口查。
                     * @param _diskId 云硬盘备份点原云硬盘ID，可以通过[DescribeDisks](/document/product/362/16315)接口查。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取回滚云硬盘备份点前是否自动关机，默认为FALSE，表示不自动关机
                     * @return AutoStopInstance 回滚云硬盘备份点前是否自动关机，默认为FALSE，表示不自动关机
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置回滚云硬盘备份点前是否自动关机，默认为FALSE，表示不自动关机
                     * @param _autoStopInstance 回滚云硬盘备份点前是否自动关机，默认为FALSE，表示不自动关机
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取回滚云硬盘备份点完成后是否自动开机，默认为FALSE，表示不自动开机; AutoStartInstance参数需要在AutoStopInstance为true时才能为true。
                     * @return AutoStartInstance 回滚云硬盘备份点完成后是否自动开机，默认为FALSE，表示不自动开机; AutoStartInstance参数需要在AutoStopInstance为true时才能为true。
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置回滚云硬盘备份点完成后是否自动开机，默认为FALSE，表示不自动开机; AutoStartInstance参数需要在AutoStopInstance为true时才能为true。
                     * @param _autoStartInstance 回滚云硬盘备份点完成后是否自动开机，默认为FALSE，表示不自动开机; AutoStartInstance参数需要在AutoStopInstance为true时才能为true。
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * 云硬盘备份点ID，可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * 云硬盘备份点原云硬盘ID，可以通过[DescribeDisks](/document/product/362/16315)接口查。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 回滚云硬盘备份点前是否自动关机，默认为FALSE，表示不自动关机
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * 回滚云硬盘备份点完成后是否自动开机，默认为FALSE，表示不自动开机; AutoStartInstance参数需要在AutoStopInstance为true时才能为true。
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYDISKBACKUPREQUEST_H_
