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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceReportSummary.h>
#include <tencentcloud/wedata/v20210820/model/InstanceReportReadNode.h>
#include <tencentcloud/wedata/v20210820/model/InstanceReportWriteNode.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskInstanceReportDetail返回参数结构体
                */
                class DescribeTaskInstanceReportDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskInstanceReportDetailResponse();
                    ~DescribeTaskInstanceReportDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例运行指标概览
                     * @return Summary 任务实例运行指标概览
                     * 
                     */
                    InstanceReportSummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取任务实例读取节点运行指标
                     * @return ReadNode 任务实例读取节点运行指标
                     * 
                     */
                    InstanceReportReadNode GetReadNode() const;

                    /**
                     * 判断参数 ReadNode 是否已赋值
                     * @return ReadNode 是否已赋值
                     * 
                     */
                    bool ReadNodeHasBeenSet() const;

                    /**
                     * 获取任务实例写入节点运行指标
                     * @return WriteNode 任务实例写入节点运行指标
                     * 
                     */
                    InstanceReportWriteNode GetWriteNode() const;

                    /**
                     * 判断参数 WriteNode 是否已赋值
                     * @return WriteNode 是否已赋值
                     * 
                     */
                    bool WriteNodeHasBeenSet() const;

                private:

                    /**
                     * 任务实例运行指标概览
                     */
                    InstanceReportSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 任务实例读取节点运行指标
                     */
                    InstanceReportReadNode m_readNode;
                    bool m_readNodeHasBeenSet;

                    /**
                     * 任务实例写入节点运行指标
                     */
                    InstanceReportWriteNode m_writeNode;
                    bool m_writeNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILRESPONSE_H_
