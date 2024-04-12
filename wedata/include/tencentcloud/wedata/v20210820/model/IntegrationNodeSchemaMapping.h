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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集成节点schema映射
                */
                class IntegrationNodeSchemaMapping : public AbstractModel
                {
                public:
                    IntegrationNodeSchemaMapping();
                    ~IntegrationNodeSchemaMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务节点的源schema id
                     * @return SourceSchemaId 任务节点的源schema id
                     * 
                     */
                    std::string GetSourceSchemaId() const;

                    /**
                     * 设置任务节点的源schema id
                     * @param _sourceSchemaId 任务节点的源schema id
                     * 
                     */
                    void SetSourceSchemaId(const std::string& _sourceSchemaId);

                    /**
                     * 判断参数 SourceSchemaId 是否已赋值
                     * @return SourceSchemaId 是否已赋值
                     * 
                     */
                    bool SourceSchemaIdHasBeenSet() const;

                    /**
                     * 获取任务节点目标schema id
                     * @return SinkSchemaId 任务节点目标schema id
                     * 
                     */
                    std::string GetSinkSchemaId() const;

                    /**
                     * 设置任务节点目标schema id
                     * @param _sinkSchemaId 任务节点目标schema id
                     * 
                     */
                    void SetSinkSchemaId(const std::string& _sinkSchemaId);

                    /**
                     * 判断参数 SinkSchemaId 是否已赋值
                     * @return SinkSchemaId 是否已赋值
                     * 
                     */
                    bool SinkSchemaIdHasBeenSet() const;

                private:

                    /**
                     * 任务节点的源schema id
                     */
                    std::string m_sourceSchemaId;
                    bool m_sourceSchemaIdHasBeenSet;

                    /**
                     * 任务节点目标schema id
                     */
                    std::string m_sinkSchemaId;
                    bool m_sinkSchemaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMAMAPPING_H_
