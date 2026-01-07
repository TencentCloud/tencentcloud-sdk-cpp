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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_INSERTTASKTEMPORARYFILESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_INSERTTASKTEMPORARYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * InsertTaskTemporaryFiles请求参数结构体
                */
                class InsertTaskTemporaryFilesRequest : public AbstractModel
                {
                public:
                    InsertTaskTemporaryFilesRequest();
                    ~InsertTaskTemporaryFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播拉流任务 ID。
                     * @return TaskId 直播拉流任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置直播拉流任务 ID。
                     * @param _taskId 直播拉流任务 ID。
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
                     * 获取插播文件列表，支持一次性插播多个文件，文件个数最大支持30个。可在轮播过程中追加新的插播文件。
                     * @return TemporaryFiles 插播文件列表，支持一次性插播多个文件，文件个数最大支持30个。可在轮播过程中追加新的插播文件。
                     * 
                     */
                    std::vector<std::string> GetTemporaryFiles() const;

                    /**
                     * 设置插播文件列表，支持一次性插播多个文件，文件个数最大支持30个。可在轮播过程中追加新的插播文件。
                     * @param _temporaryFiles 插播文件列表，支持一次性插播多个文件，文件个数最大支持30个。可在轮播过程中追加新的插播文件。
                     * 
                     */
                    void SetTemporaryFiles(const std::vector<std::string>& _temporaryFiles);

                    /**
                     * 判断参数 TemporaryFiles 是否已赋值
                     * @return TemporaryFiles 是否已赋值
                     * 
                     */
                    bool TemporaryFilesHasBeenSet() const;

                    /**
                     * 获取操作人名称。
                     * @return Operator 操作人名称。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人名称。
                     * @param _operator 操作人名称。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取将文件插在当前轮播序列的指定位置后面。索引序列从1开始。默认为：0，表示播完当前文件立即播放插入文件。注意：索引不要超过当前总文件个数，否则按播完全部文件后再处理插播文件。
                     * @return InsertAfterIndex 将文件插在当前轮播序列的指定位置后面。索引序列从1开始。默认为：0，表示播完当前文件立即播放插入文件。注意：索引不要超过当前总文件个数，否则按播完全部文件后再处理插播文件。
                     * 
                     */
                    int64_t GetInsertAfterIndex() const;

                    /**
                     * 设置将文件插在当前轮播序列的指定位置后面。索引序列从1开始。默认为：0，表示播完当前文件立即播放插入文件。注意：索引不要超过当前总文件个数，否则按播完全部文件后再处理插播文件。
                     * @param _insertAfterIndex 将文件插在当前轮播序列的指定位置后面。索引序列从1开始。默认为：0，表示播完当前文件立即播放插入文件。注意：索引不要超过当前总文件个数，否则按播完全部文件后再处理插播文件。
                     * 
                     */
                    void SetInsertAfterIndex(const int64_t& _insertAfterIndex);

                    /**
                     * 判断参数 InsertAfterIndex 是否已赋值
                     * @return InsertAfterIndex 是否已赋值
                     * 
                     */
                    bool InsertAfterIndexHasBeenSet() const;

                    /**
                     * 获取用于多个文件插播在同一个轮播序号之后时，可指定队列顺序。
0 - 最高优先级队列。默认值。
1 - 中等优先级队列。
2 - 最低优先级队列。
场景示例：
比如当前播放第2个文件，多个新文件插播在第2个文件之后，播完第二个轮播文件之后，优先播放InsertPriorityType为0的插播队列中的文件，再播放InsertPriorityType为1的插播队列中的文件，最后播放InsertPriorityType为2的插播队列文件。
如果插播无队列优先级要求，则无需使用此参数。
                     * @return InsertPriorityType 用于多个文件插播在同一个轮播序号之后时，可指定队列顺序。
0 - 最高优先级队列。默认值。
1 - 中等优先级队列。
2 - 最低优先级队列。
场景示例：
比如当前播放第2个文件，多个新文件插播在第2个文件之后，播完第二个轮播文件之后，优先播放InsertPriorityType为0的插播队列中的文件，再播放InsertPriorityType为1的插播队列中的文件，最后播放InsertPriorityType为2的插播队列文件。
如果插播无队列优先级要求，则无需使用此参数。
                     * 
                     */
                    int64_t GetInsertPriorityType() const;

                    /**
                     * 设置用于多个文件插播在同一个轮播序号之后时，可指定队列顺序。
0 - 最高优先级队列。默认值。
1 - 中等优先级队列。
2 - 最低优先级队列。
场景示例：
比如当前播放第2个文件，多个新文件插播在第2个文件之后，播完第二个轮播文件之后，优先播放InsertPriorityType为0的插播队列中的文件，再播放InsertPriorityType为1的插播队列中的文件，最后播放InsertPriorityType为2的插播队列文件。
如果插播无队列优先级要求，则无需使用此参数。
                     * @param _insertPriorityType 用于多个文件插播在同一个轮播序号之后时，可指定队列顺序。
0 - 最高优先级队列。默认值。
1 - 中等优先级队列。
2 - 最低优先级队列。
场景示例：
比如当前播放第2个文件，多个新文件插播在第2个文件之后，播完第二个轮播文件之后，优先播放InsertPriorityType为0的插播队列中的文件，再播放InsertPriorityType为1的插播队列中的文件，最后播放InsertPriorityType为2的插播队列文件。
如果插播无队列优先级要求，则无需使用此参数。
                     * 
                     */
                    void SetInsertPriorityType(const int64_t& _insertPriorityType);

                    /**
                     * 判断参数 InsertPriorityType 是否已赋值
                     * @return InsertPriorityType 是否已赋值
                     * 
                     */
                    bool InsertPriorityTypeHasBeenSet() const;

                    /**
                     * 获取插播上下文信息。由用户自定义传入。当播放到使用本此插播请求插入的文件时，在文件播放开始和文件播放结束的回调时，将此上下文信息通过创建任务携带的回调地址回调给用户。
注意：如果有关联每个插播文件的信息需要回调时，可将需要回调的信息自行拼接到插播文件URL上，通过回调信息中的URL进行读取使用。
                     * @return InsertContext 插播上下文信息。由用户自定义传入。当播放到使用本此插播请求插入的文件时，在文件播放开始和文件播放结束的回调时，将此上下文信息通过创建任务携带的回调地址回调给用户。
注意：如果有关联每个插播文件的信息需要回调时，可将需要回调的信息自行拼接到插播文件URL上，通过回调信息中的URL进行读取使用。
                     * 
                     */
                    std::string GetInsertContext() const;

                    /**
                     * 设置插播上下文信息。由用户自定义传入。当播放到使用本此插播请求插入的文件时，在文件播放开始和文件播放结束的回调时，将此上下文信息通过创建任务携带的回调地址回调给用户。
注意：如果有关联每个插播文件的信息需要回调时，可将需要回调的信息自行拼接到插播文件URL上，通过回调信息中的URL进行读取使用。
                     * @param _insertContext 插播上下文信息。由用户自定义传入。当播放到使用本此插播请求插入的文件时，在文件播放开始和文件播放结束的回调时，将此上下文信息通过创建任务携带的回调地址回调给用户。
注意：如果有关联每个插播文件的信息需要回调时，可将需要回调的信息自行拼接到插播文件URL上，通过回调信息中的URL进行读取使用。
                     * 
                     */
                    void SetInsertContext(const std::string& _insertContext);

                    /**
                     * 判断参数 InsertContext 是否已赋值
                     * @return InsertContext 是否已赋值
                     * 
                     */
                    bool InsertContextHasBeenSet() const;

                private:

                    /**
                     * 直播拉流任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 插播文件列表，支持一次性插播多个文件，文件个数最大支持30个。可在轮播过程中追加新的插播文件。
                     */
                    std::vector<std::string> m_temporaryFiles;
                    bool m_temporaryFilesHasBeenSet;

                    /**
                     * 操作人名称。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 将文件插在当前轮播序列的指定位置后面。索引序列从1开始。默认为：0，表示播完当前文件立即播放插入文件。注意：索引不要超过当前总文件个数，否则按播完全部文件后再处理插播文件。
                     */
                    int64_t m_insertAfterIndex;
                    bool m_insertAfterIndexHasBeenSet;

                    /**
                     * 用于多个文件插播在同一个轮播序号之后时，可指定队列顺序。
0 - 最高优先级队列。默认值。
1 - 中等优先级队列。
2 - 最低优先级队列。
场景示例：
比如当前播放第2个文件，多个新文件插播在第2个文件之后，播完第二个轮播文件之后，优先播放InsertPriorityType为0的插播队列中的文件，再播放InsertPriorityType为1的插播队列中的文件，最后播放InsertPriorityType为2的插播队列文件。
如果插播无队列优先级要求，则无需使用此参数。
                     */
                    int64_t m_insertPriorityType;
                    bool m_insertPriorityTypeHasBeenSet;

                    /**
                     * 插播上下文信息。由用户自定义传入。当播放到使用本此插播请求插入的文件时，在文件播放开始和文件播放结束的回调时，将此上下文信息通过创建任务携带的回调地址回调给用户。
注意：如果有关联每个插播文件的信息需要回调时，可将需要回调的信息自行拼接到插播文件URL上，通过回调信息中的URL进行读取使用。
                     */
                    std::string m_insertContext;
                    bool m_insertContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_INSERTTASKTEMPORARYFILESREQUEST_H_
