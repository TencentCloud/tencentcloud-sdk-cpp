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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_CREATESTACKREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_CREATESTACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * CreateStack请求参数结构体
                */
                class CreateStackRequest : public AbstractModel
                {
                public:
                    CreateStackRequest();
                    ~CreateStackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源栈名称，不得超过60个字符
                     * @return StackName 资源栈名称，不得超过60个字符
                     * 
                     */
                    std::string GetStackName() const;

                    /**
                     * 设置资源栈名称，不得超过60个字符
                     * @param _stackName 资源栈名称，不得超过60个字符
                     * 
                     */
                    void SetStackName(const std::string& _stackName);

                    /**
                     * 判断参数 StackName 是否已赋值
                     * @return StackName 是否已赋值
                     * 
                     */
                    bool StackNameHasBeenSet() const;

                    /**
                     * 获取资源栈所在地域
                     * @return StackRegion 资源栈所在地域
                     * 
                     */
                    std::string GetStackRegion() const;

                    /**
                     * 设置资源栈所在地域
                     * @param _stackRegion 资源栈所在地域
                     * 
                     */
                    void SetStackRegion(const std::string& _stackRegion);

                    /**
                     * 判断参数 StackRegion 是否已赋值
                     * @return StackRegion 是否已赋值
                     * 
                     */
                    bool StackRegionHasBeenSet() const;

                    /**
                     * 获取HCL模板URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * @return TemplateUrl HCL模板URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * 
                     */
                    std::string GetTemplateUrl() const;

                    /**
                     * 设置HCL模板URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * @param _templateUrl HCL模板URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     * 
                     */
                    void SetTemplateUrl(const std::string& _templateUrl);

                    /**
                     * 判断参数 TemplateUrl 是否已赋值
                     * @return TemplateUrl 是否已赋值
                     * 
                     */
                    bool TemplateUrlHasBeenSet() const;

                    /**
                     * 获取资源栈描述，不得超过200个字符
                     * @return Description 资源栈描述，不得超过200个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源栈描述，不得超过200个字符
                     * @param _description 资源栈描述，不得超过200个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 资源栈名称，不得超过60个字符
                     */
                    std::string m_stackName;
                    bool m_stackNameHasBeenSet;

                    /**
                     * 资源栈所在地域
                     */
                    std::string m_stackRegion;
                    bool m_stackRegionHasBeenSet;

                    /**
                     * HCL模板URL，⽬前仅限 COS URL, ⽂件为zip压缩格式
                     */
                    std::string m_templateUrl;
                    bool m_templateUrlHasBeenSet;

                    /**
                     * 资源栈描述，不得超过200个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_CREATESTACKREQUEST_H_
