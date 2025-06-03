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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_STOPINSTANCEREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_STOPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * StopInstance请求参数结构体
                */
                class StopInstanceRequest : public AbstractModel
                {
                public:
                    StopInstanceRequest();
                    ~StopInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612) API获取实例ID。
                     * @return InstanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612) API获取实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612) API获取实例ID。
                     * @param _instanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612) API获取实例ID。
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
                     * 获取hai实例关机的模式，目前仅支持关机不收费：
STOP_CHARGE -- 关闭hai实例，释放计算资源，停止收取计算资源的费用。
注意：默认值为STOP_CHARGE
                     * @return StopMode hai实例关机的模式，目前仅支持关机不收费：
STOP_CHARGE -- 关闭hai实例，释放计算资源，停止收取计算资源的费用。
注意：默认值为STOP_CHARGE
                     * 
                     */
                    std::string GetStopMode() const;

                    /**
                     * 设置hai实例关机的模式，目前仅支持关机不收费：
STOP_CHARGE -- 关闭hai实例，释放计算资源，停止收取计算资源的费用。
注意：默认值为STOP_CHARGE
                     * @param _stopMode hai实例关机的模式，目前仅支持关机不收费：
STOP_CHARGE -- 关闭hai实例，释放计算资源，停止收取计算资源的费用。
注意：默认值为STOP_CHARGE
                     * 
                     */
                    void SetStopMode(const std::string& _stopMode);

                    /**
                     * 判断参数 StopMode 是否已赋值
                     * @return StopMode 是否已赋值
                     * 
                     */
                    bool StopModeHasBeenSet() const;

                    /**
                     * 获取默认为False，True代表只验证接口连通性
                     * @return DryRun 默认为False，True代表只验证接口连通性
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置默认为False，True代表只验证接口连通性
                     * @param _dryRun 默认为False，True代表只验证接口连通性
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1721/101612) API获取实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * hai实例关机的模式，目前仅支持关机不收费：
STOP_CHARGE -- 关闭hai实例，释放计算资源，停止收取计算资源的费用。
注意：默认值为STOP_CHARGE
                     */
                    std::string m_stopMode;
                    bool m_stopModeHasBeenSet;

                    /**
                     * 默认为False，True代表只验证接口连通性
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_STOPINSTANCEREQUEST_H_
