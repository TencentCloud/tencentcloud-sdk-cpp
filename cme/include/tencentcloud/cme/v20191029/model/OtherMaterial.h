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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_OTHERMATERIAL_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_OTHERMATERIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 其他类型素材
                */
                class OtherMaterial : public AbstractModel
                {
                public:
                    OtherMaterial();
                    ~OtherMaterial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材媒体文件的播放 URL 地址。
                     * @return MaterialUrl 素材媒体文件的播放 URL 地址。
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置素材媒体文件的播放 URL 地址。
                     * @param _materialUrl 素材媒体文件的播放 URL 地址。
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取云点播媒资 FileId。
                     * @return VodFileId 云点播媒资 FileId。
                     * 
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId。
                     * @param _vodFileId 云点播媒资 FileId。
                     * 
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     * 
                     */
                    bool VodFileIdHasBeenSet() const;

                private:

                    /**
                     * 素材媒体文件的播放 URL 地址。
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * 云点播媒资 FileId。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_OTHERMATERIAL_H_
