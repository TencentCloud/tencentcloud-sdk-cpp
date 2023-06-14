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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ConfigListItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigList返回参数结构体
                */
                class DescribeCustomizedConfigListResponse : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigListResponse();
                    ~DescribeCustomizedConfigListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置列表
                     * @return ConfigList 配置列表
                     * 
                     */
                    std::vector<ConfigListItem> GetConfigList() const;

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取配置数目
                     * @return TotalCount 配置数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 配置列表
                     */
                    std::vector<ConfigListItem> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * 配置数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTRESPONSE_H_
