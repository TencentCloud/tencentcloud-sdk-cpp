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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_LYRIC_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_LYRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 歌词信息
                */
                class Lyric : public AbstractModel
                {
                public:
                    Lyric();
                    ~Lyric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌词cdn地址
                     * @return Url 歌词cdn地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置歌词cdn地址
                     * @param _url 歌词cdn地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取歌词后缀名
                     * @return FileNameExt 歌词后缀名
                     * 
                     */
                    std::string GetFileNameExt() const;

                    /**
                     * 设置歌词后缀名
                     * @param _fileNameExt 歌词后缀名
                     * 
                     */
                    void SetFileNameExt(const std::string& _fileNameExt);

                    /**
                     * 判断参数 FileNameExt 是否已赋值
                     * @return FileNameExt 是否已赋值
                     * 
                     */
                    bool FileNameExtHasBeenSet() const;

                    /**
                     * 获取歌词类型
                     * @return SubItemType 歌词类型
                     * 
                     */
                    std::string GetSubItemType() const;

                    /**
                     * 设置歌词类型
                     * @param _subItemType 歌词类型
                     * 
                     */
                    void SetSubItemType(const std::string& _subItemType);

                    /**
                     * 判断参数 SubItemType 是否已赋值
                     * @return SubItemType 是否已赋值
                     * 
                     */
                    bool SubItemTypeHasBeenSet() const;

                private:

                    /**
                     * 歌词cdn地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 歌词后缀名
                     */
                    std::string m_fileNameExt;
                    bool m_fileNameExtHasBeenSet;

                    /**
                     * 歌词类型
                     */
                    std::string m_subItemType;
                    bool m_subItemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_LYRIC_H_
