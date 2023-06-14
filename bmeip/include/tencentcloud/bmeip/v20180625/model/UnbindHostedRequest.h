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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDHOSTEDREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDHOSTEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindHosted请求参数结构体
                */
                class UnbindHostedRequest : public AbstractModel
                {
                public:
                    UnbindHostedRequest();
                    ~UnbindHostedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管机器实例ID
                     * @return InstanceId 托管机器实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置托管机器实例ID
                     * @param _instanceId 托管机器实例ID
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
                     * 获取Eip实例ID，可通过DescribeBmEip 接口返回字段中的 eipId获取。Eip和EipId参数必须要填写一个。
                     * @return EipId Eip实例ID，可通过DescribeBmEip 接口返回字段中的 eipId获取。Eip和EipId参数必须要填写一个。
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置Eip实例ID，可通过DescribeBmEip 接口返回字段中的 eipId获取。Eip和EipId参数必须要填写一个。
                     * @param _eipId Eip实例ID，可通过DescribeBmEip 接口返回字段中的 eipId获取。Eip和EipId参数必须要填写一个。
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取弹性IP。Eip和EipId参数必须要填写一个。
                     * @return Eip 弹性IP。Eip和EipId参数必须要填写一个。
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置弹性IP。Eip和EipId参数必须要填写一个。
                     * @param _eip 弹性IP。Eip和EipId参数必须要填写一个。
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                private:

                    /**
                     * 托管机器实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Eip实例ID，可通过DescribeBmEip 接口返回字段中的 eipId获取。Eip和EipId参数必须要填写一个。
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * 弹性IP。Eip和EipId参数必须要填写一个。
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDHOSTEDREQUEST_H_
