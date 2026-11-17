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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_EXTRASOURCEINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_EXTRASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 伴生输入文件登记（多输入）。与主视频同桶同凭证，Name 为文件引用名，Path 为相对主视频所在目录的 COS 路径。
                */
                class ExtraSourceInfo : public AbstractModel
                {
                public:
                    ExtraSourceInfo();
                    ~ExtraSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>伴生文件的引用名。只允许 [A-Za-z0-9._-] 路径段，可含子目录（深度 ≤3 层）；不能以 / 开头，不能包含 ..；同一请求内不重复</p>
                     * @return Name <p>伴生文件的引用名。只允许 [A-Za-z0-9._-] 路径段，可含子目录（深度 ≤3 层）；不能以 / 开头，不能包含 ..；同一请求内不重复</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>伴生文件的引用名。只允许 [A-Za-z0-9._-] 路径段，可含子目录（深度 ≤3 层）；不能以 / 开头，不能包含 ..；同一请求内不重复</p>
                     * @param _name <p>伴生文件的引用名。只允许 [A-Za-z0-9._-] 路径段，可含子目录（深度 ≤3 层）；不能以 / 开头，不能包含 ..；同一请求内不重复</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>伴生文件相对主视频所在目录（含文件名）的 COS 相对路径。必须为相对路径（不能以 / 开头），长度 ≤128 字节，允许 ../ 上溯最多 2 层；批量接口支持 ${FileName} 占位符（替换为该处理项主视频文件名，不含扩展名</p>
                     * @return Path <p>伴生文件相对主视频所在目录（含文件名）的 COS 相对路径。必须为相对路径（不能以 / 开头），长度 ≤128 字节，允许 ../ 上溯最多 2 层；批量接口支持 ${FileName} 占位符（替换为该处理项主视频文件名，不含扩展名</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>伴生文件相对主视频所在目录（含文件名）的 COS 相对路径。必须为相对路径（不能以 / 开头），长度 ≤128 字节，允许 ../ 上溯最多 2 层；批量接口支持 ${FileName} 占位符（替换为该处理项主视频文件名，不含扩展名</p>
                     * @param _path <p>伴生文件相对主视频所在目录（含文件名）的 COS 相对路径。必须为相对路径（不能以 / 开头），长度 ≤128 字节，允许 ../ 上溯最多 2 层；批量接口支持 ${FileName} 占位符（替换为该处理项主视频文件名，不含扩展名</p>
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
                     * <p>伴生文件的引用名。只允许 [A-Za-z0-9._-] 路径段，可含子目录（深度 ≤3 层）；不能以 / 开头，不能包含 ..；同一请求内不重复</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>伴生文件相对主视频所在目录（含文件名）的 COS 相对路径。必须为相对路径（不能以 / 开头），长度 ≤128 字节，允许 ../ 上溯最多 2 层；批量接口支持 ${FileName} 占位符（替换为该处理项主视频文件名，不含扩展名</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_EXTRASOURCEINFO_H_
