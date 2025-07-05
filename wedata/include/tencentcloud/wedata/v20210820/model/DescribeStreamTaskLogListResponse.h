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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LogContentInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeStreamTaskLogList返回参数结构体
                */
                class DescribeStreamTaskLogListResponse : public AbstractModel
                {
                public:
                    DescribeStreamTaskLogListResponse();
                    ~DescribeStreamTaskLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否是全量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListOver 是否是全量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogContentList 日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogContentInfo> GetLogContentList() const;

                    /**
                     * 判断参数 LogContentList 是否已赋值
                     * @return LogContentList 是否已赋值
                     * 
                     */
                    bool LogContentListHasBeenSet() const;

                private:

                    /**
                     * 是否是全量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 日志集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogContentInfo> m_logContentList;
                    bool m_logContentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTREAMTASKLOGLISTRESPONSE_H_
