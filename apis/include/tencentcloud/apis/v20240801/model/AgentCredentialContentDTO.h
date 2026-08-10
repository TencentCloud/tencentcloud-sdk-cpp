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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_AGENTCREDENTIALCONTENTDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_AGENTCREDENTIALCONTENTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/AgentCredentialContentHeaderDTO.h>
#include <tencentcloud/apis/v20240801/model/AgentCredentialApiKeyDTO.h>
#include <tencentcloud/apis/v20240801/model/FaultToleranceDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 凭证内容
                */
                class AgentCredentialContentDTO : public AbstractModel
                {
                public:
                    AgentCredentialContentDTO();
                    ~AgentCredentialContentDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>如果认证类型为sts时，该项必填</p>
                     * @return STSSystem <p>如果认证类型为sts时，该项必填</p>
                     * 
                     */
                    std::string GetSTSSystem() const;

                    /**
                     * 设置<p>如果认证类型为sts时，该项必填</p>
                     * @param _sTSSystem <p>如果认证类型为sts时，该项必填</p>
                     * 
                     */
                    void SetSTSSystem(const std::string& _sTSSystem);

                    /**
                     * 判断参数 STSSystem 是否已赋值
                     * @return STSSystem 是否已赋值
                     * 
                     */
                    bool STSSystemHasBeenSet() const;

                    /**
                     * 获取<p>如果认证类型为sts时，该项必填</p>
                     * @return STSService <p>如果认证类型为sts时，该项必填</p>
                     * 
                     */
                    std::string GetSTSService() const;

                    /**
                     * 设置<p>如果认证类型为sts时，该项必填</p>
                     * @param _sTSService <p>如果认证类型为sts时，该项必填</p>
                     * 
                     */
                    void SetSTSService(const std::string& _sTSService);

                    /**
                     * 判断参数 STSService 是否已赋值
                     * @return STSService 是否已赋值
                     * 
                     */
                    bool STSServiceHasBeenSet() const;

                    /**
                     * 获取<p>如果认证类型为reqKey时，该项必填</p>
                     * @return Headers <p>如果认证类型为reqKey时，该项必填</p>
                     * 
                     */
                    std::vector<AgentCredentialContentHeaderDTO> GetHeaders() const;

                    /**
                     * 设置<p>如果认证类型为reqKey时，该项必填</p>
                     * @param _headers <p>如果认证类型为reqKey时，该项必填</p>
                     * 
                     */
                    void SetHeaders(const std::vector<AgentCredentialContentHeaderDTO>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>如果认证类型为apiKey时，该项必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKeys <p>如果认证类型为apiKey时，该项必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentCredentialApiKeyDTO> GetApiKeys() const;

                    /**
                     * 设置<p>如果认证类型为apiKey时，该项必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiKeys <p>如果认证类型为apiKey时，该项必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiKeys(const std::vector<AgentCredentialApiKeyDTO>& _apiKeys);

                    /**
                     * 判断参数 ApiKeys 是否已赋值
                     * @return ApiKeys 是否已赋值
                     * 
                     */
                    bool ApiKeysHasBeenSet() const;

                    /**
                     * 获取<p>容错策略，仅Type为apiKey时支持</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaultTolerance <p>容错策略，仅Type为apiKey时支持</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FaultToleranceDTO GetFaultTolerance() const;

                    /**
                     * 设置<p>容错策略，仅Type为apiKey时支持</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faultTolerance <p>容错策略，仅Type为apiKey时支持</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaultTolerance(const FaultToleranceDTO& _faultTolerance);

                    /**
                     * 判断参数 FaultTolerance 是否已赋值
                     * @return FaultTolerance 是否已赋值
                     * 
                     */
                    bool FaultToleranceHasBeenSet() const;

                private:

                    /**
                     * <p>如果认证类型为sts时，该项必填</p>
                     */
                    std::string m_sTSSystem;
                    bool m_sTSSystemHasBeenSet;

                    /**
                     * <p>如果认证类型为sts时，该项必填</p>
                     */
                    std::string m_sTSService;
                    bool m_sTSServiceHasBeenSet;

                    /**
                     * <p>如果认证类型为reqKey时，该项必填</p>
                     */
                    std::vector<AgentCredentialContentHeaderDTO> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>如果认证类型为apiKey时，该项必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentCredentialApiKeyDTO> m_apiKeys;
                    bool m_apiKeysHasBeenSet;

                    /**
                     * <p>容错策略，仅Type为apiKey时支持</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaultToleranceDTO m_faultTolerance;
                    bool m_faultToleranceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTCREDENTIALCONTENTDTO_H_
