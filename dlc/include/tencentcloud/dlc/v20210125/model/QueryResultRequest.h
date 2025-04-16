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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryResult请求参数结构体
                */
                class QueryResultRequest : public AbstractModel
                {
                public:
                    QueryResultRequest();
                    ~QueryResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取objectListMarker={marker}&lastReadFile={filename}&lastReadOffsetlastReadFile为上一次读取的文件，lastReadOffset为上一次读取到的位置
                     * @return NextToken objectListMarker={marker}&lastReadFile={filename}&lastReadOffsetlastReadFile为上一次读取的文件，lastReadOffset为上一次读取到的位置
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置objectListMarker={marker}&lastReadFile={filename}&lastReadOffsetlastReadFile为上一次读取的文件，lastReadOffset为上一次读取到的位置
                     * @param _nextToken objectListMarker={marker}&lastReadFile={filename}&lastReadOffsetlastReadFile为上一次读取的文件，lastReadOffset为上一次读取到的位置
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * objectListMarker={marker}&lastReadFile={filename}&lastReadOffsetlastReadFile为上一次读取的文件，lastReadOffset为上一次读取到的位置
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYRESULTREQUEST_H_
