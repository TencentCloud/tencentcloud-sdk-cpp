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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULTS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ServiceStatisticsResult.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 服务统计结果集
                */
                class ServiceStatisticsResults : public AbstractModel
                {
                public:
                    ServiceStatisticsResults();
                    ~ServiceStatisticsResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回结果
                     * @return Content 返回结果
                     * 
                     */
                    std::vector<ServiceStatisticsResult> GetContent() const;

                    /**
                     * 设置返回结果
                     * @param _content 返回结果
                     * 
                     */
                    void SetContent(const std::vector<ServiceStatisticsResult>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return TotalCount 条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置条数
                     * @param _totalCount 条数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 返回结果
                     */
                    std::vector<ServiceStatisticsResult> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULTS_H_
