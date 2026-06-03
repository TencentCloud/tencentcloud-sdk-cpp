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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKeyUsageDetail请求参数结构体
                */
                class DescribeTokenPlanApiKeyUsageDetailRequest : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeyUsageDetailRequest();
                    ~DescribeTokenPlanApiKeyUsageDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * @return TeamId 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * @param _teamId 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取起始时间，RFC3339 格式。不传默认为结束时间前 15 分钟。
                     * @return From 起始时间，RFC3339 格式。不传默认为结束时间前 15 分钟。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置起始时间，RFC3339 格式。不传默认为结束时间前 15 分钟。
                     * @param _from 起始时间，RFC3339 格式。不传默认为结束时间前 15 分钟。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取结束时间，RFC3339 格式。不传默认为当前时间。
                     * @return To 结束时间，RFC3339 格式。不传默认为当前时间。
                     * 
                     */
                    std::string GetTo() const;

                    /**
                     * 设置结束时间，RFC3339 格式。不传默认为当前时间。
                     * @param _to 结束时间，RFC3339 格式。不传默认为当前时间。
                     * 
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取排序方式。取值：asc（升序）、desc（降序），默认为 desc。
                     * @return Sort 排序方式。取值：asc（升序）、desc（降序），默认为 desc。
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序方式。取值：asc（升序）、desc（降序），默认为 desc。
                     * @param _sort 排序方式。取值：asc（升序）、desc（降序），默认为 desc。
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取返回条数，默认为 20，最大值为 100。
                     * @return Limit 返回条数，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回条数，默认为 20，最大值为 100。
                     * @param _limit 返回条数，默认为 20，最大值为 100。
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
                     * 获取翻页上下文，首次查询不传，后续传入上次返回的 Context，直到 ListOver 为 true。
                     * @return Context 翻页上下文，首次查询不传，后续传入上次返回的 Context，直到 ListOver 为 true。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置翻页上下文，首次查询不传，后续传入上次返回的 Context，直到 ListOver 为 true。
                     * @param _context 翻页上下文，首次查询不传，后续传入上次返回的 Context，直到 ListOver 为 true。
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取按 API Key ID 精确过滤。最大 128 字符。与 ApiKeyName 至少需传入其一，都传时以 ApiKeyId 为准。可通过 DescribeTokenPlanApiKeyList 接口获取。
                     * @return ApiKeyId 按 API Key ID 精确过滤。最大 128 字符。与 ApiKeyName 至少需传入其一，都传时以 ApiKeyId 为准。可通过 DescribeTokenPlanApiKeyList 接口获取。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置按 API Key ID 精确过滤。最大 128 字符。与 ApiKeyName 至少需传入其一，都传时以 ApiKeyId 为准。可通过 DescribeTokenPlanApiKeyList 接口获取。
                     * @param _apiKeyId 按 API Key ID 精确过滤。最大 128 字符。与 ApiKeyName 至少需传入其一，都传时以 ApiKeyId 为准。可通过 DescribeTokenPlanApiKeyList 接口获取。
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取按 API Key 名称模糊过滤。最大 64 字符。与 ApiKeyId 至少需传入其一，都传时以 ApiKeyId 为准。
                     * @return ApiKeyName 按 API Key 名称模糊过滤。最大 64 字符。与 ApiKeyId 至少需传入其一，都传时以 ApiKeyId 为准。
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置按 API Key 名称模糊过滤。最大 64 字符。与 ApiKeyId 至少需传入其一，都传时以 ApiKeyId 为准。
                     * @param _apiKeyName 按 API Key 名称模糊过滤。最大 64 字符。与 ApiKeyId 至少需传入其一，都传时以 ApiKeyId 为准。
                     * 
                     */
                    void SetApiKeyName(const std::string& _apiKeyName);

                    /**
                     * 判断参数 ApiKeyName 是否已赋值
                     * @return ApiKeyName 是否已赋值
                     * 
                     */
                    bool ApiKeyNameHasBeenSet() const;

                    /**
                     * 获取按模型 ID (Model ID) 精确过滤。需要按模型名称过滤时传入该字段。
                     * @return ModelName 按模型 ID (Model ID) 精确过滤。需要按模型名称过滤时传入该字段。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置按模型 ID (Model ID) 精确过滤。需要按模型名称过滤时传入该字段。
                     * @param _modelName 按模型 ID (Model ID) 精确过滤。需要按模型名称过滤时传入该字段。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 起始时间，RFC3339 格式。不传默认为结束时间前 15 分钟。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 结束时间，RFC3339 格式。不传默认为当前时间。
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 排序方式。取值：asc（升序）、desc（降序），默认为 desc。
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 返回条数，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页上下文，首次查询不传，后续传入上次返回的 Context，直到 ListOver 为 true。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 按 API Key ID 精确过滤。最大 128 字符。与 ApiKeyName 至少需传入其一，都传时以 ApiKeyId 为准。可通过 DescribeTokenPlanApiKeyList 接口获取。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * 按 API Key 名称模糊过滤。最大 64 字符。与 ApiKeyId 至少需传入其一，都传时以 ApiKeyId 为准。
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * 按模型 ID (Model ID) 精确过滤。需要按模型名称过滤时传入该字段。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYUSAGEDETAILREQUEST_H_
