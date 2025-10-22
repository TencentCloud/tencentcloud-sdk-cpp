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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYSERVICES_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYSERVICES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongServiceLightPreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 轻量查询网关服务列表出参
                */
                class GatewayServices : public AbstractModel
                {
                public:
                    GatewayServices();
                    ~GatewayServices() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务列表
                     * @return ServiceList 服务列表
                     * 
                     */
                    std::vector<KongServiceLightPreview> GetServiceList() const;

                    /**
                     * 设置服务列表
                     * @param _serviceList 服务列表
                     * 
                     */
                    void SetServiceList(const std::vector<KongServiceLightPreview>& _serviceList);

                    /**
                     * 判断参数 ServiceList 是否已赋值
                     * @return ServiceList 是否已赋值
                     * 
                     */
                    bool ServiceListHasBeenSet() const;

                    /**
                     * 获取结果总数
                     * @return TotalCount 结果总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置结果总数
                     * @param _totalCount 结果总数
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
                     * 服务列表
                     */
                    std::vector<KongServiceLightPreview> m_serviceList;
                    bool m_serviceListHasBeenSet;

                    /**
                     * 结果总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYSERVICES_H_
