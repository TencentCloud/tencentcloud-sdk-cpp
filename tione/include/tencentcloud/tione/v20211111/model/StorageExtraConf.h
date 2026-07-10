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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STORAGEEXTRACONF_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STORAGEEXTRACONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 存储额外配置
                */
                class StorageExtraConf : public AbstractModel
                {
                public:
                    StorageExtraConf();
                    ~StorageExtraConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cfs的存储类型<br>  // HP:通用性能型<br>  // SD:通用标准型<br>  // TP:turbo性能型<br>  // TB:turbo标准型<br>  // THP:吞吐型</p>
                     * @return CFSStorageType <p>cfs的存储类型<br>  // HP:通用性能型<br>  // SD:通用标准型<br>  // TP:turbo性能型<br>  // TB:turbo标准型<br>  // THP:吞吐型</p>
                     * 
                     */
                    std::string GetCFSStorageType() const;

                    /**
                     * 设置<p>cfs的存储类型<br>  // HP:通用性能型<br>  // SD:通用标准型<br>  // TP:turbo性能型<br>  // TB:turbo标准型<br>  // THP:吞吐型</p>
                     * @param _cFSStorageType <p>cfs的存储类型<br>  // HP:通用性能型<br>  // SD:通用标准型<br>  // TP:turbo性能型<br>  // TB:turbo标准型<br>  // THP:吞吐型</p>
                     * 
                     */
                    void SetCFSStorageType(const std::string& _cFSStorageType);

                    /**
                     * 判断参数 CFSStorageType 是否已赋值
                     * @return CFSStorageType 是否已赋值
                     * 
                     */
                    bool CFSStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>cfs的协议</p>
                     * @return CFSProtocol <p>cfs的协议</p>
                     * 
                     */
                    std::string GetCFSProtocol() const;

                    /**
                     * 设置<p>cfs的协议</p>
                     * @param _cFSProtocol <p>cfs的协议</p>
                     * 
                     */
                    void SetCFSProtocol(const std::string& _cFSProtocol);

                    /**
                     * 判断参数 CFSProtocol 是否已赋值
                     * @return CFSProtocol 是否已赋值
                     * 
                     */
                    bool CFSProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>cfs的存储类型<br>  // HP:通用性能型<br>  // SD:通用标准型<br>  // TP:turbo性能型<br>  // TB:turbo标准型<br>  // THP:吞吐型</p>
                     */
                    std::string m_cFSStorageType;
                    bool m_cFSStorageTypeHasBeenSet;

                    /**
                     * <p>cfs的协议</p>
                     */
                    std::string m_cFSProtocol;
                    bool m_cFSProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STORAGEEXTRACONF_H_
