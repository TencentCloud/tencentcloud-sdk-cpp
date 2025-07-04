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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NativeGatewayServiceSourceItem.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeNativeGatewayServiceSources返回参数结构体
                */
                class DescribeNativeGatewayServiceSourcesResponse : public AbstractModel
                {
                public:
                    DescribeNativeGatewayServiceSourcesResponse();
                    ~DescribeNativeGatewayServiceSourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总实例数
                     * @return Total 总实例数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取服务来源实例列表
                     * @return List 服务来源实例列表
                     * 
                     */
                    std::vector<NativeGatewayServiceSourceItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 总实例数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 服务来源实例列表
                     */
                    std::vector<NativeGatewayServiceSourceItem> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVICESOURCESRESPONSE_H_
