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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixTaskQuuids.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateVulFix请求参数结构体
                */
                class CreateVulFixRequest : public AbstractModel
                {
                public:
                    CreateVulFixRequest();
                    ~CreateVulFixRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞对应要修复的主机列表
                     * @return CreateVulFixTaskQuuids 漏洞对应要修复的主机列表
                     * 
                     */
                    std::vector<CreateVulFixTaskQuuids> GetCreateVulFixTaskQuuids() const;

                    /**
                     * 设置漏洞对应要修复的主机列表
                     * @param _createVulFixTaskQuuids 漏洞对应要修复的主机列表
                     * 
                     */
                    void SetCreateVulFixTaskQuuids(const std::vector<CreateVulFixTaskQuuids>& _createVulFixTaskQuuids);

                    /**
                     * 判断参数 CreateVulFixTaskQuuids 是否已赋值
                     * @return CreateVulFixTaskQuuids 是否已赋值
                     * 
                     */
                    bool CreateVulFixTaskQuuidsHasBeenSet() const;

                    /**
                     * 获取快照保存天数，  0 天表示不创建快照。24小时没有快照的主机必须要创建快照才能修复
                     * @return SaveDays 快照保存天数，  0 天表示不创建快照。24小时没有快照的主机必须要创建快照才能修复
                     * 
                     */
                    uint64_t GetSaveDays() const;

                    /**
                     * 设置快照保存天数，  0 天表示不创建快照。24小时没有快照的主机必须要创建快照才能修复
                     * @param _saveDays 快照保存天数，  0 天表示不创建快照。24小时没有快照的主机必须要创建快照才能修复
                     * 
                     */
                    void SetSaveDays(const uint64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取快照名称
                     * @return SnapshotName 快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称
                     * @param _snapshotName 快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * 漏洞对应要修复的主机列表
                     */
                    std::vector<CreateVulFixTaskQuuids> m_createVulFixTaskQuuids;
                    bool m_createVulFixTaskQuuidsHasBeenSet;

                    /**
                     * 快照保存天数，  0 天表示不创建快照。24小时没有快照的主机必须要创建快照才能修复
                     */
                    uint64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * 快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_
