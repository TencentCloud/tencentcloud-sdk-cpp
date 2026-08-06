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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_KONGSERVICEWITHROUTES_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_KONGSERVICEWITHROUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/KongServiceRoute.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 返回kong的服务和路由列表
                */
                class KongServiceWithRoutes : public AbstractModel
                {
                public:
                    KongServiceWithRoutes();
                    ~KongServiceWithRoutes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务及路由列表
                     * @return ServiceList 服务及路由列表
                     * 
                     */
                    std::vector<KongServiceRoute> GetServiceList() const;

                    /**
                     * 设置服务及路由列表
                     * @param _serviceList 服务及路由列表
                     * 
                     */
                    void SetServiceList(const std::vector<KongServiceRoute>& _serviceList);

                    /**
                     * 判断参数 ServiceList 是否已赋值
                     * @return ServiceList 是否已赋值
                     * 
                     */
                    bool ServiceListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 服务及路由列表
                     */
                    std::vector<KongServiceRoute> m_serviceList;
                    bool m_serviceListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_KONGSERVICEWITHROUTES_H_
