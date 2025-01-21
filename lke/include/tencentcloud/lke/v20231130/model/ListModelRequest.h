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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTMODELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListModel请求参数结构体
                */
                class ListModelRequest : public AbstractModel
                {
                public:
                    ListModelRequest();
                    ~ListModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * @return AppType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * @param _appType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * @return Pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * @param _pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取模型类别 generate：生成模型，thought：思考模型
                     * @return ModelCategory 模型类别 generate：生成模型，thought：思考模型
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置模型类别 generate：生成模型，thought：思考模型
                     * @param _modelCategory 模型类别 generate：生成模型，thought：思考模型
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取登录用户主账号(集成商模式必填)	
                     * @return LoginUin 登录用户主账号(集成商模式必填)	
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)	
                     * @param _loginUin 登录用户主账号(集成商模式必填)	
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)	
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)	
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 模型类别 generate：生成模型，thought：思考模型
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)	
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTMODELREQUEST_H_
