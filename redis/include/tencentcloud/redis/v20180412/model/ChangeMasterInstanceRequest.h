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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_

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
                * ChangeMasterInstance请求参数结构体
                */
                class ChangeMasterInstanceRequest : public AbstractModel
                {
                public:
                    ChangeMasterInstanceRequest();
                    ~ChangeMasterInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制组ID。创建复制组时，系统自动分配的 ID，是复制组的唯一标识。例如：crs-rpl-m3zt****，请登录[Redis 控制台](https://console.cloud.tencent.com/redis/replication)的全球复制组列表获取复制组 ID。

                     * @return GroupId 复制组ID。创建复制组时，系统自动分配的 ID，是复制组的唯一标识。例如：crs-rpl-m3zt****，请登录[Redis 控制台](https://console.cloud.tencent.com/redis/replication)的全球复制组列表获取复制组 ID。

                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置复制组ID。创建复制组时，系统自动分配的 ID，是复制组的唯一标识。例如：crs-rpl-m3zt****，请登录[Redis 控制台](https://console.cloud.tencent.com/redis/replication)的全球复制组列表获取复制组 ID。

                     * @param _groupId 复制组ID。创建复制组时，系统自动分配的 ID，是复制组的唯一标识。例如：crs-rpl-m3zt****，请登录[Redis 控制台](https://console.cloud.tencent.com/redis/replication)的全球复制组列表获取复制组 ID。

                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取指定待提升为主实例的只读实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * @return InstanceId 指定待提升为主实例的只读实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定待提升为主实例的只读实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * @param _instanceId 指定待提升为主实例的只读实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


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
                     * 获取标识是否强制提主。
- true：强制提主。
- false：不强制提主。
                     * @return ForceSwitch 标识是否强制提主。
- true：强制提主。
- false：不强制提主。
                     * 
                     */
                    bool GetForceSwitch() const;

                    /**
                     * 设置标识是否强制提主。
- true：强制提主。
- false：不强制提主。
                     * @param _forceSwitch 标识是否强制提主。
- true：强制提主。
- false：不强制提主。
                     * 
                     */
                    void SetForceSwitch(const bool& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                private:

                    /**
                     * 复制组ID。创建复制组时，系统自动分配的 ID，是复制组的唯一标识。例如：crs-rpl-m3zt****，请登录[Redis 控制台](https://console.cloud.tencent.com/redis/replication)的全球复制组列表获取复制组 ID。

                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 指定待提升为主实例的只读实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 标识是否强制提主。
- true：强制提主。
- false：不强制提主。
                     */
                    bool m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_
