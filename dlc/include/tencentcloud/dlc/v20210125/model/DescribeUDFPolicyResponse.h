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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UDFPolicyInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUDFPolicy返回参数结构体
                */
                class DescribeUDFPolicyResponse : public AbstractModel
                {
                public:
                    DescribeUDFPolicyResponse();
                    ~DescribeUDFPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取UDF权限信息
                     * @return UDFPolicyInfos UDF权限信息
                     * 
                     */
                    std::vector<UDFPolicyInfo> GetUDFPolicyInfos() const;

                    /**
                     * 判断参数 UDFPolicyInfos 是否已赋值
                     * @return UDFPolicyInfos 是否已赋值
                     * 
                     */
                    bool UDFPolicyInfosHasBeenSet() const;

                private:

                    /**
                     * UDF权限信息
                     */
                    std::vector<UDFPolicyInfo> m_uDFPolicyInfos;
                    bool m_uDFPolicyInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUDFPOLICYRESPONSE_H_
