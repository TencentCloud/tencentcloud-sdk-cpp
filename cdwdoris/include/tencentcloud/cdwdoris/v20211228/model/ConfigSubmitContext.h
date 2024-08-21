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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGSUBMITCONTEXT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGSUBMITCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 配置文件修改信息
                */
                class ConfigSubmitContext : public AbstractModel
                {
                public:
                    ConfigSubmitContext();
                    ~ConfigSubmitContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件名称
                     * @return FileName 配置文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置文件名称
                     * @param _fileName 配置文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取配置文件新内容，base64编码
                     * @return NewConfValue 配置文件新内容，base64编码
                     * 
                     */
                    std::string GetNewConfValue() const;

                    /**
                     * 设置配置文件新内容，base64编码
                     * @param _newConfValue 配置文件新内容，base64编码
                     * 
                     */
                    void SetNewConfValue(const std::string& _newConfValue);

                    /**
                     * 判断参数 NewConfValue 是否已赋值
                     * @return NewConfValue 是否已赋值
                     * 
                     */
                    bool NewConfValueHasBeenSet() const;

                    /**
                     * 获取配置文件旧内容，base64编码
                     * @return OldConfValue 配置文件旧内容，base64编码
                     * 
                     */
                    std::string GetOldConfValue() const;

                    /**
                     * 设置配置文件旧内容，base64编码
                     * @param _oldConfValue 配置文件旧内容，base64编码
                     * 
                     */
                    void SetOldConfValue(const std::string& _oldConfValue);

                    /**
                     * 判断参数 OldConfValue 是否已赋值
                     * @return OldConfValue 是否已赋值
                     * 
                     */
                    bool OldConfValueHasBeenSet() const;

                    /**
                     * 获取文件路径
                     * @return FilePath 文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
                     * @param _filePath 文件路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * 配置文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 配置文件新内容，base64编码
                     */
                    std::string m_newConfValue;
                    bool m_newConfValueHasBeenSet;

                    /**
                     * 配置文件旧内容，base64编码
                     */
                    std::string m_oldConfValue;
                    bool m_oldConfValueHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGSUBMITCONTEXT_H_
