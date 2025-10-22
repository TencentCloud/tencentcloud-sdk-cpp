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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/DomainSetList.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 自定义服务域名展示
                */
                class DomainSets : public AbstractModel
                {
                public:
                    DomainSets();
                    ~DomainSets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务下的自定义域名数量。
                     * @return TotalCount 服务下的自定义域名数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置服务下的自定义域名数量。
                     * @param _totalCount 服务下的自定义域名数量。
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
                     * 获取自定义服务域名列表。
                     * @return DomainSet 自定义服务域名列表。
                     * 
                     */
                    std::vector<DomainSetList> GetDomainSet() const;

                    /**
                     * 设置自定义服务域名列表。
                     * @param _domainSet 自定义服务域名列表。
                     * 
                     */
                    void SetDomainSet(const std::vector<DomainSetList>& _domainSet);

                    /**
                     * 判断参数 DomainSet 是否已赋值
                     * @return DomainSet 是否已赋值
                     * 
                     */
                    bool DomainSetHasBeenSet() const;

                private:

                    /**
                     * 服务下的自定义域名数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 自定义服务域名列表。
                     */
                    std::vector<DomainSetList> m_domainSet;
                    bool m_domainSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETS_H_
