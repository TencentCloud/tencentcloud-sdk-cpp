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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELFAILURE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELFAILURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerLabelKey.h>
#include <tencentcloud/trocket/v20230308/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 批量标签接口的单条失败项
                */
                class ConsumerLabelFailure : public AbstractModel
                {
                public:
                    ConsumerLabelFailure();
                    ~ConsumerLabelFailure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>失败项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>失败项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerLabelKey GetKey() const;

                    /**
                     * 设置<p>失败项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>失败项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const ConsumerLabelKey& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * <p>失败项标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerLabelKey m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABELFAILURE_H_
