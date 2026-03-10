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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/COSStorage.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 存储信息
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载路径
                     * @return MountPath 挂载路径
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置挂载路径
                     * @param _mountPath 挂载路径
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取cos挂载信息
                     * @return COSStorage cos挂载信息
                     * 
                     */
                    COSStorage GetCOSStorage() const;

                    /**
                     * 设置cos挂载信息
                     * @param _cOSStorage cos挂载信息
                     * 
                     */
                    void SetCOSStorage(const COSStorage& _cOSStorage);

                    /**
                     * 判断参数 COSStorage 是否已赋值
                     * @return COSStorage 是否已赋值
                     * 
                     */
                    bool COSStorageHasBeenSet() const;

                private:

                    /**
                     * 挂载路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * cos挂载信息
                     */
                    COSStorage m_cOSStorage;
                    bool m_cOSStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_STORAGEINFO_H_
