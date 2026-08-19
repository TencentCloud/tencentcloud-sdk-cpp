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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTEOPERATERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTEOPERATERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 安全组路由操作结果返回值
                */
                class SecurityGroupRouteOperateResp : public AbstractModel
                {
                public:
                    SecurityGroupRouteOperateResp();
                    ~SecurityGroupRouteOperateResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作返回的code，0为正常，非0为错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnCode 操作返回的code，0为正常，非0为错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置操作返回的code，0为正常，非0为错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnCode 操作返回的code，0为正常，非0为错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取操作返回的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnMessage 操作返回的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 设置操作返回的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnMessage 操作返回的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnMessage(const std::string& _returnMessage);

                    /**
                     * 判断参数 ReturnMessage 是否已赋值
                     * @return ReturnMessage 是否已赋值
                     * 
                     */
                    bool ReturnMessageHasBeenSet() const;

                private:

                    /**
                     * 操作返回的code，0为正常，非0为错误
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 操作返回的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTEOPERATERESP_H_
