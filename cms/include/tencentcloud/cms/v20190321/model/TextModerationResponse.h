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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/TextData.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * TextModeration返回参数结构体
                */
                class TextModerationResponse : public AbstractModel
                {
                public:
                    TextModerationResponse();
                    ~TextModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务返回码
                     * @return BusinessCode 业务返回码
                     * 
                     */
                    int64_t GetBusinessCode() const;

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 业务返回码
                     */
                    int64_t m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONRESPONSE_H_
