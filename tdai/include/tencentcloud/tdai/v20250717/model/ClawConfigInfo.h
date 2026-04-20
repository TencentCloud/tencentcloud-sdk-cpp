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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWCONFIGINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ClawDeployInfo.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * databaseClaw实例配置信息
                */
                class ClawConfigInfo : public AbstractModel
                {
                public:
                    ClawConfigInfo();
                    ~ClawConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>无</p>
                     * @return TemplateId <p>无</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>无</p>
                     * @param _templateId <p>无</p>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return DbTypes <p>无</p>
                     * 
                     */
                    std::vector<std::string> GetDbTypes() const;

                    /**
                     * 设置<p>无</p>
                     * @param _dbTypes <p>无</p>
                     * 
                     */
                    void SetDbTypes(const std::vector<std::string>& _dbTypes);

                    /**
                     * 判断参数 DbTypes 是否已赋值
                     * @return DbTypes 是否已赋值
                     * 
                     */
                    bool DbTypesHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return Deploy <p>无</p>
                     * 
                     */
                    ClawDeployInfo GetDeploy() const;

                    /**
                     * 设置<p>无</p>
                     * @param _deploy <p>无</p>
                     * 
                     */
                    void SetDeploy(const ClawDeployInfo& _deploy);

                    /**
                     * 判断参数 Deploy 是否已赋值
                     * @return Deploy 是否已赋值
                     * 
                     */
                    bool DeployHasBeenSet() const;

                private:

                    /**
                     * <p>无</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<std::string> m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    ClawDeployInfo m_deploy;
                    bool m_deployHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWCONFIGINFO_H_
