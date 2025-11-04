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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 字幕翻译输出结果
                */
                class SubtitleTransResultItem : public AbstractModel
                {
                public:
                    SubtitleTransResultItem();
                    ~SubtitleTransResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取翻译标识：
- Success
- Error
                     * @return Status 翻译标识：
- Success
- Error
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置翻译标识：
- Success
- Error
                     * @param _status 翻译标识：
- Success
- Error
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取源语言（如"en"）
                     * @return TransSrc 源语言（如"en"）
                     * 
                     */
                    std::string GetTransSrc() const;

                    /**
                     * 设置源语言（如"en"）
                     * @param _transSrc 源语言（如"en"）
                     * 
                     */
                    void SetTransSrc(const std::string& _transSrc);

                    /**
                     * 判断参数 TransSrc 是否已赋值
                     * @return TransSrc 是否已赋值
                     * 
                     */
                    bool TransSrcHasBeenSet() const;

                    /**
                     * 获取目标语言（如"zh"）
                     * @return TransDst 目标语言（如"zh"）
                     * 
                     */
                    std::string GetTransDst() const;

                    /**
                     * 设置目标语言（如"zh"）
                     * @param _transDst 目标语言（如"zh"）
                     * 
                     */
                    void SetTransDst(const std::string& _transDst);

                    /**
                     * 判断参数 TransDst 是否已赋值
                     * @return TransDst 是否已赋值
                     * 
                     */
                    bool TransDstHasBeenSet() const;

                    /**
                     * 获取字幕文件地址
                     * @return Path 字幕文件地址
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置字幕文件地址
                     * @param _path 字幕文件地址
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
                     * 翻译标识：
- Success
- Error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源语言（如"en"）
                     */
                    std::string m_transSrc;
                    bool m_transSrcHasBeenSet;

                    /**
                     * 目标语言（如"zh"）
                     */
                    std::string m_transDst;
                    bool m_transDstHasBeenSet;

                    /**
                     * 字幕文件地址
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_
