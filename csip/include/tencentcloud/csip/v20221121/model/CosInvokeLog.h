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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKELOG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos调用日志
                */
                class CosInvokeLog : public AbstractModel
                {
                public:
                    CosInvokeLog();
                    ~CosInvokeLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用时间戳
                     * @return InvokeTimestamp 调用时间戳
                     * 
                     */
                    uint64_t GetInvokeTimestamp() const;

                    /**
                     * 设置调用时间戳
                     * @param _invokeTimestamp 调用时间戳
                     * 
                     */
                    void SetInvokeTimestamp(const uint64_t& _invokeTimestamp);

                    /**
                     * 判断参数 InvokeTimestamp 是否已赋值
                     * @return InvokeTimestamp 是否已赋值
                     * 
                     */
                    bool InvokeTimestampHasBeenSet() const;

                    /**
                     * 获取请求id
                     * @return RequestId 请求id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求id
                     * @param _requestId 请求id
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取请求内容 base64 json 结构
                     * @return RequestContent 请求内容 base64 json 结构
                     * 
                     */
                    std::string GetRequestContent() const;

                    /**
                     * 设置请求内容 base64 json 结构
                     * @param _requestContent 请求内容 base64 json 结构
                     * 
                     */
                    void SetRequestContent(const std::string& _requestContent);

                    /**
                     * 判断参数 RequestContent 是否已赋值
                     * @return RequestContent 是否已赋值
                     * 
                     */
                    bool RequestContentHasBeenSet() const;

                private:

                    /**
                     * 调用时间戳
                     */
                    uint64_t m_invokeTimestamp;
                    bool m_invokeTimestampHasBeenSet;

                    /**
                     * 请求id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 请求内容 base64 json 结构
                     */
                    std::string m_requestContent;
                    bool m_requestContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSINVOKELOG_H_
