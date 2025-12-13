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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_CONVERT3DFORMATREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_CONVERT3DFORMATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * Convert3DFormat请求参数结构体
                */
                class Convert3DFormatRequest : public AbstractModel
                {
                public:
                    Convert3DFormatRequest();
                    ~Convert3DFormatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取3D文件url地址。
                     * @return File3D 3D文件url地址。
                     * 
                     */
                    std::string GetFile3D() const;

                    /**
                     * 设置3D文件url地址。
                     * @param _file3D 3D文件url地址。
                     * 
                     */
                    void SetFile3D(const std::string& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取返回的3D文件格式，参考值：STL, USDZ, FBX, MP4, GIF。
                     * @return Format 返回的3D文件格式，参考值：STL, USDZ, FBX, MP4, GIF。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置返回的3D文件格式，参考值：STL, USDZ, FBX, MP4, GIF。
                     * @param _format 返回的3D文件格式，参考值：STL, USDZ, FBX, MP4, GIF。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 3D文件url地址。
                     */
                    std::string m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * 返回的3D文件格式，参考值：STL, USDZ, FBX, MP4, GIF。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_CONVERT3DFORMATREQUEST_H_
