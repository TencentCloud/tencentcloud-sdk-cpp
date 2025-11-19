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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONCUSTOMDETECTQUERY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONCUSTOMDETECTQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 语义理解自定义标签请求
                */
                class VisionCustomDetectQuery : public AbstractModel
                {
                public:
                    VisionCustomDetectQuery();
                    ~VisionCustomDetectQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义标签的标识符
                     * @return Key 自定义标签的标识符
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置自定义标签的标识符
                     * @param _key 自定义标签的标识符
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取自定义标签的描述文本
                     * @return Query 自定义标签的描述文本
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置自定义标签的描述文本
                     * @param _query 自定义标签的描述文本
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 自定义标签的标识符
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 自定义标签的描述文本
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONCUSTOMDETECTQUERY_H_
