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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMSAPILISTREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMSAPILISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApiParam.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeMsApiList请求参数结构体
                */
                class DescribeMsApiListRequest : public AbstractModel
                {
                public:
                    DescribeMsApiListRequest();
                    ~DescribeMsApiListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>微服务ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * @return MicroserviceId <p>微服务ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置<p>微服务ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * @param _microserviceId <p>微服务ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索关键字。</p>
                     * @return SearchWord <p>搜索关键字。</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索关键字。</p>
                     * @param _searchWord <p>搜索关键字。</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为50。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为50。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为50。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为50。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>批量查询API参数</p>
                     * @return BatchApiParamList <p>批量查询API参数</p>
                     * 
                     */
                    std::vector<ApiParam> GetBatchApiParamList() const;

                    /**
                     * 设置<p>批量查询API参数</p>
                     * @param _batchApiParamList <p>批量查询API参数</p>
                     * 
                     */
                    void SetBatchApiParamList(const std::vector<ApiParam>& _batchApiParamList);

                    /**
                     * 判断参数 BatchApiParamList 是否已赋值
                     * @return BatchApiParamList 是否已赋值
                     * 
                     */
                    bool BatchApiParamListHasBeenSet() const;

                private:

                    /**
                     * <p>微服务ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * <p>搜索关键字。</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为50。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>批量查询API参数</p>
                     */
                    std::vector<ApiParam> m_batchApiParamList;
                    bool m_batchApiParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMSAPILISTREQUEST_H_
