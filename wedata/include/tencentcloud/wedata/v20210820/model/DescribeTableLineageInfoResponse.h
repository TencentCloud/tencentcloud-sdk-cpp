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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableLineageBaseInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableLineageInfo返回参数结构体
                */
                class DescribeTableLineageInfoResponse : public AbstractModel
                {
                public:
                    DescribeTableLineageInfoResponse();
                    ~DescribeTableLineageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableLineageBasicInfo 表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableLineageBaseInfo GetTableLineageBasicInfo() const;

                    /**
                     * 判断参数 TableLineageBasicInfo 是否已赋值
                     * @return TableLineageBasicInfo 是否已赋值
                     * 
                     */
                    bool TableLineageBasicInfoHasBeenSet() const;

                private:

                    /**
                     * 表血缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableLineageBaseInfo m_tableLineageBasicInfo;
                    bool m_tableLineageBasicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEINFORESPONSE_H_
