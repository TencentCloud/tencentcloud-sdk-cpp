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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEHSMBYSUBNETIDREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEHSMBYSUBNETIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeHSMBySubnetId请求参数结构体
                */
                class DescribeHSMBySubnetIdRequest : public AbstractModel
                {
                public:
                    DescribeHSMBySubnetIdRequest();
                    ~DescribeHSMBySubnetIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subnet标识符
                     * @return SubnetId Subnet标识符
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet标识符
                     * @param _subnetId Subnet标识符
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Subnet标识符
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEHSMBYSUBNETIDREQUEST_H_
