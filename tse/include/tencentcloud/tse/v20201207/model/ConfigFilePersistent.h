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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEPERSISTENT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEPERSISTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 配置文件持久化
                */
                class ConfigFilePersistent : public AbstractModel
                {
                public:
                    ConfigFilePersistent();
                    ~ConfigFilePersistent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件编码
                     * @return Encoding 文件编码
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置文件编码
                     * @param _encoding 文件编码
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取文件下发路径
                     * @return Path 文件下发路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置文件下发路径
                     * @param _path 文件下发路径
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
                     * 获取文件后置命令
                     * @return PostCmd 文件后置命令
                     * 
                     */
                    std::string GetPostCmd() const;

                    /**
                     * 设置文件后置命令
                     * @param _postCmd 文件后置命令
                     * 
                     */
                    void SetPostCmd(const std::string& _postCmd);

                    /**
                     * 判断参数 PostCmd 是否已赋值
                     * @return PostCmd 是否已赋值
                     * 
                     */
                    bool PostCmdHasBeenSet() const;

                private:

                    /**
                     * 文件编码
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 文件下发路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 文件后置命令
                     */
                    std::string m_postCmd;
                    bool m_postCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEPERSISTENT_H_
