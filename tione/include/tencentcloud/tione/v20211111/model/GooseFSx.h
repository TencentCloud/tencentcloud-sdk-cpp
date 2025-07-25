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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFSX_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFSX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * GosseFSx的配置
                */
                class GooseFSx : public AbstractModel
                {
                public:
                    GooseFSx();
                    ~GooseFSx() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取goosefsx实例id
                     * @return Id goosefsx实例id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置goosefsx实例id
                     * @param _id goosefsx实例id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取GooseFSx实例需要挂载的路径
                     * @return Path GooseFSx实例需要挂载的路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置GooseFSx实例需要挂载的路径
                     * @param _path GooseFSx实例需要挂载的路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * goosefsx实例id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * GooseFSx实例需要挂载的路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFSX_H_
