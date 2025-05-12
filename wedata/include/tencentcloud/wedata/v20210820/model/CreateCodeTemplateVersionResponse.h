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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateCodeTemplateVersion返回参数结构体
                */
                class CreateCodeTemplateVersionResponse : public AbstractModel
                {
                public:
                    CreateCodeTemplateVersionResponse();
                    ~CreateCodeTemplateVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量操作JobId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 批量操作JobId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 批量操作JobId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEVERSIONRESPONSE_H_
