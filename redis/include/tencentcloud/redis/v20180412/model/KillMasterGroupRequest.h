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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_

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
                * KillMasterGroup请求参数结构体
                */
                class KillMasterGroupRequest : public AbstractModel
                {
                public:
                    KillMasterGroupRequest();
                    ~KillMasterGroupRequest() = default;
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
                     * 获取该参数用于配置指定实例的访问密码。若为免密认证，该参数则无需配置。密码复杂度要求如下所示。
- 长度8-30位,推荐使用12位以上的密码
- 不能以"/"开头
- 至少包含小写字母a-z、大写字母A-Z、数字0-9及其 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * @return Password 该参数用于配置指定实例的访问密码。若为免密认证，该参数则无需配置。密码复杂度要求如下所示。
- 长度8-30位,推荐使用12位以上的密码
- 不能以"/"开头
- 至少包含小写字母a-z、大写字母A-Z、数字0-9及其 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置该参数用于配置指定实例的访问密码。若为免密认证，该参数则无需配置。密码复杂度要求如下所示。
- 长度8-30位,推荐使用12位以上的密码
- 不能以"/"开头
- 至少包含小写字母a-z、大写字母A-Z、数字0-9及其 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * @param _password 该参数用于配置指定实例的访问密码。若为免密认证，该参数则无需配置。密码复杂度要求如下所示。
- 长度8-30位,推荐使用12位以上的密码
- 不能以"/"开头
- 至少包含小写字母a-z、大写字母A-Z、数字0-9及其 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取分片集群的分片 ID。请通过接口[DescribeInstanceNodeInfo](https://cloud.tencent.com/document/product/239/48603) 的返回参数 **Redis** 中的 **ClusterId** 获取。
                     * @return ShardIds 分片集群的分片 ID。请通过接口[DescribeInstanceNodeInfo](https://cloud.tencent.com/document/product/239/48603) 的返回参数 **Redis** 中的 **ClusterId** 获取。
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置分片集群的分片 ID。请通过接口[DescribeInstanceNodeInfo](https://cloud.tencent.com/document/product/239/48603) 的返回参数 **Redis** 中的 **ClusterId** 获取。
                     * @param _shardIds 分片集群的分片 ID。请通过接口[DescribeInstanceNodeInfo](https://cloud.tencent.com/document/product/239/48603) 的返回参数 **Redis** 中的 **ClusterId** 获取。
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 该参数用于配置指定实例的访问密码。若为免密认证，该参数则无需配置。密码复杂度要求如下所示。
- 长度8-30位,推荐使用12位以上的密码
- 不能以"/"开头
- 至少包含小写字母a-z、大写字母A-Z、数字0-9及其 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/中的两项。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 分片集群的分片 ID。请通过接口[DescribeInstanceNodeInfo](https://cloud.tencent.com/document/product/239/48603) 的返回参数 **Redis** 中的 **ClusterId** 获取。
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_KILLMASTERGROUPREQUEST_H_
