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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 图片信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片id
                     * @return Id 图片id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置图片id
                     * @param _id 图片id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取图片url(暂不支持传图片Url信息,请使用Base64字段传递图片的Base64编码)
                     * @return Url 图片url(暂不支持传图片Url信息,请使用Base64字段传递图片的Base64编码)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片url(暂不支持传图片Url信息,请使用Base64字段传递图片的Base64编码)
                     * @param _url 图片url(暂不支持传图片Url信息,请使用Base64字段传递图片的Base64编码)
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
                     * 获取图片base64编码
                     * @return Base64 图片base64编码
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置图片base64编码
                     * @param _base64 图片base64编码
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                private:

                    /**
                     * 图片id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 图片url(暂不支持传图片Url信息,请使用Base64字段传递图片的Base64编码)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 图片base64编码
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEINFO_H_
