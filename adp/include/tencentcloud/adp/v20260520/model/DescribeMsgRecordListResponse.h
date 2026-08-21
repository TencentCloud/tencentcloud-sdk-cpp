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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MsgRecord.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeMsgRecordList返回参数结构体
                */
                class DescribeMsgRecordListResponse : public AbstractModel
                {
                public:
                    DescribeMsgRecordListResponse();
                    ~DescribeMsgRecordListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否有更多页</p>
                     * @return HasMore <p>是否有更多页</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取<p>消息记录列表</p>
                     * @return MsgRecordList <p>消息记录列表</p>
                     * 
                     */
                    std::vector<MsgRecord> GetMsgRecordList() const;

                    /**
                     * 判断参数 MsgRecordList 是否已赋值
                     * @return MsgRecordList 是否已赋值
                     * 
                     */
                    bool MsgRecordListHasBeenSet() const;

                    /**
                     * 获取<p>下一页游标信息</p>
                     * @return NextCursor <p>下一页游标信息</p>
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取<p>上一页游标信息</p>
                     * @return PrevCursor <p>上一页游标信息</p>
                     * 
                     */
                    std::string GetPrevCursor() const;

                    /**
                     * 判断参数 PrevCursor 是否已赋值
                     * @return PrevCursor 是否已赋值
                     * 
                     */
                    bool PrevCursorHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的总记录数，用于前端分页显示</p>
                     * @return TotalCount <p>符合条件的总记录数，用于前端分页显示</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>是否有更多页</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * <p>消息记录列表</p>
                     */
                    std::vector<MsgRecord> m_msgRecordList;
                    bool m_msgRecordListHasBeenSet;

                    /**
                     * <p>下一页游标信息</p>
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * <p>上一页游标信息</p>
                     */
                    std::string m_prevCursor;
                    bool m_prevCursorHasBeenSet;

                    /**
                     * <p>符合条件的总记录数，用于前端分页显示</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTRESPONSE_H_
