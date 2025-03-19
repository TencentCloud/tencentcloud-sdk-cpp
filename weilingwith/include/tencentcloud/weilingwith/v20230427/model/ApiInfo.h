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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APIINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ApiContent.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * API描述
                */
                class ApiInfo : public AbstractModel
                {
                public:
                    ApiInfo();
                    ~ApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API的id
                     * @return ApiId API的id
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API的id
                     * @param _apiId API的id
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
                     * 获取API名称
                     * @return Name API名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API名称
                     * @param _name API名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取API所属应用的id
                     * @return AppId API所属应用的id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置API所属应用的id
                     * @param _appId API所属应用的id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取API所属的项目空间的id
                     * @return WorkspaceId API所属的项目空间的id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置API所属的项目空间的id
                     * @param _workspaceId API所属的项目空间的id
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取API所属目录的编码
                     * @return PoiCode API所属目录的编码
                     * 
                     */
                    std::string GetPoiCode() const;

                    /**
                     * 设置API所属目录的编码
                     * @param _poiCode API所属目录的编码
                     * 
                     */
                    void SetPoiCode(const std::string& _poiCode);

                    /**
                     * 判断参数 PoiCode 是否已赋值
                     * @return PoiCode 是否已赋值
                     * 
                     */
                    bool PoiCodeHasBeenSet() const;

                    /**
                     * 获取 接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务
                     * @return Type  接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置 接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务
                     * @param _type  接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据授权 0:否 1:是
                     * @return DataAudit 数据授权 0:否 1:是
                     * 
                     */
                    uint64_t GetDataAudit() const;

                    /**
                     * 设置数据授权 0:否 1:是
                     * @param _dataAudit 数据授权 0:否 1:是
                     * 
                     */
                    void SetDataAudit(const uint64_t& _dataAudit);

                    /**
                     * 判断参数 DataAudit 是否已赋值
                     * @return DataAudit 是否已赋值
                     * 
                     */
                    bool DataAuditHasBeenSet() const;

                    /**
                     * 获取是否需要申请 0:否 1:是
                     * @return ApplyAudit 是否需要申请 0:否 1:是
                     * 
                     */
                    uint64_t GetApplyAudit() const;

                    /**
                     * 设置是否需要申请 0:否 1:是
                     * @param _applyAudit 是否需要申请 0:否 1:是
                     * 
                     */
                    void SetApplyAudit(const uint64_t& _applyAudit);

                    /**
                     * 判断参数 ApplyAudit 是否已赋值
                     * @return ApplyAudit 是否已赋值
                     * 
                     */
                    bool ApplyAuditHasBeenSet() const;

                    /**
                     * 获取API详情
                     * @return Description API详情
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置API详情
                     * @param _description API详情
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取API地址
                     * @return Address API地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置API地址
                     * @param _address API地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取请求方法类型
                     * @return Method 请求方法类型
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法类型
                     * @param _method 请求方法类型
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取API状态
                     * @return Status API状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置API状态
                     * @param _status API状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取API预览地址
                     * @return PreviewUrl API预览地址
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置API预览地址
                     * @param _previewUrl API预览地址
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取query参数
                     * @return QueryParams query参数
                     * 
                     */
                    std::vector<ApiContent> GetQueryParams() const;

                    /**
                     * 设置query参数
                     * @param _queryParams query参数
                     * 
                     */
                    void SetQueryParams(const std::vector<ApiContent>& _queryParams);

                    /**
                     * 判断参数 QueryParams 是否已赋值
                     * @return QueryParams 是否已赋值
                     * 
                     */
                    bool QueryParamsHasBeenSet() const;

                    /**
                     * 获取路径参数
                     * @return PathParams 路径参数
                     * 
                     */
                    std::vector<ApiContent> GetPathParams() const;

                    /**
                     * 设置路径参数
                     * @param _pathParams 路径参数
                     * 
                     */
                    void SetPathParams(const std::vector<ApiContent>& _pathParams);

                    /**
                     * 判断参数 PathParams 是否已赋值
                     * @return PathParams 是否已赋值
                     * 
                     */
                    bool PathParamsHasBeenSet() const;

                    /**
                     * 获取请求头
                     * @return RequestHeaders 请求头
                     * 
                     */
                    std::vector<ApiContent> GetRequestHeaders() const;

                    /**
                     * 设置请求头
                     * @param _requestHeaders 请求头
                     * 
                     */
                    void SetRequestHeaders(const std::vector<ApiContent>& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     * 
                     */
                    bool RequestHeadersHasBeenSet() const;

                    /**
                     * 获取响应头
                     * @return ResponseHeaders 响应头
                     * 
                     */
                    std::vector<ApiContent> GetResponseHeaders() const;

                    /**
                     * 设置响应头
                     * @param _responseHeaders 响应头
                     * 
                     */
                    void SetResponseHeaders(const std::vector<ApiContent>& _responseHeaders);

                    /**
                     * 判断参数 ResponseHeaders 是否已赋值
                     * @return ResponseHeaders 是否已赋值
                     * 
                     */
                    bool ResponseHeadersHasBeenSet() const;

                    /**
                     * 获取是否为公共空间接口
                     * @return IsCommonSpace 是否为公共空间接口
                     * 
                     */
                    bool GetIsCommonSpace() const;

                    /**
                     * 设置是否为公共空间接口
                     * @param _isCommonSpace 是否为公共空间接口
                     * 
                     */
                    void SetIsCommonSpace(const bool& _isCommonSpace);

                    /**
                     * 判断参数 IsCommonSpace 是否已赋值
                     * @return IsCommonSpace 是否已赋值
                     * 
                     */
                    bool IsCommonSpaceHasBeenSet() const;

                    /**
                     * 获取请求体（base64编码）
                     * @return Body 请求体（base64编码）
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置请求体（base64编码）
                     * @param _body 请求体（base64编码）
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取响应体（base64编码）
                     * @return ResponseBody 响应体（base64编码）
                     * 
                     */
                    std::string GetResponseBody() const;

                    /**
                     * 设置响应体（base64编码）
                     * @param _responseBody 响应体（base64编码）
                     * 
                     */
                    void SetResponseBody(const std::string& _responseBody);

                    /**
                     * 判断参数 ResponseBody 是否已赋值
                     * @return ResponseBody 是否已赋值
                     * 
                     */
                    bool ResponseBodyHasBeenSet() const;

                    /**
                     * 获取接口方式 1.http 2消息通知服务
                     * @return Style 接口方式 1.http 2消息通知服务
                     * 
                     */
                    uint64_t GetStyle() const;

                    /**
                     * 设置接口方式 1.http 2消息通知服务
                     * @param _style 接口方式 1.http 2消息通知服务
                     * 
                     */
                    void SetStyle(const uint64_t& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * API的id
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API所属应用的id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * API所属的项目空间的id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * API所属目录的编码
                     */
                    std::string m_poiCode;
                    bool m_poiCodeHasBeenSet;

                    /**
                     *  接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据授权 0:否 1:是
                     */
                    uint64_t m_dataAudit;
                    bool m_dataAuditHasBeenSet;

                    /**
                     * 是否需要申请 0:否 1:是
                     */
                    uint64_t m_applyAudit;
                    bool m_applyAuditHasBeenSet;

                    /**
                     * API详情
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * API地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 请求方法类型
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * API状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * API预览地址
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * query参数
                     */
                    std::vector<ApiContent> m_queryParams;
                    bool m_queryParamsHasBeenSet;

                    /**
                     * 路径参数
                     */
                    std::vector<ApiContent> m_pathParams;
                    bool m_pathParamsHasBeenSet;

                    /**
                     * 请求头
                     */
                    std::vector<ApiContent> m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                    /**
                     * 响应头
                     */
                    std::vector<ApiContent> m_responseHeaders;
                    bool m_responseHeadersHasBeenSet;

                    /**
                     * 是否为公共空间接口
                     */
                    bool m_isCommonSpace;
                    bool m_isCommonSpaceHasBeenSet;

                    /**
                     * 请求体（base64编码）
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 响应体（base64编码）
                     */
                    std::string m_responseBody;
                    bool m_responseBodyHasBeenSet;

                    /**
                     * 接口方式 1.http 2消息通知服务
                     */
                    uint64_t m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APIINFO_H_
