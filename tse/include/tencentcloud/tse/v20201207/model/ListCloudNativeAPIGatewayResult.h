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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayResult.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 获取云原生API网关实例列表响应结果。
                */
                class ListCloudNativeAPIGatewayResult : public AbstractModel
                {
                public:
                    ListCloudNativeAPIGatewayResult();
                    ~ListCloudNativeAPIGatewayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数。
                     * @return TotalCount 总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数。
                     * @param _totalCount 总数。
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
                     * 获取云原生API网关实例列表。
                     * @return GatewayList 云原生API网关实例列表。
                     * 
                     */
                    std::vector<DescribeCloudNativeAPIGatewayResult> GetGatewayList() const;

                    /**
                     * 设置云原生API网关实例列表。
                     * @param _gatewayList 云原生API网关实例列表。
                     * 
                     */
                    void SetGatewayList(const std::vector<DescribeCloudNativeAPIGatewayResult>& _gatewayList);

                    /**
                     * 判断参数 GatewayList 是否已赋值
                     * @return GatewayList 是否已赋值
                     * 
                     */
                    bool GatewayListHasBeenSet() const;

                private:

                    /**
                     * 总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 云原生API网关实例列表。
                     */
                    std::vector<DescribeCloudNativeAPIGatewayResult> m_gatewayList;
                    bool m_gatewayListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYRESULT_H_
