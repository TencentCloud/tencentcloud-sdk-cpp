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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESRESPONSE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/IngressInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DescribeRelatedIngresses返回参数结构体
                */
                class DescribeRelatedIngressesResponse : public AbstractModel
                {
                public:
                    DescribeRelatedIngressesResponse();
                    ~DescribeRelatedIngressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ingress 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result ingress 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IngressInfo> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * ingress 数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IngressInfo> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBERELATEDINGRESSESRESPONSE_H_
