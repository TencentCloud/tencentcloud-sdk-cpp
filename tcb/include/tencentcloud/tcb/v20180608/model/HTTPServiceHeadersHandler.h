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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERSHANDLER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERSHANDLER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceHeaderToAdd.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTP访问服务路由headers处理
                */
                class HTTPServiceHeadersHandler : public AbstractModel
                {
                public:
                    HTTPServiceHeadersHandler();
                    ~HTTPServiceHeadersHandler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加请求头列表
                     * @return RequestHeadersToAdd 添加请求头列表
                     * 
                     */
                    std::vector<HTTPServiceHeaderToAdd> GetRequestHeadersToAdd() const;

                    /**
                     * 设置添加请求头列表
                     * @param _requestHeadersToAdd 添加请求头列表
                     * 
                     */
                    void SetRequestHeadersToAdd(const std::vector<HTTPServiceHeaderToAdd>& _requestHeadersToAdd);

                    /**
                     * 判断参数 RequestHeadersToAdd 是否已赋值
                     * @return RequestHeadersToAdd 是否已赋值
                     * 
                     */
                    bool RequestHeadersToAddHasBeenSet() const;

                    /**
                     * 获取删除请求头列表
                     * @return RequestHeadersToRemove 删除请求头列表
                     * 
                     */
                    std::vector<std::string> GetRequestHeadersToRemove() const;

                    /**
                     * 设置删除请求头列表
                     * @param _requestHeadersToRemove 删除请求头列表
                     * 
                     */
                    void SetRequestHeadersToRemove(const std::vector<std::string>& _requestHeadersToRemove);

                    /**
                     * 判断参数 RequestHeadersToRemove 是否已赋值
                     * @return RequestHeadersToRemove 是否已赋值
                     * 
                     */
                    bool RequestHeadersToRemoveHasBeenSet() const;

                    /**
                     * 获取添加返回头列表
                     * @return ResponseHeadersToAdd 添加返回头列表
                     * 
                     */
                    std::vector<HTTPServiceHeaderToAdd> GetResponseHeadersToAdd() const;

                    /**
                     * 设置添加返回头列表
                     * @param _responseHeadersToAdd 添加返回头列表
                     * 
                     */
                    void SetResponseHeadersToAdd(const std::vector<HTTPServiceHeaderToAdd>& _responseHeadersToAdd);

                    /**
                     * 判断参数 ResponseHeadersToAdd 是否已赋值
                     * @return ResponseHeadersToAdd 是否已赋值
                     * 
                     */
                    bool ResponseHeadersToAddHasBeenSet() const;

                    /**
                     * 获取删除返回头列表
                     * @return ResponseHeadersToRemove 删除返回头列表
                     * 
                     */
                    std::vector<std::string> GetResponseHeadersToRemove() const;

                    /**
                     * 设置删除返回头列表
                     * @param _responseHeadersToRemove 删除返回头列表
                     * 
                     */
                    void SetResponseHeadersToRemove(const std::vector<std::string>& _responseHeadersToRemove);

                    /**
                     * 判断参数 ResponseHeadersToRemove 是否已赋值
                     * @return ResponseHeadersToRemove 是否已赋值
                     * 
                     */
                    bool ResponseHeadersToRemoveHasBeenSet() const;

                private:

                    /**
                     * 添加请求头列表
                     */
                    std::vector<HTTPServiceHeaderToAdd> m_requestHeadersToAdd;
                    bool m_requestHeadersToAddHasBeenSet;

                    /**
                     * 删除请求头列表
                     */
                    std::vector<std::string> m_requestHeadersToRemove;
                    bool m_requestHeadersToRemoveHasBeenSet;

                    /**
                     * 添加返回头列表
                     */
                    std::vector<HTTPServiceHeaderToAdd> m_responseHeadersToAdd;
                    bool m_responseHeadersToAddHasBeenSet;

                    /**
                     * 删除返回头列表
                     */
                    std::vector<std::string> m_responseHeadersToRemove;
                    bool m_responseHeadersToRemoveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEHEADERSHANDLER_H_
