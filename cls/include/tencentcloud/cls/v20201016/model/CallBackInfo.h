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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 回调配置
                */
                class CallBackInfo : public AbstractModel
                {
                public:
                    CallBackInfo();
                    ~CallBackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调时的Body
                     * @return Body 回调时的Body
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置回调时的Body
                     * @param _body 回调时的Body
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
                     * 获取回调时的Headers
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 回调时的Headers
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置回调时的Headers
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers 回调时的Headers
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 回调时的Body
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 回调时的Headers
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CALLBACKINFO_H_
