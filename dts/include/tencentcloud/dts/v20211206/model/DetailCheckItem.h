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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 每个检查步骤里的具体检查项
                */
                class DetailCheckItem : public AbstractModel
                {
                public:
                    DetailCheckItem();
                    ~DetailCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项的名称，如：源实例权限检查
                     * @return CheckItemName 检查项的名称，如：源实例权限检查
                     * 
                     */
                    std::string GetCheckItemName() const;

                    /**
                     * 设置检查项的名称，如：源实例权限检查
                     * @param _checkItemName 检查项的名称，如：源实例权限检查
                     * 
                     */
                    void SetCheckItemName(const std::string& _checkItemName);

                    /**
                     * 判断参数 CheckItemName 是否已赋值
                     * @return CheckItemName 是否已赋值
                     * 
                     */
                    bool CheckItemNameHasBeenSet() const;

                    /**
                     * 获取检查项详细内容
                     * @return Description 检查项详细内容
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置检查项详细内容
                     * @param _description 检查项详细内容
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取pass(通过)，failed(失败), warning(校验有警告，但仍通过)
                     * @return CheckResult pass(通过)，failed(失败), warning(校验有警告，但仍通过)
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置pass(通过)，failed(失败), warning(校验有警告，但仍通过)
                     * @param _checkResult pass(通过)，failed(失败), warning(校验有警告，但仍通过)
                     * 
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取检查项失败原因
                     * @return FailureReason 检查项失败原因
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置检查项失败原因
                     * @param _failureReason 检查项失败原因
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return Solution 解决方案
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方案
                     * @param _solution 解决方案
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取运行报错日志
                     * @return ErrorLog 运行报错日志
                     * 
                     */
                    std::vector<std::string> GetErrorLog() const;

                    /**
                     * 设置运行报错日志
                     * @param _errorLog 运行报错日志
                     * 
                     */
                    void SetErrorLog(const std::vector<std::string>& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取详细帮助的文档链接
                     * @return HelpDoc 详细帮助的文档链接
                     * 
                     */
                    std::vector<std::string> GetHelpDoc() const;

                    /**
                     * 设置详细帮助的文档链接
                     * @param _helpDoc 详细帮助的文档链接
                     * 
                     */
                    void SetHelpDoc(const std::vector<std::string>& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                    /**
                     * 获取跳过风险文案
                     * @return SkipInfo 跳过风险文案
                     * 
                     */
                    std::string GetSkipInfo() const;

                    /**
                     * 设置跳过风险文案
                     * @param _skipInfo 跳过风险文案
                     * 
                     */
                    void SetSkipInfo(const std::string& _skipInfo);

                    /**
                     * 判断参数 SkipInfo 是否已赋值
                     * @return SkipInfo 是否已赋值
                     * 
                     */
                    bool SkipInfoHasBeenSet() const;

                private:

                    /**
                     * 检查项的名称，如：源实例权限检查
                     */
                    std::string m_checkItemName;
                    bool m_checkItemNameHasBeenSet;

                    /**
                     * 检查项详细内容
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * pass(通过)，failed(失败), warning(校验有警告，但仍通过)
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 检查项失败原因
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 运行报错日志
                     */
                    std::vector<std::string> m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * 详细帮助的文档链接
                     */
                    std::vector<std::string> m_helpDoc;
                    bool m_helpDocHasBeenSet;

                    /**
                     * 跳过风险文案
                     */
                    std::string m_skipInfo;
                    bool m_skipInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_
