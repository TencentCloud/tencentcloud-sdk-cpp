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
                     * 获取如果认证类型为sts时，该项必填
                     * @return STSSystem 如果认证类型为sts时，该项必填
                     * 
                     */
                    std::string GetSTSSystem() const;

                    /**
                     * 设置如果认证类型为sts时，该项必填
                     * @param _sTSSystem 如果认证类型为sts时，该项必填
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
                     * 获取如果认证类型为sts时，该项必填
                     * @return STSService 如果认证类型为sts时，该项必填
                     * 
                     */
                    std::string GetSTSService() const;

                    /**
                     * 设置如果认证类型为sts时，该项必填
                     * @param _sTSService 如果认证类型为sts时，该项必填
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
                     * 获取如果认证类型为reqKey时，该项必填
                     * @return Headers 如果认证类型为reqKey时，该项必填
                     * 
                     */
                    std::vector<AgentCredentialContentHeaderDTO> GetHeaders() const;

                    /**
                     * 设置如果认证类型为reqKey时，该项必填
                     * @param _headers 如果认证类型为reqKey时，该项必填
                     * 
                     */
                    void SetHeaders(const std::vector<AgentCredentialContentHeaderDTO>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 如果认证类型为sts时，该项必填
                     */
                    std::string m_sTSSystem;
                    bool m_sTSSystemHasBeenSet;

                    /**
                     * 如果认证类型为sts时，该项必填
                     */
                    std::string m_sTSService;
                    bool m_sTSServiceHasBeenSet;

                    /**
                     * 如果认证类型为reqKey时，该项必填
                     */
                    std::vector<AgentCredentialContentHeaderDTO> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTCREDENTIALCONTENTDTO_H_
