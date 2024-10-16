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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCESTATUS_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * 用于目标组后端rs健康检查状态。
                */
                class TargetGroupInstanceStatus : public AbstractModel
                {
                public:
                    TargetGroupInstanceStatus();
                    ~TargetGroupInstanceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端rs的IP
                     * @return InstanceIp 后端rs的IP
                     * 
                     */
                    std::string GetInstanceIp() const;

                    /**
                     * 设置后端rs的IP
                     * @param _instanceIp 后端rs的IP
                     * 
                     */
                    void SetInstanceIp(const std::string& _instanceIp);

                    /**
                     * 判断参数 InstanceIp 是否已赋值
                     * @return InstanceIp 是否已赋值
                     * 
                     */
                    bool InstanceIpHasBeenSet() const;

                    /**
                     * 获取健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * @return Status 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * @param _status 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 后端rs的IP
                     */
                    std::string m_instanceIp;
                    bool m_instanceIpHasBeenSet;

                    /**
                     * 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCESTATUS_H_
