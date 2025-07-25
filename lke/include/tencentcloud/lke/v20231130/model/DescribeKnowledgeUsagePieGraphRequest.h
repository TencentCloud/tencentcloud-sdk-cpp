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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeUsagePieGraph请求参数结构体
                */
                class DescribeKnowledgeUsagePieGraphRequest : public AbstractModel
                {
                public:
                    DescribeKnowledgeUsagePieGraphRequest();
                    ~DescribeKnowledgeUsagePieGraphRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID数组
                     * @return AppBizIds 应用ID数组
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置应用ID数组
                     * @param _appBizIds 应用ID数组
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID数组
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHREQUEST_H_
