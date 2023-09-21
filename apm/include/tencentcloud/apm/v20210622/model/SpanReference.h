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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SPANREFERENCE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SPANREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Span上下游关联关系
                */
                class SpanReference : public AbstractModel
                {
                public:
                    SpanReference();
                    ~SpanReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联关系类型
                     * @return RefType 关联关系类型
                     * 
                     */
                    std::string GetRefType() const;

                    /**
                     * 设置关联关系类型
                     * @param _refType 关联关系类型
                     * 
                     */
                    void SetRefType(const std::string& _refType);

                    /**
                     * 判断参数 RefType 是否已赋值
                     * @return RefType 是否已赋值
                     * 
                     */
                    bool RefTypeHasBeenSet() const;

                    /**
                     * 获取Span ID
                     * @return SpanID Span ID
                     * 
                     */
                    std::string GetSpanID() const;

                    /**
                     * 设置Span ID
                     * @param _spanID Span ID
                     * 
                     */
                    void SetSpanID(const std::string& _spanID);

                    /**
                     * 判断参数 SpanID 是否已赋值
                     * @return SpanID 是否已赋值
                     * 
                     */
                    bool SpanIDHasBeenSet() const;

                    /**
                     * 获取Trace ID
                     * @return TraceID Trace ID
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置Trace ID
                     * @param _traceID Trace ID
                     * 
                     */
                    void SetTraceID(const std::string& _traceID);

                    /**
                     * 判断参数 TraceID 是否已赋值
                     * @return TraceID 是否已赋值
                     * 
                     */
                    bool TraceIDHasBeenSet() const;

                private:

                    /**
                     * 关联关系类型
                     */
                    std::string m_refType;
                    bool m_refTypeHasBeenSet;

                    /**
                     * Span ID
                     */
                    std::string m_spanID;
                    bool m_spanIDHasBeenSet;

                    /**
                     * Trace ID
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SPANREFERENCE_H_
