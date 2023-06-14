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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEDOMAINERRORPAGEINFOREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEDOMAINERRORPAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteDomainErrorPageInfo请求参数结构体
                */
                class DeleteDomainErrorPageInfoRequest : public AbstractModel
                {
                public:
                    DeleteDomainErrorPageInfoRequest();
                    ~DeleteDomainErrorPageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定制错误响应页的唯一ID，请参考CreateDomainErrorPageInfo的响应
                     * @return ErrorPageId 定制错误响应页的唯一ID，请参考CreateDomainErrorPageInfo的响应
                     * 
                     */
                    std::string GetErrorPageId() const;

                    /**
                     * 设置定制错误响应页的唯一ID，请参考CreateDomainErrorPageInfo的响应
                     * @param _errorPageId 定制错误响应页的唯一ID，请参考CreateDomainErrorPageInfo的响应
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
                     * 定制错误响应页的唯一ID，请参考CreateDomainErrorPageInfo的响应
                     */
                    std::string m_errorPageId;
                    bool m_errorPageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEDOMAINERRORPAGEINFOREQUEST_H_
