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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_

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
                * ModifyTokenPlanApiKey请求参数结构体
                */
                class ModifyTokenPlanApiKeyRequest : public AbstractModel
                {
                public:
                    ModifyTokenPlanApiKeyRequest();
                    ~ModifyTokenPlanApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API Key ID。
                     * @return ApiKeyId API Key ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API Key ID。
                     * @param _apiKeyId API Key ID。
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
                     * 获取可用模型列表。不传则不修改。

- 如果套餐类型为企业版专业套餐：
1）传入“all“ ：使用套餐支持的所有模型
2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。

- 如果套餐类型为企业版轻享套餐，不允许传该参数。
                     * @return AllowedModels 可用模型列表。不传则不修改。

- 如果套餐类型为企业版专业套餐：
1）传入“all“ ：使用套餐支持的所有模型
2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。

- 如果套餐类型为企业版轻享套餐，不允许传该参数。
                     * 
                     */
                    std::vector<std::string> GetAllowedModels() const;

                    /**
                     * 设置可用模型列表。不传则不修改。

- 如果套餐类型为企业版专业套餐：
1）传入“all“ ：使用套餐支持的所有模型
2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。

- 如果套餐类型为企业版轻享套餐，不允许传该参数。
                     * @param _allowedModels 可用模型列表。不传则不修改。

- 如果套餐类型为企业版专业套餐：
1）传入“all“ ：使用套餐支持的所有模型
2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。

- 如果套餐类型为企业版轻享套餐，不允许传该参数。
                     * 
                     */
                    void SetAllowedModels(const std::vector<std::string>& _allowedModels);

                    /**
                     * 判断参数 AllowedModels 是否已赋值
                     * @return AllowedModels 是否已赋值
                     * 
                     */
                    bool AllowedModelsHasBeenSet() const;

                    /**
                     * 获取独占额度，不传则不修改。单位说明：

- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return ExclusiveQuota 独占额度，不传则不修改。单位说明：

- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    int64_t GetExclusiveQuota() const;

                    /**
                     * 设置独占额度，不传则不修改。单位说明：

- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _exclusiveQuota 独占额度，不传则不修改。单位说明：

- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    void SetExclusiveQuota(const int64_t& _exclusiveQuota);

                    /**
                     * 判断参数 ExclusiveQuota 是否已赋值
                     * @return ExclusiveQuota 是否已赋值
                     * 
                     */
                    bool ExclusiveQuotaHasBeenSet() const;

                    /**
                     * 获取总额度上限。-1 表示不限，必须为 -1 或 >= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return TotalQuota 总额度上限。-1 表示不限，必须为 -1 或 >= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置总额度上限。-1 表示不限，必须为 -1 或 >= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _totalQuota 总额度上限。-1 表示不限，必须为 -1 或 >= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。
                     * @return UseStatus 是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。
                     * @param _useStatus 是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。
                     * 
                     */
                    void SetUseStatus(const std::string& _useStatus);

                    /**
                     * 判断参数 UseStatus 是否已赋值
                     * @return UseStatus 是否已赋值
                     * 
                     */
                    bool UseStatusHasBeenSet() const;

                    /**
                     * 获取TPM（Tokens Per Minute）限制。不传则不修改。必须 >= 0 且 <= 套餐 TPM。
                     * @return TPM TPM（Tokens Per Minute）限制。不传则不修改。必须 >= 0 且 <= 套餐 TPM。
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置TPM（Tokens Per Minute）限制。不传则不修改。必须 >= 0 且 <= 套餐 TPM。
                     * @param _tPM TPM（Tokens Per Minute）限制。不传则不修改。必须 >= 0 且 <= 套餐 TPM。
                     * 
                     */
                    void SetTPM(const int64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                private:

                    /**
                     * API Key ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * 可用模型列表。不传则不修改。

- 如果套餐类型为企业版专业套餐：
1）传入“all“ ：使用套餐支持的所有模型
2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。

- 如果套餐类型为企业版轻享套餐，不允许传该参数。
                     */
                    std::vector<std::string> m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * 独占额度，不传则不修改。单位说明：

- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    int64_t m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * 总额度上限。-1 表示不限，必须为 -1 或 >= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * 是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * TPM（Tokens Per Minute）限制。不传则不修改。必须 >= 0 且 <= 套餐 TPM。
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
