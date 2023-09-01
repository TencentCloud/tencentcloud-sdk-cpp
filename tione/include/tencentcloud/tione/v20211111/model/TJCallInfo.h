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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TJCALLINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TJCALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 太极服务的调用信息
                */
                class TJCallInfo : public AbstractModel
                {
                public:
                    TJCallInfo();
                    ~TJCallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpAddr 调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpAddr() const;

                    /**
                     * 设置调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpAddr 调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpAddr(const std::string& _httpAddr);

                    /**
                     * 判断参数 HttpAddr 是否已赋值
                     * @return HttpAddr 是否已赋值
                     * 
                     */
                    bool HttpAddrHasBeenSet() const;

                    /**
                     * 获取token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取调用示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallExample 调用示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallExample() const;

                    /**
                     * 设置调用示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callExample 调用示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallExample(const std::string& _callExample);

                    /**
                     * 判断参数 CallExample 是否已赋值
                     * @return CallExample 是否已赋值
                     * 
                     */
                    bool CallExampleHasBeenSet() const;

                private:

                    /**
                     * 调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpAddr;
                    bool m_httpAddrHasBeenSet;

                    /**
                     * token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 调用示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callExample;
                    bool m_callExampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TJCALLINFO_H_
