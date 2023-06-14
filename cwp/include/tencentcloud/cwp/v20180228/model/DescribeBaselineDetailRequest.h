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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineDetail请求参数结构体
                */
                class DescribeBaselineDetailRequest : public AbstractModel
                {
                public:
                    DescribeBaselineDetailRequest();
                    ~DescribeBaselineDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线id
                     * @return BaselineId 基线id
                     * 
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置基线id
                     * @param _baselineId 基线id
                     * 
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                private:

                    /**
                     * 基线id
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILREQUEST_H_
