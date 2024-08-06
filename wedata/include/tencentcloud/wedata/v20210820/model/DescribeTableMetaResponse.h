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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETARESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableMeta.h>
#include <tencentcloud/wedata/v20210820/model/LifecycleInfo.h>
#include <tencentcloud/wedata/v20210820/model/TagVoteSum.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableMeta返回参数结构体
                */
                class DescribeTableMetaResponse : public AbstractModel
                {
                public:
                    DescribeTableMetaResponse();
                    ~DescribeTableMetaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表的元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableMeta 表的元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableMeta GetTableMeta() const;

                    /**
                     * 判断参数 TableMeta 是否已赋值
                     * @return TableMeta 是否已赋值
                     * 
                     */
                    bool TableMetaHasBeenSet() const;

                    /**
                     * 获取生命周期信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleInfo 生命周期信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LifecycleInfo GetLifecycleInfo() const;

                    /**
                     * 判断参数 LifecycleInfo 是否已赋值
                     * @return LifecycleInfo 是否已赋值
                     * 
                     */
                    bool LifecycleInfoHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagVoteSumList 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TagVoteSum GetTagVoteSumList() const;

                    /**
                     * 判断参数 TagVoteSumList 是否已赋值
                     * @return TagVoteSumList 是否已赋值
                     * 
                     */
                    bool TagVoteSumListHasBeenSet() const;

                private:

                    /**
                     * 表的元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableMeta m_tableMeta;
                    bool m_tableMetaHasBeenSet;

                    /**
                     * 生命周期信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LifecycleInfo m_lifecycleInfo;
                    bool m_lifecycleInfoHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TagVoteSum m_tagVoteSumList;
                    bool m_tagVoteSumListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETARESPONSE_H_
