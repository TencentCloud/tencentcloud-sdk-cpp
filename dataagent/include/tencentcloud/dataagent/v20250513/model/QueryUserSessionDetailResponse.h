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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERSESSIONDETAILRESPONSE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERSESSIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/RecordList.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryUserSessionDetail返回参数结构体
                */
                class QueryUserSessionDetailResponse : public AbstractModel
                {
                public:
                    QueryUserSessionDetailResponse();
                    ~QueryUserSessionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户 Id</p>
                     * @return SubAccountUin <p>用户 Id</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>会话id</p>
                     * @return SessionId <p>会话id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>会话详情数组</p>
                     * @return RecordList <p>会话详情数组</p>
                     * 
                     */
                    std::vector<RecordList> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取<p>记录总数</p>
                     * @return TotalCount <p>记录总数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>运行中的聊天请求, 返回为json字符串</p>
                     * @return RunRecord <p>运行中的聊天请求, 返回为json字符串</p>
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
                     * <p>用户 Id</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>会话详情数组</p>
                     */
                    std::vector<RecordList> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * <p>记录总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>运行中的聊天请求, 返回为json字符串</p>
                     */
                    std::string m_runRecord;
                    bool m_runRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERSESSIONDETAILRESPONSE_H_
