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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTRESULTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncContextResult请求参数结构体
                */
                class DescribeAsyncContextResultRequest : public AbstractModel
                {
                public:
                    DescribeAsyncContextResultRequest();
                    ~DescribeAsyncContextResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取异步检索任务ID
                     * @return AsyncContextTaskId 异步检索任务ID
                     */
                    std::string GetAsyncContextTaskId() const;

                    /**
                     * 设置异步检索任务ID
                     * @param AsyncContextTaskId 异步检索任务ID
                     */
                    void SetAsyncContextTaskId(const std::string& _asyncContextTaskId);

                    /**
                     * 判断参数 AsyncContextTaskId 是否已赋值
                     * @return AsyncContextTaskId 是否已赋值
                     */
                    bool AsyncContextTaskIdHasBeenSet() const;

                    /**
                     * 获取日志包序号
                     * @return PkgId 日志包序号
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包序号
                     * @param PkgId 日志包序号
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取日志在日志包内的序号
                     * @return PkgLogId 日志在日志包内的序号
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置日志在日志包内的序号
                     * @param PkgLogId 日志在日志包内的序号
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param TopicId 日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取上文日志条数，默认值10
                     * @return PrevLogs 上文日志条数，默认值10
                     */
                    int64_t GetPrevLogs() const;

                    /**
                     * 设置上文日志条数，默认值10
                     * @param PrevLogs 上文日志条数，默认值10
                     */
                    void SetPrevLogs(const int64_t& _prevLogs);

                    /**
                     * 判断参数 PrevLogs 是否已赋值
                     * @return PrevLogs 是否已赋值
                     */
                    bool PrevLogsHasBeenSet() const;

                    /**
                     * 获取下文日志条数，默认值10
                     * @return NextLogs 下文日志条数，默认值10
                     */
                    int64_t GetNextLogs() const;

                    /**
                     * 设置下文日志条数，默认值10
                     * @param NextLogs 下文日志条数，默认值10
                     */
                    void SetNextLogs(const int64_t& _nextLogs);

                    /**
                     * 判断参数 NextLogs 是否已赋值
                     * @return NextLogs 是否已赋值
                     */
                    bool NextLogsHasBeenSet() const;

                private:

                    /**
                     * 异步检索任务ID
                     */
                    std::string m_asyncContextTaskId;
                    bool m_asyncContextTaskIdHasBeenSet;

                    /**
                     * 日志包序号
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志在日志包内的序号
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 上文日志条数，默认值10
                     */
                    int64_t m_prevLogs;
                    bool m_prevLogsHasBeenSet;

                    /**
                     * 下文日志条数，默认值10
                     */
                    int64_t m_nextLogs;
                    bool m_nextLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTRESULTREQUEST_H_
