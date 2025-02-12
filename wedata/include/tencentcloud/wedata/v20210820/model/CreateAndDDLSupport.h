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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEANDDDLSUPPORT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEANDDDLSUPPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 是否支持creat 或ddl
                */
                class CreateAndDDLSupport : public AbstractModel
                {
                public:
                    CreateAndDDLSupport();
                    ~CreateAndDDLSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否支持select
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportSelect 是否支持select
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportSelect() const;

                    /**
                     * 设置是否支持select
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportSelect 是否支持select
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportSelect(const bool& _supportSelect);

                    /**
                     * 判断参数 SupportSelect 是否已赋值
                     * @return SupportSelect 是否已赋值
                     * 
                     */
                    bool SupportSelectHasBeenSet() const;

                    /**
                     * 获取是否支持ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportDdl 是否支持ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportDdl() const;

                    /**
                     * 设置是否支持ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportDdl 是否支持ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportDdl(const bool& _supportDdl);

                    /**
                     * 判断参数 SupportDdl 是否已赋值
                     * @return SupportDdl 是否已赋值
                     * 
                     */
                    bool SupportDdlHasBeenSet() const;

                private:

                    /**
                     * 是否支持select
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportSelect;
                    bool m_supportSelectHasBeenSet;

                    /**
                     * 是否支持ddl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportDdl;
                    bool m_supportDdlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEANDDDLSUPPORT_H_
