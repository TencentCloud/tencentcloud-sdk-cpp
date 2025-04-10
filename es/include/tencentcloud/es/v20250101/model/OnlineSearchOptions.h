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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_ONLINESEARCHOPTIONS_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_ONLINESEARCHOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 联网搜索选项。
                */
                class OnlineSearchOptions : public AbstractModel
                {
                public:
                    OnlineSearchOptions();
                    ~OnlineSearchOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取搜索引擎。支持 bing 和 sogou。
                     * @return Engine 搜索引擎。支持 bing 和 sogou。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置搜索引擎。支持 bing 和 sogou。
                     * @param _engine 搜索引擎。支持 bing 和 sogou。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                private:

                    /**
                     * 搜索引擎。支持 bing 和 sogou。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_ONLINESEARCHOPTIONS_H_
