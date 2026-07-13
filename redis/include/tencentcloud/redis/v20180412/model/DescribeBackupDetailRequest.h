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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_

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
                * DescribeBackupDetail请求参数结构体
                */
                class DescribeBackupDetailRequest : public AbstractModel
                {
                public:
                    DescribeBackupDetailRequest();
                    ~DescribeBackupDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>备份 ID，可通过接口 <a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a> 返回的参数 <strong>RedisBackupSet</strong> 获取。</p>
                     * @return BackupId <p>备份 ID，可通过接口 <a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a> 返回的参数 <strong>RedisBackupSet</strong> 获取。</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>备份 ID，可通过接口 <a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a> 返回的参数 <strong>RedisBackupSet</strong> 获取。</p>
                     * @param _backupId <p>备份 ID，可通过接口 <a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a> 返回的参数 <strong>RedisBackupSet</strong> 获取。</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份 ID，可通过接口 <a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a> 返回的参数 <strong>RedisBackupSet</strong> 获取。</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_
