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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_

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
                * DescribeLogContext请求参数结构体
                */
                class DescribeLogContextRequest : public AbstractModel
                {
                public:
                    DescribeLogContextRequest();
                    ~DescribeLogContextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的日志主题ID
                     * @return TopicId 要查询的日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置要查询的日志主题ID
                     * @param _topicId 要查询的日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志时间,  格式: YYYY-mm-dd HH:MM:SS.FFF
                     * @return BTime 日志时间,  格式: YYYY-mm-dd HH:MM:SS.FFF
                     * 
                     */
                    std::string GetBTime() const;

                    /**
                     * 设置日志时间,  格式: YYYY-mm-dd HH:MM:SS.FFF
                     * @param _bTime 日志时间,  格式: YYYY-mm-dd HH:MM:SS.FFF
                     * 
                     */
                    void SetBTime(const std::string& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * 
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取日志包序号。SearchLog接口返回信息中Results结构体中的PkgId。
                     * @return PkgId 日志包序号。SearchLog接口返回信息中Results结构体中的PkgId。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包序号。SearchLog接口返回信息中Results结构体中的PkgId。
                     * @param _pkgId 日志包序号。SearchLog接口返回信息中Results结构体中的PkgId。
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取日志包内一条日志的序号。
SearchLog接口返回信息中Results结构中的PkgLogId。
                     * @return PkgLogId 日志包内一条日志的序号。
SearchLog接口返回信息中Results结构中的PkgLogId。
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置日志包内一条日志的序号。
SearchLog接口返回信息中Results结构中的PkgLogId。
                     * @param _pkgLogId 日志包内一条日志的序号。
SearchLog接口返回信息中Results结构中的PkgLogId。
                     * 
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取前${PrevLogs}条日志，默认值10。
                     * @return PrevLogs 前${PrevLogs}条日志，默认值10。
                     * 
                     */
                    int64_t GetPrevLogs() const;

                    /**
                     * 设置前${PrevLogs}条日志，默认值10。
                     * @param _prevLogs 前${PrevLogs}条日志，默认值10。
                     * 
                     */
                    void SetPrevLogs(const int64_t& _prevLogs);

                    /**
                     * 判断参数 PrevLogs 是否已赋值
                     * @return PrevLogs 是否已赋值
                     * 
                     */
                    bool PrevLogsHasBeenSet() const;

                    /**
                     * 获取后${NextLogs}条日志，默认值10。
                     * @return NextLogs 后${NextLogs}条日志，默认值10。
                     * 
                     */
                    int64_t GetNextLogs() const;

                    /**
                     * 设置后${NextLogs}条日志，默认值10。
                     * @param _nextLogs 后${NextLogs}条日志，默认值10。
                     * 
                     */
                    void SetNextLogs(const int64_t& _nextLogs);

                    /**
                     * 判断参数 NextLogs 是否已赋值
                     * @return NextLogs 是否已赋值
                     * 
                     */
                    bool NextLogsHasBeenSet() const;

                private:

                    /**
                     * 要查询的日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志时间,  格式: YYYY-mm-dd HH:MM:SS.FFF
                     */
                    std::string m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * 日志包序号。SearchLog接口返回信息中Results结构体中的PkgId。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志包内一条日志的序号。
SearchLog接口返回信息中Results结构中的PkgLogId。
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 前${PrevLogs}条日志，默认值10。
                     */
                    int64_t m_prevLogs;
                    bool m_prevLogsHasBeenSet;

                    /**
                     * 后${NextLogs}条日志，默认值10。
                     */
                    int64_t m_nextLogs;
                    bool m_nextLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
