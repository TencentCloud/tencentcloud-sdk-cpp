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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3D_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3D_H_

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
                * 3D文件
                */
                class File3D : public AbstractModel
                {
                public:
                    File3D();
                    ~File3D() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取3D文件的格式。取值范围：GIF, OBJ
                     * @return Type 3D文件的格式。取值范围：GIF, OBJ
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置3D文件的格式。取值范围：GIF, OBJ
                     * @param _type 3D文件的格式。取值范围：GIF, OBJ
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
                     * 获取文件的Url（有效期24小时）
                     * @return Url 文件的Url（有效期24小时）
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件的Url（有效期24小时）
                     * @param _url 文件的Url（有效期24小时）
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 3D文件的格式。取值范围：GIF, OBJ
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件的Url（有效期24小时）
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILE3D_H_
