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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEFAMILYCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEFAMILYCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceFamilyConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstanceFamilyConfigs返回参数结构体
                */
                class DescribeInstanceFamilyConfigsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceFamilyConfigsResponse();
                    ~DescribeInstanceFamilyConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例机型组配置的列表信息
                     * @return InstanceFamilyConfigSet 实例机型组配置的列表信息
                     * 
                     */
                    std::vector<InstanceFamilyConfig> GetInstanceFamilyConfigSet() const;

                    /**
                     * 判断参数 InstanceFamilyConfigSet 是否已赋值
                     * @return InstanceFamilyConfigSet 是否已赋值
                     * 
                     */
                    bool InstanceFamilyConfigSetHasBeenSet() const;

                private:

                    /**
                     * 实例机型组配置的列表信息
                     */
                    std::vector<InstanceFamilyConfig> m_instanceFamilyConfigSet;
                    bool m_instanceFamilyConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEFAMILYCONFIGSRESPONSE_H_
