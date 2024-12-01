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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZoneConfigImportResult返回参数结构体
                */
                class DescribeZoneConfigImportResultResponse : public AbstractModel
                {
                public:
                    DescribeZoneConfigImportResultResponse();
                    ~DescribeZoneConfigImportResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次导入任务的导入状态。取值有：  <li>success：表示配置项导入成功；</li> <li>failure：表示配置项导入失败；</li> <li>doing：表示配置项正在导入中。</li>
                     * @return Status 本次导入任务的导入状态。取值有：  <li>success：表示配置项导入成功；</li> <li>failure：表示配置项导入失败；</li> <li>doing：表示配置项正在导入中。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取本次导入任务的状态的提示信息。当配置项导入失败时，可通过本字段查看失败原因。
                     * @return Message 本次导入任务的状态的提示信息。当配置项导入失败时，可通过本字段查看失败原因。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取本次导入任务的配置内容。
                     * @return Content 本次导入任务的配置内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取本次导入任务的开始时间。
                     * @return ImportTime 本次导入任务的开始时间。
                     * 
                     */
                    std::string GetImportTime() const;

                    /**
                     * 判断参数 ImportTime 是否已赋值
                     * @return ImportTime 是否已赋值
                     * 
                     */
                    bool ImportTimeHasBeenSet() const;

                    /**
                     * 获取本次导入任务的结束时间。
                     * @return FinishTime 本次导入任务的结束时间。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 本次导入任务的导入状态。取值有：  <li>success：表示配置项导入成功；</li> <li>failure：表示配置项导入失败；</li> <li>doing：表示配置项正在导入中。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 本次导入任务的状态的提示信息。当配置项导入失败时，可通过本字段查看失败原因。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 本次导入任务的配置内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 本次导入任务的开始时间。
                     */
                    std::string m_importTime;
                    bool m_importTimeHasBeenSet;

                    /**
                     * 本次导入任务的结束时间。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_
