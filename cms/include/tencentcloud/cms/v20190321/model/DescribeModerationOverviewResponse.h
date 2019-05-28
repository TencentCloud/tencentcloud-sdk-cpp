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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/OverviewRecord.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DescribeModerationOverview返回参数结构体
                */
                class DescribeModerationOverviewResponse : public AbstractModel
                {
                public:
                    DescribeModerationOverviewResponse();
                    ~DescribeModerationOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取概览数据集合
                     * @return Results 概览数据集合
                     */
                    std::vector<OverviewRecord> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 概览数据集合
                     */
                    std::vector<OverviewRecord> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBEMODERATIONOVERVIEWRESPONSE_H_
