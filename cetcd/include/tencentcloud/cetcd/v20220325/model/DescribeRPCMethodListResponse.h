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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTRESPONSE_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/RPCMethod.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeRPCMethodList返回参数结构体
                */
                class DescribeRPCMethodListResponse : public AbstractModel
                {
                public:
                    DescribeRPCMethodListResponse();
                    ~DescribeRPCMethodListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取gRPC方法列表
                     * @return MethodList gRPC方法列表
                     * 
                     */
                    std::vector<RPCMethod> GetMethodList() const;

                    /**
                     * 判断参数 MethodList 是否已赋值
                     * @return MethodList 是否已赋值
                     * 
                     */
                    bool MethodListHasBeenSet() const;

                private:

                    /**
                     * gRPC方法列表
                     */
                    std::vector<RPCMethod> m_methodList;
                    bool m_methodListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBERPCMETHODLISTRESPONSE_H_
