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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteInstance请求参数结构体
                */
                class DeleteInstanceRequest : public AbstractModel
                {
                public:
                    DeleteInstanceRequest();
                    ~DeleteInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>回收站锁定设置，true时不可手动销毁，到预设时间后自动销毁</p><p>默认值：false</p>
                     * @return LockEnabled <p>回收站锁定设置，true时不可手动销毁，到预设时间后自动销毁</p><p>默认值：false</p>
                     * 
                     */
                    bool GetLockEnabled() const;

                    /**
                     * 设置<p>回收站锁定设置，true时不可手动销毁，到预设时间后自动销毁</p><p>默认值：false</p>
                     * @param _lockEnabled <p>回收站锁定设置，true时不可手动销毁，到预设时间后自动销毁</p><p>默认值：false</p>
                     * 
                     */
                    void SetLockEnabled(const bool& _lockEnabled);

                    /**
                     * 判断参数 LockEnabled 是否已赋值
                     * @return LockEnabled 是否已赋值
                     * 
                     */
                    bool LockEnabledHasBeenSet() const;

                    /**
                     * 获取<p>放入回收站的锁定时间</p><p>取值范围：[1, 7]</p><p>单位：天</p><p>默认值：1</p>
                     * @return LockDuration <p>放入回收站的锁定时间</p><p>取值范围：[1, 7]</p><p>单位：天</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetLockDuration() const;

                    /**
                     * 设置<p>放入回收站的锁定时间</p><p>取值范围：[1, 7]</p><p>单位：天</p><p>默认值：1</p>
                     * @param _lockDuration <p>放入回收站的锁定时间</p><p>取值范围：[1, 7]</p><p>单位：天</p><p>默认值：1</p>
                     * 
                     */
                    void SetLockDuration(const int64_t& _lockDuration);

                    /**
                     * 判断参数 LockDuration 是否已赋值
                     * @return LockDuration 是否已赋值
                     * 
                     */
                    bool LockDurationHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>回收站锁定设置，true时不可手动销毁，到预设时间后自动销毁</p><p>默认值：false</p>
                     */
                    bool m_lockEnabled;
                    bool m_lockEnabledHasBeenSet;

                    /**
                     * <p>放入回收站的锁定时间</p><p>取值范围：[1, 7]</p><p>单位：天</p><p>默认值：1</p>
                     */
                    int64_t m_lockDuration;
                    bool m_lockDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETEINSTANCEREQUEST_H_
