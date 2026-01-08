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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateQualityRule请求参数结构体
                */
                class CreateQualityRuleRequest : public AbstractModel
                {
                public:
                    CreateQualityRuleRequest();
                    ~CreateQualityRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取规则创建场景
1：单表多规则
2：多表单规则
3：克隆创建规则
                     * @return CreateRuleScene 规则创建场景
1：单表多规则
2：多表单规则
3：克隆创建规则
                     * 
                     */
                    int64_t GetCreateRuleScene() const;

                    /**
                     * 设置规则创建场景
1：单表多规则
2：多表单规则
3：克隆创建规则
                     * @param _createRuleScene 规则创建场景
1：单表多规则
2：多表单规则
3：克隆创建规则
                     * 
                     */
                    void SetCreateRuleScene(const int64_t& _createRuleScene);

                    /**
                     * 判断参数 CreateRuleScene 是否已赋值
                     * @return CreateRuleScene 是否已赋值
                     * 
                     */
                    bool CreateRuleSceneHasBeenSet() const;

                    /**
                     * 获取单条规则信息集合	
                     * @return RuleBOList 单条规则信息集合	
                     * 
                     */
                    std::vector<QualityRuleInfo> GetRuleBOList() const;

                    /**
                     * 设置单条规则信息集合	
                     * @param _ruleBOList 单条规则信息集合	
                     * 
                     */
                    void SetRuleBOList(const std::vector<QualityRuleInfo>& _ruleBOList);

                    /**
                     * 判断参数 RuleBOList 是否已赋值
                     * @return RuleBOList 是否已赋值
                     * 
                     */
                    bool RuleBOListHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则创建场景
1：单表多规则
2：多表单规则
3：克隆创建规则
                     */
                    int64_t m_createRuleScene;
                    bool m_createRuleSceneHasBeenSet;

                    /**
                     * 单条规则信息集合	
                     */
                    std::vector<QualityRuleInfo> m_ruleBOList;
                    bool m_ruleBOListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEREQUEST_H_
