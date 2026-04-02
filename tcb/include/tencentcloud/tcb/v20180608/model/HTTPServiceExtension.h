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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceHeadersHandler.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTP访问服务路由扩展字段
                */
                class HTTPServiceExtension : public AbstractModel
                {
                public:
                    HTTPServiceExtension();
                    ~HTTPServiceExtension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取添加请求头列表
                     * @return HeadersHandler 添加请求头列表
                     * 
                     */
                    HTTPServiceHeadersHandler GetHeadersHandler() const;

                    /**
                     * 设置添加请求头列表
                     * @param _headersHandler 添加请求头列表
                     * 
                     */
                    void SetHeadersHandler(const HTTPServiceHeadersHandler& _headersHandler);

                    /**
                     * 判断参数 HeadersHandler 是否已赋值
                     * @return HeadersHandler 是否已赋值
                     * 
                     */
                    bool HeadersHandlerHasBeenSet() const;

                private:

                    /**
                     * 添加请求头列表
                     */
                    HTTPServiceHeadersHandler m_headersHandler;
                    bool m_headersHandlerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_
