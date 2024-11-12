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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VertexDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVertexDetail返回参数结构体
                */
                class DescribeVertexDetailResponse : public AbstractModel
                {
                public:
                    DescribeVertexDetailResponse();
                    ~DescribeVertexDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定点列表的属性信息
                     * @return VertexDetails 指定点列表的属性信息
                     * 
                     */
                    std::vector<VertexDetail> GetVertexDetails() const;

                    /**
                     * 判断参数 VertexDetails 是否已赋值
                     * @return VertexDetails 是否已赋值
                     * 
                     */
                    bool VertexDetailsHasBeenSet() const;

                private:

                    /**
                     * 指定点列表的属性信息
                     */
                    std::vector<VertexDetail> m_vertexDetails;
                    bool m_vertexDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERTEXDETAILRESPONSE_H_
