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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMODELNAMEROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMODELNAMEROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI网关入口按模型名称路由
                */
                class AIGWModelNameRoute : public AbstractModel
                {
                public:
                    AIGWModelNameRoute();
                    ~AIGWModelNameRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称和别名列表；对象存在即启用</p>
                     * @return ModelNames <p>模型名称和别名列表；对象存在即启用</p>
                     * 
                     */
                    std::vector<std::string> GetModelNames() const;

                    /**
                     * 设置<p>模型名称和别名列表；对象存在即启用</p>
                     * @param _modelNames <p>模型名称和别名列表；对象存在即启用</p>
                     * 
                     */
                    void SetModelNames(const std::vector<std::string>& _modelNames);

                    /**
                     * 判断参数 ModelNames 是否已赋值
                     * @return ModelNames 是否已赋值
                     * 
                     */
                    bool ModelNamesHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称和别名列表；对象存在即启用</p>
                     */
                    std::vector<std::string> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMODELNAMEROUTE_H_
