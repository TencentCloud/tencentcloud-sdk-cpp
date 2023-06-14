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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPNAMEREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPNAMEREQUEST_H_

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
                * ModifyEipName请求参数结构体
                */
                class ModifyEipNameRequest : public AbstractModel
                {
                public:
                    ModifyEipNameRequest();
                    ~ModifyEipNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Eip实例ID，可通过/v2/DescribeEip 接口返回字段中的 eipId获取
                     * @return EipId Eip实例ID，可通过/v2/DescribeEip 接口返回字段中的 eipId获取
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置Eip实例ID，可通过/v2/DescribeEip 接口返回字段中的 eipId获取
                     * @param _eipId Eip实例ID，可通过/v2/DescribeEip 接口返回字段中的 eipId获取
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
                     * 获取EIP 实例别名
                     * @return EipName EIP 实例别名
                     * 
                     */
                    std::string GetEipName() const;

                    /**
                     * 设置EIP 实例别名
                     * @param _eipName EIP 实例别名
                     * 
                     */
                    void SetEipName(const std::string& _eipName);

                    /**
                     * 判断参数 EipName 是否已赋值
                     * @return EipName 是否已赋值
                     * 
                     */
                    bool EipNameHasBeenSet() const;

                private:

                    /**
                     * Eip实例ID，可通过/v2/DescribeEip 接口返回字段中的 eipId获取
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * EIP 实例别名
                     */
                    std::string m_eipName;
                    bool m_eipNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPNAMEREQUEST_H_
