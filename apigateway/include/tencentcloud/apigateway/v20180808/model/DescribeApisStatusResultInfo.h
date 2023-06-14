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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSRESULTINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusResultApiIdStatusSetInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 描述api列表状态
                */
                class DescribeApisStatusResultInfo : public AbstractModel
                {
                public:
                    DescribeApisStatusResultInfo();
                    ~DescribeApisStatusResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合条件的 API 接口数量。
                     * @return TotalCount 符合条件的 API 接口数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置符合条件的 API 接口数量。
                     * @param _totalCount 符合条件的 API 接口数量。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取API 接口列表。
                     * @return ApiIdStatusSet API 接口列表。
                     * 
                     */
                    std::vector<DescribeApisStatusResultApiIdStatusSetInfo> GetApiIdStatusSet() const;

                    /**
                     * 设置API 接口列表。
                     * @param _apiIdStatusSet API 接口列表。
                     * 
                     */
                    void SetApiIdStatusSet(const std::vector<DescribeApisStatusResultApiIdStatusSetInfo>& _apiIdStatusSet);

                    /**
                     * 判断参数 ApiIdStatusSet 是否已赋值
                     * @return ApiIdStatusSet 是否已赋值
                     * 
                     */
                    bool ApiIdStatusSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的 API 接口数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * API 接口列表。
                     */
                    std::vector<DescribeApisStatusResultApiIdStatusSetInfo> m_apiIdStatusSet;
                    bool m_apiIdStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEAPISSTATUSRESULTINFO_H_
