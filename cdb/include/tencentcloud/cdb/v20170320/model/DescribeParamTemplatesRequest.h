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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates请求参数结构体
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎版本，缺省则查询所有
                     * @return EngineVersions 引擎版本，缺省则查询所有
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置引擎版本，缺省则查询所有
                     * @param _engineVersions 引擎版本，缺省则查询所有
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取引擎类型，缺省则查询所有
                     * @return EngineTypes 引擎类型，缺省则查询所有
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置引擎类型，缺省则查询所有
                     * @param _engineTypes 引擎类型，缺省则查询所有
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取模板名称，缺省则查询所有
                     * @return TemplateNames 模板名称，缺省则查询所有
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置模板名称，缺省则查询所有
                     * @param _templateNames 模板名称，缺省则查询所有
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取模板id，缺省则查询所有
                     * @return TemplateIds 模板id，缺省则查询所有
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置模板id，缺省则查询所有
                     * @param _templateIds 模板id，缺省则查询所有
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 引擎版本，缺省则查询所有
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * 引擎类型，缺省则查询所有
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * 模板名称，缺省则查询所有
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * 模板id，缺省则查询所有
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
