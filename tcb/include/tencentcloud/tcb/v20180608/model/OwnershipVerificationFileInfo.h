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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONFILEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONFILEINFO_H_

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
                * 域名归属权验证指引文件验证信息
                */
                class OwnershipVerificationFileInfo : public AbstractModel
                {
                public:
                    OwnershipVerificationFileInfo();
                    ~OwnershipVerificationFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>归属权校验文件路径</p>
                     * @return Path <p>归属权校验文件路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>归属权校验文件路径</p>
                     * @param _path <p>归属权校验文件路径</p>
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
                     * 获取<p>归属权校验文件内容</p>
                     * @return Content <p>归属权校验文件内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>归属权校验文件内容</p>
                     * @param _content <p>归属权校验文件内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>归属权校验文件路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>归属权校验文件内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONFILEINFO_H_
