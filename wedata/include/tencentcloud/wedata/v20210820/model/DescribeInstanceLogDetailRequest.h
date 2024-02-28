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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogDetail请求参数结构体
                */
                class DescribeInstanceLogDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogDetailRequest();
                    ~DescribeInstanceLogDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取数据时间
                     * @return CurRunDate 数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
                     * @param _curRunDate 数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取服务器Ip
                     * @return BrokerIp 服务器Ip
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置服务器Ip
                     * @param _brokerIp 服务器Ip
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取文件Name
                     * @return OriginFileName 文件Name
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置文件Name
                     * @param _originFileName 文件Name
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取起始行
                     * @return StartCount 起始行
                     * 
                     */
                    int64_t GetStartCount() const;

                    /**
                     * 设置起始行
                     * @param _startCount 起始行
                     * 
                     */
                    void SetStartCount(const int64_t& _startCount);

                    /**
                     * 判断参数 StartCount 是否已赋值
                     * @return StartCount 是否已赋值
                     * 
                     */
                    bool StartCountHasBeenSet() const;

                    /**
                     * 获取每次查询行数
                     * @return LineCount 每次查询行数
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置每次查询行数
                     * @param _lineCount 每次查询行数
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 服务器Ip
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 文件Name
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * 起始行
                     */
                    int64_t m_startCount;
                    bool m_startCountHasBeenSet;

                    /**
                     * 每次查询行数
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGDETAILREQUEST_H_
