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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODETEMPLATEDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODETEMPLATEDETAILREQUEST_H_

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
                * DescribeCodeTemplateDetail请求参数结构体
                */
                class DescribeCodeTemplateDetailRequest : public AbstractModel
                {
                public:
                    DescribeCodeTemplateDetailRequest();
                    ~DescribeCodeTemplateDetailRequest() = default;
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
                     * 获取是否需要返回脚本内容，默认false。
                     * @return NeedReturnScriptContent 是否需要返回脚本内容，默认false。
                     * 
                     */
                    bool GetNeedReturnScriptContent() const;

                    /**
                     * 设置是否需要返回脚本内容，默认false。
                     * @param _needReturnScriptContent 是否需要返回脚本内容，默认false。
                     * 
                     */
                    void SetNeedReturnScriptContent(const bool& _needReturnScriptContent);

                    /**
                     * 判断参数 NeedReturnScriptContent 是否已赋值
                     * @return NeedReturnScriptContent 是否已赋值
                     * 
                     */
                    bool NeedReturnScriptContentHasBeenSet() const;

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
                     * 是否需要返回脚本内容，默认false。
                     */
                    bool m_needReturnScriptContent;
                    bool m_needReturnScriptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODETEMPLATEDETAILREQUEST_H_
