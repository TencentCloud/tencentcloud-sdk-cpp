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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineDetail返回参数结构体
                */
                class DescribeBaselineDetailResponse : public AbstractModel
                {
                public:
                    DescribeBaselineDetailResponse();
                    ~DescribeBaselineDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基线详情
                     * @return BaselineDetail 基线详情
                     * 
                     */
                    BaselineDetail GetBaselineDetail() const;

                    /**
                     * 判断参数 BaselineDetail 是否已赋值
                     * @return BaselineDetail 是否已赋值
                     * 
                     */
                    bool BaselineDetailHasBeenSet() const;

                private:

                    /**
                     * 基线详情
                     */
                    BaselineDetail m_baselineDetail;
                    bool m_baselineDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETAILRESPONSE_H_
