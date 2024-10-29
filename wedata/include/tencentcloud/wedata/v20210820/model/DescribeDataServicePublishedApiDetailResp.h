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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPIDETAILRESP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPIDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DataServiceRequestParam.h>
#include <tencentcloud/wedata/v20210820/model/DataServiceResponseParam.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询数据服务API的发布态信息详情出参
                */
                class DescribeDataServicePublishedApiDetailResp : public AbstractModel
                {
                public:
                    DescribeDataServicePublishedApiDetailResp();
                    ~DescribeDataServicePublishedApiDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务Api名称
                     * @return ApiName 服务Api名称
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置服务Api名称
                     * @param _apiName 服务Api名称
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取服务请求Path
                     * @return PathUrl 服务请求Path
                     * 
                     */
                    std::string GetPathUrl() const;

                    /**
                     * 设置服务请求Path
                     * @param _pathUrl 服务请求Path
                     * 
                     */
                    void SetPathUrl(const std::string& _pathUrl);

                    /**
                     * 判断参数 PathUrl 是否已赋值
                     * @return PathUrl 是否已赋值
                     * 
                     */
                    bool PathUrlHasBeenSet() const;

                    /**
                     * 获取服务责任人名称
                     * @return OwnerName 服务责任人名称
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置服务责任人名称
                     * @param _ownerName 服务责任人名称
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取服务请求方式
                     * @return RequestType 服务请求方式
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置服务请求方式
                     * @param _requestType 服务请求方式
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                    /**
                     * 获取服务标签名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiTagNames 服务标签名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiTagNames() const;

                    /**
                     * 设置服务标签名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiTagNames 服务标签名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiTagNames(const std::string& _apiTagNames);

                    /**
                     * 判断参数 ApiTagNames 是否已赋值
                     * @return ApiTagNames 是否已赋值
                     * 
                     */
                    bool ApiTagNamesHasBeenSet() const;

                    /**
                     * 获取服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiDescription 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiDescription() const;

                    /**
                     * 设置服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiDescription 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiDescription(const std::string& _apiDescription);

                    /**
                     * 判断参数 ApiDescription 是否已赋值
                     * @return ApiDescription 是否已赋值
                     * 
                     */
                    bool ApiDescriptionHasBeenSet() const;

                    /**
                     * 获取服务请求返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestExample 服务请求返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestExample() const;

                    /**
                     * 设置服务请求返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestExample 服务请求返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestExample(const std::string& _requestExample);

                    /**
                     * 判断参数 RequestExample 是否已赋值
                     * @return RequestExample 是否已赋值
                     * 
                     */
                    bool RequestExampleHasBeenSet() const;

                    /**
                     * 获取服务请求成功返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestSuccess 服务请求成功返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestSuccess() const;

                    /**
                     * 设置服务请求成功返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestSuccess 服务请求成功返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestSuccess(const std::string& _requestSuccess);

                    /**
                     * 判断参数 RequestSuccess 是否已赋值
                     * @return RequestSuccess 是否已赋值
                     * 
                     */
                    bool RequestSuccessHasBeenSet() const;

                    /**
                     * 获取服务请求失败返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestError 服务请求失败返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestError() const;

                    /**
                     * 设置服务请求失败返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestError 服务请求失败返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestError(const std::string& _requestError);

                    /**
                     * 判断参数 RequestError 是否已赋值
                     * @return RequestError 是否已赋值
                     * 
                     */
                    bool RequestErrorHasBeenSet() const;

                    /**
                     * 获取服务请求参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestParam 服务请求参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataServiceRequestParam> GetRequestParam() const;

                    /**
                     * 设置服务请求参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestParam 服务请求参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestParam(const std::vector<DataServiceRequestParam>& _requestParam);

                    /**
                     * 判断参数 RequestParam 是否已赋值
                     * @return RequestParam 是否已赋值
                     * 
                     */
                    bool RequestParamHasBeenSet() const;

                    /**
                     * 获取服务响应参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseParam 服务响应参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataServiceResponseParam> GetResponseParam() const;

                    /**
                     * 设置服务响应参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseParam 服务响应参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseParam(const std::vector<DataServiceResponseParam>& _responseParam);

                    /**
                     * 判断参数 ResponseParam 是否已赋值
                     * @return ResponseParam 是否已赋值
                     * 
                     */
                    bool ResponseParamHasBeenSet() const;

                    /**
                     * 获取最大qps
                     * @return MaxAllowQps 最大qps
                     * 
                     */
                    int64_t GetMaxAllowQps() const;

                    /**
                     * 设置最大qps
                     * @param _maxAllowQps 最大qps
                     * 
                     */
                    void SetMaxAllowQps(const int64_t& _maxAllowQps);

                    /**
                     * 判断参数 MaxAllowQps 是否已赋值
                     * @return MaxAllowQps 是否已赋值
                     * 
                     */
                    bool MaxAllowQpsHasBeenSet() const;

                    /**
                     * 获取最大记录数
                     * @return MaxAllowPageSize 最大记录数
                     * 
                     */
                    int64_t GetMaxAllowPageSize() const;

                    /**
                     * 设置最大记录数
                     * @param _maxAllowPageSize 最大记录数
                     * 
                     */
                    void SetMaxAllowPageSize(const int64_t& _maxAllowPageSize);

                    /**
                     * 判断参数 MaxAllowPageSize 是否已赋值
                     * @return MaxAllowPageSize 是否已赋值
                     * 
                     */
                    bool MaxAllowPageSizeHasBeenSet() const;

                    /**
                     * 获取超时时间，单位ms
                     * @return TimeoutPeriod 超时时间，单位ms
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置超时时间，单位ms
                     * @param _timeoutPeriod 超时时间，单位ms
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                    /**
                     * 获取ApiId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId ApiId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置ApiId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId ApiId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取0:免认证 1:应用认证
                     * @return AuthType 0:免认证 1:应用认证
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置0:免认证 1:应用认证
                     * @param _authType 0:免认证 1:应用认证
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayApiUrl 请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayApiUrl() const;

                    /**
                     * 设置请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayApiUrl 请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayApiUrl(const std::string& _gatewayApiUrl);

                    /**
                     * 判断参数 GatewayApiUrl 是否已赋值
                     * @return GatewayApiUrl 是否已赋值
                     * 
                     */
                    bool GatewayApiUrlHasBeenSet() const;

                    /**
                     * 获取服务Api状态 1:已上线  3:已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiStatus 服务Api状态 1:已上线  3:已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetApiStatus() const;

                    /**
                     * 设置服务Api状态 1:已上线  3:已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiStatus 服务Api状态 1:已上线  3:已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiStatus(const uint64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                private:

                    /**
                     * 服务Api名称
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 服务请求Path
                     */
                    std::string m_pathUrl;
                    bool m_pathUrlHasBeenSet;

                    /**
                     * 服务责任人名称
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 服务请求方式
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * 服务标签名称集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiTagNames;
                    bool m_apiTagNamesHasBeenSet;

                    /**
                     * 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiDescription;
                    bool m_apiDescriptionHasBeenSet;

                    /**
                     * 服务请求返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestExample;
                    bool m_requestExampleHasBeenSet;

                    /**
                     * 服务请求成功返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestSuccess;
                    bool m_requestSuccessHasBeenSet;

                    /**
                     * 服务请求失败返回示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestError;
                    bool m_requestErrorHasBeenSet;

                    /**
                     * 服务请求参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataServiceRequestParam> m_requestParam;
                    bool m_requestParamHasBeenSet;

                    /**
                     * 服务响应参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataServiceResponseParam> m_responseParam;
                    bool m_responseParamHasBeenSet;

                    /**
                     * 最大qps
                     */
                    int64_t m_maxAllowQps;
                    bool m_maxAllowQpsHasBeenSet;

                    /**
                     * 最大记录数
                     */
                    int64_t m_maxAllowPageSize;
                    bool m_maxAllowPageSizeHasBeenSet;

                    /**
                     * 超时时间，单位ms
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                    /**
                     * ApiId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 0:免认证 1:应用认证
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 请求地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayApiUrl;
                    bool m_gatewayApiUrlHasBeenSet;

                    /**
                     * 服务Api状态 1:已上线  3:已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASERVICEPUBLISHEDAPIDETAILRESP_H_
