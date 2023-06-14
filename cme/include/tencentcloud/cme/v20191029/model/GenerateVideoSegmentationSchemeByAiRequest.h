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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_GENERATEVIDEOSEGMENTATIONSCHEMEBYAIREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_GENERATEVIDEOSEGMENTATIONSCHEMEBYAIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * GenerateVideoSegmentationSchemeByAi请求参数结构体
                */
                class GenerateVideoSegmentationSchemeByAiRequest : public AbstractModel
                {
                public:
                    GenerateVideoSegmentationSchemeByAiRequest();
                    ~GenerateVideoSegmentationSchemeByAiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取视频拆条项目 Id 。
                     * @return ProjectId 视频拆条项目 Id 。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置视频拆条项目 Id 。
                     * @param _projectId 视频拆条项目 Id 。
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
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以对任务视频拆条项目发起拆条任务。如果指定操作者，则操作者必须为项目所有者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以对任务视频拆条项目发起拆条任务。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以对任务视频拆条项目发起拆条任务。如果指定操作者，则操作者必须为项目所有者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以对任务视频拆条项目发起拆条任务。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 视频拆条项目 Id 。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以对任务视频拆条项目发起拆条任务。如果指定操作者，则操作者必须为项目所有者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_GENERATEVIDEOSEGMENTATIONSCHEMEBYAIREQUEST_H_
