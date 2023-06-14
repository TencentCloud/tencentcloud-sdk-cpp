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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGEREVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGEREVENTREQUEST_H_

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
                * TriggerEvent请求参数结构体
                */
                class TriggerEventRequest : public AbstractModel
                {
                public:
                    TriggerEventRequest();
                    ~TriggerEventRequest() = default;
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
                     * 获取案例名称
                     * @return Name 案例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置案例名称
                     * @param _name 案例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取时间格式：如果选择触发时间：2022年6月21，则设置为20220621
                     * @return Dimension 时间格式：如果选择触发时间：2022年6月21，则设置为20220621
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置时间格式：如果选择触发时间：2022年6月21，则设置为20220621
                     * @param _dimension 时间格式：如果选择触发时间：2022年6月21，则设置为20220621
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
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
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 案例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间格式：如果选择触发时间：2022年6月21，则设置为20220621
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGEREVENTREQUEST_H_
