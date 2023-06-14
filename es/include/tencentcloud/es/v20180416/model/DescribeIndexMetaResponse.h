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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETARESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/IndexMetaField.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeIndexMeta返回参数结构体
                */
                class DescribeIndexMetaResponse : public AbstractModel
                {
                public:
                    DescribeIndexMetaResponse();
                    ~DescribeIndexMetaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取索引元数据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexMetaField 索引元数据字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexMetaField GetIndexMetaField() const;

                    /**
                     * 判断参数 IndexMetaField 是否已赋值
                     * @return IndexMetaField 是否已赋值
                     * 
                     */
                    bool IndexMetaFieldHasBeenSet() const;

                private:

                    /**
                     * 索引元数据字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexMetaField m_indexMetaField;
                    bool m_indexMetaFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETARESPONSE_H_
