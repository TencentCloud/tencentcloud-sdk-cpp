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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINPUTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 要处理的源视频信息，视频名称、视频自定义 ID。
                */
                class MediaInputInfo : public AbstractModel
                {
                public:
                    MediaInputInfo();
                    ~MediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频 URL。
                     * @return Url 视频 URL。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置视频 URL。
                     * @param _url 视频 URL。
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
                     * 获取视频名称。
                     * @return Name 视频名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置视频名称。
                     * @param _name 视频名称。
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
                     * 获取视频自定义 ID。
                     * @return Id 视频自定义 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置视频自定义 ID。
                     * @param _id 视频自定义 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 视频 URL。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 视频名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频自定义 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAINPUTINFO_H_
