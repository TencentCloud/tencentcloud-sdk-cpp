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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCONTEXT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建上下文
                */
                class BuildContext : public AbstractModel
                {
                public:
                    BuildContext();
                    ~BuildContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>构建路径</p>
                     * @return Path <p>构建路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>构建路径</p>
                     * @param _path <p>构建路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>构建产物输出路径</p>
                     * @return OutPut <p>构建产物输出路径</p>
                     * 
                     */
                    std::string GetOutPut() const;

                    /**
                     * 设置<p>构建产物输出路径</p>
                     * @param _outPut <p>构建产物输出路径</p>
                     * 
                     */
                    void SetOutPut(const std::string& _outPut);

                    /**
                     * 判断参数 OutPut 是否已赋值
                     * @return OutPut 是否已赋值
                     * 
                     */
                    bool OutPutHasBeenSet() const;

                private:

                    /**
                     * <p>构建路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>构建产物输出路径</p>
                     */
                    std::string m_outPut;
                    bool m_outPutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDCONTEXT_H_
