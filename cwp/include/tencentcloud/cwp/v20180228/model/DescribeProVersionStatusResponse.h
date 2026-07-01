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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSRESPONSE_H_

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
                * DescribeProVersionStatus返回参数结构体
                */
                class DescribeProVersionStatusResponse : public AbstractModel
                {
                public:
                    DescribeProVersionStatusResponse();
                    ~DescribeProVersionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开通状态。</p><li>UNOPENED：未开通专业版</li><li>OPENED：已开通专业版</li>
                     * @return Status <p>开通状态。</p><li>UNOPENED：未开通专业版</li><li>OPENED：已开通专业版</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>开通状态。</p><li>UNOPENED：未开通专业版</li><li>OPENED：已开通专业版</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSRESPONSE_H_
