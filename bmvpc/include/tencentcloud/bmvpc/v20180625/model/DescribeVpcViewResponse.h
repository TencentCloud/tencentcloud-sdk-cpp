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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCVIEWRESPONSE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/VpcViewInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeVpcView返回参数结构体
                */
                class DescribeVpcViewResponse : public AbstractModel
                {
                public:
                    DescribeVpcViewResponse();
                    ~DescribeVpcViewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC视图信息
                     * @return VpcView VPC视图信息
                     * 
                     */
                    VpcViewInfo GetVpcView() const;

                    /**
                     * 判断参数 VpcView 是否已赋值
                     * @return VpcView 是否已赋值
                     * 
                     */
                    bool VpcViewHasBeenSet() const;

                private:

                    /**
                     * VPC视图信息
                     */
                    VpcViewInfo m_vpcView;
                    bool m_vpcViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCVIEWRESPONSE_H_
