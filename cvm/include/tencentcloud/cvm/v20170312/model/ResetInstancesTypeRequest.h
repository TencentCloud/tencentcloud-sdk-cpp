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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_

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
                * ResetInstancesType请求参数结构体
                */
                class ResetInstancesTypeRequest : public AbstractModel
                {
                public:
                    ResetInstancesTypeRequest();
                    ~ResetInstancesTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。本接口目前仅支持每次操作1个实例。</p>
                     * @return InstanceIds <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。本接口目前仅支持每次操作1个实例。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。本接口目前仅支持每次操作1个实例。</p>
                     * @param _instanceIds <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。本接口目前仅支持每次操作1个实例。</p>
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
                     * 获取<p>调整后的实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749"> DescribeInstanceTypeConfigs </a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。</p>
                     * @return InstanceType <p>调整后的实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749"> DescribeInstanceTypeConfigs </a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>调整后的实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749"> DescribeInstanceTypeConfigs </a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。</p>
                     * @param _instanceType <p>调整后的实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749"> DescribeInstanceTypeConfigs </a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机。取值范围：<br><li>true：表示在正常关机失败后进行强制关机</li><br><li>false：表示在正常关机失败后不进行强制关机</li><br><br>默认取值：false。<br><br>强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。</p>
                     * @return ForceStop <p>是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机。取值范围：<br><li>true：表示在正常关机失败后进行强制关机</li><br><li>false：表示在正常关机失败后不进行强制关机</li><br><br>默认取值：false。<br><br>强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。</p>
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置<p>是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机。取值范围：<br><li>true：表示在正常关机失败后进行强制关机</li><br><li>false：表示在正常关机失败后不进行强制关机</li><br><br>默认取值：false。<br><br>强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。</p>
                     * @param _forceStop <p>是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机。取值范围：<br><li>true：表示在正常关机失败后进行强制关机</li><br><li>false：表示在正常关机失败后不进行强制关机</li><br><br>默认取值：false。<br><br>强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。</p>
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。本接口目前仅支持每次操作1个实例。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>调整后的实例机型。不同实例机型指定了不同的资源规格，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749"> DescribeInstanceTypeConfigs </a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例类型</a>描述。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机。取值范围：<br><li>true：表示在正常关机失败后进行强制关机</li><br><li>false：表示在正常关机失败后不进行强制关机</li><br><br>默认取值：false。<br><br>强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。</p>
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_
