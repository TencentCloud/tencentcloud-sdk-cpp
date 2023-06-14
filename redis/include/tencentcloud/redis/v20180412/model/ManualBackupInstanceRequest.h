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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ManualBackupInstance请求参数结构体
                */
                class ManualBackupInstanceRequest : public AbstractModel
                {
                public:
                    ManualBackupInstanceRequest();
                    ~ManualBackupInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取手动备份任务的备注信息。
                     * @return Remark 手动备份任务的备注信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置手动备份任务的备注信息。
                     * @param _remark 手动备份任务的备注信息。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取备份数据的保存天数。
- 单位：天；默认值为7天；取值范围：[0.1825]。如果超过 7天，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
- 如果不配置该参数，默认与自动备份的保留时间一致。
- 如果未设置自动备份，默认为7天。
                     * @return StorageDays 备份数据的保存天数。
- 单位：天；默认值为7天；取值范围：[0.1825]。如果超过 7天，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
- 如果不配置该参数，默认与自动备份的保留时间一致。
- 如果未设置自动备份，默认为7天。
                     * 
                     */
                    int64_t GetStorageDays() const;

                    /**
                     * 设置备份数据的保存天数。
- 单位：天；默认值为7天；取值范围：[0.1825]。如果超过 7天，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
- 如果不配置该参数，默认与自动备份的保留时间一致。
- 如果未设置自动备份，默认为7天。
                     * @param _storageDays 备份数据的保存天数。
- 单位：天；默认值为7天；取值范围：[0.1825]。如果超过 7天，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
- 如果不配置该参数，默认与自动备份的保留时间一致。
- 如果未设置自动备份，默认为7天。
                     * 
                     */
                    void SetStorageDays(const int64_t& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     * 
                     */
                    bool StorageDaysHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 手动备份任务的备注信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 备份数据的保存天数。
- 单位：天；默认值为7天；取值范围：[0.1825]。如果超过 7天，请[提交工单](https://console.cloud.tencent.com/workorder/category)申请。
- 如果不配置该参数，默认与自动备份的保留时间一致。
- 如果未设置自动备份，默认为7天。
                     */
                    int64_t m_storageDays;
                    bool m_storageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_
