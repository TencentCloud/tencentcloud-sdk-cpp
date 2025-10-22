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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONTASKRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ExtractionFieldResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同信息提取结果
                */
                class ExtractionTaskResult : public AbstractModel
                {
                public:
                    ExtractionTaskResult();
                    ~ExtractionTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于合同信息提取的资源ID。
                     * @return ResourceId 用于合同信息提取的资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用于合同信息提取的资源ID。
                     * @param _resourceId 用于合同信息提取的资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取用于合同信息提取的资源名称。
                     * @return ResourceName 用于合同信息提取的资源名称。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置用于合同信息提取的资源名称。
                     * @param _resourceName 用于合同信息提取的资源名称。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取根据当前合同提取出的字段信息
                     * @return ExtractionFieldResults 根据当前合同提取出的字段信息
                     * 
                     */
                    std::vector<ExtractionFieldResult> GetExtractionFieldResults() const;

                    /**
                     * 设置根据当前合同提取出的字段信息
                     * @param _extractionFieldResults 根据当前合同提取出的字段信息
                     * 
                     */
                    void SetExtractionFieldResults(const std::vector<ExtractionFieldResult>& _extractionFieldResults);

                    /**
                     * 判断参数 ExtractionFieldResults 是否已赋值
                     * @return ExtractionFieldResults 是否已赋值
                     * 
                     */
                    bool ExtractionFieldResultsHasBeenSet() const;

                private:

                    /**
                     * 用于合同信息提取的资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 用于合同信息提取的资源名称。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 根据当前合同提取出的字段信息
                     */
                    std::vector<ExtractionFieldResult> m_extractionFieldResults;
                    bool m_extractionFieldResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONTASKRESULT_H_
