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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGEDETAILITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGEDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Token Plan 企业版套餐调用明细项（字段与 CLS 日志对齐）
                */
                class UsageDetailItem : public AbstractModel
                {
                public:
                    UsageDetailItem();
                    ~UsageDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主账号 UIN。
                     * @return Uin 主账号 UIN。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号 UIN。
                     * @param _uin 主账号 UIN。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取模型名称。
                     * @return ModelName 模型名称。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。
                     * @param _modelName 模型名称。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取APIKey ID。
                     * @return ApiKeyId APIKey ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置APIKey ID。
                     * @param _apiKeyId APIKey ID。
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
                     * 获取APIKey 名称。
                     * @return ApiKeyName APIKey 名称。
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置APIKey 名称。
                     * @param _apiKeyName APIKey 名称。
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
                     * 获取请求 ID。
                     * @return RequestId 请求 ID。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求 ID。
                     * @param _requestId 请求 ID。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取请求时间（RFC3339 格式）。
                     * @return RequestTime 请求时间（RFC3339 格式）。
                     * 
                     */
                    std::string GetRequestTime() const;

                    /**
                     * 设置请求时间（RFC3339 格式）。
                     * @param _requestTime 请求时间（RFC3339 格式）。
                     * 
                     */
                    void SetRequestTime(const std::string& _requestTime);

                    /**
                     * 判断参数 RequestTime 是否已赋值
                     * @return RequestTime 是否已赋值
                     * 
                     */
                    bool RequestTimeHasBeenSet() const;

                    /**
                     * 获取输入 token 数。
                     * @return InputToken 输入 token 数。
                     * 
                     */
                    int64_t GetInputToken() const;

                    /**
                     * 设置输入 token 数。
                     * @param _inputToken 输入 token 数。
                     * 
                     */
                    void SetInputToken(const int64_t& _inputToken);

                    /**
                     * 判断参数 InputToken 是否已赋值
                     * @return InputToken 是否已赋值
                     * 
                     */
                    bool InputTokenHasBeenSet() const;

                    /**
                     * 获取缓存 token 数。
                     * @return CacheToken 缓存 token 数。
                     * 
                     */
                    int64_t GetCacheToken() const;

                    /**
                     * 设置缓存 token 数。
                     * @param _cacheToken 缓存 token 数。
                     * 
                     */
                    void SetCacheToken(const int64_t& _cacheToken);

                    /**
                     * 判断参数 CacheToken 是否已赋值
                     * @return CacheToken 是否已赋值
                     * 
                     */
                    bool CacheTokenHasBeenSet() const;

                    /**
                     * 获取输出 token 数。
                     * @return OutputToken 输出 token 数。
                     * 
                     */
                    int64_t GetOutputToken() const;

                    /**
                     * 设置输出 token 数。
                     * @param _outputToken 输出 token 数。
                     * 
                     */
                    void SetOutputToken(const int64_t& _outputToken);

                    /**
                     * 判断参数 OutputToken 是否已赋值
                     * @return OutputToken 是否已赋值
                     * 
                     */
                    bool OutputTokenHasBeenSet() const;

                    /**
                     * 获取总 token 数。
                     * @return TotalToken 总 token 数。
                     * 
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置总 token 数。
                     * @param _totalToken 总 token 数。
                     * 
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * 
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取未命中缓存输入消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @return InputQuota 未命中缓存输入消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    std::string GetInputQuota() const;

                    /**
                     * 设置未命中缓存输入消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @param _inputQuota 未命中缓存输入消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    void SetInputQuota(const std::string& _inputQuota);

                    /**
                     * 判断参数 InputQuota 是否已赋值
                     * @return InputQuota 是否已赋值
                     * 
                     */
                    bool InputQuotaHasBeenSet() const;

                    /**
                     * 获取缓存消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @return CacheQuota 缓存消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    std::string GetCacheQuota() const;

                    /**
                     * 设置缓存消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @param _cacheQuota 缓存消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    void SetCacheQuota(const std::string& _cacheQuota);

                    /**
                     * 判断参数 CacheQuota 是否已赋值
                     * @return CacheQuota 是否已赋值
                     * 
                     */
                    bool CacheQuotaHasBeenSet() const;

                    /**
                     * 获取输出消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @return OutputQuota 输出消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    std::string GetOutputQuota() const;

                    /**
                     * 设置输出消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @param _outputQuota 输出消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    void SetOutputQuota(const std::string& _outputQuota);

                    /**
                     * 判断参数 OutputQuota 是否已赋值
                     * @return OutputQuota 是否已赋值
                     * 
                     */
                    bool OutputQuotaHasBeenSet() const;

                    /**
                     * 获取总消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @return TotalQuota 总消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    std::string GetTotalQuota() const;

                    /**
                     * 设置总消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * @param _totalQuota 总消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     * 
                     */
                    void SetTotalQuota(const std::string& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                private:

                    /**
                     * 主账号 UIN。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 模型名称。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * APIKey ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * APIKey 名称。
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * 请求 ID。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 请求时间（RFC3339 格式）。
                     */
                    std::string m_requestTime;
                    bool m_requestTimeHasBeenSet;

                    /**
                     * 输入 token 数。
                     */
                    int64_t m_inputToken;
                    bool m_inputTokenHasBeenSet;

                    /**
                     * 缓存 token 数。
                     */
                    int64_t m_cacheToken;
                    bool m_cacheTokenHasBeenSet;

                    /**
                     * 输出 token 数。
                     */
                    int64_t m_outputToken;
                    bool m_outputTokenHasBeenSet;

                    /**
                     * 总 token 数。
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * 未命中缓存输入消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     */
                    std::string m_inputQuota;
                    bool m_inputQuotaHasBeenSet;

                    /**
                     * 缓存消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     */
                    std::string m_cacheQuota;
                    bool m_cacheQuotaHasBeenSet;

                    /**
                     * 输出消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     */
                    std::string m_outputQuota;
                    bool m_outputQuotaHasBeenSet;

                    /**
                     * 总消耗额度。单位说明如下：
- 套餐类型为专业套餐（enterprise），单位取值为积分；
- 套餐类型轻享套餐（enterprise-auto），单位取值为 token。
                     */
                    std::string m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGEDETAILITEM_H_
