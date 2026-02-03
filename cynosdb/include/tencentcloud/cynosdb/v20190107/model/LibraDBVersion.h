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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBVERSION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * LibraDB 版本信息
                */
                class LibraDBVersion : public AbstractModel
                {
                public:
                    LibraDBVersion();
                    ~LibraDBVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取版本tag
                     * @return Tag 版本tag
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置版本tag
                     * @param _tag 版本tag
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取是否可以使用该版本
                     * @return HasPermission 是否可以使用该版本
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 设置是否可以使用该版本
                     * @param _hasPermission 是否可以使用该版本
                     * 
                     */
                    void SetHasPermission(const bool& _hasPermission);

                    /**
                     * 判断参数 HasPermission 是否已赋值
                     * @return HasPermission 是否已赋值
                     * 
                     */
                    bool HasPermissionHasBeenSet() const;

                private:

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 版本tag
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 是否可以使用该版本
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBVERSION_H_
