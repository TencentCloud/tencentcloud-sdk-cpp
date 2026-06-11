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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SKILLVERSIONLIST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SKILLVERSIONLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * skill VersionList
                */
                class SkillVersionList : public AbstractModel
                {
                public:
                    SkillVersionList();
                    ~SkillVersionList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Version 
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置
                     * @param _version 
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
                     * 获取
                     * @return Size 
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置
                     * @param _size 
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取
                     * @return PushTime 
                     * 
                     */
                    std::string GetPushTime() const;

                    /**
                     * 设置
                     * @param _pushTime 
                     * 
                     */
                    void SetPushTime(const std::string& _pushTime);

                    /**
                     * 判断参数 PushTime 是否已赋值
                     * @return PushTime 是否已赋值
                     * 
                     */
                    bool PushTimeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_pushTime;
                    bool m_pushTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SKILLVERSIONLIST_H_
