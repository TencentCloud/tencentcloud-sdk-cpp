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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RETURNCUSTOMPAGEACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RETURNCUSTOMPAGEACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web安全自定义页面的附加参数
                */
                class ReturnCustomPageActionParameters : public AbstractModel
                {
                public:
                    ReturnCustomPageActionParameters();
                    ~ReturnCustomPageActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取响应状态码。
                     * @return ResponseCode 响应状态码。
                     * 
                     */
                    std::string GetResponseCode() const;

                    /**
                     * 设置响应状态码。
                     * @param _responseCode 响应状态码。
                     * 
                     */
                    void SetResponseCode(const std::string& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取响应的自定义页面ID。
                     * @return ErrorPageId 响应的自定义页面ID。
                     * 
                     */
                    std::string GetErrorPageId() const;

                    /**
                     * 设置响应的自定义页面ID。
                     * @param _errorPageId 响应的自定义页面ID。
                     * 
                     */
                    void SetErrorPageId(const std::string& _errorPageId);

                    /**
                     * 判断参数 ErrorPageId 是否已赋值
                     * @return ErrorPageId 是否已赋值
                     * 
                     */
                    bool ErrorPageIdHasBeenSet() const;

                private:

                    /**
                     * 响应状态码。
                     */
                    std::string m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * 响应的自定义页面ID。
                     */
                    std::string m_errorPageId;
                    bool m_errorPageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RETURNCUSTOMPAGEACTIONPARAMETERS_H_
