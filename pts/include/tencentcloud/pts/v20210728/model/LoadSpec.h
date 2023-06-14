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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Concurrency.h>
#include <tencentcloud/pts/v20210728/model/RequestsPerSecond.h>
#include <tencentcloud/pts/v20210728/model/ScriptOrigin.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 施压配置
                */
                class LoadSpec : public AbstractModel
                {
                public:
                    LoadSpec();
                    ~LoadSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取并发施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Concurrency 并发施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Concurrency GetConcurrency() const;

                    /**
                     * 设置并发施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrency 并发施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcurrency(const Concurrency& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取RPS施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestsPerSecond RPS施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RequestsPerSecond GetRequestsPerSecond() const;

                    /**
                     * 设置RPS施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestsPerSecond RPS施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestsPerSecond(const RequestsPerSecond& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取脚本内置压力模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptOrigin 脚本内置压力模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScriptOrigin GetScriptOrigin() const;

                    /**
                     * 设置脚本内置压力模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptOrigin 脚本内置压力模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptOrigin(const ScriptOrigin& _scriptOrigin);

                    /**
                     * 判断参数 ScriptOrigin 是否已赋值
                     * @return ScriptOrigin 是否已赋值
                     * 
                     */
                    bool ScriptOriginHasBeenSet() const;

                private:

                    /**
                     * 并发施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Concurrency m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * RPS施压模式的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestsPerSecond m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * 脚本内置压力模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScriptOrigin m_scriptOrigin;
                    bool m_scriptOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_
