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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyInstancesAttribute请求参数结构体
                */
                class ModifyInstancesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesAttributeRequest();
                    ~ModifyInstancesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * @return InstanceIdSet 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * @param InstanceIdSet 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * @return InstanceName 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * @param InstanceName 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
