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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeSecretYamlError返回参数结构体
                */
                class DescribeSecretYamlErrorResponse : public AbstractModel
                {
                public:
                    DescribeSecretYamlErrorResponse();
                    ~DescribeSecretYamlErrorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取校验是通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckPass 校验是通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCheckPass() const;

                    /**
                     * 判断参数 CheckPass 是否已赋值
                     * @return CheckPass 是否已赋值
                     * 
                     */
                    bool CheckPassHasBeenSet() const;

                    /**
                     * 获取错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrType 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetErrType() const;

                    /**
                     * 判断参数 ErrType 是否已赋值
                     * @return ErrType 是否已赋值
                     * 
                     */
                    bool ErrTypeHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrInfo 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                private:

                    /**
                     * 校验是通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_checkPass;
                    bool m_checkPassHasBeenSet;

                    /**
                     * 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_errType;
                    bool m_errTypeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORRESPONSE_H_
