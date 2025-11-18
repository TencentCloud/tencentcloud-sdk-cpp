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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETSESSIONDETAILSRESPONSE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETSESSIONDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/Record.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * GetSessionDetails返回参数结构体
                */
                class GetSessionDetailsResponse : public AbstractModel
                {
                public:
                    GetSessionDetailsResponse();
                    ~GetSessionDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话记录详情
                     * @return RecordList 会话记录详情
                     * 
                     */
                    std::vector<Record> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取记录总数
                     * @return RecordCount 记录总数
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取当前在运行的record信息
                     * @return RunRecord 当前在运行的record信息
                     * 
                     */
                    std::string GetRunRecord() const;

                    /**
                     * 判断参数 RunRecord 是否已赋值
                     * @return RunRecord 是否已赋值
                     * 
                     */
                    bool RunRecordHasBeenSet() const;

                private:

                    /**
                     * 会话记录详情
                     */
                    std::vector<Record> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * 记录总数
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 当前在运行的record信息
                     */
                    std::string m_runRecord;
                    bool m_runRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_GETSESSIONDETAILSRESPONSE_H_
