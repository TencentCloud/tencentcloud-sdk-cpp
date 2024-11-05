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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADTOOLRESOURCES_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADTOOLRESOURCES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 在会话中提供给助手工具的一系列资源。不同类型的工具会有各自对应的资源。比如代码解释器需要一个文件 ID 的列表，而文件搜索工具则需要一个向量存储 ID 的列表。
                */
                class ThreadToolResources : public AbstractModel
                {
                public:
                    ThreadToolResources();
                    ~ThreadToolResources() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件 ID 列表
                     * @return CodeInterpreter 文件 ID 列表
                     * 
                     */
                    std::vector<std::string> GetCodeInterpreter() const;

                    /**
                     * 设置文件 ID 列表
                     * @param _codeInterpreter 文件 ID 列表
                     * 
                     */
                    void SetCodeInterpreter(const std::vector<std::string>& _codeInterpreter);

                    /**
                     * 判断参数 CodeInterpreter 是否已赋值
                     * @return CodeInterpreter 是否已赋值
                     * 
                     */
                    bool CodeInterpreterHasBeenSet() const;

                    /**
                     * 获取向量存储 ID 列表
                     * @return VectorStoreIDs 向量存储 ID 列表
                     * 
                     */
                    std::vector<std::string> GetVectorStoreIDs() const;

                    /**
                     * 设置向量存储 ID 列表
                     * @param _vectorStoreIDs 向量存储 ID 列表
                     * 
                     */
                    void SetVectorStoreIDs(const std::vector<std::string>& _vectorStoreIDs);

                    /**
                     * 判断参数 VectorStoreIDs 是否已赋值
                     * @return VectorStoreIDs 是否已赋值
                     * 
                     */
                    bool VectorStoreIDsHasBeenSet() const;

                private:

                    /**
                     * 文件 ID 列表
                     */
                    std::vector<std::string> m_codeInterpreter;
                    bool m_codeInterpreterHasBeenSet;

                    /**
                     * 向量存储 ID 列表
                     */
                    std::vector<std::string> m_vectorStoreIDs;
                    bool m_vectorStoreIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADTOOLRESOURCES_H_
