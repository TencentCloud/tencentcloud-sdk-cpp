/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILRESPONSE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApiRequestDescr.h>
#include <tencentcloud/tsf/v20180326/model/ApiResponseDescr.h>
#include <tencentcloud/tsf/v20180326/model/ApiDefinitionDescr.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ApiDetailResponse描述
                */
                class ApiDetailResponse : public AbstractModel
                {
                public:
                    ApiDetailResponse();
                    ~ApiDetailResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 请求参数
                     * @return Request API 请求参数
                     * 
                     */
                    std::vector<ApiRequestDescr> GetRequest() const;

                    /**
                     * 设置API 请求参数
                     * @param _request API 请求参数
                     * 
                     */
                    void SetRequest(const std::vector<ApiRequestDescr>& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取API 响应参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Response API 响应参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApiResponseDescr> GetResponse() const;

                    /**
                     * 设置API 响应参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _response API 响应参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponse(const std::vector<ApiResponseDescr>& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                    /**
                     * 获取API 复杂结构定义
                     * @return Definitions API 复杂结构定义
                     * 
                     */
                    std::vector<ApiDefinitionDescr> GetDefinitions() const;

                    /**
                     * 设置API 复杂结构定义
                     * @param _definitions API 复杂结构定义
                     * 
                     */
                    void SetDefinitions(const std::vector<ApiDefinitionDescr>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取API 的 content type
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestContentType API 的 content type
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestContentType() const;

                    /**
                     * 设置API 的 content type
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestContentType API 的 content type
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestContentType(const std::string& _requestContentType);

                    /**
                     * 判断参数 RequestContentType 是否已赋值
                     * @return RequestContentType 是否已赋值
                     * 
                     */
                    bool RequestContentTypeHasBeenSet() const;

                    /**
                     * 获取API  能否调试
                     * @return CanRun API  能否调试
                     * 
                     */
                    bool GetCanRun() const;

                    /**
                     * 设置API  能否调试
                     * @param _canRun API  能否调试
                     * 
                     */
                    void SetCanRun(const bool& _canRun);

                    /**
                     * 判断参数 CanRun 是否已赋值
                     * @return CanRun 是否已赋值
                     * 
                     */
                    bool CanRunHasBeenSet() const;

                    /**
                     * 获取API 状态 0:离线 1:在线，默认0
                     * @return Status API 状态 0:离线 1:在线，默认0
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置API 状态 0:离线 1:在线，默认0
                     * @param _status API 状态 0:离线 1:在线，默认0
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取API 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description API 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置API 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description API 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * API 请求参数
                     */
                    std::vector<ApiRequestDescr> m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * API 响应参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApiResponseDescr> m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * API 复杂结构定义
                     */
                    std::vector<ApiDefinitionDescr> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * API 的 content type
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestContentType;
                    bool m_requestContentTypeHasBeenSet;

                    /**
                     * API  能否调试
                     */
                    bool m_canRun;
                    bool m_canRunHasBeenSet;

                    /**
                     * API 状态 0:离线 1:在线，默认0
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * API 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILRESPONSE_H_
