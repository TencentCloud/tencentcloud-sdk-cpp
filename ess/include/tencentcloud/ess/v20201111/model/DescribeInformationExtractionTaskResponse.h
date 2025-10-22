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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ExtractionField.h>
#include <tencentcloud/ess/v20201111/model/ExtractionTaskResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeInformationExtractionTask返回参数结构体
                */
                class DescribeInformationExtractionTaskResponse : public AbstractModel
                {
                public:
                    DescribeInformationExtractionTaskResponse();
                    ~DescribeInformationExtractionTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同信息提取字段信息
                     * @return Fields 合同信息提取字段信息
                     * 
                     */
                    std::vector<ExtractionField> GetFields() const;

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取合同智能提取任务状态。
状态如下：
<ul>
    <li>**0** - 任务创建成功（还未执行）</li> 
    <li>**1** - 排队中（等待执行）</li>   
    <li>**2** - 提取中（正在执行）</li>  
    <li>**3** - 提取成功</li>   
    <li>**4** - 提取失败</li>
</ul>
                     * @return Status 合同智能提取任务状态。
状态如下：
<ul>
    <li>**0** - 任务创建成功（还未执行）</li> 
    <li>**1** - 排队中（等待执行）</li>   
    <li>**2** - 提取中（正在执行）</li>  
    <li>**3** - 提取成功</li>   
    <li>**4** - 提取失败</li>
</ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取合同智能提取结果下载，文件格式为`xlsx`。

注意：`链接有效期为5分钟，过期后可重新获取`
                     * @return Url 合同智能提取结果下载，文件格式为`xlsx`。

注意：`链接有效期为5分钟，过期后可重新获取`
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取合同信息提取结果信息
                     * @return Results 合同信息提取结果信息
                     * 
                     */
                    std::vector<ExtractionTaskResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 合同信息提取字段信息
                     */
                    std::vector<ExtractionField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 合同智能提取任务状态。
状态如下：
<ul>
    <li>**0** - 任务创建成功（还未执行）</li> 
    <li>**1** - 排队中（等待执行）</li>   
    <li>**2** - 提取中（正在执行）</li>  
    <li>**3** - 提取成功</li>   
    <li>**4** - 提取失败</li>
</ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 合同智能提取结果下载，文件格式为`xlsx`。

注意：`链接有效期为5分钟，过期后可重新获取`
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 合同信息提取结果信息
                     */
                    std::vector<ExtractionTaskResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONTASKRESPONSE_H_
