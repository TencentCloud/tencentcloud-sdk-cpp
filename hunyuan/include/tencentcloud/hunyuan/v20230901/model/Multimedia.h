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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_

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
                * 图文并茂详情
                */
                class Multimedia : public AbstractModel
                {
                public:
                    Multimedia();
                    ~Multimedia() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多媒体类型，image：图片。
                     * @return Type 多媒体类型，image：图片。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置多媒体类型，image：图片。
                     * @param _type 多媒体类型，image：图片。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取多媒体预览地址。
                     * @return Url 多媒体预览地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置多媒体预览地址。
                     * @param _url 多媒体预览地址。
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
                     * 获取多媒体详情地址。
                     * @return JumpUrl 多媒体详情地址。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置多媒体详情地址。
                     * @param _jumpUrl 多媒体详情地址。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * 多媒体类型，image：图片。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 多媒体预览地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 多媒体详情地址。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MULTIMEDIA_H_
