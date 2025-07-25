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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_WSPARAMS_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_WSPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * HTTP函数通过WebSockets协议访问时的参数
                */
                class WSParams : public AbstractModel
                {
                public:
                    WSParams();
                    ~WSParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空闲超时时间, 单位秒，默认15s。可配置范围1~1800s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdleTimeOut 空闲超时时间, 单位秒，默认15s。可配置范围1~1800s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIdleTimeOut() const;

                    /**
                     * 设置空闲超时时间, 单位秒，默认15s。可配置范围1~1800s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idleTimeOut 空闲超时时间, 单位秒，默认15s。可配置范围1~1800s。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdleTimeOut(const uint64_t& _idleTimeOut);

                    /**
                     * 判断参数 IdleTimeOut 是否已赋值
                     * @return IdleTimeOut 是否已赋值
                     * 
                     */
                    bool IdleTimeOutHasBeenSet() const;

                private:

                    /**
                     * 空闲超时时间, 单位秒，默认15s。可配置范围1~1800s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_idleTimeOut;
                    bool m_idleTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_WSPARAMS_H_
