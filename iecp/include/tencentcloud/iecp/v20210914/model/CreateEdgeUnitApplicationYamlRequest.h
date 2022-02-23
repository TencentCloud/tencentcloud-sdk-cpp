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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITAPPLICATIONYAMLREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITAPPLICATIONYAMLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateEdgeUnitApplicationYaml请求参数结构体
                */
                class CreateEdgeUnitApplicationYamlRequest : public AbstractModel
                {
                public:
                    CreateEdgeUnitApplicationYamlRequest();
                    ~CreateEdgeUnitApplicationYamlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitId 单元ID
                     */
                    int64_t GetEdgeUnitId() const;

                    /**
                     * 设置单元ID
                     * @param EdgeUnitId 单元ID
                     */
                    void SetEdgeUnitId(const int64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取base64后的Yaml配置
                     * @return Yaml base64后的Yaml配置
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置base64后的Yaml配置
                     * @param Yaml base64后的Yaml配置
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取基本信息
                     * @return BasicInfo 基本信息
                     */
                    ApplicationBasicInfo GetBasicInfo() const;

                    /**
                     * 设置基本信息
                     * @param BasicInfo 基本信息
                     */
                    void SetBasicInfo(const ApplicationBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    int64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * base64后的Yaml配置
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * 基本信息
                     */
                    ApplicationBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITAPPLICATIONYAMLREQUEST_H_
