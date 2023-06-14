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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞扫描新增和取消忽略漏洞入参
                */
                class ModifyIgnoreVul : public AbstractModel
                {
                public:
                    ModifyIgnoreVul();
                    ~ModifyIgnoreVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取忽略的镜像ID，空表示全部
                     * @return ImageIDs 忽略的镜像ID，空表示全部
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置忽略的镜像ID，空表示全部
                     * @param _imageIDs 忽略的镜像ID，空表示全部
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取当有镜像时
镜像类型: LOCAL 本地镜像 REGISTRY 仓库镜像
                     * @return ImageType 当有镜像时
镜像类型: LOCAL 本地镜像 REGISTRY 仓库镜像
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置当有镜像时
镜像类型: LOCAL 本地镜像 REGISTRY 仓库镜像
                     * @param _imageType 当有镜像时
镜像类型: LOCAL 本地镜像 REGISTRY 仓库镜像
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                private:

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 忽略的镜像ID，空表示全部
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * 当有镜像时
镜像类型: LOCAL 本地镜像 REGISTRY 仓库镜像
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_
