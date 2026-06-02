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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERTASKDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AI 优化器任务数据
                */
                class AIOptimizerTaskData : public AbstractModel
                {
                public:
                    AIOptimizerTaskData();
                    ~AIOptimizerTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板ID</p>
                     * @return TemplateID <p>模板ID</p>
                     * 
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _templateID <p>模板ID</p>
                     * 
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                private:

                    /**
                     * <p>模板ID</p>
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERTASKDATA_H_
