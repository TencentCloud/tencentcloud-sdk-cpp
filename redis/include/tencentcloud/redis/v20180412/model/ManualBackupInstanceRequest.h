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
                     * 获取待操作的实例ID，可通过 DescribeInstance接口返回值中的 InstanceId 获取。
                     * @return InstanceId 待操作的实例ID，可通过 DescribeInstance接口返回值中的 InstanceId 获取。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待操作的实例ID，可通过 DescribeInstance接口返回值中的 InstanceId 获取。
                     * @param InstanceId 待操作的实例ID，可通过 DescribeInstance接口返回值中的 InstanceId 获取。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份的备注信息
                     * @return Remark 备份的备注信息
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备份的备注信息
                     * @param Remark 备份的备注信息
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取保存天数。0代表指定默认保留时间
                     * @return StorageDays 保存天数。0代表指定默认保留时间
                     */
                    int64_t GetStorageDays() const;

                    /**
                     * 设置保存天数。0代表指定默认保留时间
                     * @param StorageDays 保存天数。0代表指定默认保留时间
                     */
                    void SetStorageDays(const int64_t& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     */
                    bool StorageDaysHasBeenSet() const;

                private:

                    /**
                     * 待操作的实例ID，可通过 DescribeInstance接口返回值中的 InstanceId 获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份的备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 保存天数。0代表指定默认保留时间
                     */
                    int64_t m_storageDays;
                    bool m_storageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_
