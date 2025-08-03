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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_REQUESTIDINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_REQUESTIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 请求 id 信息
                */
                class RequestIdInfo : public AbstractModel
                {
                public:
                    RequestIdInfo();
                    ~RequestIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求 api 的 requestid
                     * @return ApiRequestId 请求 api 的 requestid
                     * 
                     */
                    std::string GetApiRequestId() const;

                    /**
                     * 设置请求 api 的 requestid
                     * @param _apiRequestId 请求 api 的 requestid
                     * 
                     */
                    void SetApiRequestId(const std::string& _apiRequestId);

                    /**
                     * 判断参数 ApiRequestId 是否已赋值
                     * @return ApiRequestId 是否已赋值
                     * 
                     */
                    bool ApiRequestIdHasBeenSet() const;

                    /**
                     * 获取请求 api 的错误码
                     * @return ApiErrorCode 请求 api 的错误码
                     * 
                     */
                    std::string GetApiErrorCode() const;

                    /**
                     * 设置请求 api 的错误码
                     * @param _apiErrorCode 请求 api 的错误码
                     * 
                     */
                    void SetApiErrorCode(const std::string& _apiErrorCode);

                    /**
                     * 判断参数 ApiErrorCode 是否已赋值
                     * @return ApiErrorCode 是否已赋值
                     * 
                     */
                    bool ApiErrorCodeHasBeenSet() const;

                    /**
                     * 获取告警码
                     * @return WarnCodes 告警码
                     * 
                     */
                    std::vector<int64_t> GetWarnCodes() const;

                    /**
                     * 设置告警码
                     * @param _warnCodes 告警码
                     * 
                     */
                    void SetWarnCodes(const std::vector<int64_t>& _warnCodes);

                    /**
                     * 判断参数 WarnCodes 是否已赋值
                     * @return WarnCodes 是否已赋值
                     * 
                     */
                    bool WarnCodesHasBeenSet() const;

                private:

                    /**
                     * 请求 api 的 requestid
                     */
                    std::string m_apiRequestId;
                    bool m_apiRequestIdHasBeenSet;

                    /**
                     * 请求 api 的错误码
                     */
                    std::string m_apiErrorCode;
                    bool m_apiErrorCodeHasBeenSet;

                    /**
                     * 告警码
                     */
                    std::vector<int64_t> m_warnCodes;
                    bool m_warnCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_REQUESTIDINFO_H_
