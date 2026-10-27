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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCESTYPEREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCESTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * ModifyInstancesType请求参数结构体
                */
                class ModifyInstancesTypeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesTypeRequest();
                    ~ModifyInstancesTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例id数组</p>
                     * @return InstanceIds <p>实例id数组</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例id数组</p>
                     * @param _instanceIds <p>实例id数组</p>
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
                     * 获取<p>变更的实例类型</p>
                     * @return InstanceType <p>变更的实例类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>变更的实例类型</p>
                     * @param _instanceType <p>变更的实例类型</p>
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
                     * 获取<p>付费类型</p>
                     * @return ChargeType <p>付费类型</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>付费类型</p>
                     * @param _chargeType <p>付费类型</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例id数组</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>变更的实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>付费类型</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCESTYPEREQUEST_H_
