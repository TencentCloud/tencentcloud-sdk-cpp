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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableLineageInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableLineage返回参数结构体
                */
                class DescribeTableLineageResponse : public AbstractModel
                {
                public:
                    DescribeTableLineageResponse();
                    ~DescribeTableLineageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableLineage 表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableLineageInfo GetTableLineage() const;

                    /**
                     * 判断参数 TableLineage 是否已赋值
                     * @return TableLineage 是否已赋值
                     * 
                     */
                    bool TableLineageHasBeenSet() const;

                private:

                    /**
                     * 表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableLineageInfo m_tableLineage;
                    bool m_tableLineageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGERESPONSE_H_
