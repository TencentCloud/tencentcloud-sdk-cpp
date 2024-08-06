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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateInstances请求参数结构体
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * @return InstanceIds 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * @param _instanceIds 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。
默认值：false
                     * @return ReleasePrepaidDataDisks 释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。
默认值：false
                     * 
                     */
                    bool GetReleasePrepaidDataDisks() const;

                    /**
                     * 设置释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。
默认值：false
                     * @param _releasePrepaidDataDisks 释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。
默认值：false
                     * 
                     */
                    void SetReleasePrepaidDataDisks(const bool& _releasePrepaidDataDisks);

                    /**
                     * 判断参数 ReleasePrepaidDataDisks 是否已赋值
                     * @return ReleasePrepaidDataDisks 是否已赋值
                     * 
                     */
                    bool ReleasePrepaidDataDisksHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。
默认值：false
                     */
                    bool m_releasePrepaidDataDisks;
                    bool m_releasePrepaidDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
