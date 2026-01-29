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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_VIDEOEDITPARAM_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_VIDEOEDITPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 视频编辑参数
                */
                class VideoEditParam : public AbstractModel
                {
                public:
                    VideoEditParam();
                    ~VideoEditParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取魔法词，针对特定场景生效。不同场景传不同的值。默认不传。
- 换人场景：1
                     * @return Magic 魔法词，针对特定场景生效。不同场景传不同的值。默认不传。
- 换人场景：1
                     * 
                     */
                    std::string GetMagic() const;

                    /**
                     * 设置魔法词，针对特定场景生效。不同场景传不同的值。默认不传。
- 换人场景：1
                     * @param _magic 魔法词，针对特定场景生效。不同场景传不同的值。默认不传。
- 换人场景：1
                     * 
                     */
                    void SetMagic(const std::string& _magic);

                    /**
                     * 判断参数 Magic 是否已赋值
                     * @return Magic 是否已赋值
                     * 
                     */
                    bool MagicHasBeenSet() const;

                private:

                    /**
                     * 魔法词，针对特定场景生效。不同场景传不同的值。默认不传。
- 换人场景：1
                     */
                    std::string m_magic;
                    bool m_magicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_VIDEOEDITPARAM_H_
