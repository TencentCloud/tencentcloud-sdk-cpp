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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppSetInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeShieldInstances返回参数结构体
                */
                class DescribeShieldInstancesResponse : public AbstractModel
                {
                public:
                    DescribeShieldInstancesResponse();
                    ~DescribeShieldInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合要求的app数量
                     * @return TotalCount 符合要求的app数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取一个关于app详细信息的结构体，主要包括app的基本信息和加固信息。
                     * @return AppSet 一个关于app详细信息的结构体，主要包括app的基本信息和加固信息。
                     * 
                     */
                    std::vector<AppSetInfo> GetAppSet() const;

                    /**
                     * 判断参数 AppSet 是否已赋值
                     * @return AppSet 是否已赋值
                     * 
                     */
                    bool AppSetHasBeenSet() const;

                private:

                    /**
                     * 符合要求的app数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 一个关于app详细信息的结构体，主要包括app的基本信息和加固信息。
                     */
                    std::vector<AppSetInfo> m_appSet;
                    bool m_appSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDINSTANCESRESPONSE_H_
