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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNTDATA_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCnt.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * RCE控制台预付费和后付费次数展示出参数据
                */
                class OutputDescribeUserUsageCntData : public AbstractModel
                {
                public:
                    OutputDescribeUserUsageCntData();
                    ~OutputDescribeUserUsageCntData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码，0 表示成功，非0表示失败错误码。 0：成功 4300：未开通服务
                     * @return Code 错误码，0 表示成功，非0表示失败错误码。 0：成功 4300：未开通服务
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置错误码，0 表示成功，非0表示失败错误码。 0：成功 4300：未开通服务
                     * @param _code 错误码，0 表示成功，非0表示失败错误码。 0：成功 4300：未开通服务
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
                     * @param _message 错误信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取业务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 业务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OutputDescribeUserUsageCnt GetValue() const;

                    /**
                     * 设置业务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 业务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const OutputDescribeUserUsageCnt& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 错误码，0 表示成功，非0表示失败错误码。 0：成功 4300：未开通服务
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 业务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputDescribeUserUsageCnt m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBEUSERUSAGECNTDATA_H_
