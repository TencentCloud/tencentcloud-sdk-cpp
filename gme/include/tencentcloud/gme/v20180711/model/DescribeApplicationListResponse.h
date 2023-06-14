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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ApplicationList.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeApplicationList返回参数结构体
                */
                class DescribeApplicationListResponse : public AbstractModel
                {
                public:
                    DescribeApplicationListResponse();
                    ~DescribeApplicationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取获取应用列表返回
                     * @return ApplicationList 获取应用列表返回
                     * 
                     */
                    std::vector<ApplicationList> GetApplicationList() const;

                    /**
                     * 判断参数 ApplicationList 是否已赋值
                     * @return ApplicationList 是否已赋值
                     * 
                     */
                    bool ApplicationListHasBeenSet() const;

                    /**
                     * 获取应用总数
                     * @return Total 应用总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 获取应用列表返回
                     */
                    std::vector<ApplicationList> m_applicationList;
                    bool m_applicationListHasBeenSet;

                    /**
                     * 应用总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_
