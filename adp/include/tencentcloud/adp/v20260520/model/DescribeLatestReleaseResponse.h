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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELATESTRELEASERESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELATESTRELEASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ReleaseSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeLatestRelease返回参数结构体
                */
                class DescribeLatestReleaseResponse : public AbstractModel
                {
                public:
                    DescribeLatestReleaseResponse();
                    ~DescribeLatestReleaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否有发布变更
                     * @return IsChanged 是否有发布变更
                     * 
                     */
                    bool GetIsChanged() const;

                    /**
                     * 判断参数 IsChanged 是否已赋值
                     * @return IsChanged 是否已赋值
                     * 
                     */
                    bool IsChangedHasBeenSet() const;

                    /**
                     * 获取发布信息
                     * @return ReleaseSummary 发布信息
                     * 
                     */
                    ReleaseSummary GetReleaseSummary() const;

                    /**
                     * 判断参数 ReleaseSummary 是否已赋值
                     * @return ReleaseSummary 是否已赋值
                     * 
                     */
                    bool ReleaseSummaryHasBeenSet() const;

                private:

                    /**
                     * 是否有发布变更
                     */
                    bool m_isChanged;
                    bool m_isChangedHasBeenSet;

                    /**
                     * 发布信息
                     */
                    ReleaseSummary m_releaseSummary;
                    bool m_releaseSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELATESTRELEASERESPONSE_H_
