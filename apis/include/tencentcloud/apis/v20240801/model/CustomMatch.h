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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_CUSTOMMATCH_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_CUSTOMMATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/CompoundCondition.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 自定义匹配条件
                */
                class CustomMatch : public AbstractModel
                {
                public:
                    CustomMatch();
                    ~CustomMatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求头  匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadersMatch <p>请求头  匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompoundCondition GetHeadersMatch() const;

                    /**
                     * 设置<p>请求头  匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headersMatch <p>请求头  匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadersMatch(const CompoundCondition& _headersMatch);

                    /**
                     * 判断参数 HeadersMatch 是否已赋值
                     * @return HeadersMatch 是否已赋值
                     * 
                     */
                    bool HeadersMatchHasBeenSet() const;

                    /**
                     * 获取<p>请求参数 匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryMatch <p>请求参数 匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompoundCondition GetQueryMatch() const;

                    /**
                     * 设置<p>请求参数 匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryMatch <p>请求参数 匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryMatch(const CompoundCondition& _queryMatch);

                    /**
                     * 判断参数 QueryMatch 是否已赋值
                     * @return QueryMatch 是否已赋值
                     * 
                     */
                    bool QueryMatchHasBeenSet() const;

                private:

                    /**
                     * <p>请求头  匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompoundCondition m_headersMatch;
                    bool m_headersMatchHasBeenSet;

                    /**
                     * <p>请求参数 匹配条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompoundCondition m_queryMatch;
                    bool m_queryMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_CUSTOMMATCH_H_
