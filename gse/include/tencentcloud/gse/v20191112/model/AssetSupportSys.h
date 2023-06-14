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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_ASSETSUPPORTSYS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_ASSETSUPPORTSYS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 生成包支持操作系统详细信息
                */
                class AssetSupportSys : public AbstractModel
                {
                public:
                    AssetSupportSys();
                    ~AssetSupportSys() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成包操作系统的镜像Id
                     * @return ImageId 生成包操作系统的镜像Id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生成包操作系统的镜像Id
                     * @param _imageId 生成包操作系统的镜像Id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取生成包操作系统的类型
                     * @return OsType 生成包操作系统的类型
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置生成包操作系统的类型
                     * @param _osType 生成包操作系统的类型
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取生成包操作系统的位数
                     * @return OsBit 生成包操作系统的位数
                     * 
                     */
                    int64_t GetOsBit() const;

                    /**
                     * 设置生成包操作系统的位数
                     * @param _osBit 生成包操作系统的位数
                     * 
                     */
                    void SetOsBit(const int64_t& _osBit);

                    /**
                     * 判断参数 OsBit 是否已赋值
                     * @return OsBit 是否已赋值
                     * 
                     */
                    bool OsBitHasBeenSet() const;

                    /**
                     * 获取生成包操作系统的版本
                     * @return OsVersion 生成包操作系统的版本
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置生成包操作系统的版本
                     * @param _osVersion 生成包操作系统的版本
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                private:

                    /**
                     * 生成包操作系统的镜像Id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 生成包操作系统的类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 生成包操作系统的位数
                     */
                    int64_t m_osBit;
                    bool m_osBitHasBeenSet;

                    /**
                     * 生成包操作系统的版本
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_ASSETSUPPORTSYS_H_
