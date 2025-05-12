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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFORMVERSIONPARAMREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFORMVERSIONPARAMREQUEST_H_

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
                * DescribeFormVersionParam请求参数结构体
                */
                class DescribeFormVersionParamRequest : public AbstractModel
                {
                public:
                    DescribeFormVersionParamRequest();
                    ~DescribeFormVersionParamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取模版Id
                     * @return CodeTemplateId 模版Id
                     * 
                     */
                    std::string GetCodeTemplateId() const;

                    /**
                     * 设置模版Id
                     * @param _codeTemplateId 模版Id
                     * 
                     */
                    void SetCodeTemplateId(const std::string& _codeTemplateId);

                    /**
                     * 判断参数 CodeTemplateId 是否已赋值
                     * @return CodeTemplateId 是否已赋值
                     * 
                     */
                    bool CodeTemplateIdHasBeenSet() const;

                    /**
                     * 获取脚本中的参数
                     * @return OriginalParams 脚本中的参数
                     * 
                     */
                    std::vector<std::string> GetOriginalParams() const;

                    /**
                     * 设置脚本中的参数
                     * @param _originalParams 脚本中的参数
                     * 
                     */
                    void SetOriginalParams(const std::vector<std::string>& _originalParams);

                    /**
                     * 判断参数 OriginalParams 是否已赋值
                     * @return OriginalParams 是否已赋值
                     * 
                     */
                    bool OriginalParamsHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return Size 页号
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置页号
                     * @param _size 页号
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模版Id
                     */
                    std::string m_codeTemplateId;
                    bool m_codeTemplateIdHasBeenSet;

                    /**
                     * 脚本中的参数
                     */
                    std::vector<std::string> m_originalParams;
                    bool m_originalParamsHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页号
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFORMVERSIONPARAMREQUEST_H_
